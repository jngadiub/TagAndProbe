import FWCore.ParameterSet.Config as cms

options = dict()

#general
options['TnPPATHS']            = ["HLT_Ele27_eta2p1_WPLoose_Gsf_v*",]
options['GLOBALTAG']           = 'GR_P_V56'
options['MC_FLAG']             = cms.bool(False)
options['EVENTSToPROCESS']     = cms.untracked.VEventRange()
options['MAXEVENTS']           = cms.untracked.int32(-1) 
options['HLTProcessName']      = "HLT"
options['INPUT_FILE_NAME']     = "/store/data/Run2015B/SingleElectron/MINIAOD/PromptReco-v1/000/251/244/00000/12EE24E2-8F27-E511-80D1-02163E013793.root"
options['OUTPUT_FILE_NAME']    = "TnPTree_data.root"
options['useAOD']              = cms.bool(False)
options['DOTRIGGER']           = cms.bool(True)
options['DOID']                = cms.bool(False)
options['OUTPUTEDMFILENAME']   = 'edmFile.root'
options['DEBUG']               = cms.bool(False)

#preselections
options['ELECTRON_COLL']       = "slimmedElectrons"
options['ELECTRON_CUTS']       = "(abs(superCluster.eta)<2.5) && (ecalEnergy*sin(superClusterPosition.theta)>10.0)"

#tag selections
options['ELECTRON_TAG_CUTS']   = "(abs(superCluster.eta)<=2.5) && !(1.4442<=abs(superCluster.eta)<=1.566) && pt >= 25.0"
options['ELECTRON_TAG_ID']     = "Loose"
options['TnPHLTTagFilters']    = ["hltEle27WPLooseGsfTrackIsoFilter",]
options['TnPHLTTagPaths']      = ["HLT_Ele27_eta2p1_WPLoose_Gsf_v*",]

#probe selections
options['ELECTRON_PROBE_ID']   = "HEEP"
options['TnPHLTProbeFilters']  = ["*"]
options['TnPHLTProbePaths']    = []
options['HLTPathToMeasure']    = "HLT_Ele105_CaloIdVT_GsfTrkIdT_v*"
options['HLTFILTERTOMEASURE']  = "*"
