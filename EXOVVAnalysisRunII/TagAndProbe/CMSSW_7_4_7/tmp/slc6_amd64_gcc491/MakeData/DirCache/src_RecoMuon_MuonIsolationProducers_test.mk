ifeq ($(strip $(MuIsoDepositAnalyzer)),)
MuIsoDepositAnalyzer := self/src/RecoMuon/MuonIsolationProducers/test
MuIsoDepositAnalyzer_files := $(patsubst src/RecoMuon/MuonIsolationProducers/test/%,%,$(foreach file,MuIsoDepositAnalyzer.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIsolationProducers/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIsolationProducers/test/$(file). Please fix src/RecoMuon/MuonIsolationProducers/test/BuildFile.))))
MuIsoDepositAnalyzer_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolationProducers/test/BuildFile
MuIsoDepositAnalyzer_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/ParameterSet RecoMuon/MuonIsolation DataFormats/MuonReco root
MuIsoDepositAnalyzer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuIsoDepositAnalyzer,MuIsoDepositAnalyzer,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIsolationProducers/test))
MuIsoDepositAnalyzer_PACKAGE := self/src/RecoMuon/MuonIsolationProducers/test
ALL_PRODS += MuIsoDepositAnalyzer
MuIsoDepositAnalyzer_INIT_FUNC        += $$(eval $$(call Library,MuIsoDepositAnalyzer,src/RecoMuon/MuonIsolationProducers/test,src_RecoMuon_MuonIsolationProducers_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuIsoDepositAnalyzer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,MuIsoDepositAnalyzer,src/RecoMuon/MuonIsolationProducers/test))
endif
ifeq ($(strip $(IsolationExample)),)
IsolationExample := self/src/RecoMuon/MuonIsolationProducers/test
IsolationExample_files := $(patsubst src/RecoMuon/MuonIsolationProducers/test/%,%,$(foreach file,IsolationExample.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIsolationProducers/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIsolationProducers/test/$(file). Please fix src/RecoMuon/MuonIsolationProducers/test/BuildFile.))))
IsolationExample_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolationProducers/test/BuildFile
IsolationExample_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/ParameterSet RecoMuon/MuonIsolation DataFormats/MuonReco root
IsolationExample_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,IsolationExample,IsolationExample,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIsolationProducers/test))
IsolationExample_PACKAGE := self/src/RecoMuon/MuonIsolationProducers/test
ALL_PRODS += IsolationExample
IsolationExample_INIT_FUNC        += $$(eval $$(call Library,IsolationExample,src/RecoMuon/MuonIsolationProducers/test,src_RecoMuon_MuonIsolationProducers_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
IsolationExample_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,IsolationExample,src/RecoMuon/MuonIsolationProducers/test))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIsolationProducers_test
src_RecoMuon_MuonIsolationProducers_test_parent := RecoMuon/MuonIsolationProducers
src_RecoMuon_MuonIsolationProducers_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolationProducers_test,src/RecoMuon/MuonIsolationProducers/test,TEST))
