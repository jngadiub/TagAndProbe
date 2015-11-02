ALL_COMMONRULES += src_MuonAnalysis_TagAndProbe_test
src_MuonAnalysis_TagAndProbe_test_parent := MuonAnalysis/TagAndProbe
src_MuonAnalysis_TagAndProbe_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_TagAndProbe_test,src/MuonAnalysis/TagAndProbe/test,TEST))
