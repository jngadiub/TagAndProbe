ifeq ($(strip $(CalibrationEcalAlCaRecoProducersAuto)),)
CalibrationEcalAlCaRecoProducersAuto := self/src/Calibration/EcalAlCaRecoProducers/plugins
CalibrationEcalAlCaRecoProducersAuto_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet clhep Geometry/CaloTopology Geometry/Records DataFormats/TrackReco CommonTools/UtilAlgos DataFormats/RecoCandidate DataFormats/EgammaCandidates CondFormats/SiPixelObjects CalibFormats/SiStripObjects CalibFormats/HcalObjects Geometry/EcalMapping Geometry/CaloGeometry RecoEcal/EgammaCoreTools CalibTracker/Records
Calibration/EcalAlCaRecoProducers_relbigobj+=CalibrationEcalAlCaRecoProducersAuto
endif
ifeq ($(strip $(HLTriggerOffline/Exotica)),)
HLTriggerOfflineExotica := self/HLTriggerOffline/Exotica
HLTriggerOffline/Exotica := HLTriggerOfflineExotica
HLTriggerOfflineExotica_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineExotica_EX_USE := $(foreach d, self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities HLTrigger/HLTcore CommonTools/Utils DQMServices/Core DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/METReco DataFormats/TauReco DataFormats/TrackReco DataFormats/HepMCCandidate hepmc,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineExotica
HLTriggerOfflineExotica_CLASS := LIBRARY
HLTriggerOffline/Exotica_relbigobj+=HLTriggerOfflineExotica
endif
ifeq ($(strip $(RecoEgammaPhotonIdentificationPlugins_cuts)),)
RecoEgammaPhotonIdentificationPlugins_cuts := self/src/RecoEgamma/PhotonIdentification/plugins
RecoEgammaPhotonIdentificationPlugins_cuts_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/PatCandidates CondFormats/PhysicsToolsObjects Geometry/CaloGeometry PhysicsTools/SelectorUtils RecoEgamma/EgammaTools
RecoEgamma/PhotonIdentification_relbigobj+=RecoEgammaPhotonIdentificationPlugins_cuts
endif
ifeq ($(strip $(RecoEgammaPhotonIdentificationPlugins)),)
RecoEgammaPhotonIdentificationPlugins := self/src/RecoEgamma/PhotonIdentification/plugins
RecoEgammaPhotonIdentificationPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/PatCandidates CondFormats/PhysicsToolsObjects Geometry/CaloGeometry PhysicsTools/SelectorUtils RecoEgamma/EgammaTools RecoEgamma/PhotonIdentification
RecoEgamma/PhotonIdentification_relbigobj+=RecoEgammaPhotonIdentificationPlugins
endif
ifeq ($(strip $(AlignmentOfflinevalidationPlugins)),)
AlignmentOfflinevalidationPlugins := self/src/Alignment/OfflineValidation/plugins
AlignmentOfflinevalidationPlugins_LOC_USE := self cmssw FWCore/MessageLogger TrackPropagation/SteppingHelixPropagator Alignment/CommonAlignment Alignment/TrackerAlignment CondCore/DBOutputService CondFormats/Alignment DataFormats/TrackReco DataFormats/MuonReco FWCore/PluginManager FWCore/Framework FWCore/Utilities FWCore/ParameterSet FWCore/ServiceRegistry Geometry/TrackerGeometryBuilder CommonTools/TrackerMap CommonTools/UtilAlgos CommonTools/Utils RecoMuon/TrackingTools TrackingTools/TransientTrack SimDataFormats/Track SimDataFormats/GeneratorProducts SimTracker/Records SimTracker/TrackAssociation DataFormats/DetId DataFormats/MuonDetId Geometry/CommonDetUnit Geometry/CommonTopologies Geometry/Records Geometry/TrackerNumberingBuilder DataFormats/SiStripDetId DataFormats/SiPixelDetId DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit TrackingTools/TrackFitters TrackingTools/TrajectoryState TrackingTools/IPTools DataFormats/TrajectorySeed DataFormats/VertexReco SimDataFormats/Vertex DataFormats/BeamSpot RecoVertex/PrimaryVertexProducer MagneticField/Records DQM/SiStripCommon DQMServices/Core clhep root TrackingTools/TrackAssociator Geometry/CaloGeometry Alignment/OfflineValidation
Alignment/OfflineValidation_relbigobj+=AlignmentOfflinevalidationPlugins
endif
ifeq ($(strip $(RecoEgamma/ElectronIdentification)),)
RecoEgammaElectronIdentification := self/RecoEgamma/ElectronIdentification
RecoEgamma/ElectronIdentification := RecoEgammaElectronIdentification
RecoEgammaElectronIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaElectronIdentification_EX_USE := $(foreach d, self cmssw FWCore/Framework DataFormats/EgammaReco Geometry/CaloGeometry RecoEcal/EgammaCoreTools DataFormats/TrackReco MagneticField/Records MagneticField/Engine RecoEgamma/EgammaTools PhysicsTools/SelectorUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaElectronIdentification_LCGDICTS  := x 
RecoEgammaElectronIdentification_EX_LIB   := RecoEgammaElectronIdentification
ALL_EXTERNAL_PRODS += RecoEgammaElectronIdentification
RecoEgammaElectronIdentification_CLASS := LIBRARY
RecoEgamma/ElectronIdentification_relbigobj+=RecoEgammaElectronIdentification
endif
ifeq ($(strip $(RecoEgamma/PhotonIdentification)),)
RecoEgammaPhotonIdentification := self/RecoEgamma/PhotonIdentification
RecoEgamma/PhotonIdentification := RecoEgammaPhotonIdentification
RecoEgammaPhotonIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaPhotonIdentification_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager DataFormats/HcalRecHit DataFormats/EgammaReco DataFormats/PatCandidates DataFormats/ParticleFlowCandidate RecoEcal/EgammaCoreTools DataFormats/BeamSpot Geometry/CaloGeometry RecoEgamma/EgammaIsolationAlgos PhysicsTools/SelectorUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaPhotonIdentification_LCGDICTS  := x 
RecoEgammaPhotonIdentification_EX_LIB   := RecoEgammaPhotonIdentification
ALL_EXTERNAL_PRODS += RecoEgammaPhotonIdentification
RecoEgammaPhotonIdentification_CLASS := LIBRARY
RecoEgamma/PhotonIdentification_relbigobj+=RecoEgammaPhotonIdentification
endif
ifeq ($(strip $(FWCore/Version)),)
FWCoreVersion := self/FWCore/Version
FWCore/Version := FWCoreVersion
FWCoreVersion_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FWCoreVersion_EX_USE := $(foreach d, self cmssw ,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FWCoreVersion_EX_LIB   := FWCoreVersion
ALL_EXTERNAL_PRODS += FWCoreVersion
FWCoreVersion_CLASS := LIBRARY
FWCore/Version_relbigobj+=FWCoreVersion
endif
ifeq ($(strip $(DataFormats/FWLite)),)
DataFormatsFWLite := self/DataFormats/FWLite
DataFormats/FWLite := DataFormatsFWLite
DataFormatsFWLite_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DataFormatsFWLite_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/Provenance FWCore/Common FWCore/FWLite FWCore/ParameterSet FWCore/Utilities rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsFWLite_LCGDICTS  := x 
DataFormatsFWLite_EX_LIB   := DataFormatsFWLite
ALL_EXTERNAL_PRODS += DataFormatsFWLite
DataFormatsFWLite_CLASS := LIBRARY
DataFormats/FWLite_relbigobj+=DataFormatsFWLite
endif
ifeq ($(strip $(PhysicsToolsSelectorUtils_plugins)),)
PhysicsToolsSelectorUtils_plugins := self/src/PhysicsTools/SelectorUtils/plugins
PhysicsToolsSelectorUtils_plugins_LOC_USE := self cmssw PhysicsTools/SelectorUtils CommonTools/Utils DataFormats/Candidate DataFormats/TauReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities
PhysicsTools/SelectorUtils_relbigobj+=PhysicsToolsSelectorUtils_plugins
endif
ifeq ($(strip $(RecoMuon/MuonIdentification)),)
RecoMuonMuonIdentification := self/RecoMuon/MuonIdentification
RecoMuon/MuonIdentification := RecoMuonMuonIdentification
RecoMuonMuonIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonMuonIdentification_EX_USE := $(foreach d, self cmssw DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/Math DataFormats/TrajectoryState DataFormats/VertexReco FWCore/ServiceRegistry RecoMuon/Navigation RecoMuon/TransientTrackingRecHit RecoMuon/MuonIsolation RecoTracker/TkDetLayers RecoTracker/TkMSParametrization RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit Geometry/DTGeometry DataFormats/DetId DataFormats/MuonDetId DataFormats/MuonReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet Geometry/CommonDetUnit Geometry/CSCGeometry Geometry/Records SimDataFormats/Track SimDataFormats/TrackingHit roothistmatrix RecoMuon/TrackingTools DataFormats/CSCRecHit RecoLocalCalo/HcalRecAlgos PhysicsTools/SelectorUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonMuonIdentification_LCGDICTS  := x 
RecoMuonMuonIdentification_EX_LIB   := RecoMuonMuonIdentification
ALL_EXTERNAL_PRODS += RecoMuonMuonIdentification
RecoMuonMuonIdentification_CLASS := LIBRARY
RecoMuon/MuonIdentification_relbigobj+=RecoMuonMuonIdentification
endif
ifeq ($(strip $(Calibration/EcalAlCaRecoProducers)),)
CalibrationEcalAlCaRecoProducers := self/Calibration/EcalAlCaRecoProducers
Calibration/EcalAlCaRecoProducers := CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationEcalAlCaRecoProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet DataFormats/EgammaCandidates DataFormats/HLTReco DataFormats/Math DataFormats/EcalDetId DataFormats/TrackReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_CLASS := LIBRARY
Calibration/EcalAlCaRecoProducers_relbigobj+=CalibrationEcalAlCaRecoProducers
endif
ifeq ($(strip $(DPGAnalysis/Skims)),)
DPGAnalysisSkims := self/DPGAnalysis/Skims
DPGAnalysis/Skims := DPGAnalysisSkims
DPGAnalysisSkims_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DPGAnalysisSkims_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities Geometry/Records Geometry/CSCGeometry DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/Common DataFormats/MuonDetId CondFormats/CSCObjects DataFormats/DTDigi CondFormats/DTObjects DataFormats/RPCRecHit DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/L1GlobalTrigger DataFormats/Scalers Geometry/EcalMapping DataFormats/TrackReco DataFormats/MuonReco DataFormats/VertexReco DataFormats/METReco DataFormats/JetReco DataFormats/EgammaCandidates DataFormats/HcalIsolatedTrack Geometry/RPCGeometry DataFormats/L1Trigger DataFormats/TrackerRecHit2D root HLTrigger/HLTcore DataFormats/HcalRecHit RecoEcal/EgammaCoreTools DataFormats/EgammaReco PhysicsTools/SelectorUtils DataFormats/Provenance,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DPGAnalysisSkims
DPGAnalysisSkims_CLASS := LIBRARY
DPGAnalysis/Skims_relbigobj+=DPGAnalysisSkims
endif
ifeq ($(strip $(RecoEgammaElectronIdentificationPlugins_cuts)),)
RecoEgammaElectronIdentificationPlugins_cuts := self/src/RecoEgamma/ElectronIdentification/plugins
RecoEgammaElectronIdentificationPlugins_cuts_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CondFormats/DataRecord CondFormats/EgammaObjects DataFormats/EgammaCandidates DataFormats/EcalRecHit root rootcore RecoEgamma/EgammaTools RecoEgamma/ElectronIdentification
RecoEgamma/ElectronIdentification_relbigobj+=RecoEgammaElectronIdentificationPlugins_cuts
endif
ifeq ($(strip $(RecoEgammaElectronIdentificationPlugins)),)
RecoEgammaElectronIdentificationPlugins := self/src/RecoEgamma/ElectronIdentification/plugins
RecoEgammaElectronIdentificationPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CondFormats/DataRecord CondFormats/EgammaObjects DataFormats/EgammaCandidates DataFormats/EcalRecHit root rootcore RecoEgamma/EgammaTools RecoEgamma/ElectronIdentification
RecoEgamma/ElectronIdentification_relbigobj+=RecoEgammaElectronIdentificationPlugins
endif
ifeq ($(strip $(RecoMuonMuonIdentificationPlugins)),)
RecoMuonMuonIdentificationPlugins := self/src/RecoMuon/MuonIdentification/plugins
RecoMuonMuonIdentificationPlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/CaloTopology PhysicsTools/IsolationAlgos RecoMuon/MuonIdentification RecoMuon/TrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex CommonTools/Utils DataFormats/ParticleFlowCandidate
RecoMuon/MuonIdentification_relbigobj+=RecoMuonMuonIdentificationPlugins
endif
ifeq ($(strip $(RecoMuonMuonIdentificationPlugins_cuts)),)
RecoMuonMuonIdentificationPlugins_cuts := self/src/RecoMuon/MuonIdentification/plugins
RecoMuonMuonIdentificationPlugins_cuts_LOC_USE := self cmssw DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/CaloTopology PhysicsTools/IsolationAlgos RecoMuon/MuonIdentification RecoMuon/TrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex CommonTools/Utils DataFormats/ParticleFlowCandidate PhysicsTools/SelectorUtils
RecoMuon/MuonIdentification_relbigobj+=RecoMuonMuonIdentificationPlugins_cuts
endif
ifeq ($(strip $(PhysicsTools/SelectorUtils)),)
PhysicsToolsSelectorUtils := self/PhysicsTools/SelectorUtils
PhysicsTools/SelectorUtils := PhysicsToolsSelectorUtils
PhysicsToolsSelectorUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsSelectorUtils_EX_USE := $(foreach d, self cmssw CommonTools/Utils DataFormats/Math DataFormats/Candidate DataFormats/PatCandidates DataFormats/EgammaCandidates DataFormats/MuonReco DataFormats/TauReco DataFormats/BeamSpot DataFormats/Common DataFormats/Provenance DataFormats/VertexReco FWCore/Common FWCore/FWLite FWCore/ParameterSet FWCore/Utilities rootcore root openssl,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsSelectorUtils_LCGDICTS  := x 
PhysicsToolsSelectorUtils_EX_LIB   := PhysicsToolsSelectorUtils
ALL_EXTERNAL_PRODS += PhysicsToolsSelectorUtils
PhysicsToolsSelectorUtils_CLASS := LIBRARY
PhysicsTools/SelectorUtils_relbigobj+=PhysicsToolsSelectorUtils
endif
ifeq ($(strip $(Alignment/OfflineValidation)),)
AlignmentOfflineValidation := self/Alignment/OfflineValidation
Alignment/OfflineValidation := AlignmentOfflineValidation
AlignmentOfflineValidation_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentOfflineValidation_EX_USE := $(foreach d, self cmssw DataFormats/TrackReco FWCore/PluginManager FWCore/Framework FWCore/Utilities FWCore/ParameterSet FWCore/ServiceRegistry Geometry/TrackerGeometryBuilder TrackingTools/TrackFitters MagneticField/Engine clhep rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AlignmentOfflineValidation_LCGDICTS  := x 
AlignmentOfflineValidation_EX_LIB   := AlignmentOfflineValidation
ALL_EXTERNAL_PRODS += AlignmentOfflineValidation
AlignmentOfflineValidation_CLASS := LIBRARY
Alignment/OfflineValidation_relbigobj+=AlignmentOfflineValidation
endif
