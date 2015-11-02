import FWCore.ParameterSet.Config as cms

HighPtMuonVariables = cms.EDProducer("HighPtMuonVariables",
    probes = cms.InputTag("probeMuons"),
    vertices     = cms.InputTag("offlinePrimaryVertices"),
)
