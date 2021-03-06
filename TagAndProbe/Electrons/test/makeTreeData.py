import FWCore.ParameterSet.Config as cms
import sys

from PhysicsTools.TagAndProbe.treeMakerOptionsData_cfi import options

process = cms.Process("tnp")

process.pileupReweightingProducer = cms.EDProducer("PileupWeightProducer",
                                                   hardcodedWeights = cms.untracked.bool(True)
                                                   )

process.load('HLTrigger.HLTfilters.hltHighLevel_cfi')
process.hltHighLevel.throw = cms.bool(True)
process.hltHighLevel.HLTPaths = options['TnPPATHS']

###################################################################
##    ___            _           _      
##   |_ _|_ __   ___| |_   _  __| | ___ 
##    | || '_ \ / __| | | | |/ _` |/ _ \
##    | || | | | (__| | |_| | (_| |  __/
##   |___|_| |_|\___|_|\__,_|\__,_|\___|
##
###################################################################

process.load('Configuration.StandardSequences.EndOfProcess_cff')
process.load('Configuration.EventContent.EventContent_cff')

process.load("TrackingTools/TransientTrack/TransientTrackBuilder_cfi")
process.load("Configuration.Geometry.GeometryIdeal_cff")
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_condDBv2_cff')
process.GlobalTag.globaltag = options['GLOBALTAG']

process.load("Configuration.StandardSequences.MagneticField_cff")
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load("SimGeneral.HepPDTESSource.pythiapdt_cfi")
process.options  = cms.untracked.PSet( 
                     wantSummary = cms.untracked.bool(False),
                     SkipEvent = cms.untracked.vstring('ProductNotFound','InvalidReference'),
                     allowUnscheduled = cms.untracked.bool(True)
                     )
                     
process.MessageLogger.cerr.threshold = ''
process.MessageLogger.cerr.FwkReport.reportEvery = 1000

###################################################################
##   ____             _ ____ 
##  |  _ \ ___   ___ | / ___|  ___  _   _ _ __ ___ ___ 
##  | |_) / _ \ / _ \| \___ \ / _ \| | | | '__/ __/ _ \
##  |  __/ (_) | (_) | |___) | (_) | |_| | | | (_|  __/
##  |_|   \___/ \___/|_|____/ \___/ \__,_|_|  \___\___|
##  
###################################################################

####### Config parser ##########

import FWCore.ParameterSet.VarParsing as VarParsing

opts = VarParsing.VarParsing ('analysis')

opts.maxEvents = -1

opts.inputFiles ='/store/data/Run2015B/SingleElectron/MINIAOD/PromptReco-v1/000/251/561/00000/CA80E14E-1E2A-E511-8C7D-02163E0122C2.root'

opts.parseArguments()

process.source = cms.Source("PoolSource",
                            fileNames = cms.untracked.vstring(opts.inputFiles),
                            )

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(opts.maxEvents) )   

###### JSON file ##########

if not options['MC_FLAG']:
   import FWCore.PythonUtilities.LumiList as LumiList
   import FWCore.ParameterSet.Types as CfgTypes
   process.source.lumisToProcess = CfgTypes.untracked(CfgTypes.VLuminosityBlockRange())
   JSONfile = 'Cert_246908-251883_13TeV_PromptReco_Collisions15_JSON_v2.txt'
   myLumis = LumiList.LumiList(filename = JSONfile).getCMSSWString().split(',')
   process.source.lumisToProcess.extend(myLumis)
    
###################################################################
##    ____      __ _____ _           _                   
##   / ___|___ / _| ____| | ___  ___| |_ _ __ ___  _ __  
##  | |  _/ __| |_|  _| | |/ _ \/ __| __| '__/ _ \| '_ \ 
##  | |_| \__ \  _| |___| |  __/ (__| |_| | | (_) | | | |
##   \____|___/_| |_____|_|\___|\___|\__|_|  \___/|_| |_|
##  
###################################################################

process.goodElectrons = cms.EDFilter("PATElectronRefSelector",
                                     src = cms.InputTag(options['ELECTRON_COLL']),
                                     cut = cms.string(options['ELECTRON_CUTS'])    
                                     )

###################################################################
##    _____ _           _                     ___    _ 
##   | ____| | ___  ___| |_ _ __ ___  _ __   |_ _|__| |
##   |  _| | |/ _ \/ __| __| '__/ _ \| '_ \   | |/ _` |
##   | |___| |  __/ (__| |_| | | (_) | | | |  | | (_| |
##   |_____|_|\___|\___|\__|_|  \___/|_| |_| |___\__,_|
##   
###################################################################

