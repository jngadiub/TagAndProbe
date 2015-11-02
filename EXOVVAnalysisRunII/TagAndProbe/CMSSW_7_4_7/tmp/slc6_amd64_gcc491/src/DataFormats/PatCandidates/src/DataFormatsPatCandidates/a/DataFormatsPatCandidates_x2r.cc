// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdIDataFormatsdIPatCandidatesdIsrcdIDataFormatsPatCandidatesdIadIDataFormatsPatCandidates_x2r

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/DataFormats/PatCandidates/src/classes_user.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *patcLcLUserData_Dictionary();
   static void patcLcLUserData_TClassManip(TClass*);
   static void delete_patcLcLUserData(void *p);
   static void deleteArray_patcLcLUserData(void *p);
   static void destruct_patcLcLUserData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserData*)
   {
      ::pat::UserData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserData));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserData", 10, "DataFormats/PatCandidates/interface/UserData.h", 25,
                  typeid(::pat::UserData), DefineBehavior(ptr, ptr),
                  &patcLcLUserData_Dictionary, isa_proxy, 8,
                  sizeof(::pat::UserData) );
      instance.SetDelete(&delete_patcLcLUserData);
      instance.SetDeleteArray(&deleteArray_patcLcLUserData);
      instance.SetDestructor(&destruct_patcLcLUserData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserData*)
   {
      return GenerateInitInstanceLocal((::pat::UserData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserData*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserData*)0x0)->GetClass();
      patcLcLUserData_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR_Dictionary();
   static void edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p = 0);
   static void *newArray_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p);
   static void deleteArray_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p);
   static void destruct_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)
   {
      ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >", ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >::Class_Version(), "DataFormats/Common/interface/OwnVector.h", 25,
                  typeid(::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >), DefineBehavior(ptr, ptr),
                  &edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >) );
      instance.SetNew(&new_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR);
      instance.SetDelete(&delete_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR);

      ROOT::AddClassAlternate("edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >","pat::UserDataCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)
   {
      return GenerateInitInstanceLocal((::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)0x0)->GetClass();
      edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)
   {
      ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >", ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >","edm::Wrapper<pat::UserDataCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrlEpatcLcLUserDatagR_Dictionary();
   static void edmcLcLPtrlEpatcLcLUserDatagR_TClassManip(TClass*);
   static void *new_edmcLcLPtrlEpatcLcLUserDatagR(void *p = 0);
   static void *newArray_edmcLcLPtrlEpatcLcLUserDatagR(Long_t size, void *p);
   static void delete_edmcLcLPtrlEpatcLcLUserDatagR(void *p);
   static void deleteArray_edmcLcLPtrlEpatcLcLUserDatagR(void *p);
   static void destruct_edmcLcLPtrlEpatcLcLUserDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ptr<pat::UserData>*)
   {
      ::edm::Ptr<pat::UserData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ptr<pat::UserData>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ptr<pat::UserData>", ::edm::Ptr<pat::UserData>::Class_Version(), "DataFormats/Common/interface/Ptr.h", 39,
                  typeid(::edm::Ptr<pat::UserData>), DefineBehavior(ptr, ptr),
                  &edmcLcLPtrlEpatcLcLUserDatagR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ptr<pat::UserData>) );
      instance.SetNew(&new_edmcLcLPtrlEpatcLcLUserDatagR);
      instance.SetNewArray(&newArray_edmcLcLPtrlEpatcLcLUserDatagR);
      instance.SetDelete(&delete_edmcLcLPtrlEpatcLcLUserDatagR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrlEpatcLcLUserDatagR);
      instance.SetDestructor(&destruct_edmcLcLPtrlEpatcLcLUserDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ptr<pat::UserData>*)
   {
      return GenerateInitInstanceLocal((::edm::Ptr<pat::UserData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ptr<pat::UserData>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrlEpatcLcLUserDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ptr<pat::UserData>*)0x0)->GetClass();
      edmcLcLPtrlEpatcLcLUserDatagR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrlEpatcLcLUserDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR_Dictionary();
   static void edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p);
   static void deleteArray_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p);
   static void destruct_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<edm::Ptr<pat::UserData> >*)
   {
      ::edm::ValueMap<edm::Ptr<pat::UserData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<edm::Ptr<pat::UserData> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<edm::Ptr<pat::UserData> >", ::edm::ValueMap<edm::Ptr<pat::UserData> >::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<edm::Ptr<pat::UserData> >), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<edm::Ptr<pat::UserData> >) );
      instance.SetNew(&new_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<edm::Ptr<pat::UserData> >*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<edm::Ptr<pat::UserData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<edm::Ptr<pat::UserData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<edm::Ptr<pat::UserData> >*)0x0)->GetClass();
      edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)
   {
      ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >", ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR_Dictionary();
   static void patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<vector<unsigned int> >*)
   {
      ::pat::UserHolder<vector<unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<vector<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<vector<unsigned int> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<vector<unsigned int> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<vector<unsigned int> >) );
      instance.SetNew(&new_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<vector<unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<vector<unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<vector<unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<vector<unsigned int> >*)0x0)->GetClass();
      patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlErecocLcLVertexgR_Dictionary();
   static void patcLcLUserHolderlErecocLcLVertexgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlErecocLcLVertexgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlErecocLcLVertexgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlErecocLcLVertexgR(void *p);
   static void deleteArray_patcLcLUserHolderlErecocLcLVertexgR(void *p);
   static void destruct_patcLcLUserHolderlErecocLcLVertexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<reco::Vertex>*)
   {
      ::pat::UserHolder<reco::Vertex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<reco::Vertex>));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<reco::Vertex>", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<reco::Vertex>), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlErecocLcLVertexgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<reco::Vertex>) );
      instance.SetNew(&new_patcLcLUserHolderlErecocLcLVertexgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlErecocLcLVertexgR);
      instance.SetDelete(&delete_patcLcLUserHolderlErecocLcLVertexgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlErecocLcLVertexgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlErecocLcLVertexgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<reco::Vertex>*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<reco::Vertex>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<reco::Vertex>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlErecocLcLVertexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<reco::Vertex>*)0x0)->GetClass();
      patcLcLUserHolderlErecocLcLVertexgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlErecocLcLVertexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlErecocLcLTrackgR_Dictionary();
   static void patcLcLUserHolderlErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlErecocLcLTrackgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlErecocLcLTrackgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlErecocLcLTrackgR(void *p);
   static void deleteArray_patcLcLUserHolderlErecocLcLTrackgR(void *p);
   static void destruct_patcLcLUserHolderlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<reco::Track>*)
   {
      ::pat::UserHolder<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<reco::Track>", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<reco::Track>), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlErecocLcLTrackgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<reco::Track>) );
      instance.SetNew(&new_patcLcLUserHolderlErecocLcLTrackgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlErecocLcLTrackgR);
      instance.SetDelete(&delete_patcLcLUserHolderlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<reco::Track>*)0x0)->GetClass();
      patcLcLUserHolderlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SVector<double,5> >*)
   {
      ::pat::UserHolder<ROOT::Math::SVector<double,5> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SVector<double,5> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SVector<double,5> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SVector<double,5> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SVector<double,5> >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SVector<double,5> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SVector<double,5> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,5> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,5> >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SVector<double,4> >*)
   {
      ::pat::UserHolder<ROOT::Math::SVector<double,4> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SVector<double,4> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SVector<double,4> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SVector<double,4> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SVector<double,4> >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SVector<double,4> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SVector<double,4> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,4> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,4> >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SVector<double,3> >*)
   {
      ::pat::UserHolder<ROOT::Math::SVector<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SVector<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SVector<double,3> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SVector<double,3> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SVector<double,3> >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SVector<double,3> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SVector<double,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,3> >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SVector<double,2> >*)
   {
      ::pat::UserHolder<ROOT::Math::SVector<double,2> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SVector<double,2> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SVector<double,2> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SVector<double,2> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SVector<double,2> >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SVector<double,2> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SVector<double,2> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,2> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SVector<double,2> >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)
   {
      ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)
   {
      ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)
   {
      ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)
   {
      ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)
   {
      ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)
   {
      ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary();
   static void patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >) );
      instance.SetNew(&new_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)0x0)->GetClass();
      patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_patcLcLUserData(void *p) {
      delete ((::pat::UserData*)p);
   }
   static void deleteArray_patcLcLUserData(void *p) {
      delete [] ((::pat::UserData*)p);
   }
   static void destruct_patcLcLUserData(void *p) {
      typedef ::pat::UserData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserData

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > : new ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >;
   }
   static void *newArray_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >[nElements] : new ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p) {
      delete ((::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)p);
   }
   static void deleteArray_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p) {
      delete [] ((::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >*)p);
   }
   static void destruct_edmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgR(void *p) {
      typedef ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > > : new ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >[nElements] : new ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLOwnVectorlEpatcLcLUserDatacOedmcLcLClonePolicylEpatcLcLUserDatagRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrlEpatcLcLUserDatagR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ptr<pat::UserData> : new ::edm::Ptr<pat::UserData>;
   }
   static void *newArray_edmcLcLPtrlEpatcLcLUserDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ptr<pat::UserData>[nElements] : new ::edm::Ptr<pat::UserData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrlEpatcLcLUserDatagR(void *p) {
      delete ((::edm::Ptr<pat::UserData>*)p);
   }
   static void deleteArray_edmcLcLPtrlEpatcLcLUserDatagR(void *p) {
      delete [] ((::edm::Ptr<pat::UserData>*)p);
   }
   static void destruct_edmcLcLPtrlEpatcLcLUserDatagR(void *p) {
      typedef ::edm::Ptr<pat::UserData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ptr<pat::UserData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<edm::Ptr<pat::UserData> > : new ::edm::ValueMap<edm::Ptr<pat::UserData> >;
   }
   static void *newArray_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<edm::Ptr<pat::UserData> >[nElements] : new ::edm::ValueMap<edm::Ptr<pat::UserData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      delete ((::edm::ValueMap<edm::Ptr<pat::UserData> >*)p);
   }
   static void deleteArray_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      delete [] ((::edm::ValueMap<edm::Ptr<pat::UserData> >*)p);
   }
   static void destruct_edmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      typedef ::edm::ValueMap<edm::Ptr<pat::UserData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<edm::Ptr<pat::UserData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > > : new ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >[nElements] : new ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLPtrlEpatcLcLUserDatagRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<vector<unsigned int> > : new ::pat::UserHolder<vector<unsigned int> >;
   }
   static void *newArray_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<vector<unsigned int> >[nElements] : new ::pat::UserHolder<vector<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete ((::pat::UserHolder<vector<unsigned int> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<vector<unsigned int> >*)p);
   }
   static void destruct_patcLcLUserHolderlEvectorlEunsignedsPintgRsPgR(void *p) {
      typedef ::pat::UserHolder<vector<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<vector<unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlErecocLcLVertexgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<reco::Vertex> : new ::pat::UserHolder<reco::Vertex>;
   }
   static void *newArray_patcLcLUserHolderlErecocLcLVertexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<reco::Vertex>[nElements] : new ::pat::UserHolder<reco::Vertex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlErecocLcLVertexgR(void *p) {
      delete ((::pat::UserHolder<reco::Vertex>*)p);
   }
   static void deleteArray_patcLcLUserHolderlErecocLcLVertexgR(void *p) {
      delete [] ((::pat::UserHolder<reco::Vertex>*)p);
   }
   static void destruct_patcLcLUserHolderlErecocLcLVertexgR(void *p) {
      typedef ::pat::UserHolder<reco::Vertex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<reco::Vertex>

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<reco::Track> : new ::pat::UserHolder<reco::Track>;
   }
   static void *newArray_patcLcLUserHolderlErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<reco::Track>[nElements] : new ::pat::UserHolder<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlErecocLcLTrackgR(void *p) {
      delete ((::pat::UserHolder<reco::Track>*)p);
   }
   static void deleteArray_patcLcLUserHolderlErecocLcLTrackgR(void *p) {
      delete [] ((::pat::UserHolder<reco::Track>*)p);
   }
   static void destruct_patcLcLUserHolderlErecocLcLTrackgR(void *p) {
      typedef ::pat::UserHolder<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,5> > : new ::pat::UserHolder<ROOT::Math::SVector<double,5> >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,5> >[nElements] : new ::pat::UserHolder<ROOT::Math::SVector<double,5> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SVector<double,5> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SVector<double,5> >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO5gRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SVector<double,5> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SVector<double,5> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,4> > : new ::pat::UserHolder<ROOT::Math::SVector<double,4> >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,4> >[nElements] : new ::pat::UserHolder<ROOT::Math::SVector<double,4> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SVector<double,4> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SVector<double,4> >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO4gRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SVector<double,4> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SVector<double,4> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,3> > : new ::pat::UserHolder<ROOT::Math::SVector<double,3> >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,3> >[nElements] : new ::pat::UserHolder<ROOT::Math::SVector<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SVector<double,3> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SVector<double,3> >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO3gRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SVector<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SVector<double,3> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,2> > : new ::pat::UserHolder<ROOT::Math::SVector<double,2> >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SVector<double,2> >[nElements] : new ::pat::UserHolder<ROOT::Math::SVector<double,2> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SVector<double,2> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SVector<double,2> >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSVectorlEdoublecO2gRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SVector<double,2> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SVector<double,2> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > > : new ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >[nElements] : new ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO5cO5cOROOTcLcLMathcLcLMatRepSymlEdoublecO5gRsPgRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > > : new ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >[nElements] : new ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO4cO4cOROOTcLcLMathcLcLMatRepSymlEdoublecO4gRsPgRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > > : new ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >[nElements] : new ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO3cO3cOROOTcLcLMathcLcLMatRepSymlEdoublecO3gRsPgRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > > : new ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >[nElements] : new ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLSMatrixlEdoublecO2cO2cOROOTcLcLMathcLcLMatRepSymlEdoublecO2gRsPgRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > > : new ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >[nElements] : new ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPtEtaPhiM4DlEdoublegRsPgRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > : new ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >[nElements] : new ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > : new ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLPositionVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > : new ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >;
   }
   static void *newArray_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements] : new ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete ((::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void deleteArray_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      delete [] ((::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*)p);
   }
   static void destruct_patcLcLUserHolderlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgR(void *p) {
      typedef ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >

namespace ROOT {
   static TClass *vectorlEpatcLcLUserDatamUgR_Dictionary();
   static void vectorlEpatcLcLUserDatamUgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLUserDatamUgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLUserDatamUgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLUserDatamUgR(void *p);
   static void deleteArray_vectorlEpatcLcLUserDatamUgR(void *p);
   static void destruct_vectorlEpatcLcLUserDatamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::UserData*>*)
   {
      vector<pat::UserData*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::UserData*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::UserData*>", -2, "vector", 214,
                  typeid(vector<pat::UserData*>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLUserDatamUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::UserData*>) );
      instance.SetNew(&new_vectorlEpatcLcLUserDatamUgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLUserDatamUgR);
      instance.SetDelete(&delete_vectorlEpatcLcLUserDatamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLUserDatamUgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLUserDatamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::UserData*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::UserData*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLUserDatamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::UserData*>*)0x0)->GetClass();
      vectorlEpatcLcLUserDatamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLUserDatamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLUserDatamUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::UserData*> : new vector<pat::UserData*>;
   }
   static void *newArray_vectorlEpatcLcLUserDatamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::UserData*>[nElements] : new vector<pat::UserData*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLUserDatamUgR(void *p) {
      delete ((vector<pat::UserData*>*)p);
   }
   static void deleteArray_vectorlEpatcLcLUserDatamUgR(void *p) {
      delete [] ((vector<pat::UserData*>*)p);
   }
   static void destruct_vectorlEpatcLcLUserDatamUgR(void *p) {
      typedef vector<pat::UserData*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::UserData*>

namespace ROOT {
   static TClass *vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR_Dictionary();
   static void vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p);
   static void destruct_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ptr<pat::UserData> >*)
   {
      vector<edm::Ptr<pat::UserData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ptr<pat::UserData> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ptr<pat::UserData> >", -2, "vector", 214,
                  typeid(vector<edm::Ptr<pat::UserData> >), DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ptr<pat::UserData> >) );
      instance.SetNew(&new_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ptr<pat::UserData> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ptr<pat::UserData> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ptr<pat::UserData> >*)0x0)->GetClass();
      vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<edm::Ptr<pat::UserData> > : new vector<edm::Ptr<pat::UserData> >;
   }
   static void *newArray_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<edm::Ptr<pat::UserData> >[nElements] : new vector<edm::Ptr<pat::UserData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      delete ((vector<edm::Ptr<pat::UserData> >*)p);
   }
   static void deleteArray_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      delete [] ((vector<edm::Ptr<pat::UserData> >*)p);
   }
   static void destruct_vectorlEedmcLcLPtrlEpatcLcLUserDatagRsPgR(void *p) {
      typedef vector<edm::Ptr<pat::UserData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ptr<pat::UserData> >

namespace {
  void TriggerDictionaryInitialization_DataFormatsPatCandidates_x2r_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/shome/jngadiub/EXOVVAnalysisRunII/TagAndProbe/CMSSW_7_4_7/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw/CMSSW_7_4_7/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd5/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/pcre/7.9__8.33-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/boost/1.57.0-jlbgio/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/bz2lib/1.0.5-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/clhep/2.1.4.1-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/gsl/1.10-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/hepmc/2.06.07-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/libuuid/2.22.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/tbb/43_20141023oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/zlib/1.2.8-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd5/include",
"/shome/jngadiub/EXOVVAnalysisRunII/TagAndProbe/CMSSW_7_4_7/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  UserData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace edm{template <typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  ClonePolicy;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  Ptr;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/ValueMap.h")))  ValueMap;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Vertexing.h")))  Vertex;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Vertexing.h")))  Track;}
namespace ROOT{namespace Math{template <class T, unsigned int D> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  SVector;
}}
namespace ROOT{namespace Math{template <class T, unsigned int D> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  MatRepSym;
}}
namespace ROOT{namespace Math{template <class ScalarType> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  PtEtaPhiM4D;
}}
namespace ROOT{namespace Math{template <class CoordSystem> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  LorentzVector;
}}
namespace ROOT{namespace Math{template <class ScalarType = double> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  PxPyPzE4D;
}}
namespace ROOT{namespace Math{template <class T = double> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  Cartesian3D;
}}
namespace ROOT{namespace Math{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  DefaultCoordinateSystemTag;}}
namespace ROOT{namespace Math{template <class CoordSystem, class Tag = ROOT::Math::DefaultCoordinateSystemTag> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  PositionVector3D;
}}
namespace ROOT{namespace Math{template <class CoordSystem, class Tag = ROOT::Math::DefaultCoordinateSystemTag> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  DisplacementVector3D;
}}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_7_4_7"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_7_4_7"
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "DataFormats/Common/interface/ValueMap.h"
#include "DataFormats/Common/interface/Association.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/PtrVector.h"

