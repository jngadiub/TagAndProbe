ifeq ($(strip $(PhysicsToolsTagAndProbe_plugins)),)
PhysicsToolsTagAndProbe_plugins := self/src/PhysicsTools/TagAndProbe/plugins
PLUGINS:=yes
PhysicsToolsTagAndProbe_plugins_files := $(patsubst src/PhysicsTools/TagAndProbe/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/PhysicsTools/TagAndProbe/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/TagAndProbe/plugins/$(file). Please fix src/PhysicsTools/TagAndProbe/plugins/BuildFile.))))
PhysicsToolsTagAndProbe_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/TagAndProbe/plugins/BuildFile
PhysicsToolsTagAndProbe_plugins_LOC_USE := self  roofit PhysicsTools/RooStatsCms FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/TrackReco DataFormats/EgammaReco DataFormats/Math DataFormats/MuonReco DataFormats/EgammaCandidates RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Common PhysicsTools/TagAndProbe DataFormats/BTauReco DataFormats/PatCandidates DataFormats/HLTReco HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer DataFormats/HcalIsolatedTrack PhysicsTools/HepMCCandAlgos PhysicsTools/PatUtils PhysicsTools/PatAlgos
PhysicsToolsTagAndProbe_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,PhysicsToolsTagAndProbe_plugins,PhysicsToolsTagAndProbe_plugins,$(SCRAMSTORENAME_LIB),src/PhysicsTools/TagAndProbe/plugins))
PhysicsToolsTagAndProbe_plugins_PACKAGE := self/src/PhysicsTools/TagAndProbe/plugins
ALL_PRODS += PhysicsToolsTagAndProbe_plugins
PhysicsTools/TagAndProbe_forbigobj+=PhysicsToolsTagAndProbe_plugins
PhysicsToolsTagAndProbe_plugins_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsTagAndProbe_plugins,src/PhysicsTools/TagAndProbe/plugins,src_PhysicsTools_TagAndProbe_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
PhysicsToolsTagAndProbe_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,PhysicsToolsTagAndProbe_plugins,src/PhysicsTools/TagAndProbe/plugins))
endif
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_plugins
src_PhysicsTools_TagAndProbe_plugins_parent := PhysicsTools/TagAndProbe
src_PhysicsTools_TagAndProbe_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_plugins,src/PhysicsTools/TagAndProbe/plugins,PLUGINS))
ifeq ($(strip $(MuonAnalysis/TagAndProbe)),)
ALL_COMMONRULES += src_MuonAnalysis_TagAndProbe_src
src_MuonAnalysis_TagAndProbe_src_parent := MuonAnalysis/TagAndProbe
src_MuonAnalysis_TagAndProbe_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_MuonAnalysis_TagAndProbe_src,src/MuonAnalysis/TagAndProbe/src,LIBRARY))
MuonAnalysisTagAndProbe := self/MuonAnalysis/TagAndProbe
MuonAnalysis/TagAndProbe := MuonAnalysisTagAndProbe
MuonAnalysisTagAndProbe_files := $(patsubst src/MuonAnalysis/TagAndProbe/src/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/TagAndProbe/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
MuonAnalysisTagAndProbe_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/TagAndProbe/BuildFile
MuonAnalysisTagAndProbe_LOC_USE := self  roofit FWCore/PluginManager FWCore/Framework FWCore/ParameterSet FWCore/Utilities FWCore/MessageLogger CondFormats/DataRecord CondFormats/PhysicsToolsObjects RecoMuon/Records CondCore/PluginSystem
MuonAnalysisTagAndProbe_EX_LIB   := MuonAnalysisTagAndProbe
MuonAnalysisTagAndProbe_EX_USE   := $(foreach d,$(MuonAnalysisTagAndProbe_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
MuonAnalysisTagAndProbe_PACKAGE := self/src/MuonAnalysis/TagAndProbe/src
ALL_PRODS += MuonAnalysisTagAndProbe
MuonAnalysisTagAndProbe_CLASS := LIBRARY
MuonAnalysis/TagAndProbe_forbigobj+=MuonAnalysisTagAndProbe
MuonAnalysisTagAndProbe_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisTagAndProbe,src/MuonAnalysis/TagAndProbe/src,src_MuonAnalysis_TagAndProbe_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DataFormats/PatCandidates)),)
ALL_COMMONRULES += src_DataFormats_PatCandidates_src
src_DataFormats_PatCandidates_src_parent := DataFormats/PatCandidates
src_DataFormats_PatCandidates_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_PatCandidates_src,src/DataFormats/PatCandidates/src,LIBRARY))
DataFormatsPatCandidates := self/DataFormats/PatCandidates
DataFormats/PatCandidates := DataFormatsPatCandidates
DataFormatsPatCandidates_files := $(patsubst src/DataFormats/PatCandidates/src/%,%,$(wildcard $(foreach dir,src/DataFormats/PatCandidates/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsPatCandidates_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/PatCandidates/BuildFile
DataFormatsPatCandidates_LOC_USE := self  FWCore/Utilities FWCore/Common DataFormats/Common DataFormats/StdDictionaries DataFormats/Candidate DataFormats/MuonReco DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/EgammaCandidates DataFormats/ParticleFlowCandidate DataFormats/TrackReco DataFormats/HepMCCandidate DataFormats/BTauReco CondFormats/L1TObjects DataFormats/L1Trigger DataFormats/HLTReco boost
DataFormatsPatCandidates_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DataFormatsPatCandidatesCapabilities,DataFormatsPatCandidates,$(SCRAMSTORENAME_LIB),src/DataFormats/PatCandidates/src))
DataFormatsPatCandidates_LCGDICTS  := x x1 x2 x3 
DataFormatsPatCandidates_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsPatCandidates,src/DataFormats/PatCandidates/src/classes_other.h src/DataFormats/PatCandidates/src/classes_trigger.h src/DataFormats/PatCandidates/src/classes_user.h src/DataFormats/PatCandidates/src/classes_objects.h,src/DataFormats/PatCandidates/src/classes_def_other.xml src/DataFormats/PatCandidates/src/classes_def_trigger.xml src/DataFormats/PatCandidates/src/classes_def_user.xml src/DataFormats/PatCandidates/src/classes_def_objects.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,Capabilities))
DataFormatsPatCandidates_EX_LIB   := DataFormatsPatCandidates
DataFormatsPatCandidates_EX_USE   := $(foreach d,$(DataFormatsPatCandidates_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsPatCandidates_PACKAGE := self/src/DataFormats/PatCandidates/src
ALL_PRODS += DataFormatsPatCandidates
DataFormatsPatCandidates_CLASS := LIBRARY
DataFormats/PatCandidates_forbigobj+=DataFormatsPatCandidates
DataFormatsPatCandidates_INIT_FUNC        += $$(eval $$(call Library,DataFormatsPatCandidates,src/DataFormats/PatCandidates/src,src_DataFormats_PatCandidates_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(MuonAnalysisMuonAssociators_plugins)),)
MuonAnalysisMuonAssociators_plugins := self/src/MuonAnalysis/MuonAssociators/plugins
PLUGINS:=yes
MuonAnalysisMuonAssociators_plugins_files := $(patsubst src/MuonAnalysis/MuonAssociators/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/MuonAnalysis/MuonAssociators/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/MuonAnalysis/MuonAssociators/plugins/$(file). Please fix src/MuonAnalysis/MuonAssociators/plugins/BuildFile.))))
MuonAnalysisMuonAssociators_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/MuonAssociators/plugins/BuildFile
MuonAnalysisMuonAssociators_plugins_LOC_USE := self  CommonTools/Utils DataFormats/PatCandidates FWCore/MessageLogger SimMuon/MCTruth SimTracker/Records SimTracker/TrackAssociation MuonAnalysis/MuonAssociators
MuonAnalysisMuonAssociators_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuonAnalysisMuonAssociators_plugins,MuonAnalysisMuonAssociators_plugins,$(SCRAMSTORENAME_LIB),src/MuonAnalysis/MuonAssociators/plugins))
MuonAnalysisMuonAssociators_plugins_PACKAGE := self/src/MuonAnalysis/MuonAssociators/plugins
ALL_PRODS += MuonAnalysisMuonAssociators_plugins
MuonAnalysis/MuonAssociators_forbigobj+=MuonAnalysisMuonAssociators_plugins
MuonAnalysisMuonAssociators_plugins_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisMuonAssociators_plugins,src/MuonAnalysis/MuonAssociators/plugins,src_MuonAnalysis_MuonAssociators_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuonAnalysisMuonAssociators_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,MuonAnalysisMuonAssociators_plugins,src/MuonAnalysis/MuonAssociators/plugins))
endif
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_plugins
src_MuonAnalysis_MuonAssociators_plugins_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_plugins,src/MuonAnalysis/MuonAssociators/plugins,PLUGINS))
ifeq ($(strip $(MuonAnalysisTagAndProbe_plugins)),)
MuonAnalysisTagAndProbe_plugins := self/src/MuonAnalysis/TagAndProbe/plugins
PLUGINS:=yes
MuonAnalysisTagAndProbe_plugins_files := $(patsubst src/MuonAnalysis/TagAndProbe/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/MuonAnalysis/TagAndProbe/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/MuonAnalysis/TagAndProbe/plugins/$(file). Please fix src/MuonAnalysis/TagAndProbe/plugins/BuildFile.))))
MuonAnalysisTagAndProbe_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/TagAndProbe/plugins/BuildFile
MuonAnalysisTagAndProbe_plugins_LOC_USE := self  CondCore/DBCommon CondCore/DBOutputService CondCore/PluginSystem CondFormats/DataRecord CondFormats/PhysicsToolsObjects DataFormats/Candidate DataFormats/MuonReco DataFormats/PatCandidates FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMuon/Records MuonAnalysis/MuonAssociators MuonAnalysis/TagAndProbe TrackingTools/IPTools TrackingTools/GeomPropagators RecoTracker/Record TrackingTools/KalmanUpdators RecoTracker/MeasurementDet MagneticField/Engine MagneticField/Records RecoTracker/TkDetLayers HLTrigger/HLTcore
MuonAnalysisTagAndProbe_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuonAnalysisTagAndProbe_plugins,MuonAnalysisTagAndProbe_plugins,$(SCRAMSTORENAME_LIB),src/MuonAnalysis/TagAndProbe/plugins))
MuonAnalysisTagAndProbe_plugins_PACKAGE := self/src/MuonAnalysis/TagAndProbe/plugins
ALL_PRODS += MuonAnalysisTagAndProbe_plugins
MuonAnalysis/TagAndProbe_forbigobj+=MuonAnalysisTagAndProbe_plugins
MuonAnalysisTagAndProbe_plugins_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisTagAndProbe_plugins,src/MuonAnalysis/TagAndProbe/plugins,src_MuonAnalysis_TagAndProbe_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuonAnalysisTagAndProbe_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,MuonAnalysisTagAndProbe_plugins,src/MuonAnalysis/TagAndProbe/plugins))
endif
ALL_COMMONRULES += src_MuonAnalysis_TagAndProbe_plugins
src_MuonAnalysis_TagAndProbe_plugins_parent := MuonAnalysis/TagAndProbe
src_MuonAnalysis_TagAndProbe_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_TagAndProbe_plugins,src/MuonAnalysis/TagAndProbe/plugins,PLUGINS))
ifeq ($(strip $(RecoMuonMuonIsolationProducersPlugins)),)
RecoMuonMuonIsolationProducersPlugins := self/src/RecoMuon/MuonIsolationProducers/plugins
PLUGINS:=yes
RecoMuonMuonIsolationProducersPlugins_files := $(patsubst src/RecoMuon/MuonIsolationProducers/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIsolationProducers/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIsolationProducers/plugins/$(file). Please fix src/RecoMuon/MuonIsolationProducers/plugins/BuildFile.))))
RecoMuonMuonIsolationProducersPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolationProducers/plugins/BuildFile
RecoMuonMuonIsolationProducersPlugins_LOC_USE := self  DataFormats/BeamSpot DataFormats/Common DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager PhysicsTools/IsolationAlgos RecoMuon/MuonIsolation
RecoMuonMuonIsolationProducersPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoMuonMuonIsolationProducersPlugins,RecoMuonMuonIsolationProducersPlugins,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIsolationProducers/plugins))
RecoMuonMuonIsolationProducersPlugins_PACKAGE := self/src/RecoMuon/MuonIsolationProducers/plugins
ALL_PRODS += RecoMuonMuonIsolationProducersPlugins
RecoMuon/MuonIsolationProducers_forbigobj+=RecoMuonMuonIsolationProducersPlugins
RecoMuonMuonIsolationProducersPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoMuonMuonIsolationProducersPlugins,src/RecoMuon/MuonIsolationProducers/plugins,src_RecoMuon_MuonIsolationProducers_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoMuonMuonIsolationProducersPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoMuonMuonIsolationProducersPlugins,src/RecoMuon/MuonIsolationProducers/plugins))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIsolationProducers_plugins
src_RecoMuon_MuonIsolationProducers_plugins_parent := RecoMuon/MuonIsolationProducers
src_RecoMuon_MuonIsolationProducers_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolationProducers_plugins,src/RecoMuon/MuonIsolationProducers/plugins,PLUGINS))
ifeq ($(strip $(MuonAnalysis/MuonAssociators)),)
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_src
src_MuonAnalysis_MuonAssociators_src_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_src,src/MuonAnalysis/MuonAssociators/src,LIBRARY))
MuonAnalysisMuonAssociators := self/MuonAnalysis/MuonAssociators
MuonAnalysis/MuonAssociators := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_files := $(patsubst src/MuonAnalysis/MuonAssociators/src/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/MuonAssociators/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
MuonAnalysisMuonAssociators_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/MuonAssociators/BuildFile
MuonAnalysisMuonAssociators_LOC_USE := self  CommonTools/Utils DataFormats/CLHEP DataFormats/Candidate DataFormats/GeometrySurface DataFormats/HepMCCandidate DataFormats/L1Trigger DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/CSCRecHit DataFormats/CSCDigi DataFormats/L1CSCTrackFinder FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/CommonDetUnit Geometry/Records L1Trigger/CSCTrackFinder MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState SimDataFormats/Track SimDataFormats/Vertex
MuonAnalysisMuonAssociators_EX_LIB   := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_EX_USE   := $(foreach d,$(MuonAnalysisMuonAssociators_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
MuonAnalysisMuonAssociators_PACKAGE := self/src/MuonAnalysis/MuonAssociators/src
ALL_PRODS += MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_CLASS := LIBRARY
MuonAnalysis/MuonAssociators_forbigobj+=MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/src,src_MuonAnalysis_MuonAssociators_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(PhysicsTools/TagAndProbe)),)
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_src
src_PhysicsTools_TagAndProbe_src_parent := PhysicsTools/TagAndProbe
src_PhysicsTools_TagAndProbe_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_src,src/PhysicsTools/TagAndProbe/src,LIBRARY))
PhysicsToolsTagAndProbe := self/PhysicsTools/TagAndProbe
PhysicsTools/TagAndProbe := PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_files := $(patsubst src/PhysicsTools/TagAndProbe/src/%,%,$(wildcard $(foreach dir,src/PhysicsTools/TagAndProbe/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PhysicsToolsTagAndProbe_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/TagAndProbe/BuildFile
PhysicsToolsTagAndProbe_LOC_USE := self  roofit FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet DataFormats/TrackReco DataFormats/EgammaReco DataFormats/METReco DataFormats/Math DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Common CommonTools/Utils CommonTools/UtilAlgos PhysicsTools/UtilAlgos
PhysicsToolsTagAndProbe_ROOTDICTS  := y 
PhysicsToolsTagAndProbe_PRE_INIT_FUNC += $$(eval $$(call RootDict,PhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/src,PhysicsToolsTagAndProbeLinkDef.h,$(SCRAMSTORENAME_LIB)))
PhysicsToolsTagAndProbe_EX_LIB   := PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_EX_USE   := $(foreach d,$(PhysicsToolsTagAndProbe_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsTagAndProbe_PACKAGE := self/src/PhysicsTools/TagAndProbe/src
ALL_PRODS += PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_CLASS := LIBRARY
PhysicsTools/TagAndProbe_forbigobj+=PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/src,src_PhysicsTools_TagAndProbe_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(RecoMuon/MuonIsolationProducers)),)
src_RecoMuon_MuonIsolationProducers := self/RecoMuon/MuonIsolationProducers
RecoMuon/MuonIsolationProducers  := src_RecoMuon_MuonIsolationProducers
src_RecoMuon_MuonIsolationProducers_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolationProducers/BuildFile
src_RecoMuon_MuonIsolationProducers_LOC_USE := FWCore/PluginManager MagneticField/Records FWCore/MessageLogger Geometry/CaloEventSetup FWCore/Framework self Geometry/Records Geometry/CaloGeometry RecoMuon/MuonIsolation DataFormats/TrackReco DataFormats/CaloTowers DataFormats/MuonReco FWCore/ParameterSet MagneticField/Engine
src_RecoMuon_MuonIsolationProducers_EX_USE   := $(foreach d,$(src_RecoMuon_MuonIsolationProducers_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_RecoMuon_MuonIsolationProducers
src_RecoMuon_MuonIsolationProducers_INIT_FUNC += $$(eval $$(call EmptyPackage,src_RecoMuon_MuonIsolationProducers,src/RecoMuon/MuonIsolationProducers))
endif