from PhysicsTools.SelectorUtils.tools.vid_id_tools import *

dataFormat = DataFormat.MiniAOD
if (options['useAOD']):
    dataFormat = DataFormat.AOD

switchOnVIDElectronIdProducer(process, dataFormat)

# define which IDs we want to produce
my_id_modules = ['RecoEgamma.ElectronIdentification.Identification.cutBasedElectronID_PHYS14_PU20bx25_V2_cff',
                 'RecoEgamma.ElectronIdentification.Identification.heepElectronID_HEEPV60_cff']
                 

for idmod in my_id_modules:
    setupAllVIDIdsInModule(process, idmod, setupVIDElectronSelection)

process.goodElectronsPROBECutBasedVeto = cms.EDProducer("PatElectronSelectorByValueMap",
                                                        input     = cms.InputTag("goodElectrons"), #options['ELECTRON_COLL']),
                                                        cut       = cms.string(options['ELECTRON_CUTS']),
                                                        selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-veto"),
                                                        id_cut    = cms.bool(True)
                                                        )

process.goodElectronsPROBECutBasedLoose = process.goodElectronsPROBECutBasedVeto.clone()
process.goodElectronsPROBECutBasedLoose.selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-loose")
process.goodElectronsPROBECutBasedMedium = process.goodElectronsPROBECutBasedVeto.clone()
process.goodElectronsPROBECutBasedMedium.selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-medium")
process.goodElectronsPROBECutBasedTight = process.goodElectronsPROBECutBasedVeto.clone()
process.goodElectronsPROBECutBasedTight.selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-tight")
process.goodElectronsPROBEheep = process.goodElectronsPROBECutBasedVeto.clone()
process.goodElectronsPROBEheep.selection = cms.InputTag("egmGsfElectronIDs:heepElectronID-HEEPV60")

process.goodElectronsTAGCutBasedVeto = cms.EDProducer("PatElectronSelectorByValueMap",
                                                   input     = cms.InputTag("goodElectrons"), #options['ELECTRON_COLL']),
                                                   cut       = cms.string(options['ELECTRON_TAG_CUTS']),
                                                   selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-veto"),
                                                   id_cut    = cms.bool(True)
                                                   )

process.goodElectronsTAGCutBasedLoose = process.goodElectronsTAGCutBasedVeto.clone()
process.goodElectronsTAGCutBasedLoose.selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-loose")
process.goodElectronsTAGCutBasedMedium = process.goodElectronsTAGCutBasedVeto.clone()
process.goodElectronsTAGCutBasedMedium.selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-medium")
process.goodElectronsTAGCutBasedTight = process.goodElectronsTAGCutBasedVeto.clone()
process.goodElectronsTAGCutBasedTight.selection = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-PHYS14-PU20bx25-V2-standalone-tight")
process.goodElectronsTAGheep = process.goodElectronsTAGCutBasedVeto.clone()
process.goodElectronsTAGheep.selection = cms.InputTag("egmGsfElectronIDs:heepElectronID-HEEPV60")

###################################################################
##    _____     _                         __  __       _       _     _             
##   |_   _| __(_) __ _  __ _  ___ _ __  |  \/  | __ _| |_ ___| |__ (_)_ __   __ _ 
##     | || '__| |/ _` |/ _` |/ _ \ '__| | |\/| |/ _` | __/ __| '_ \| | '_ \ / _` |
##     | || |  | | (_| | (_| |  __/ |    | |  | | (_| | || (__| | | | | | | | (_| |
##     |_||_|  |_|\__, |\__, |\___|_|    |_|  |_|\__,_|\__\___|_| |_|_|_| |_|\__, |
##                |___/ |___/                                                |___/ 
###################################################################

#if (len(options['TnPHLTTagFilters']) != len(options['TnPHLTProbeFilters'])):
#    print "ERROR: different number of tag and probe filters, please fix it"
#    sys.exit(-1)

process.goodElectronsTagHLT = cms.EDProducer("PatElectronTriggerCandProducer",
                                             filterNames = cms.vstring(options['TnPHLTTagFilters']),
                                             inputs      = cms.InputTag("goodElectrons"),
                                             bits        = cms.InputTag('TriggerResults::HLT'),
                                             objects     = cms.InputTag('selectedPatTrigger'),
                                             dR          = cms.double(0.3),
                                             isAND       = cms.bool(True),
                                             isFilter    = cms.bool(True)
                                             )

