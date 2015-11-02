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
