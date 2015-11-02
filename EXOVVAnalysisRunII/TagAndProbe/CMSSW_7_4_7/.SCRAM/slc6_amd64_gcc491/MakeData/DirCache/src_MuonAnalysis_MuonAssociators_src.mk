ifeq ($(strip $(MuonAnalysis/MuonAssociators)),)
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_src
src_MuonAnalysis_MuonAssociators_src_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_src,src/MuonAnalysis/MuonAssociators/src,LIBRARY))
MuonAnalysisMuonAssociators := self/MuonAnalysis/MuonAssociators
MuonAnalysis/MuonAssociators := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_files := $(patsubst src/MuonAnalysis/MuonAssociators/src/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/MuonAssociators/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
MuonAnalysisMuonAssociators_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/MuonAssociators/BuildFile
MuonAnalysisMuonAssociators_LOC_USE := self  CommonTools/Utils DataFormats/CLHEP DataFormats/Candidate DataFormats/GeometrySurface DataFormats/HepMCCandidate DataFormats/L1Trigger DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/CSCRecHit DataFormats/CSCDigi DataFormats/L1CSCTrackFinder FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/CommonDetUnit Geometry/Records L1Trigger/CSCTrackFinder MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState SimDataFormats/Track SimDataFormats/Vertex
MuonAnalysisMuonAssociators_EX_LIB   := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_EX_USE   := $(foreach d,$(MuonAnalysisMuonAssociators_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
MuonAnalysisMuonAssociators_PACKAGE := self/src/MuonAnalysis/MuonAssociators/src
ALL_PRODS += MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_CLASS := LIBRARY
MuonAnalysis/MuonAssociators_forbigobj+=MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/src,src_MuonAnalysis_MuonAssociators_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