#include "DataFormats/PatCandidates/interface/PATObject.h"

#include "DataFormats/PatCandidates/interface/Vertexing.h"

#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/TrackReco/interface/Track.h"

namespace DataFormats_PatCandidates {
  struct dictionaryuser {

  /*   UserData: Core   */
  pat::UserDataCollection	         ov_p_ud;
  /*   UserData: Standalone UserData in the event. Needed?   */
  edm::Wrapper<pat::UserDataCollection>	 w_ov_p_ud;
  edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > > w_vm_ptr_p_ud;
  edm::Ptr<pat::UserData> yadda_pat_ptr_userdata;
  /*   UserData: a few holders   */
  pat::UserHolder<math::XYZVector>	         p_udh_v3d;
  pat::UserHolder<math::XYZPoint>	         p_udh_p3d;
  pat::UserHolder<math::XYZTLorentzVector>	 p_udh_lv;
  pat::UserHolder<math::PtEtaPhiMLorentzVector>	 p_udh_plv;
  pat::UserHolder<AlgebraicSymMatrix22>          p_udh_smat_22;
  pat::UserHolder<AlgebraicSymMatrix33>          p_udh_smat_33;
  pat::UserHolder<AlgebraicSymMatrix44>          p_udh_smat_44;
  pat::UserHolder<AlgebraicSymMatrix55>          p_udh_smat_55;
  pat::UserHolder<AlgebraicVector2>              p_udh_vec_2;
  pat::UserHolder<AlgebraicVector3>              p_udh_vec_3;
  pat::UserHolder<AlgebraicVector4>              p_udh_vec_4;
  pat::UserHolder<AlgebraicVector5>              p_udh_vec_5;
  pat::UserHolder<reco::Track>                   p_udh_tk;
  pat::UserHolder<reco::Vertex>                  p_udh_vtx;
  pat::UserHolder<std::vector<unsigned int> >    p_udh_vunit;

  };

}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> >", payloadCode, "@",
"edm::Ptr<pat::UserData>", payloadCode, "@",
"edm::ValueMap<edm::Ptr<pat::UserData> >", payloadCode, "@",
"edm::Wrapper<edm::OwnVector<pat::UserData,edm::ClonePolicy<pat::UserData> > >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<edm::Ptr<pat::UserData> > >", payloadCode, "@",
"edm::Wrapper<pat::UserDataCollection>", payloadCode, "@",
"pat::UserData", payloadCode, "@",
"pat::UserDataCollection", payloadCode, "@",
"pat::UserHolder<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SMatrix<double,2,2,ROOT::Math::MatRepSym<double,2> > >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SMatrix<double,3,3,ROOT::Math::MatRepSym<double,3> > >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SMatrix<double,4,4,ROOT::Math::MatRepSym<double,4> > >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SMatrix<double,5,5,ROOT::Math::MatRepSym<double,5> > >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SVector<double,2> >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SVector<double,3> >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SVector<double,4> >", payloadCode, "@",
"pat::UserHolder<ROOT::Math::SVector<double,5> >", payloadCode, "@",
"pat::UserHolder<reco::Track>", payloadCode, "@",
"pat::UserHolder<reco::Vertex>", payloadCode, "@",
"pat::UserHolder<vector<unsigned int> >", payloadCode, "@",
"vector<edm::Ptr<pat::UserData> >", payloadCode, "@",
"vector<pat::UserData*>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsPatCandidates_x2r",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsPatCandidates_x2r_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsPatCandidates_x2r_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsPatCandidates_x2r() {
  TriggerDictionaryInitialization_DataFormatsPatCandidates_x2r_Impl();
}