if options['ELECTRON_TAG_ID'] == 'Veto': process.goodElectronsTagHLT.inputs = cms.InputTag("goodElectronsTAGCutBasedVeto")
elif options['ELECTRON_TAG_ID'] == 'Loose': process.goodElectronsTagHLT.inputs = cms.InputTag("goodElectronsTAGCutBasedLoose")
elif options['ELECTRON_TAG_ID'] == 'Medium': process.goodElectronsTagHLT.inputs = cms.InputTag("goodElectronsTAGCutBasedMedium")
elif options['ELECTRON_TAG_ID'] == 'Tight': process.goodElectronsTagHLT.inputs = cms.InputTag("goodElectronsTAGCutBasedTight")
elif options['ELECTRON_TAG_ID'] == 'HEEP': process.goodElectronsTagHLT.inputs = cms.InputTag("goodElectronsTAGheep")

process.goodElectronsProbeHLT = cms.EDProducer("PatElectronTriggerCandProducer",
                                               filterNames = cms.vstring(options['TnPHLTProbeFilters']),
                                               inputs      = cms.InputTag("goodElectrons"),
                                               bits        = cms.InputTag('TriggerResults::HLT'),
                                               objects     = cms.InputTag('selectedPatTrigger'),
                                               dR          = cms.double(0.3),
                                               isAND       = cms.bool(True),
                                               isFilter    = cms.bool(True)
                                               )

process.goodElectronsProbeMeasureHLT = cms.EDProducer("PatElectronTriggerCandProducer",
                                                      filterNames = cms.vstring(options['TnPHLTProbeFilters']),
                                                      inputs      = cms.InputTag("goodElectrons"),
                                                      bits        = cms.InputTag('TriggerResults::HLT'),
                                                      objects     = cms.InputTag('selectedPatTrigger'),
                                                      dR          = cms.double(0.3),
                                                      isAND       = cms.bool(True),
                                                      isFilter    = cms.bool(True)
                                                      )

if options['ELECTRON_PROBE_ID'] == 'Veto': process.goodElectronsProbeMeasureHLT.inputs = cms.InputTag("goodElectronsPROBECutBasedVeto")
elif options['ELECTRON_PROBE_ID'] == 'Loose': process.goodElectronsProbeMeasureHLT.inputs = cms.InputTag("goodElectronsPROBECutBasedLoose")
elif options['ELECTRON_PROBE_ID'] == 'Medium': process.goodElectronsProbeMeasureHLT.inputs = cms.InputTag("goodElectronsPROBECutBasedMedium")
elif options['ELECTRON_PROBE_ID'] == 'Tight': process.goodElectronsProbeMeasureHLT.inputs = cms.InputTag("goodElectronsPROBECutBasedTight")
elif options['ELECTRON_PROBE_ID'] == 'HEEP': process.goodElectronsProbeMeasureHLT.inputs = cms.InputTag("goodElectronsPROBEheep")

process.goodElectronsMeasureHLT = cms.EDProducer("PatElectronTriggerCandProducer",
                                                 filterNames = cms.vstring(options['HLTPathToMeasure'] ),
                                                 inputs      = cms.InputTag("goodElectronsProbeMeasureHLT"),
                                                 bits        = cms.InputTag('TriggerResults::HLT'),
                                                 objects     = cms.InputTag('selectedPatTrigger'),
                                                 dR          = cms.double(0.3),
                                                 isAND       = cms.bool(True),
                                                 isFilter    = cms.bool(False)
                                                 )

process.egmGsfElectronIDs.physicsObjectSrc = cms.InputTag(options['ELECTRON_COLL'])
process.ele_sequence = cms.Sequence(
    process.goodElectrons +
    process.egmGsfElectronIDSequence +
    process.goodElectronsPROBECutBasedVeto +
    process.goodElectronsPROBECutBasedLoose +
    process.goodElectronsPROBECutBasedMedium +
    process.goodElectronsPROBECutBasedTight +
    process.goodElectronsPROBEheep +    
    process.goodElectronsTAGCutBasedVeto +
    process.goodElectronsTAGCutBasedLoose +
    process.goodElectronsTAGCutBasedMedium +
    process.goodElectronsTAGCutBasedTight +
    process.goodElectronsTAGheep +    
    process.goodElectronsTagHLT +
    process.goodElectronsProbeHLT +
    process.goodElectronsProbeMeasureHLT +
    process.goodElectronsMeasureHLT
    )

