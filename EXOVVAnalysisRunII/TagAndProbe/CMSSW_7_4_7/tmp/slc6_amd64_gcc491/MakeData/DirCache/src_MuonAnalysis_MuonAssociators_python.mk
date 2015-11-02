ifeq ($(strip $(PyMuonAnalysisMuonAssociators)),)
PyMuonAnalysisMuonAssociators := self/src/MuonAnalysis/MuonAssociators/python
src_MuonAnalysis_MuonAssociators_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/MuonAnalysis/MuonAssociators/python)
PyMuonAnalysisMuonAssociators_files := $(patsubst src/MuonAnalysis/MuonAssociators/python/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/MuonAssociators/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyMuonAnalysisMuonAssociators_LOC_USE := self  
PyMuonAnalysisMuonAssociators_PACKAGE := self/src/MuonAnalysis/MuonAssociators/python
ALL_PRODS += PyMuonAnalysisMuonAssociators
PyMuonAnalysisMuonAssociators_INIT_FUNC        += $$(eval $$(call PythonProduct,PyMuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/python,src_MuonAnalysis_MuonAssociators_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyMuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/python))
endif
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_python
src_MuonAnalysis_MuonAssociators_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_python,src/MuonAnalysis/MuonAssociators/python,PYTHON))
