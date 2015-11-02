ifeq ($(strip $(PyMuonAnalysisTagAndProbe)),)
PyMuonAnalysisTagAndProbe := self/src/MuonAnalysis/TagAndProbe/python
src_MuonAnalysis_TagAndProbe_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/MuonAnalysis/TagAndProbe/python)
PyMuonAnalysisTagAndProbe_files := $(patsubst src/MuonAnalysis/TagAndProbe/python/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/TagAndProbe/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyMuonAnalysisTagAndProbe_LOC_USE := self  
PyMuonAnalysisTagAndProbe_PACKAGE := self/src/MuonAnalysis/TagAndProbe/python
ALL_PRODS += PyMuonAnalysisTagAndProbe
PyMuonAnalysisTagAndProbe_INIT_FUNC        += $$(eval $$(call PythonProduct,PyMuonAnalysisTagAndProbe,src/MuonAnalysis/TagAndProbe/python,src_MuonAnalysis_TagAndProbe_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyMuonAnalysisTagAndProbe,src/MuonAnalysis/TagAndProbe/python))
endif
ALL_COMMONRULES += src_MuonAnalysis_TagAndProbe_python
src_MuonAnalysis_TagAndProbe_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_TagAndProbe_python,src/MuonAnalysis/TagAndProbe/python,PYTHON))
