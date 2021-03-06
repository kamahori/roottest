//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Trk__CompetingRIOsOnTrack_p1_h
#define Trk__CompetingRIOsOnTrack_p1_h
namespace Trk {
class CompetingRIOsOnTrack_p1;
} // end of namespace.

#include "TPObjRef.h"
#include "Riostream.h"
#include <vector>

namespace Trk {
class CompetingRIOsOnTrack_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   TPObjRef    m_localParameters;    //
   TPObjRef    m_localErrorMatrix;    //
   vector<float> m_assignProb;          //

   CompetingRIOsOnTrack_p1();
   CompetingRIOsOnTrack_p1(const CompetingRIOsOnTrack_p1 & );
   virtual ~CompetingRIOsOnTrack_p1();

};
} // namespace
#endif