###################################################################
##    _____ ___   ____    ____       _          
##   |_   _( _ ) |  _ \  |  _ \ __ _(_)_ __ ___ 
##     | | / _ \/\ |_) | | |_) / _` | | '__/ __|
##     | || (_>  <  __/  |  __/ (_| | | |  \__ \
##     |_| \___/\/_|     |_|   \__,_|_|_|  |___/
##   
###################################################################

process.tagTightHLT = cms.EDProducer("CandViewShallowCloneCombiner",
                                     decay = cms.string("goodElectronsTagHLT@+ goodElectronsProbeMeasureHLT@-"), 
                                     checkCharge = cms.bool(True),
                                     cut = cms.string("40<mass<1000"),
                                     )

process.tagTightRECO = cms.EDProducer("CandViewShallowCloneCombiner",
                                      decay = cms.string("goodElectronsTagHLT@+ goodElectronsProbeHLT@-"), 
                                      checkCharge = cms.bool(True),
                                      cut = cms.string("40<mass<1000"),
                                    )


process.allTagsAndProbes = cms.Sequence()

if (options['DOTRIGGER']):
    process.allTagsAndProbes *= process.tagTightHLT

if (options['DOID']):
    process.allTagsAndProbes *= process.tagTightRECO

###################################################################
##    __  __  ____   __  __       _       _               
##   |  \/  |/ ___| |  \/  | __ _| |_ ___| |__   ___  ___ 
##   | |\/| | |     | |\/| |/ _` | __/ __| '_ \ / _ \/ __|
##   | |  | | |___  | |  | | (_| | || (__| | | |  __/\__ \
##   |_|  |_|\____| |_|  |_|\__,_|\__\___|_| |_|\___||___/
##                                   
###################################################################

process.McMatchHLT = cms.EDProducer("MCTruthDeltaRMatcherNew",
                                    matchPDGId = cms.vint32(11),
                                    src = cms.InputTag("goodElectronsProbeMeasureHLT"),
                                    distMin = cms.double(0.3),
                                    matched = cms.InputTag("prunedGenParticles"),
                                    checkCharge = cms.bool(True)
                                    )
                     
process.McMatchTag = cms.EDProducer("MCTruthDeltaRMatcherNew",
                                    matchPDGId = cms.vint32(11),
                                    src = cms.InputTag("goodElectrons"),
                                    distMin = cms.double(0.2),
                                    matched = cms.InputTag("prunedGenParticles"),
                                    checkCharge = cms.bool(True)
                                    )

if options['ELECTRON_TAG_ID'] == 'Veto': process.McMatchTag.src = cms.InputTag("goodElectronsTAGCutBasedVeto")
elif options['ELECTRON_TAG_ID'] == 'Loose': process.McMatchTag.src = cms.InputTag("goodElectronsTAGCutBasedLoose")
elif options['ELECTRON_TAG_ID'] == 'Medium': process.McMatchTag.src = cms.InputTag("goodElectronsTAGCutBasedMedium")
elif options['ELECTRON_TAG_ID'] == 'Tight': process.McMatchTag.src = cms.InputTag("goodElectronsTAGCutBasedTight")
elif options['ELECTRON_TAG_ID'] == 'HEEP': process.McMatchTag.src = cms.InputTag("goodElectronsTAGheep")

process.McMatchRECO = cms.EDProducer("MCTruthDeltaRMatcherNew",
                                     matchPDGId = cms.vint32(11),
                                     src = cms.InputTag("goodElectrons"),
                                     distMin = cms.double(0.2),
                                     matched = cms.InputTag("prunedGenParticles"),
                                     checkCharge = cms.bool(True)
                                    )

process.mc_sequence = cms.Sequence()

if (options['MC_FLAG']):
    process.mc_sequence *= (process.McMatchHLT + process.McMatchTag + process.McMatchRECO)
    
