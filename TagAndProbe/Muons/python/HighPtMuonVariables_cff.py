import FWCore.ParameterSet.Config as cms

from MuonAnalysis.TagAndProbe.HighPtMuonVariables_cfi import HighPtMuonVariables

HighPtMuonVariablesSeq = cms.Sequence(
    HighPtMuonVariables
)

HighPtMuonVariablesPlain = cms.PSet(
    HighPtID                        = cms.InputTag("HighPtMuonVariables", "HighPtID"),
    HighPtIDGlb                     = cms.InputTag("HighPtMuonVariables", "HighPtIDGlb"),
    HighPtIDglbValidMuHits          = cms.InputTag("HighPtMuonVariables", "HighPtIDglbValidMuHits"),
    HighPtIDnumberOfMatchedStations = cms.InputTag("HighPtMuonVariables", "HighPtIDnumberOfMatchedStations"),
    HighPtIDtkSigmaPtOverPt         = cms.InputTag("HighPtMuonVariables", "HighPtIDtkSigmaPtOverPt"),
    HighPtIDdB                      = cms.InputTag("HighPtMuonVariables", "HighPtIDdB"),
    HighPtIDdzPV                    = cms.InputTag("HighPtMuonVariables", "HighPtIDdzPV"),
    HighPtIDtkValidPixelHits        = cms.InputTag("HighPtMuonVariables", "HighPtIDtkValidPixelHits"),
    HighPtIDtkTrackerLay            = cms.InputTag("HighPtMuonVariables", "HighPtIDtkTrackerLay"),
    HighPtIDtkIso03Rel              = cms.InputTag("HighPtMuonVariables", "HighPtIDtkIso03Rel"),      
)
    
HighPtMuonVariablesTag = HighPtMuonVariables.clone(probes = "tagMuons")
HighPtMuonVariablesPlainTag = cms.PSet(
    HighPtID                        = cms.InputTag("HighPtMuonVariablesTag", "HighPtID"),
    HighPtIDGlb                     = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDGlb"),
    HighPtIDglbValidMuHits          = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDglbValidMuHits"),
    HighPtIDnumberOfMatchedStations = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDnumberOfMatchedStations"),
    HighPtIDtkSigmaPtOverPt         = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDtkSigmaPtOverPt"),
    HighPtIDdB                      = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDdB"),
    HighPtIDdzPV                    = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDdzPV"),
    HighPtIDtkValidPixelHits        = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDtkValidPixelHits"),
    HighPtIDtkTrackerLay            = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDtkTrackerLay"),
    HighPtIDtkIso03Rel              = cms.InputTag("HighPtMuonVariablesTag", "HighPtIDtkIso03Rel"),    
)    
