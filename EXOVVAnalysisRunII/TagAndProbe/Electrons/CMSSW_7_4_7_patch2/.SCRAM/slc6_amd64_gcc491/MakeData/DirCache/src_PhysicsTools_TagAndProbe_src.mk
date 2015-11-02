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