##########################################################################
##    _____           _       _ ____            _            _   _  ____  
##   |_   _|_ _  __ _( )_ __ ( )  _ \ _ __ ___ | |__   ___  | \ | |/ ___| 
##     | |/ _` |/ _` |/| '_ \|/| |_) | '__/ _ \| '_ \ / _ \ |  \| | |  _  
##     | | (_| | (_| | | | | | |  __/| | | (_) | |_) |  __/ | |\  | |_| | 
##     |_|\__,_|\__, | |_| |_| |_|   |_|  \___/|_.__/ \___| |_| \_|\____| 
##              |___/                                                     
##                                                                        
##########################################################################
##    ____                      _     _           
##   |  _ \ ___ _   _ ___  __ _| |__ | | ___  ___ 
##   | |_) / _ \ | | / __|/ _` | '_ \| |/ _ \/ __|
##   |  _ <  __/ |_| \__ \ (_| | |_) | |  __/\__ \
##   |_| \_\___|\__,_|___/\__,_|_.__/|_|\___||___/
##
## I define some common variables for re-use later.
## This will save us repeating the same code for each efficiency category
#########################################################################

ZVariablesToStore = cms.PSet(
    eta = cms.string("eta"),
    abseta = cms.string("abs(eta)"),
    pt  = cms.string("pt"),
    mass  = cms.string("mass"),
    #weight = cms.InputTag("pileupReweightingProducer","pileupWeights")
    )   

SCProbeVariablesToStore = cms.PSet(
    probe_eta    = cms.string("eta"),
    probe_abseta = cms.string("abs(eta)"),
    probe_pt     = cms.string("pt"),
    probe_et     = cms.string("et"),
    probe_e      = cms.string("energy"),
)

ProbeVariablesToStore = cms.PSet(
    probe_Ele_eta    = cms.string("eta"),
    probe_Ele_abseta = cms.string("abs(eta)"),
    probe_Ele_pt     = cms.string("pt"),
    probe_Ele_et     = cms.string("et"),
    probe_Ele_e      = cms.string("energy"),
    probe_Ele_q      = cms.string("charge"),
    #probe_Ele_trackiso = cms.string("dr03TkSumPt"),
    #probe_Ele_reltrackiso = cms.string("dr03TkSumPt/pt"),
## super cluster quantities
    probe_sc_energy = cms.string("superCluster.energy"),
    probe_sc_et     = cms.string("superCluster.energy*sin(superClusterPosition.theta)"),    
    probe_sc_eta    = cms.string("superCluster.eta"),
    probe_sc_abseta = cms.string("abs(superCluster.eta)"),

#id based
    probe_Ele_dEtaIn        = cms.string("deltaEtaSuperClusterTrackAtVtx"),
    probe_Ele_dPhiIn        = cms.string("deltaPhiSuperClusterTrackAtVtx"),
    probe_Ele_sigmaIEtaIEta = cms.string("sigmaIetaIeta"),
    probe_Ele_hoe           = cms.string("hadronicOverEm"),
    probe_Ele_ooemoop       = cms.string("(1.0/ecalEnergy - eSuperClusterOverP/ecalEnergy)"),
    #probe_Ele_mHits         = cms.string("gsfTrack.trackerExpectedHitsInner.numberOfHits")
)

TagVariablesToStore = cms.PSet(
    Ele_eta    = cms.string("eta"),
    Ele_abseta = cms.string("abs(eta)"),
    Ele_pt     = cms.string("pt"),
    Ele_et     = cms.string("et"),
    Ele_e      = cms.string("energy"),
    Ele_q      = cms.string("charge"),
    
    ## super cluster quantities
    sc_energy = cms.string("superCluster.energy"),
    sc_et     = cms.string("superCluster.energy*sin(superClusterPosition.theta)"),    
    sc_eta    = cms.string("superCluster.eta"),
    sc_abseta = cms.string("abs(superCluster.eta)"),
)

CommonStuffForGsfElectronProbe = cms.PSet(
    variables = cms.PSet(ProbeVariablesToStore),
    ignoreExceptions =  cms.bool (True),
    addRunLumiInfo   =  cms.bool (True),
    addEventVariablesInfo   =  cms.bool(True),
    vertexCollection = cms.InputTag("offlineSlimmedPrimaryVertices"),
    beamSpot = cms.InputTag("offlineBeamSpot"),
    pairVariables =  cms.PSet(ZVariablesToStore),
    pairFlags     =  cms.PSet(
        mass60to120 = cms.string("60 < mass < 120")
        ),
    tagVariables   =  cms.PSet(TagVariablesToStore),
    tagFlags       =  cms.PSet(),    
    )

CommonStuffForSuperClusterProbe = CommonStuffForGsfElectronProbe.clone()
CommonStuffForSuperClusterProbe.variables = cms.PSet(SCProbeVariablesToStore)

