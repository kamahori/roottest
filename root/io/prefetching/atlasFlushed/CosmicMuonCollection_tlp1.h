//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef CosmicMuonCollection_tlp1_h
#define CosmicMuonCollection_tlp1_h
class CosmicMuonCollection_tlp1;

#include "Riostream.h"
#include <vector>
#include "CosmicMuonCollection_p1.h"
#include "CosmicMuon_p1.h"

class CosmicMuonCollection_tlp1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<CosmicMuonCollection_p1> m_cosmicMuonCollectionVec;    //(CosmicMuonCollection_p1)
   vector<CosmicMuon_p1>           m_cosmicMuonVec;              //(CosmicMuon_p1)

   CosmicMuonCollection_tlp1();
   CosmicMuonCollection_tlp1(const CosmicMuonCollection_tlp1 & );
   virtual ~CosmicMuonCollection_tlp1();

};
#endif
