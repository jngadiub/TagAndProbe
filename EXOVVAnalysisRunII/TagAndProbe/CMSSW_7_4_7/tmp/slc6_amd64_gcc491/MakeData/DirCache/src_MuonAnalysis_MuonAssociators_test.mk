ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_test
src_MuonAnalysis_MuonAssociators_test_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_test,src/MuonAnalysis/MuonAssociators/test,TEST))