if options['MC_FLAG']:
    mcTruthCommonStuff = cms.PSet(
        isMC = cms.bool(True),
        tagMatches = cms.InputTag("McMatchTag"),
        motherPdgId = cms.vint32(22,23),
        makeMCUnbiasTree = cms.bool(False),
        checkMotherInUnbiasEff = cms.bool(False),
        mcVariables = cms.PSet(
            probe_eta = cms.string("eta"),
            probe_abseta = cms.string("abs(eta)"),
            probe_et  = cms.string("et"),
            probe_e  = cms.string("energy"),
            ),
        mcFlags     =  cms.PSet(
            probe_flag = cms.string("pt>0")
            ),      
        )
else:
    mcTruthCommonStuff = cms.PSet(
        isMC = cms.bool(False)
        )
    
##########################################################################
##   ____      __       __    ___                 ___    _ 
##  / ___|___ / _|      \ \  |_ _|___  ___       |_ _|__| |
## | |  _/ __| |_   _____\ \  | |/ __|/ _ \       | |/ _` |
## | |_| \__ \  _| |_____/ /  | |\__ \ (_) |  _   | | (_| |
##  \____|___/_|        /_/  |___|___/\___/  ( ) |___\__,_|
##                                           |/            
##########################################################################

process.GsfElectronToTrigger = cms.EDAnalyzer("TagProbeFitTreeProducer",
                                              CommonStuffForGsfElectronProbe, mcTruthCommonStuff,
                                              tagProbePairs = cms.InputTag("tagTightHLT"),
                                              arbitration   = cms.string("None"),
                                              flags         = cms.PSet(passingHLT    = cms.InputTag("goodElectronsMeasureHLT")
                                                                       ),                                               
                                              allProbes     = cms.InputTag("goodElectronsProbeMeasureHLT"),
                                              #PUWeightSrc   = cms.InputTag("pileupReweightingProducer","pileupWeights")
                                              )

if (options['MC_FLAG']):
    process.GsfElectronToTrigger.probeMatches  = cms.InputTag("McMatchHLT")
    
process.GsfElectronToRECO = cms.EDAnalyzer("TagProbeFitTreeProducer",
                                           mcTruthCommonStuff, CommonStuffForGsfElectronProbe,
                                           tagProbePairs = cms.InputTag("tagTightRECO"),
                                           arbitration   = cms.string("None"),
                                           flags         = cms.PSet(passingVeto   = cms.InputTag("goodElectronsPROBECutBasedVeto"),
                                                                    passingLoose  = cms.InputTag("goodElectronsPROBECutBasedLoose"),
                                                                    passingMedium = cms.InputTag("goodElectronsPROBECutBasedMedium"),
                                                                    passingTight  = cms.InputTag("goodElectronsPROBECutBasedTight"),
                                                                    ),                                               
                                           allProbes     = cms.InputTag("goodElectronsProbeHLT"),
                                           #PUWeightSrc   = cms.InputTag("pileupReweightingProducer","pileupWeights")
                                           )

if (options['MC_FLAG']):
    process.GsfElectronToRECO.probeMatches  = cms.InputTag("McMatchRECO")
    
process.tree_sequence = cms.Sequence()
if (options['DOTRIGGER']):
    process.tree_sequence *= process.GsfElectronToTrigger

if (options['DOID']):
    process.tree_sequence *= process.GsfElectronToRECO

##########################################################################
##    ____       _   _     
##   |  _ \ __ _| |_| |__  
##   | |_) / _` | __| '_ \ 
##   |  __/ (_| | |_| | | |
##   |_|   \__,_|\__|_| |_|
##
##########################################################################

process.out = cms.OutputModule("PoolOutputModule", 
                               fileName = cms.untracked.string(options['OUTPUTEDMFILENAME']),
                               SelectEvents = cms.untracked.PSet(SelectEvents = cms.vstring("p"))
                               )
process.outpath = cms.EndPath(process.out)
if (not options['DEBUG']):
    process.outpath.remove(process.out)

if (options['MC_FLAG']):
    process.p = cms.Path(
        process.hltHighLevel +
        process.ele_sequence + 
        process.allTagsAndProbes +
        process.pileupReweightingProducer +
        process.mc_sequence +
        process.tree_sequence
        )
else:
    process.p = cms.Path(
        process.hltHighLevel +
        process.ele_sequence + 
        process.allTagsAndProbes +
        process.mc_sequence +
        process.tree_sequence
        )

process.TFileService = cms.Service(
    "TFileService", fileName = cms.string(options['OUTPUT_FILE_NAME'])
    )
