void addHighPTIDflag(){

    TString fname = "dcap://t3se01.psi.ch:22125//pnfs/psi.ch/cms/trivcat/store/user/jngadiub/TagAndProbe_25ns/muons/tnpZ_Data.root";//"tnpZ_Data_test.root";
    TFile* file = TFile::Open(fname,"READ");
    TTree* tree = (TTree*)file->Get("tpTree/fitter_tree");
       
    std::cout << "Adding HighPTID column ..." << std::endl;
    int Glb, HighPTID;
    float glbValidMuHits,numberOfMatchedStations,tkSigmaPtOverPt,dB,dzPV,tkValidPixelHits,tkTrackerLay,tkIso,tkIsoRel,pt;
    tree->SetBranchAddress("Glb", &Glb);
    tree->SetBranchAddress("glbValidMuHits", &glbValidMuHits);
    tree->SetBranchAddress("numberOfMatchedStations", &numberOfMatchedStations);
    tree->SetBranchAddress("tkSigmaPtOverPt", &tkSigmaPtOverPt);
    tree->SetBranchAddress("dB", &dB);
    tree->SetBranchAddress("dzPV", &dzPV);
    tree->SetBranchAddress("tkValidPixelHits", &tkValidPixelHits);
    tree->SetBranchAddress("tkTrackerLay", &tkTrackerLay);
    tree->SetBranchAddress("tkIso", &tkIso);
    tree->SetBranchAddress("pt", &pt);

    TFile *fOut = new TFile("tnpZ_Data_withHighPTID.root", "RECREATE");    
    fOut->mkdir("tpTree")->cd();
    TTree *tOut = tree->CloneTree(0);
    tOut->Branch("HighPTID", &HighPTID, "HighPTID/I");    
    tOut->Branch("tkIsoRel", &tkIsoRel, "tkIsoRel/F");    
    int step = tree->GetEntries()/100;
    double evDenom = 100.0/double(tree->GetEntries());
    for (int i = 0, n = tree->GetEntries(); i < n; ++i) {
        tree->GetEntry(i);
        HighPTID = 0;
	tkIsoRel = tkIso/pt;
        if( Glb && glbValidMuHits > 0 && numberOfMatchedStations > 1 && 
            tkSigmaPtOverPt < 0.3 && dB < 0.2 && dzPV < 0.5 && tkValidPixelHits > 0 && tkTrackerLay > 5 ) HighPTID = 1;
        tOut->Fill();
        if ((i+1) % step == 0) std::cout << "Done " << i << "/" << n << std::endl;
    }

    tOut->AutoSave(); // according to root tutorial this is the right thing to do

    std::cout << "Wrote output to " << fOut->GetName() << std::endl;
    fOut->Close();
       
   
}
