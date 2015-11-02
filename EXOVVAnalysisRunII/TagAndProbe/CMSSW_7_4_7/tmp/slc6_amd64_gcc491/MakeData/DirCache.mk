ALL_PACKAGES += MuonAnalysis/MuonAssociators
subdirs_src_MuonAnalysis_MuonAssociators := src_MuonAnalysis_MuonAssociators_src src_MuonAnalysis_MuonAssociators_python src_MuonAnalysis_MuonAssociators_test src_MuonAnalysis_MuonAssociators_plugins
ALL_SUBSYSTEMS+=DataFormats
subdirs_src_DataFormats = src_DataFormats_PatCandidates
ALL_SUBSYSTEMS+=PhysicsTools
subdirs_src_PhysicsTools = src_PhysicsTools_TagAndProbe
ALL_SUBSYSTEMS+=MuonAnalysis
subdirs_src_MuonAnalysis = src_MuonAnalysis_MuonAssociators src_MuonAnalysis_TagAndProbe
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
ALL_COMMONRULES += src_MuonAnalysis_TagAndProbe_test
src_MuonAnalysis_TagAndProbe_test_parent := MuonAnalysis/TagAndProbe
src_MuonAnalysis_TagAndProbe_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_TagAndProbe_test,src/MuonAnalysis/TagAndProbe/test,TEST))
ifeq ($(strip $(testKinResolutions)),)
testKinResolutions_files := $(patsubst src/DataFormats/PatCandidates/test/%,%,$(foreach file,testKinParametrizations.cc testKinResolutions.cc testRunner.cpp,$(eval xfile:=$(wildcard src/DataFormats/PatCandidates/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/PatCandidates/test/$(file). Please fix src/DataFormats/PatCandidates/test/BuildFile.))))
testKinResolutions := self/src/DataFormats/PatCandidates/test
testKinResolutions_TEST_RUNNER_CMD := echo
testKinResolutions_NO_TESTRUN := yes
testKinResolutions_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/PatCandidates/test/BuildFile
testKinResolutions_LOC_USE := self  boost cppunit DataFormats/PatCandidates
testKinResolutions_PACKAGE := self/src/DataFormats/PatCandidates/test
ALL_PRODS += testKinResolutions
testKinResolutions_INIT_FUNC        += $$(eval $$(call Binary,testKinResolutions,src/DataFormats/PatCandidates/test,src_DataFormats_PatCandidates_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testKinResolutions_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testKinResolutions,src/DataFormats/PatCandidates/test))
endif
ALL_COMMONRULES += src_DataFormats_PatCandidates_test
src_DataFormats_PatCandidates_test_parent := DataFormats/PatCandidates
src_DataFormats_PatCandidates_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DataFormats_PatCandidates_test,src/DataFormats/PatCandidates/test,TEST))
ALL_PACKAGES += DataFormats/PatCandidates
subdirs_src_DataFormats_PatCandidates := src_DataFormats_PatCandidates_test src_DataFormats_PatCandidates_src
ALL_PACKAGES += MuonAnalysis/TagAndProbe
subdirs_src_MuonAnalysis_TagAndProbe := src_MuonAnalysis_TagAndProbe_plugins src_MuonAnalysis_TagAndProbe_src src_MuonAnalysis_TagAndProbe_scripts src_MuonAnalysis_TagAndProbe_test src_MuonAnalysis_TagAndProbe_doc src_MuonAnalysis_TagAndProbe_python
ALL_PACKAGES += RecoMuon/MuonIsolationProducers
subdirs_src_RecoMuon_MuonIsolationProducers := src_RecoMuon_MuonIsolationProducers_test src_RecoMuon_MuonIsolationProducers_plugins src_RecoMuon_MuonIsolationProducers_python
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_test
src_PhysicsTools_TagAndProbe_test_parent := PhysicsTools/TagAndProbe
src_PhysicsTools_TagAndProbe_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_test,src/PhysicsTools/TagAndProbe/test,TEST))
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
ALL_SUBSYSTEMS+=RecoMuon
subdirs_src_RecoMuon = src_RecoMuon_MuonIsolationProducers
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
src_MuonAnalysis_TagAndProbe_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/MuonAnalysis/TagAndProbe/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_MuonAnalysis_TagAndProbe_scripts,src/MuonAnalysis/TagAndProbe/scripts,$(SCRAMSTORENAME_BIN),*))
ifeq ($(strip $(PyPhysicsToolsTagAndProbe)),)
PyPhysicsToolsTagAndProbe := self/src/PhysicsTools/TagAndProbe/python
src_PhysicsTools_TagAndProbe_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/PhysicsTools/TagAndProbe/python)
PyPhysicsToolsTagAndProbe_files := $(patsubst src/PhysicsTools/TagAndProbe/python/%,%,$(wildcard $(foreach dir,src/PhysicsTools/TagAndProbe/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyPhysicsToolsTagAndProbe_LOC_USE := self  
PyPhysicsToolsTagAndProbe_PACKAGE := self/src/PhysicsTools/TagAndProbe/python
ALL_PRODS += PyPhysicsToolsTagAndProbe
PyPhysicsToolsTagAndProbe_INIT_FUNC        += $$(eval $$(call PythonProduct,PyPhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/python,src_PhysicsTools_TagAndProbe_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyPhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/python))
endif
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_python
src_PhysicsTools_TagAndProbe_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_python,src/PhysicsTools/TagAndProbe/python,PYTHON))
ALL_PACKAGES += PhysicsTools/TagAndProbe
subdirs_src_PhysicsTools_TagAndProbe := src_PhysicsTools_TagAndProbe_src src_PhysicsTools_TagAndProbe_python src_PhysicsTools_TagAndProbe_interface src_PhysicsTools_TagAndProbe_test src_PhysicsTools_TagAndProbe_plugins
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_test
src_MuonAnalysis_MuonAssociators_test_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_test,src/MuonAnalysis/MuonAssociators/test,TEST))
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
