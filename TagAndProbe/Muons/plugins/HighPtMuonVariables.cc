// system include files
#include <memory>
#include <cmath>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/Framework/interface/ESHandle.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ServiceRegistry/interface/Service.h"

#include "DataFormats/Math/interface/deltaR.h"
#include "DataFormats/Common/interface/ValueMap.h"
#include "DataFormats/MuonReco/interface/Muon.h"
#include "DataFormats/VertexReco/interface/VertexFwd.h"
#include "DataFormats/VertexReco/interface/Vertex.h"

//
// class declaration
//

class HighPtMuonVariables : public edm::EDProducer {
public:
  explicit HighPtMuonVariables(const edm::ParameterSet&);
  ~HighPtMuonVariables();

private:
  virtual void beginJob() ;
  virtual void produce(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;

  /// Store extra information in a ValueMap
  template<typename Hand, typename T>
  void storeMap(edm::Event &iEvent, 
                 const Hand & handle,
                 const std::vector<T> & values,
                 const std::string    & label) const ;
		 
  // ----------member data ---------------------------
  const edm::InputTag probes_;    
  const edm::InputTag vertices_;

};

//
// constants, enums and typedefs
//


//
// static data member definitions
//

//
// constructors and destructor
//
HighPtMuonVariables::HighPtMuonVariables(const edm::ParameterSet& iConfig):
    probes_(iConfig.getParameter<edm::InputTag>("probes")),
    vertices_(iConfig.getParameter<edm::InputTag>("vertices"))
{
  produces<edm::ValueMap<float> >("HighPtID");
  produces<edm::ValueMap<float> >("HighPtIDGlb");
  produces<edm::ValueMap<float> >("HighPtIDglbValidMuHits");
  produces<edm::ValueMap<float> >("HighPtIDnumberOfMatchedStations");
  produces<edm::ValueMap<float> >("HighPtIDtkSigmaPtOverPt");
  produces<edm::ValueMap<float> >("HighPtIDdB");
  produces<edm::ValueMap<float> >("HighPtIDdzPV");
  produces<edm::ValueMap<float> >("HighPtIDtkValidPixelHits");
  produces<edm::ValueMap<float> >("HighPtIDtkTrackerLay");
  produces<edm::ValueMap<float> >("HighPtIDtkIso03Rel");
}


HighPtMuonVariables::~HighPtMuonVariables()
{
}


//
// member functions
//

// ------------ method called to produce the data  ------------
void
HighPtMuonVariables::produce(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
  using namespace edm;

  // read input
  Handle<View<reco::Muon> > probes;
  iEvent.getByLabel(probes_, probes);

  Handle<reco::VertexCollection  > vertices;
  iEvent.getByLabel(vertices_, vertices);
  const reco::Vertex &vtx = !vertices->empty() ? vertices->at(0) : reco::Vertex();

  View<reco::Muon>::const_iterator probe, endprobes=probes->end();
  unsigned int n = probes->size();

  std::vector<float> highpt(n), glb(n), glbValidMuHits(n), numberOfMatchedStations(n);
  std::vector<float> tkSigmaPtOverPt(n), dB(n), dzPV(n), tkValidPixelHits(n);
  std::vector<float> tkTrackerLay(n), tkIso03Rel(n); 

  // loop on PROBES
  unsigned int imu = 0;
  for (probe = probes->begin(); probe != endprobes; ++probe, ++imu) {
    const reco::Muon &mu = *probe;
    
    glb[imu] = mu.isGlobalMuon();
    numberOfMatchedStations[imu] = mu.numberOfMatchedStations();
    tkIso03Rel[imu] = mu.isolationR03().sumPt/mu.pt();
    tkSigmaPtOverPt[imu] = -99999;
    dB[imu] = -99999;
    dzPV[imu] = -99999;       
    glbValidMuHits[imu] = -99;
    tkValidPixelHits[imu] = -99;
    tkTrackerLay[imu] = -99;
    if( !mu.globalTrack().isNull() ) glbValidMuHits[imu] = mu.globalTrack()->hitPattern().numberOfValidMuonHits();
    if( !mu.innerTrack().isNull() ) tkValidPixelHits[imu] = mu.innerTrack()->hitPattern().numberOfValidPixelHits();
    if( !mu.innerTrack().isNull() ) tkTrackerLay[imu] = mu.innerTrack()->hitPattern().trackerLayersWithMeasurement();
    if( !mu.muonBestTrack().isNull() ){
      tkSigmaPtOverPt[imu] = mu.muonBestTrack()->ptError()/mu.muonBestTrack()->pt();
      dB[imu] = fabs(mu.muonBestTrack()->dxy(vtx.position()));
      dzPV[imu] = fabs(mu.muonBestTrack()->dz(vtx.position()));           
    }
    
    highpt[imu] = 0;
    if( mu.isGlobalMuon() && mu.globalTrack()->hitPattern().numberOfValidMuonHits() > 0 && mu.numberOfMatchedStations() > 1 &&
        mu.muonBestTrack()->ptError()/mu.muonBestTrack()->pt() < 0.3 && fabs(mu.muonBestTrack()->dxy(vtx.position())) < 0.2 &&
	fabs(mu.muonBestTrack()->dz(vtx.position())) < 0.5 && mu.innerTrack()->hitPattern().numberOfValidPixelHits() > 0 && 
	mu.innerTrack()->hitPattern().trackerLayersWithMeasurement() > 5 ) highpt[imu] = 1;
        
  }// end loop on probes

  storeMap(iEvent, probes, highpt                 , "HighPtID"                       );
  storeMap(iEvent, probes, glb                    , "HighPtIDGlb"                    );
  storeMap(iEvent, probes, glbValidMuHits         , "HighPtIDglbValidMuHits"         );
  storeMap(iEvent, probes, numberOfMatchedStations, "HighPtIDnumberOfMatchedStations");
  storeMap(iEvent, probes, tkSigmaPtOverPt        , "HighPtIDtkSigmaPtOverPt"        );
  storeMap(iEvent, probes, dB                     , "HighPtIDdB"                     );
  storeMap(iEvent, probes, dzPV                   , "HighPtIDdzPV"                   );
  storeMap(iEvent, probes, tkValidPixelHits       , "HighPtIDtkValidPixelHits"       );
  storeMap(iEvent, probes, tkTrackerLay           , "HighPtIDtkTrackerLay"           );
  storeMap(iEvent, probes, tkIso03Rel             , "HighPtIDtkIso03Rel"             );
  
}

// ------------ method called once each job just before starting event loop  ------------
void 
HighPtMuonVariables::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
HighPtMuonVariables::endJob() {
}

template<typename Hand, typename T>
void
HighPtMuonVariables::storeMap(edm::Event &iEvent,
                     const Hand & handle,
                     const std::vector<T> & values,
                     const std::string    & label) const {
    using namespace edm; using namespace std;
    auto_ptr<ValueMap<T> > valMap(new ValueMap<T>());
    typename edm::ValueMap<T>::Filler filler(*valMap);
    filler.insert(handle, values.begin(), values.end());
    filler.fill();
    iEvent.put(valMap, label);
}

//define this as a plug-in
DEFINE_FWK_MODULE(HighPtMuonVariables);
