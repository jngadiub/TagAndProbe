ifeq ($(strip $(PhysicsTools/TagAndProbe)),)
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_src
src_PhysicsTools_TagAndProbe_src_parent := PhysicsTools/TagAndProbe
src_PhysicsTools_TagAndProbe_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_src,src/PhysicsTools/TagAndProbe/src,LIBRARY))
PhysicsToolsTagAndProbe := self/PhysicsTools/TagAndProbe
PhysicsTools/TagAndProbe := PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_files := $(patsubst src/PhysicsTools/TagAndProbe/src/%,%,$(wildcard $(foreach dir,src/PhysicsTools/TagAndProbe/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PhysicsToolsTagAndProbe_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/TagAndProbe/BuildFile
PhysicsToolsTagAndProbe_LOC_FLAGS_CXXFLAGS   := -O0 -g3 -fno-inline
PhysicsToolsTagAndProbe_LOC_USE := self cmssw roofit FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet DataFormats/TrackReco DataFormats/EgammaReco DataFormats/METReco DataFormats/Math DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Common CommonTools/Utils CommonTools/UtilAlgos PhysicsTools/UtilAlgos
PhysicsToolsTagAndProbe_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,PhysicsToolsTagAndProbeCapabilities,PhysicsToolsTagAndProbe,$(SCRAMSTORENAME_LIB),src/PhysicsTools/TagAndProbe/src))
PhysicsToolsTagAndProbe_LCGDICTS  := x 
PhysicsToolsTagAndProbe_PRE_INIT_FUNC += $$(eval $$(call LCGDict,PhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/src/classes.h,src/PhysicsTools/TagAndProbe/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,Capabilities))
PhysicsToolsTagAndProbe_EX_LIB   := PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_EX_USE   := $(foreach d,$(PhysicsToolsTagAndProbe_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsTagAndProbe_PACKAGE := self/src/PhysicsTools/TagAndProbe/src
ALL_PRODS += PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_CLASS := LIBRARY
PhysicsTools/TagAndProbe_forbigobj+=PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/src,src_PhysicsTools_TagAndProbe_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(PhysicsToolsTagAndProbe_plugins)),)
PhysicsToolsTagAndProbe_plugins := self/src/PhysicsTools/TagAndProbe/plugins
PLUGINS:=yes
PhysicsToolsTagAndProbe_plugins_files := $(patsubst src/PhysicsTools/TagAndProbe/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/PhysicsTools/TagAndProbe/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/TagAndProbe/plugins/$(file). Please fix src/PhysicsTools/TagAndProbe/plugins/BuildFile.))))
PhysicsToolsTagAndProbe_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/TagAndProbe/plugins/BuildFile
PhysicsToolsTagAndProbe_plugins_LOC_USE := self cmssw roofit PhysicsTools/RooStatsCms FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/TrackReco DataFormats/EgammaReco DataFormats/Math DataFormats/MuonReco DataFormats/EgammaCandidates RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Common PhysicsTools/TagAndProbe DataFormats/BTauReco DataFormats/PatCandidates DataFormats/HLTReco HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer DataFormats/HcalIsolatedTrack PhysicsTools/HepMCCandAlgos PhysicsTools/PatUtils PhysicsTools/PatAlgos
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
ifeq ($(strip $(DataFormats/RecoCandidate)),)
ALL_COMMONRULES += src_DataFormats_RecoCandidate_src
src_DataFormats_RecoCandidate_src_parent := DataFormats/RecoCandidate
src_DataFormats_RecoCandidate_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_RecoCandidate_src,src/DataFormats/RecoCandidate/src,LIBRARY))
DataFormatsRecoCandidate := self/DataFormats/RecoCandidate
DataFormats/RecoCandidate := DataFormatsRecoCandidate
DataFormatsRecoCandidate_files := $(patsubst src/DataFormats/RecoCandidate/src/%,%,$(wildcard $(foreach dir,src/DataFormats/RecoCandidate/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsRecoCandidate_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/RecoCandidate/BuildFile
DataFormatsRecoCandidate_LOC_USE := self cmssw DataFormats/CaloRecHit DataFormats/Candidate DataFormats/Common DataFormats/TrackReco clhep SimDataFormats/GeneratorProducts
DataFormatsRecoCandidate_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DataFormatsRecoCandidateCapabilities,DataFormatsRecoCandidate,$(SCRAMSTORENAME_LIB),src/DataFormats/RecoCandidate/src))
DataFormatsRecoCandidate_LCGDICTS  := x 
DataFormatsRecoCandidate_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsRecoCandidate,src/DataFormats/RecoCandidate/src/classes.h,src/DataFormats/RecoCandidate/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,Capabilities))
DataFormatsRecoCandidate_EX_LIB   := DataFormatsRecoCandidate
DataFormatsRecoCandidate_EX_USE   := $(foreach d,$(DataFormatsRecoCandidate_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsRecoCandidate_PACKAGE := self/src/DataFormats/RecoCandidate/src
ALL_PRODS += DataFormatsRecoCandidate
DataFormatsRecoCandidate_CLASS := LIBRARY
DataFormats/RecoCandidate_forbigobj+=DataFormatsRecoCandidate
DataFormatsRecoCandidate_INIT_FUNC        += $$(eval $$(call Library,DataFormatsRecoCandidate,src/DataFormats/RecoCandidate/src,src_DataFormats_RecoCandidate_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
