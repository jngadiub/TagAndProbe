ALL_PACKAGES += DataFormats/RecoCandidate
subdirs_src_DataFormats_RecoCandidate := src_DataFormats_RecoCandidate_interface src_DataFormats_RecoCandidate_src
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_test
src_PhysicsTools_TagAndProbe_test_parent := PhysicsTools/TagAndProbe
src_PhysicsTools_TagAndProbe_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_test,src/PhysicsTools/TagAndProbe/test,TEST))
ALL_SUBSYSTEMS+=PhysicsTools
subdirs_src_PhysicsTools = src_PhysicsTools_TagAndProbe
ifeq ($(strip $(PyPhysicsToolsTagAndProbe)),)
PyPhysicsToolsTagAndProbe := self/src/PhysicsTools/TagAndProbe/python
src_PhysicsTools_TagAndProbe_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/PhysicsTools/TagAndProbe/python)
PyPhysicsToolsTagAndProbe_files := $(patsubst src/PhysicsTools/TagAndProbe/python/%,%,$(wildcard $(foreach dir,src/PhysicsTools/TagAndProbe/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyPhysicsToolsTagAndProbe_LOC_USE := self cmssw 
PyPhysicsToolsTagAndProbe_PACKAGE := self/src/PhysicsTools/TagAndProbe/python
ALL_PRODS += PyPhysicsToolsTagAndProbe
PyPhysicsToolsTagAndProbe_INIT_FUNC        += $$(eval $$(call PythonProduct,PyPhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/python,src_PhysicsTools_TagAndProbe_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyPhysicsToolsTagAndProbe,src/PhysicsTools/TagAndProbe/python))
endif
ALL_COMMONRULES += src_PhysicsTools_TagAndProbe_python
src_PhysicsTools_TagAndProbe_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_TagAndProbe_python,src/PhysicsTools/TagAndProbe/python,PYTHON))
ALL_SUBSYSTEMS+=DataFormats
subdirs_src_DataFormats = src_DataFormats_RecoCandidate
ALL_PACKAGES += PhysicsTools/TagAndProbe
subdirs_src_PhysicsTools_TagAndProbe := src_PhysicsTools_TagAndProbe_test src_PhysicsTools_TagAndProbe_plugins src_PhysicsTools_TagAndProbe_src src_PhysicsTools_TagAndProbe_interface src_PhysicsTools_TagAndProbe_python
