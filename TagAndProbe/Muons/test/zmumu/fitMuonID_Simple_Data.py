import FWCore.ParameterSet.Config as cms

process = cms.Process("TagProbe")

process.load('FWCore.MessageService.MessageLogger_cfi')
process.source = cms.Source("EmptySource")
process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1) )

process.TnP_Muon_ID = cms.EDAnalyzer("TagProbeFitTreeAnalyzer",
    ## Input, output 
    InputFileNames = cms.vstring( 'dcap://t3se01.psi.ch:22125//pnfs/psi.ch/cms/trivcat/store/user/jngadiub/TagAndProbe_25ns/muons/tnpZ_Data.root'
                                 ), ## can put more than one
    OutputFileName = cms.string("TnP_Muon_ID_Simple_Data.root"),
    InputTreeName = cms.string("fitter_tree"), 
    InputDirectoryName = cms.string("tpTree"),  
    ## Variables for binning
    Variables = cms.PSet(
        mass   = cms.vstring("Tag-muon Mass", "76", "125", "GeV/c^{2}"),
        pt     = cms.vstring("muon p_{T}", "0", "1000", "GeV/c"),
        abseta = cms.vstring("muon |#eta|", "0", "2.5", ""),
        eta = cms.vstring("muon #eta", "-2.1", "2.1", ""),
        pair_dz = cms.vstring("#Deltaz between two muons", "-100", "100", "cm"),
        tag_nVertices = cms.vstring("Number of vertices", "0", "999", ""),
        tkIsoRel = cms.vstring("Track Relative Iso", "0", "99999", ""),
        #run = cms.vstring("run", "0", "99999", ""),
    ),
    ## Flags you want to use to define numerator and possibly denominator
    Categories = cms.PSet(
        tag_IsoMu24_eta2p1 = cms.vstring("PF Muon", "dummy[pass=1,fail=0]"),
	tag_IsoTkMu24_eta2p1 = cms.vstring("PF Muon", "dummy[pass=1,fail=0]"),
	Mu45_eta2p1 = cms.vstring("PF Muon", "dummy[pass=1,fail=0]"),
	Mu50_eta2p1 = cms.vstring("PF Muon", "dummy[pass=1,fail=0]"),
	HighPTID = cms.vstring("PF Muon", "dummy[pass=1,fail=0]"),
    ),
    ## What to fit
    Efficiencies = cms.PSet(
        PF_pt_eta = cms.PSet(
            UnbinnedVariables = cms.vstring("mass"),
            EfficiencyCategoryAndState = cms.vstring("Mu45_eta2p1", "pass"), ## Numerator definition
            BinnedVariables = cms.PSet(
	    
                ## Binning in continuous variables
                #abseta = cms.vdouble( 0.0, 1.2, 2.1),
		abseta = cms.vdouble( 0.0, 2.1),
                pt     = cms.vdouble( 0, 40, 42, 44, 46, 48, 50, 53, 55, 60, 80, 110, 140, 200, 300, 500 ),
                #pt     = cms.vdouble( 50, 500 ),
                #eta = cms.vdouble( -2.1, -1.6, -0.9, -0.6, -0.3, -0.2, 0.2, 0.3, 0.6, 0.9, 1.2, 1.6, 2.1),
                #tag_nVertices = cms.vdouble(0,4,8,12,16,20,25,30,40)
                #tag_nVertices = cms.vdouble(0.5,2.5,4.5,6.5,8.5,10.5,12.5,16.5,20.5,25,30,40)
				
                ## flags and conditions required at the denominator, 
                HighPTID = cms.vstring("pass"),
                #tag_IsoMu24_eta2p1 = cms.vstring("pass"), ## i.e. use only events for which this flag is true
		tag_IsoTkMu24_eta2p1 = cms.vstring("pass"),
                pair_dz = cms.vdouble(-1.,1.),        ## and for which -1.0 < dz < 1.0
		#run = cms.vstring("!256729 && !256734 && !257394 && !257395")
		#tkIsoRel = cms.vdouble(0.,0.1),
		
            ),
            BinToPDFmap = cms.vstring("vpvPlusExpo"), ## PDF to use, as defined below
        )
    ),
    ## PDF for signal and background (double voigtian + exponential background)
    PDFs = cms.PSet(
        vpvPlusExpo = cms.vstring(
            "Voigtian::signal1(mass, mean1[90,80,100], width[2.495], sigma1[2,1,3])",
            "Voigtian::signal2(mass, mean2[90,80,100], width,        sigma2[4,2,10])",
            "SUM::signal(vFrac[0.8,0,1]*signal1, signal2)",
            "Exponential::backgroundPass(mass, lp[-0.1,-1,0.1])",
            "Exponential::backgroundFail(mass, lf[-0.1,-1,0.1])",
            "efficiency[0.9,0,1]",
            "signalFractionInPassing[0.9]"
        ),
    ),
    ## How to do the fit
    binnedFit = cms.bool(True),
    binsForFit = cms.uint32(40),
    saveDistributionsPlot = cms.bool(False),
    NumCPU = cms.uint32(1), ## leave to 1 for now, RooFit gives funny results otherwise
    SaveWorkspace = cms.bool(False),
)
    
