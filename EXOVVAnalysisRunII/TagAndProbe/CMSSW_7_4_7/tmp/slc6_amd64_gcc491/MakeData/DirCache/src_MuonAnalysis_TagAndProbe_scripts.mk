src_MuonAnalysis_TagAndProbe_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/MuonAnalysis/TagAndProbe/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_MuonAnalysis_TagAndProbe_scripts,src/MuonAnalysis/TagAndProbe/scripts,$(SCRAMSTORENAME_BIN),*))
