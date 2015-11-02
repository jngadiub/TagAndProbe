ifeq ($(strip $(RecoMuon/MuonIsolationProducers)),)
src_RecoMuon_MuonIsolationProducers := self/RecoMuon/MuonIsolationProducers
RecoMuon/MuonIsolationProducers  := src_RecoMuon_MuonIsolationProducers
src_RecoMuon_MuonIsolationProducers_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolationProducers/BuildFile
src_RecoMuon_MuonIsolationProducers_LOC_USE := FWCore/PluginManager MagneticField/Records FWCore/MessageLogger Geometry/CaloEventSetup FWCore/Framework self Geometry/Records Geometry/CaloGeometry RecoMuon/MuonIsolation DataFormats/TrackReco DataFormats/CaloTowers DataFormats/MuonReco FWCore/ParameterSet MagneticField/Engine
src_RecoMuon_MuonIsolationProducers_EX_USE   := $(foreach d,$(src_RecoMuon_MuonIsolationProducers_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_RecoMuon_MuonIsolationProducers
src_RecoMuon_MuonIsolationProducers_INIT_FUNC += $$(eval $$(call EmptyPackage,src_RecoMuon_MuonIsolationProducers,src/RecoMuon/MuonIsolationProducers))
endif

