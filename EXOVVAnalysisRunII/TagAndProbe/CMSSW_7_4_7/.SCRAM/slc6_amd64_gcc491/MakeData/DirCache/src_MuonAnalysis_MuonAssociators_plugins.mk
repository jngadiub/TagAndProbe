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