#### Slighly different configuration for isolation, where the "passing" is defined by a cut
process.TnP_Muon_Iso = process.TnP_Muon_ID.clone(
    OutputFileName = cms.string("TnP_Muon_Iso_Simple.root"),
    ## More variables
    Variables = process.TnP_Muon_ID.Variables.clone(
        combRelIsoPF04dBeta = cms.vstring("PF Combined Relative Iso", "-100", "99999", ""),
        tag_nVertices       = cms.vstring("N(vertices)", "0", "99", "")
    ),
    ## Cuts: name, variable, cut threshold
    Cuts = cms.PSet(
        PFIsoLoose = cms.vstring("PFIsoLoose" ,"combRelIsoPF04dBeta", "0.20"),
        PFIsoTight = cms.vstring("PFIsoTight" ,"combRelIsoPF04dBeta", "0.12"),
    ),
    ## What to fit
    Efficiencies = cms.PSet(
        Iso_vtx_tight = cms.PSet(
            UnbinnedVariables = cms.vstring("mass"),
            EfficiencyCategoryAndState = cms.vstring("PFIsoTight", "below"), ## variable is below cut value 
            BinnedVariables = cms.PSet(
                tag_nVertices = cms.vdouble(0.5,4.5,8.5,12.5,16.5,20.5,24.5,30.5), 
                PF = cms.vstring("pass"),                 ## 
                tag_IsoMu24_eta2p1 = cms.vstring("pass"), ## tag trigger matched
                pair_dz = cms.vdouble( -1.,1. ),          ## and for which -1.0 < dz < 1.0
                pt     = cms.vdouble( 25,  100 ),
                abseta = cms.vdouble( 0.0, 2.4 ),
            ),
            BinToPDFmap = cms.vstring("vpvPlusExpo"), ## PDF to use, as defined below
        ),
        Iso_vtx_loose = cms.PSet(
            UnbinnedVariables = cms.vstring("mass"),
            EfficiencyCategoryAndState = cms.vstring("PFIsoLoose", "below"), ## variable is below cut value 
            BinnedVariables = cms.PSet(
                tag_nVertices = cms.vdouble(0.5,4.5,8.5,12.5,16.5,20.5,24.5,30.5), 
                PF = cms.vstring("pass"),                 ## 
                tag_IsoMu24_eta2p1 = cms.vstring("pass"), ## tag trigger matched
                pair_dz = cms.vdouble( -1.,1. ),          ## and for which -1.0 < dz < 1.0
                pt     = cms.vdouble( 25,  100 ),
                abseta = cms.vdouble( 0.0, 2.4 ),
            ),
            BinToPDFmap = cms.vstring("vpvPlusExpo"), ## PDF to use, as defined below
        ),
    ),
)

process.p1 = cms.Path(process.TnP_Muon_ID)
#process.p2 = cms.Path(process.TnP_Muon_Iso)
