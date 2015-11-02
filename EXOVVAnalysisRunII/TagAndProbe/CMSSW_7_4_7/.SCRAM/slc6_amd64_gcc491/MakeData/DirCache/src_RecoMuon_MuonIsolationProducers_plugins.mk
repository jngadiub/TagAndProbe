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
