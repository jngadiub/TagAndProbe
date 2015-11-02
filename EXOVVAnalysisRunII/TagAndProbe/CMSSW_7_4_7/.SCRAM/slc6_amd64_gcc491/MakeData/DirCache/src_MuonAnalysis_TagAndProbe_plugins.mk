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
