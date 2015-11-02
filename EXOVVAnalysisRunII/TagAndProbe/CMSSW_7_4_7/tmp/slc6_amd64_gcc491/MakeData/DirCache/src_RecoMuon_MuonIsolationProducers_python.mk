ifeq ($(strip $(PyRecoMuonMuonIsolationProducers)),)
PyRecoMuonMuonIsolationProducers := self/src/RecoMuon/MuonIsolationProducers/python
src_RecoMuon_MuonIsolationProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoMuon/MuonIsolationProducers/python)
PyRecoMuonMuonIsolationProducers_files := $(patsubst src/RecoMuon/MuonIsolationProducers/python/%,%,$(wildcard $(foreach dir,src/RecoMuon/MuonIsolationProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoMuonMuonIsolationProducers_LOC_USE := self  
PyRecoMuonMuonIsolationProducers_PACKAGE := self/src/RecoMuon/MuonIsolationProducers/python
ALL_PRODS += PyRecoMuonMuonIsolationProducers
PyRecoMuonMuonIsolationProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoMuonMuonIsolationProducers,src/RecoMuon/MuonIsolationProducers/python,src_RecoMuon_MuonIsolationProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoMuonMuonIsolationProducers,src/RecoMuon/MuonIsolationProducers/python))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIsolationProducers_python
src_RecoMuon_MuonIsolationProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolationProducers_python,src/RecoMuon/MuonIsolationProducers/python,PYTHON))
