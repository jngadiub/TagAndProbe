// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdIDataFormatsdIPatCandidatesdIsrcdIDataFormatsPatCandidatesdIadIDataFormatsPatCandidates_xr

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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "src/DataFormats/PatCandidates/src/classes_other.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEstringcOvectorlEfloatgRsPgR_Dictionary();
   static void pairlEstringcOvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_pairlEstringcOvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_pairlEstringcOvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_pairlEstringcOvectorlEfloatgRsPgR(void *p);
   static void deleteArray_pairlEstringcOvectorlEfloatgRsPgR(void *p);
   static void destruct_pairlEstringcOvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,vector<float> >*)
   {
      pair<string,vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,vector<float> >", "string", 96,
                  typeid(pair<string,vector<float> >), DefineBehavior(ptr, ptr),
                  &pairlEstringcOvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,vector<float> >) );
      instance.SetNew(&new_pairlEstringcOvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_pairlEstringcOvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_pairlEstringcOvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_pairlEstringcOvectorlEfloatgRsPgR);

      ROOT::AddClassAlternate("pair<string,vector<float> >","pair<std::string,std::vector<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,vector<float> >*)0x0)->GetClass();
      pairlEstringcOvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pair<string,vector<float> > >*)
   {
      ::edm::Wrapper<pair<string,vector<float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pair<string,vector<float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pair<string,vector<float> > >", ::edm::Wrapper<pair<string,vector<float> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<pair<string,vector<float> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<pair<string,vector<float> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<pair<string,vector<float> > >","edm::Wrapper<std::pair<std::string,std::vector<float> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pair<string,vector<float> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pair<string,vector<float> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pair<string,vector<float> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pair<string,vector<float> > >*)0x0)->GetClass();
      edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pair<string,vector<float> > > >*)
   {
      ::edm::Wrapper<vector<pair<string,vector<float> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pair<string,vector<float> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pair<string,vector<float> > > >", ::edm::Wrapper<vector<pair<string,vector<float> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pair<string,vector<float> > > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pair<string,vector<float> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pair<string,vector<float> > > >","edm::Wrapper<std::vector<pat::JetCorrFactors::CorrectionFactor> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pair<string,vector<float> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pair<string,vector<float> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pair<string,vector<float> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pair<string,vector<float> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLJetCorrFactors_Dictionary();
   static void patcLcLJetCorrFactors_TClassManip(TClass*);
   static void *new_patcLcLJetCorrFactors(void *p = 0);
   static void *newArray_patcLcLJetCorrFactors(Long_t size, void *p);
   static void delete_patcLcLJetCorrFactors(void *p);
   static void deleteArray_patcLcLJetCorrFactors(void *p);
   static void destruct_patcLcLJetCorrFactors(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::JetCorrFactors*)
   {
      ::pat::JetCorrFactors *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::JetCorrFactors));
      static ::ROOT::TGenericClassInfo 
         instance("pat::JetCorrFactors", 10, "DataFormats/PatCandidates/interface/JetCorrFactors.h", 37,
                  typeid(::pat::JetCorrFactors), DefineBehavior(ptr, ptr),
                  &patcLcLJetCorrFactors_Dictionary, isa_proxy, 8,
                  sizeof(::pat::JetCorrFactors) );
      instance.SetNew(&new_patcLcLJetCorrFactors);
      instance.SetNewArray(&newArray_patcLcLJetCorrFactors);
      instance.SetDelete(&delete_patcLcLJetCorrFactors);
      instance.SetDeleteArray(&deleteArray_patcLcLJetCorrFactors);
      instance.SetDestructor(&destruct_patcLcLJetCorrFactors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::JetCorrFactors*)
   {
      return GenerateInitInstanceLocal((::pat::JetCorrFactors*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::JetCorrFactors*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLJetCorrFactors_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::JetCorrFactors*)0x0)->GetClass();
      patcLcLJetCorrFactors_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLJetCorrFactors_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEpatcLcLJetCorrFactorsgR_Dictionary();
   static void edmcLcLValueMaplEpatcLcLJetCorrFactorsgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p);
   static void deleteArray_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p);
   static void destruct_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<pat::JetCorrFactors>*)
   {
      ::edm::ValueMap<pat::JetCorrFactors> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<pat::JetCorrFactors>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<pat::JetCorrFactors>", ::edm::ValueMap<pat::JetCorrFactors>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<pat::JetCorrFactors>), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEpatcLcLJetCorrFactorsgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<pat::JetCorrFactors>) );
      instance.SetNew(&new_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<pat::JetCorrFactors>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<pat::JetCorrFactors>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<pat::JetCorrFactors>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEpatcLcLJetCorrFactorsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<pat::JetCorrFactors>*)0x0)->GetClass();
      edmcLcLValueMaplEpatcLcLJetCorrFactorsgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEpatcLcLJetCorrFactorsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)
   {
      ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >", ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTauJetCorrFactors_Dictionary();
   static void patcLcLTauJetCorrFactors_TClassManip(TClass*);
   static void *new_patcLcLTauJetCorrFactors(void *p = 0);
   static void *newArray_patcLcLTauJetCorrFactors(Long_t size, void *p);
   static void delete_patcLcLTauJetCorrFactors(void *p);
   static void deleteArray_patcLcLTauJetCorrFactors(void *p);
   static void destruct_patcLcLTauJetCorrFactors(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TauJetCorrFactors*)
   {
      ::pat::TauJetCorrFactors *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TauJetCorrFactors));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TauJetCorrFactors", "DataFormats/PatCandidates/interface/TauJetCorrFactors.h", 31,
                  typeid(::pat::TauJetCorrFactors), DefineBehavior(ptr, ptr),
                  &patcLcLTauJetCorrFactors_Dictionary, isa_proxy, 0,
                  sizeof(::pat::TauJetCorrFactors) );
      instance.SetNew(&new_patcLcLTauJetCorrFactors);
      instance.SetNewArray(&newArray_patcLcLTauJetCorrFactors);
      instance.SetDelete(&delete_patcLcLTauJetCorrFactors);
      instance.SetDeleteArray(&deleteArray_patcLcLTauJetCorrFactors);
      instance.SetDestructor(&destruct_patcLcLTauJetCorrFactors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TauJetCorrFactors*)
   {
      return GenerateInitInstanceLocal((::pat::TauJetCorrFactors*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TauJetCorrFactors*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTauJetCorrFactors_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TauJetCorrFactors*)0x0)->GetClass();
      patcLcLTauJetCorrFactors_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTauJetCorrFactors_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR_Dictionary();
   static void edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p);
   static void deleteArray_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p);
   static void destruct_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<pat::TauJetCorrFactors>*)
   {
      ::edm::ValueMap<pat::TauJetCorrFactors> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<pat::TauJetCorrFactors>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<pat::TauJetCorrFactors>", ::edm::ValueMap<pat::TauJetCorrFactors>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<pat::TauJetCorrFactors>), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<pat::TauJetCorrFactors>) );
      instance.SetNew(&new_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<pat::TauJetCorrFactors>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<pat::TauJetCorrFactors>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<pat::TauJetCorrFactors>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<pat::TauJetCorrFactors>*)0x0)->GetClass();
      edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)
   {
      ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >", ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StringMap_Dictionary();
   static void StringMap_TClassManip(TClass*);
   static void *new_StringMap(void *p = 0);
   static void *newArray_StringMap(Long_t size, void *p);
   static void delete_StringMap(void *p);
   static void deleteArray_StringMap(void *p);
   static void destruct_StringMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StringMap*)
   {
      ::StringMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StringMap));
      static ::ROOT::TGenericClassInfo 
         instance("StringMap", 10, "DataFormats/PatCandidates/interface/StringMap.h", 8,
                  typeid(::StringMap), DefineBehavior(ptr, ptr),
                  &StringMap_Dictionary, isa_proxy, 8,
                  sizeof(::StringMap) );
      instance.SetNew(&new_StringMap);
      instance.SetNewArray(&newArray_StringMap);
      instance.SetDelete(&delete_StringMap);
      instance.SetDeleteArray(&deleteArray_StringMap);
      instance.SetDestructor(&destruct_StringMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StringMap*)
   {
      return GenerateInitInstanceLocal((::StringMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StringMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StringMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::StringMap*)0x0)->GetClass();
      StringMap_TClassManip(theClass);
   return theClass;
   }

   static void StringMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEStringMapgR_Dictionary();
   static void edmcLcLWrapperlEStringMapgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEStringMapgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEStringMapgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEStringMapgR(void *p);
   static void deleteArray_edmcLcLWrapperlEStringMapgR(void *p);
   static void destruct_edmcLcLWrapperlEStringMapgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<StringMap>*)
   {
      ::edm::Wrapper<StringMap> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<StringMap>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<StringMap>", ::edm::Wrapper<StringMap>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<StringMap>), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEStringMapgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<StringMap>) );
      instance.SetNew(&new_edmcLcLWrapperlEStringMapgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEStringMapgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEStringMapgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEStringMapgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEStringMapgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<StringMap>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<StringMap>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<StringMap>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEStringMapgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<StringMap>*)0x0)->GetClass();
      edmcLcLWrapperlEStringMapgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEStringMapgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLVertexAssociation_Dictionary();
   static void patcLcLVertexAssociation_TClassManip(TClass*);
   static void *new_patcLcLVertexAssociation(void *p = 0);
   static void *newArray_patcLcLVertexAssociation(Long_t size, void *p);
   static void delete_patcLcLVertexAssociation(void *p);
   static void deleteArray_patcLcLVertexAssociation(void *p);
   static void destruct_patcLcLVertexAssociation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::VertexAssociation*)
   {
      ::pat::VertexAssociation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::VertexAssociation));
      static ::ROOT::TGenericClassInfo 
         instance("pat::VertexAssociation", 10, "DataFormats/PatCandidates/interface/Vertexing.h", 26,
                  typeid(::pat::VertexAssociation), DefineBehavior(ptr, ptr),
                  &patcLcLVertexAssociation_Dictionary, isa_proxy, 8,
                  sizeof(::pat::VertexAssociation) );
      instance.SetNew(&new_patcLcLVertexAssociation);
      instance.SetNewArray(&newArray_patcLcLVertexAssociation);
      instance.SetDelete(&delete_patcLcLVertexAssociation);
      instance.SetDeleteArray(&deleteArray_patcLcLVertexAssociation);
      instance.SetDestructor(&destruct_patcLcLVertexAssociation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::VertexAssociation*)
   {
      return GenerateInitInstanceLocal((::pat::VertexAssociation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::VertexAssociation*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLVertexAssociation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::VertexAssociation*)0x0)->GetClass();
      patcLcLVertexAssociation_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLVertexAssociation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEpatcLcLVertexAssociationgR_Dictionary();
   static void edmcLcLValueMaplEpatcLcLVertexAssociationgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEpatcLcLVertexAssociationgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p);
   static void deleteArray_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p);
   static void destruct_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<pat::VertexAssociation>*)
   {
      ::edm::ValueMap<pat::VertexAssociation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<pat::VertexAssociation>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<pat::VertexAssociation>", ::edm::ValueMap<pat::VertexAssociation>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<pat::VertexAssociation>), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEpatcLcLVertexAssociationgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<pat::VertexAssociation>) );
      instance.SetNew(&new_edmcLcLValueMaplEpatcLcLVertexAssociationgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEpatcLcLVertexAssociationgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEpatcLcLVertexAssociationgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEpatcLcLVertexAssociationgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEpatcLcLVertexAssociationgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<pat::VertexAssociation>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<pat::VertexAssociation>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<pat::VertexAssociation>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEpatcLcLVertexAssociationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<pat::VertexAssociation>*)0x0)->GetClass();
      edmcLcLValueMaplEpatcLcLVertexAssociationgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEpatcLcLVertexAssociationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)
   {
      ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >", ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLEventHypothesis_Dictionary();
   static void patcLcLEventHypothesis_TClassManip(TClass*);
   static void *new_patcLcLEventHypothesis(void *p = 0);
   static void *newArray_patcLcLEventHypothesis(Long_t size, void *p);
   static void delete_patcLcLEventHypothesis(void *p);
   static void deleteArray_patcLcLEventHypothesis(void *p);
   static void destruct_patcLcLEventHypothesis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::EventHypothesis*)
   {
      ::pat::EventHypothesis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::EventHypothesis));
      static ::ROOT::TGenericClassInfo 
         instance("pat::EventHypothesis", 10, "DataFormats/PatCandidates/interface/EventHypothesis.h", 26,
                  typeid(::pat::EventHypothesis), DefineBehavior(ptr, ptr),
                  &patcLcLEventHypothesis_Dictionary, isa_proxy, 8,
                  sizeof(::pat::EventHypothesis) );
      instance.SetNew(&new_patcLcLEventHypothesis);
      instance.SetNewArray(&newArray_patcLcLEventHypothesis);
      instance.SetDelete(&delete_patcLcLEventHypothesis);
      instance.SetDeleteArray(&deleteArray_patcLcLEventHypothesis);
      instance.SetDestructor(&destruct_patcLcLEventHypothesis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::EventHypothesis*)
   {
      return GenerateInitInstanceLocal((::pat::EventHypothesis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::EventHypothesis*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLEventHypothesis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::EventHypothesis*)0x0)->GetClass();
      patcLcLEventHypothesis_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLEventHypothesis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::EventHypothesis> >*)
   {
      ::edm::Wrapper<vector<pat::EventHypothesis> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::EventHypothesis> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::EventHypothesis> >", ::edm::Wrapper<vector<pat::EventHypothesis> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::EventHypothesis> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::EventHypothesis> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::EventHypothesis> >","edm::Wrapper<std::vector<pat::EventHypothesis> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::EventHypothesis> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::EventHypothesis> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::EventHypothesis> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::EventHypothesis> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR_Dictionary();
   static void pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR_TClassManip(TClass*);
   static void *new_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p = 0);
   static void *newArray_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(Long_t size, void *p);
   static void delete_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p);
   static void deleteArray_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p);
   static void destruct_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<pat::IsolationKeys,reco::IsoDeposit>*)
   {
      pair<pat::IsolationKeys,reco::IsoDeposit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<pat::IsolationKeys,reco::IsoDeposit>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<pat::IsolationKeys,reco::IsoDeposit>", "string", 96,
                  typeid(pair<pat::IsolationKeys,reco::IsoDeposit>), DefineBehavior(ptr, ptr),
                  &pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<pat::IsolationKeys,reco::IsoDeposit>) );
      instance.SetNew(&new_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR);
      instance.SetNewArray(&newArray_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR);
      instance.SetDelete(&delete_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR);
      instance.SetDeleteArray(&deleteArray_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR);
      instance.SetDestructor(&destruct_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<pat::IsolationKeys,reco::IsoDeposit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<pat::IsolationKeys,reco::IsoDeposit>*)0x0)->GetClass();
      pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLLookupTableRecord_Dictionary();
   static void patcLcLLookupTableRecord_TClassManip(TClass*);
   static void *new_patcLcLLookupTableRecord(void *p = 0);
   static void *newArray_patcLcLLookupTableRecord(Long_t size, void *p);
   static void delete_patcLcLLookupTableRecord(void *p);
   static void deleteArray_patcLcLLookupTableRecord(void *p);
   static void destruct_patcLcLLookupTableRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::LookupTableRecord*)
   {
      ::pat::LookupTableRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::LookupTableRecord));
      static ::ROOT::TGenericClassInfo 
         instance("pat::LookupTableRecord", 10, "DataFormats/PatCandidates/interface/LookupTableRecord.h", 19,
                  typeid(::pat::LookupTableRecord), DefineBehavior(ptr, ptr),
                  &patcLcLLookupTableRecord_Dictionary, isa_proxy, 8,
                  sizeof(::pat::LookupTableRecord) );
      instance.SetNew(&new_patcLcLLookupTableRecord);
      instance.SetNewArray(&newArray_patcLcLLookupTableRecord);
      instance.SetDelete(&delete_patcLcLLookupTableRecord);
      instance.SetDeleteArray(&deleteArray_patcLcLLookupTableRecord);
      instance.SetDestructor(&destruct_patcLcLLookupTableRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::LookupTableRecord*)
   {
      return GenerateInitInstanceLocal((::pat::LookupTableRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::LookupTableRecord*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLLookupTableRecord_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::LookupTableRecord*)0x0)->GetClass();
      patcLcLLookupTableRecord_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLLookupTableRecord_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEpatcLcLLookupTableRecordgR_Dictionary();
   static void edmcLcLValueMaplEpatcLcLLookupTableRecordgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p);
   static void deleteArray_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p);
   static void destruct_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<pat::LookupTableRecord>*)
   {
      ::edm::ValueMap<pat::LookupTableRecord> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<pat::LookupTableRecord>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<pat::LookupTableRecord>", ::edm::ValueMap<pat::LookupTableRecord>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<pat::LookupTableRecord>), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEpatcLcLLookupTableRecordgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<pat::LookupTableRecord>) );
      instance.SetNew(&new_edmcLcLValueMaplEpatcLcLLookupTableRecordgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEpatcLcLLookupTableRecordgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEpatcLcLLookupTableRecordgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEpatcLcLLookupTableRecordgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEpatcLcLLookupTableRecordgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<pat::LookupTableRecord>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<pat::LookupTableRecord>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<pat::LookupTableRecord>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEpatcLcLLookupTableRecordgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<pat::LookupTableRecord>*)0x0)->GetClass();
      edmcLcLValueMaplEpatcLcLLookupTableRecordgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEpatcLcLLookupTableRecordgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)
   {
      ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >", ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLCandKinResolution_Dictionary();
   static void patcLcLCandKinResolution_TClassManip(TClass*);
   static void *new_patcLcLCandKinResolution(void *p = 0);
   static void *newArray_patcLcLCandKinResolution(Long_t size, void *p);
   static void delete_patcLcLCandKinResolution(void *p);
   static void deleteArray_patcLcLCandKinResolution(void *p);
   static void destruct_patcLcLCandKinResolution(void *p);

   // Schema evolution read functions
   static void read_patcLcLCandKinResolution_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("pat::CandKinResolution");
      static Long_t offset_hasMatrix_ = cls->GetDataMemberOffset("hasMatrix_");
      bool& hasMatrix_ = *(bool*)(target+offset_hasMatrix_);
      pat::CandKinResolution* newObj = (pat::CandKinResolution*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     hasMatrix_ = false;
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::CandKinResolution*)
   {
      ::pat::CandKinResolution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::CandKinResolution));
      static ::ROOT::TGenericClassInfo 
         instance("pat::CandKinResolution", 13, "DataFormats/PatCandidates/interface/CandKinResolution.h", 10,
                  typeid(::pat::CandKinResolution), DefineBehavior(ptr, ptr),
                  &patcLcLCandKinResolution_Dictionary, isa_proxy, 8,
                  sizeof(::pat::CandKinResolution) );
      instance.SetNew(&new_patcLcLCandKinResolution);
      instance.SetNewArray(&newArray_patcLcLCandKinResolution);
      instance.SetDelete(&delete_patcLcLCandKinResolution);
      instance.SetDeleteArray(&deleteArray_patcLcLCandKinResolution);
      instance.SetDestructor(&destruct_patcLcLCandKinResolution);

      ROOT::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "pat::CandKinResolution";
      rule->fTarget      = "hasMatrix_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_patcLcLCandKinResolution_0);
      rule->fCode        = "hasMatrix_ = false;";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::CandKinResolution*)
   {
      return GenerateInitInstanceLocal((::pat::CandKinResolution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::CandKinResolution*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLCandKinResolution_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::CandKinResolution*)0x0)->GetClass();
      patcLcLCandKinResolution_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLCandKinResolution_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEpatcLcLCandKinResolutiongR_Dictionary();
   static void edmcLcLValueMaplEpatcLcLCandKinResolutiongR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p);
   static void deleteArray_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p);
   static void destruct_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<pat::CandKinResolution>*)
   {
      ::edm::ValueMap<pat::CandKinResolution> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<pat::CandKinResolution>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<pat::CandKinResolution>", ::edm::ValueMap<pat::CandKinResolution>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<pat::CandKinResolution>), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEpatcLcLCandKinResolutiongR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<pat::CandKinResolution>) );
      instance.SetNew(&new_edmcLcLValueMaplEpatcLcLCandKinResolutiongR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEpatcLcLCandKinResolutiongR);
      instance.SetDelete(&delete_edmcLcLValueMaplEpatcLcLCandKinResolutiongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEpatcLcLCandKinResolutiongR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEpatcLcLCandKinResolutiongR);

      ROOT::AddClassAlternate("edm::ValueMap<pat::CandKinResolution>","pat::CandKinResolutionValueMap");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<pat::CandKinResolution>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<pat::CandKinResolution>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<pat::CandKinResolution>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEpatcLcLCandKinResolutiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<pat::CandKinResolution>*)0x0)->GetClass();
      edmcLcLValueMaplEpatcLcLCandKinResolutiongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEpatcLcLCandKinResolutiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)
   {
      ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >", ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >","edm::Wrapper<pat::CandKinResolutionValueMap>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *vidcLcLCutFlowResult_Dictionary();
   static void vidcLcLCutFlowResult_TClassManip(TClass*);
   static void *new_vidcLcLCutFlowResult(void *p = 0);
   static void *newArray_vidcLcLCutFlowResult(Long_t size, void *p);
   static void delete_vidcLcLCutFlowResult(void *p);
   static void deleteArray_vidcLcLCutFlowResult(void *p);
   static void destruct_vidcLcLCutFlowResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vid::CutFlowResult*)
   {
      ::vid::CutFlowResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::vid::CutFlowResult));
      static ::ROOT::TGenericClassInfo 
         instance("vid::CutFlowResult", 2, "DataFormats/PatCandidates/interface/VIDCutFlowResult.h", 27,
                  typeid(::vid::CutFlowResult), DefineBehavior(ptr, ptr),
                  &vidcLcLCutFlowResult_Dictionary, isa_proxy, 8,
                  sizeof(::vid::CutFlowResult) );
      instance.SetNew(&new_vidcLcLCutFlowResult);
      instance.SetNewArray(&newArray_vidcLcLCutFlowResult);
      instance.SetDelete(&delete_vidcLcLCutFlowResult);
      instance.SetDeleteArray(&deleteArray_vidcLcLCutFlowResult);
      instance.SetDestructor(&destruct_vidcLcLCutFlowResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vid::CutFlowResult*)
   {
      return GenerateInitInstanceLocal((::vid::CutFlowResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::vid::CutFlowResult*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vidcLcLCutFlowResult_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::vid::CutFlowResult*)0x0)->GetClass();
      vidcLcLCutFlowResult_TClassManip(theClass);
   return theClass;
   }

   static void vidcLcLCutFlowResult_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEvidcLcLCutFlowResultgR_Dictionary();
   static void edmcLcLValueMaplEvidcLcLCutFlowResultgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEvidcLcLCutFlowResultgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p);
   static void deleteArray_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p);
   static void destruct_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<vid::CutFlowResult>*)
   {
      ::edm::ValueMap<vid::CutFlowResult> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<vid::CutFlowResult>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<vid::CutFlowResult>", ::edm::ValueMap<vid::CutFlowResult>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 104,
                  typeid(::edm::ValueMap<vid::CutFlowResult>), DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEvidcLcLCutFlowResultgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::ValueMap<vid::CutFlowResult>) );
      instance.SetNew(&new_edmcLcLValueMaplEvidcLcLCutFlowResultgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEvidcLcLCutFlowResultgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEvidcLcLCutFlowResultgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEvidcLcLCutFlowResultgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEvidcLcLCutFlowResultgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<vid::CutFlowResult>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<vid::CutFlowResult>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<vid::CutFlowResult>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEvidcLcLCutFlowResultgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<vid::CutFlowResult>*)0x0)->GetClass();
      edmcLcLValueMaplEvidcLcLCutFlowResultgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEvidcLcLCutFlowResultgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvidcLcLCutFlowResultgR_Dictionary();
   static void edmcLcLWrapperlEvidcLcLCutFlowResultgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvidcLcLCutFlowResultgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p);
   static void destruct_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vid::CutFlowResult>*)
   {
      ::edm::Wrapper<vid::CutFlowResult> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vid::CutFlowResult>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vid::CutFlowResult>", ::edm::Wrapper<vid::CutFlowResult>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vid::CutFlowResult>), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvidcLcLCutFlowResultgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vid::CutFlowResult>) );
      instance.SetNew(&new_edmcLcLWrapperlEvidcLcLCutFlowResultgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvidcLcLCutFlowResultgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvidcLcLCutFlowResultgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvidcLcLCutFlowResultgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvidcLcLCutFlowResultgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vid::CutFlowResult>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vid::CutFlowResult>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vid::CutFlowResult>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvidcLcLCutFlowResultgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vid::CutFlowResult>*)0x0)->GetClass();
      edmcLcLWrapperlEvidcLcLCutFlowResultgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvidcLcLCutFlowResultgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)
   {
      ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >", ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLUserHolderlEvidcLcLCutFlowResultgR_Dictionary();
   static void patcLcLUserHolderlEvidcLcLCutFlowResultgR_TClassManip(TClass*);
   static void *new_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p = 0);
   static void *newArray_patcLcLUserHolderlEvidcLcLCutFlowResultgR(Long_t size, void *p);
   static void delete_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p);
   static void deleteArray_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p);
   static void destruct_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::UserHolder<vid::CutFlowResult>*)
   {
      ::pat::UserHolder<vid::CutFlowResult> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::UserHolder<vid::CutFlowResult>));
      static ::ROOT::TGenericClassInfo 
         instance("pat::UserHolder<vid::CutFlowResult>", "DataFormats/PatCandidates/interface/UserData.h", 67,
                  typeid(::pat::UserHolder<vid::CutFlowResult>), DefineBehavior(ptr, ptr),
                  &patcLcLUserHolderlEvidcLcLCutFlowResultgR_Dictionary, isa_proxy, 0,
                  sizeof(::pat::UserHolder<vid::CutFlowResult>) );
      instance.SetNew(&new_patcLcLUserHolderlEvidcLcLCutFlowResultgR);
      instance.SetNewArray(&newArray_patcLcLUserHolderlEvidcLcLCutFlowResultgR);
      instance.SetDelete(&delete_patcLcLUserHolderlEvidcLcLCutFlowResultgR);
      instance.SetDeleteArray(&deleteArray_patcLcLUserHolderlEvidcLcLCutFlowResultgR);
      instance.SetDestructor(&destruct_patcLcLUserHolderlEvidcLcLCutFlowResultgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::UserHolder<vid::CutFlowResult>*)
   {
      return GenerateInitInstanceLocal((::pat::UserHolder<vid::CutFlowResult>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::UserHolder<vid::CutFlowResult>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLUserHolderlEvidcLcLCutFlowResultgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::UserHolder<vid::CutFlowResult>*)0x0)->GetClass();
      patcLcLUserHolderlEvidcLcLCutFlowResultgR_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLUserHolderlEvidcLcLCutFlowResultgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,vector<float> > : new pair<string,vector<float> >;
   }
   static void *newArray_pairlEstringcOvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,vector<float> >[nElements] : new pair<string,vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOvectorlEfloatgRsPgR(void *p) {
      delete ((pair<string,vector<float> >*)p);
   }
   static void deleteArray_pairlEstringcOvectorlEfloatgRsPgR(void *p) {
      delete [] ((pair<string,vector<float> >*)p);
   }
   static void destruct_pairlEstringcOvectorlEfloatgRsPgR(void *p) {
      typedef pair<string,vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,vector<float> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<pair<string,vector<float> > > : new ::edm::Wrapper<pair<string,vector<float> > >;
   }
   static void *newArray_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<pair<string,vector<float> > >[nElements] : new ::edm::Wrapper<pair<string,vector<float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<pair<string,vector<float> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<pair<string,vector<float> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<pair<string,vector<float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pair<string,vector<float> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pair<string,vector<float> > > > : new ::edm::Wrapper<vector<pair<string,vector<float> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pair<string,vector<float> > > >[nElements] : new ::edm::Wrapper<vector<pair<string,vector<float> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pair<string,vector<float> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pair<string,vector<float> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpairlEstringcOvectorlEfloatgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pair<string,vector<float> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pair<string,vector<float> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLJetCorrFactors(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::JetCorrFactors : new ::pat::JetCorrFactors;
   }
   static void *newArray_patcLcLJetCorrFactors(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::JetCorrFactors[nElements] : new ::pat::JetCorrFactors[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLJetCorrFactors(void *p) {
      delete ((::pat::JetCorrFactors*)p);
   }
   static void deleteArray_patcLcLJetCorrFactors(void *p) {
      delete [] ((::pat::JetCorrFactors*)p);
   }
   static void destruct_patcLcLJetCorrFactors(void *p) {
      typedef ::pat::JetCorrFactors current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::JetCorrFactors

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::JetCorrFactors> : new ::edm::ValueMap<pat::JetCorrFactors>;
   }
   static void *newArray_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::JetCorrFactors>[nElements] : new ::edm::ValueMap<pat::JetCorrFactors>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p) {
      delete ((::edm::ValueMap<pat::JetCorrFactors>*)p);
   }
   static void deleteArray_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p) {
      delete [] ((::edm::ValueMap<pat::JetCorrFactors>*)p);
   }
   static void destruct_edmcLcLValueMaplEpatcLcLJetCorrFactorsgR(void *p) {
      typedef ::edm::ValueMap<pat::JetCorrFactors> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<pat::JetCorrFactors>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> > : new ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >[nElements] : new ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLJetCorrFactorsgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTauJetCorrFactors(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TauJetCorrFactors : new ::pat::TauJetCorrFactors;
   }
   static void *newArray_patcLcLTauJetCorrFactors(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TauJetCorrFactors[nElements] : new ::pat::TauJetCorrFactors[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTauJetCorrFactors(void *p) {
      delete ((::pat::TauJetCorrFactors*)p);
   }
   static void deleteArray_patcLcLTauJetCorrFactors(void *p) {
      delete [] ((::pat::TauJetCorrFactors*)p);
   }
   static void destruct_patcLcLTauJetCorrFactors(void *p) {
      typedef ::pat::TauJetCorrFactors current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TauJetCorrFactors

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::TauJetCorrFactors> : new ::edm::ValueMap<pat::TauJetCorrFactors>;
   }
   static void *newArray_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::TauJetCorrFactors>[nElements] : new ::edm::ValueMap<pat::TauJetCorrFactors>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p) {
      delete ((::edm::ValueMap<pat::TauJetCorrFactors>*)p);
   }
   static void deleteArray_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p) {
      delete [] ((::edm::ValueMap<pat::TauJetCorrFactors>*)p);
   }
   static void destruct_edmcLcLValueMaplEpatcLcLTauJetCorrFactorsgR(void *p) {
      typedef ::edm::ValueMap<pat::TauJetCorrFactors> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<pat::TauJetCorrFactors>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> > : new ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >[nElements] : new ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLTauJetCorrFactorsgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_StringMap(void *p) {
      return  p ? new(p) ::StringMap : new ::StringMap;
   }
   static void *newArray_StringMap(Long_t nElements, void *p) {
      return p ? new(p) ::StringMap[nElements] : new ::StringMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_StringMap(void *p) {
      delete ((::StringMap*)p);
   }
   static void deleteArray_StringMap(void *p) {
      delete [] ((::StringMap*)p);
   }
   static void destruct_StringMap(void *p) {
      typedef ::StringMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StringMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEStringMapgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<StringMap> : new ::edm::Wrapper<StringMap>;
   }
   static void *newArray_edmcLcLWrapperlEStringMapgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<StringMap>[nElements] : new ::edm::Wrapper<StringMap>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEStringMapgR(void *p) {
      delete ((::edm::Wrapper<StringMap>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEStringMapgR(void *p) {
      delete [] ((::edm::Wrapper<StringMap>*)p);
   }
   static void destruct_edmcLcLWrapperlEStringMapgR(void *p) {
      typedef ::edm::Wrapper<StringMap> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<StringMap>

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLVertexAssociation(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::VertexAssociation : new ::pat::VertexAssociation;
   }
   static void *newArray_patcLcLVertexAssociation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::VertexAssociation[nElements] : new ::pat::VertexAssociation[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLVertexAssociation(void *p) {
      delete ((::pat::VertexAssociation*)p);
   }
   static void deleteArray_patcLcLVertexAssociation(void *p) {
      delete [] ((::pat::VertexAssociation*)p);
   }
   static void destruct_patcLcLVertexAssociation(void *p) {
      typedef ::pat::VertexAssociation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::VertexAssociation

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::VertexAssociation> : new ::edm::ValueMap<pat::VertexAssociation>;
   }
   static void *newArray_edmcLcLValueMaplEpatcLcLVertexAssociationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::VertexAssociation>[nElements] : new ::edm::ValueMap<pat::VertexAssociation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p) {
      delete ((::edm::ValueMap<pat::VertexAssociation>*)p);
   }
   static void deleteArray_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p) {
      delete [] ((::edm::ValueMap<pat::VertexAssociation>*)p);
   }
   static void destruct_edmcLcLValueMaplEpatcLcLVertexAssociationgR(void *p) {
      typedef ::edm::ValueMap<pat::VertexAssociation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<pat::VertexAssociation>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> > : new ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >[nElements] : new ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLVertexAssociationgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLEventHypothesis(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::EventHypothesis : new ::pat::EventHypothesis;
   }
   static void *newArray_patcLcLEventHypothesis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::EventHypothesis[nElements] : new ::pat::EventHypothesis[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLEventHypothesis(void *p) {
      delete ((::pat::EventHypothesis*)p);
   }
   static void deleteArray_patcLcLEventHypothesis(void *p) {
      delete [] ((::pat::EventHypothesis*)p);
   }
   static void destruct_patcLcLEventHypothesis(void *p) {
      typedef ::pat::EventHypothesis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::EventHypothesis

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::EventHypothesis> > : new ::edm::Wrapper<vector<pat::EventHypothesis> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::EventHypothesis> >[nElements] : new ::edm::Wrapper<vector<pat::EventHypothesis> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::EventHypothesis> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::EventHypothesis> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLEventHypothesisgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::EventHypothesis> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::EventHypothesis> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<pat::IsolationKeys,reco::IsoDeposit> : new pair<pat::IsolationKeys,reco::IsoDeposit>;
   }
   static void *newArray_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<pat::IsolationKeys,reco::IsoDeposit>[nElements] : new pair<pat::IsolationKeys,reco::IsoDeposit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p) {
      delete ((pair<pat::IsolationKeys,reco::IsoDeposit>*)p);
   }
   static void deleteArray_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p) {
      delete [] ((pair<pat::IsolationKeys,reco::IsoDeposit>*)p);
   }
   static void destruct_pairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgR(void *p) {
      typedef pair<pat::IsolationKeys,reco::IsoDeposit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<pat::IsolationKeys,reco::IsoDeposit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLLookupTableRecord(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::LookupTableRecord : new ::pat::LookupTableRecord;
   }
   static void *newArray_patcLcLLookupTableRecord(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::LookupTableRecord[nElements] : new ::pat::LookupTableRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLLookupTableRecord(void *p) {
      delete ((::pat::LookupTableRecord*)p);
   }
   static void deleteArray_patcLcLLookupTableRecord(void *p) {
      delete [] ((::pat::LookupTableRecord*)p);
   }
   static void destruct_patcLcLLookupTableRecord(void *p) {
      typedef ::pat::LookupTableRecord current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::LookupTableRecord

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::LookupTableRecord> : new ::edm::ValueMap<pat::LookupTableRecord>;
   }
   static void *newArray_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::LookupTableRecord>[nElements] : new ::edm::ValueMap<pat::LookupTableRecord>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p) {
      delete ((::edm::ValueMap<pat::LookupTableRecord>*)p);
   }
   static void deleteArray_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p) {
      delete [] ((::edm::ValueMap<pat::LookupTableRecord>*)p);
   }
   static void destruct_edmcLcLValueMaplEpatcLcLLookupTableRecordgR(void *p) {
      typedef ::edm::ValueMap<pat::LookupTableRecord> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<pat::LookupTableRecord>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> > : new ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >[nElements] : new ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLLookupTableRecordgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLCandKinResolution(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::CandKinResolution : new ::pat::CandKinResolution;
   }
   static void *newArray_patcLcLCandKinResolution(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::CandKinResolution[nElements] : new ::pat::CandKinResolution[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLCandKinResolution(void *p) {
      delete ((::pat::CandKinResolution*)p);
   }
   static void deleteArray_patcLcLCandKinResolution(void *p) {
      delete [] ((::pat::CandKinResolution*)p);
   }
   static void destruct_patcLcLCandKinResolution(void *p) {
      typedef ::pat::CandKinResolution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::CandKinResolution

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::CandKinResolution> : new ::edm::ValueMap<pat::CandKinResolution>;
   }
   static void *newArray_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<pat::CandKinResolution>[nElements] : new ::edm::ValueMap<pat::CandKinResolution>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p) {
      delete ((::edm::ValueMap<pat::CandKinResolution>*)p);
   }
   static void deleteArray_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p) {
      delete [] ((::edm::ValueMap<pat::CandKinResolution>*)p);
   }
   static void destruct_edmcLcLValueMaplEpatcLcLCandKinResolutiongR(void *p) {
      typedef ::edm::ValueMap<pat::CandKinResolution> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<pat::CandKinResolution>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> > : new ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >[nElements] : new ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEpatcLcLCandKinResolutiongRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_vidcLcLCutFlowResult(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::vid::CutFlowResult : new ::vid::CutFlowResult;
   }
   static void *newArray_vidcLcLCutFlowResult(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::vid::CutFlowResult[nElements] : new ::vid::CutFlowResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_vidcLcLCutFlowResult(void *p) {
      delete ((::vid::CutFlowResult*)p);
   }
   static void deleteArray_vidcLcLCutFlowResult(void *p) {
      delete [] ((::vid::CutFlowResult*)p);
   }
   static void destruct_vidcLcLCutFlowResult(void *p) {
      typedef ::vid::CutFlowResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vid::CutFlowResult

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<vid::CutFlowResult> : new ::edm::ValueMap<vid::CutFlowResult>;
   }
   static void *newArray_edmcLcLValueMaplEvidcLcLCutFlowResultgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::ValueMap<vid::CutFlowResult>[nElements] : new ::edm::ValueMap<vid::CutFlowResult>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p) {
      delete ((::edm::ValueMap<vid::CutFlowResult>*)p);
   }
   static void deleteArray_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p) {
      delete [] ((::edm::ValueMap<vid::CutFlowResult>*)p);
   }
   static void destruct_edmcLcLValueMaplEvidcLcLCutFlowResultgR(void *p) {
      typedef ::edm::ValueMap<vid::CutFlowResult> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<vid::CutFlowResult>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vid::CutFlowResult> : new ::edm::Wrapper<vid::CutFlowResult>;
   }
   static void *newArray_edmcLcLWrapperlEvidcLcLCutFlowResultgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vid::CutFlowResult>[nElements] : new ::edm::Wrapper<vid::CutFlowResult>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p) {
      delete ((::edm::Wrapper<vid::CutFlowResult>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p) {
      delete [] ((::edm::Wrapper<vid::CutFlowResult>*)p);
   }
   static void destruct_edmcLcLWrapperlEvidcLcLCutFlowResultgR(void *p) {
      typedef ::edm::Wrapper<vid::CutFlowResult> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vid::CutFlowResult>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> > : new ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >[nElements] : new ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEvidcLcLCutFlowResultgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<vid::CutFlowResult> : new ::pat::UserHolder<vid::CutFlowResult>;
   }
   static void *newArray_patcLcLUserHolderlEvidcLcLCutFlowResultgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::UserHolder<vid::CutFlowResult>[nElements] : new ::pat::UserHolder<vid::CutFlowResult>[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p) {
      delete ((::pat::UserHolder<vid::CutFlowResult>*)p);
   }
   static void deleteArray_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p) {
      delete [] ((::pat::UserHolder<vid::CutFlowResult>*)p);
   }
   static void destruct_patcLcLUserHolderlEvidcLcLCutFlowResultgR(void *p) {
      typedef ::pat::UserHolder<vid::CutFlowResult> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::UserHolder<vid::CutFlowResult>

namespace ROOT {
   static TClass *vectorlEpatcLcLVertexAssociationgR_Dictionary();
   static void vectorlEpatcLcLVertexAssociationgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLVertexAssociationgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLVertexAssociationgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLVertexAssociationgR(void *p);
   static void deleteArray_vectorlEpatcLcLVertexAssociationgR(void *p);
   static void destruct_vectorlEpatcLcLVertexAssociationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::VertexAssociation>*)
   {
      vector<pat::VertexAssociation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::VertexAssociation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::VertexAssociation>", -2, "vector", 214,
                  typeid(vector<pat::VertexAssociation>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLVertexAssociationgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::VertexAssociation>) );
      instance.SetNew(&new_vectorlEpatcLcLVertexAssociationgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLVertexAssociationgR);
      instance.SetDelete(&delete_vectorlEpatcLcLVertexAssociationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLVertexAssociationgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLVertexAssociationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::VertexAssociation> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::VertexAssociation>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLVertexAssociationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::VertexAssociation>*)0x0)->GetClass();
      vectorlEpatcLcLVertexAssociationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLVertexAssociationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLVertexAssociationgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::VertexAssociation> : new vector<pat::VertexAssociation>;
   }
   static void *newArray_vectorlEpatcLcLVertexAssociationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::VertexAssociation>[nElements] : new vector<pat::VertexAssociation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLVertexAssociationgR(void *p) {
      delete ((vector<pat::VertexAssociation>*)p);
   }
   static void deleteArray_vectorlEpatcLcLVertexAssociationgR(void *p) {
      delete [] ((vector<pat::VertexAssociation>*)p);
   }
   static void destruct_vectorlEpatcLcLVertexAssociationgR(void *p) {
      typedef vector<pat::VertexAssociation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::VertexAssociation>

namespace ROOT {
   static TClass *vectorlEpatcLcLTauJetCorrFactorsgR_Dictionary();
   static void vectorlEpatcLcLTauJetCorrFactorsgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTauJetCorrFactorsgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTauJetCorrFactorsgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTauJetCorrFactorsgR(void *p);
   static void deleteArray_vectorlEpatcLcLTauJetCorrFactorsgR(void *p);
   static void destruct_vectorlEpatcLcLTauJetCorrFactorsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TauJetCorrFactors>*)
   {
      vector<pat::TauJetCorrFactors> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TauJetCorrFactors>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TauJetCorrFactors>", -2, "vector", 214,
                  typeid(vector<pat::TauJetCorrFactors>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTauJetCorrFactorsgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TauJetCorrFactors>) );
      instance.SetNew(&new_vectorlEpatcLcLTauJetCorrFactorsgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTauJetCorrFactorsgR);
      instance.SetDelete(&delete_vectorlEpatcLcLTauJetCorrFactorsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTauJetCorrFactorsgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTauJetCorrFactorsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TauJetCorrFactors> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TauJetCorrFactors>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTauJetCorrFactorsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TauJetCorrFactors>*)0x0)->GetClass();
      vectorlEpatcLcLTauJetCorrFactorsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTauJetCorrFactorsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTauJetCorrFactorsgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TauJetCorrFactors> : new vector<pat::TauJetCorrFactors>;
   }
   static void *newArray_vectorlEpatcLcLTauJetCorrFactorsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TauJetCorrFactors>[nElements] : new vector<pat::TauJetCorrFactors>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTauJetCorrFactorsgR(void *p) {
      delete ((vector<pat::TauJetCorrFactors>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTauJetCorrFactorsgR(void *p) {
      delete [] ((vector<pat::TauJetCorrFactors>*)p);
   }
   static void destruct_vectorlEpatcLcLTauJetCorrFactorsgR(void *p) {
      typedef vector<pat::TauJetCorrFactors> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TauJetCorrFactors>

namespace ROOT {
   static TClass *vectorlEpatcLcLLookupTableRecordgR_Dictionary();
   static void vectorlEpatcLcLLookupTableRecordgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLLookupTableRecordgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLLookupTableRecordgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLLookupTableRecordgR(void *p);
   static void deleteArray_vectorlEpatcLcLLookupTableRecordgR(void *p);
   static void destruct_vectorlEpatcLcLLookupTableRecordgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::LookupTableRecord>*)
   {
      vector<pat::LookupTableRecord> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::LookupTableRecord>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::LookupTableRecord>", -2, "vector", 214,
                  typeid(vector<pat::LookupTableRecord>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLLookupTableRecordgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::LookupTableRecord>) );
      instance.SetNew(&new_vectorlEpatcLcLLookupTableRecordgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLLookupTableRecordgR);
      instance.SetDelete(&delete_vectorlEpatcLcLLookupTableRecordgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLLookupTableRecordgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLLookupTableRecordgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::LookupTableRecord> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::LookupTableRecord>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLLookupTableRecordgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::LookupTableRecord>*)0x0)->GetClass();
      vectorlEpatcLcLLookupTableRecordgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLLookupTableRecordgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLLookupTableRecordgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::LookupTableRecord> : new vector<pat::LookupTableRecord>;
   }
   static void *newArray_vectorlEpatcLcLLookupTableRecordgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::LookupTableRecord>[nElements] : new vector<pat::LookupTableRecord>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLLookupTableRecordgR(void *p) {
      delete ((vector<pat::LookupTableRecord>*)p);
   }
   static void deleteArray_vectorlEpatcLcLLookupTableRecordgR(void *p) {
      delete [] ((vector<pat::LookupTableRecord>*)p);
   }
   static void destruct_vectorlEpatcLcLLookupTableRecordgR(void *p) {
      typedef vector<pat::LookupTableRecord> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::LookupTableRecord>

namespace ROOT {
   static TClass *vectorlEpatcLcLJetCorrFactorsgR_Dictionary();
   static void vectorlEpatcLcLJetCorrFactorsgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLJetCorrFactorsgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLJetCorrFactorsgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLJetCorrFactorsgR(void *p);
   static void deleteArray_vectorlEpatcLcLJetCorrFactorsgR(void *p);
   static void destruct_vectorlEpatcLcLJetCorrFactorsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::JetCorrFactors>*)
   {
      vector<pat::JetCorrFactors> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::JetCorrFactors>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::JetCorrFactors>", -2, "vector", 214,
                  typeid(vector<pat::JetCorrFactors>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLJetCorrFactorsgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::JetCorrFactors>) );
      instance.SetNew(&new_vectorlEpatcLcLJetCorrFactorsgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLJetCorrFactorsgR);
      instance.SetDelete(&delete_vectorlEpatcLcLJetCorrFactorsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLJetCorrFactorsgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLJetCorrFactorsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::JetCorrFactors> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::JetCorrFactors>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLJetCorrFactorsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::JetCorrFactors>*)0x0)->GetClass();
      vectorlEpatcLcLJetCorrFactorsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLJetCorrFactorsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLJetCorrFactorsgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::JetCorrFactors> : new vector<pat::JetCorrFactors>;
   }
   static void *newArray_vectorlEpatcLcLJetCorrFactorsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::JetCorrFactors>[nElements] : new vector<pat::JetCorrFactors>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLJetCorrFactorsgR(void *p) {
      delete ((vector<pat::JetCorrFactors>*)p);
   }
   static void deleteArray_vectorlEpatcLcLJetCorrFactorsgR(void *p) {
      delete [] ((vector<pat::JetCorrFactors>*)p);
   }
   static void destruct_vectorlEpatcLcLJetCorrFactorsgR(void *p) {
      typedef vector<pat::JetCorrFactors> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::JetCorrFactors>

namespace ROOT {
   static TClass *vectorlEpatcLcLEventHypothesisgR_Dictionary();
   static void vectorlEpatcLcLEventHypothesisgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLEventHypothesisgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLEventHypothesisgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLEventHypothesisgR(void *p);
   static void deleteArray_vectorlEpatcLcLEventHypothesisgR(void *p);
   static void destruct_vectorlEpatcLcLEventHypothesisgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::EventHypothesis>*)
   {
      vector<pat::EventHypothesis> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::EventHypothesis>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::EventHypothesis>", -2, "vector", 214,
                  typeid(vector<pat::EventHypothesis>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLEventHypothesisgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::EventHypothesis>) );
      instance.SetNew(&new_vectorlEpatcLcLEventHypothesisgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLEventHypothesisgR);
      instance.SetDelete(&delete_vectorlEpatcLcLEventHypothesisgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLEventHypothesisgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLEventHypothesisgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::EventHypothesis> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::EventHypothesis>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLEventHypothesisgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::EventHypothesis>*)0x0)->GetClass();
      vectorlEpatcLcLEventHypothesisgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLEventHypothesisgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLEventHypothesisgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::EventHypothesis> : new vector<pat::EventHypothesis>;
   }
   static void *newArray_vectorlEpatcLcLEventHypothesisgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::EventHypothesis>[nElements] : new vector<pat::EventHypothesis>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLEventHypothesisgR(void *p) {
      delete ((vector<pat::EventHypothesis>*)p);
   }
   static void deleteArray_vectorlEpatcLcLEventHypothesisgR(void *p) {
      delete [] ((vector<pat::EventHypothesis>*)p);
   }
   static void destruct_vectorlEpatcLcLEventHypothesisgR(void *p) {
      typedef vector<pat::EventHypothesis> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::EventHypothesis>

namespace ROOT {
   static TClass *vectorlEpatcLcLCandKinResolutiongR_Dictionary();
   static void vectorlEpatcLcLCandKinResolutiongR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLCandKinResolutiongR(void *p = 0);
   static void *newArray_vectorlEpatcLcLCandKinResolutiongR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLCandKinResolutiongR(void *p);
   static void deleteArray_vectorlEpatcLcLCandKinResolutiongR(void *p);
   static void destruct_vectorlEpatcLcLCandKinResolutiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::CandKinResolution>*)
   {
      vector<pat::CandKinResolution> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::CandKinResolution>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::CandKinResolution>", -2, "vector", 214,
                  typeid(vector<pat::CandKinResolution>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLCandKinResolutiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::CandKinResolution>) );
      instance.SetNew(&new_vectorlEpatcLcLCandKinResolutiongR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLCandKinResolutiongR);
      instance.SetDelete(&delete_vectorlEpatcLcLCandKinResolutiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLCandKinResolutiongR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLCandKinResolutiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::CandKinResolution> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::CandKinResolution>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLCandKinResolutiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::CandKinResolution>*)0x0)->GetClass();
      vectorlEpatcLcLCandKinResolutiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLCandKinResolutiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLCandKinResolutiongR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::CandKinResolution> : new vector<pat::CandKinResolution>;
   }
   static void *newArray_vectorlEpatcLcLCandKinResolutiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::CandKinResolution>[nElements] : new vector<pat::CandKinResolution>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLCandKinResolutiongR(void *p) {
      delete ((vector<pat::CandKinResolution>*)p);
   }
   static void deleteArray_vectorlEpatcLcLCandKinResolutiongR(void *p) {
      delete [] ((vector<pat::CandKinResolution>*)p);
   }
   static void destruct_vectorlEpatcLcLCandKinResolutiongR(void *p) {
      typedef vector<pat::CandKinResolution> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::CandKinResolution>

namespace ROOT {
   static TClass *vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR_Dictionary();
   static void vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p);
   static void destruct_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<string,vector<float> > >*)
   {
      vector<pair<string,vector<float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<string,vector<float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<string,vector<float> > >", -2, "vector", 214,
                  typeid(vector<pair<string,vector<float> > >), DefineBehavior(ptr, ptr),
                  &vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<string,vector<float> > >) );
      instance.SetNew(&new_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<string,vector<float> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<string,vector<float> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<string,vector<float> > >*)0x0)->GetClass();
      vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<string,vector<float> > > : new vector<pair<string,vector<float> > >;
   }
   static void *newArray_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<string,vector<float> > >[nElements] : new vector<pair<string,vector<float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      delete ((vector<pair<string,vector<float> > >*)p);
   }
   static void deleteArray_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      delete [] ((vector<pair<string,vector<float> > >*)p);
   }
   static void destruct_vectorlEpairlEstringcOvectorlEfloatgRsPgRsPgR(void *p) {
      typedef vector<pair<string,vector<float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<string,vector<float> > >

namespace ROOT {
   static TClass *vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR_Dictionary();
   static void vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p);
   static void destruct_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<pat::IsolationKeys,reco::IsoDeposit> >*)
   {
      vector<pair<pat::IsolationKeys,reco::IsoDeposit> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<pat::IsolationKeys,reco::IsoDeposit> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<pat::IsolationKeys,reco::IsoDeposit> >", -2, "vector", 214,
                  typeid(vector<pair<pat::IsolationKeys,reco::IsoDeposit> >), DefineBehavior(ptr, ptr),
                  &vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<pat::IsolationKeys,reco::IsoDeposit> >) );
      instance.SetNew(&new_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<pat::IsolationKeys,reco::IsoDeposit> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<pat::IsolationKeys,reco::IsoDeposit> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<pat::IsolationKeys,reco::IsoDeposit> >*)0x0)->GetClass();
      vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<pat::IsolationKeys,reco::IsoDeposit> > : new vector<pair<pat::IsolationKeys,reco::IsoDeposit> >;
   }
   static void *newArray_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<pat::IsolationKeys,reco::IsoDeposit> >[nElements] : new vector<pair<pat::IsolationKeys,reco::IsoDeposit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p) {
      delete ((vector<pair<pat::IsolationKeys,reco::IsoDeposit> >*)p);
   }
   static void deleteArray_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p) {
      delete [] ((vector<pair<pat::IsolationKeys,reco::IsoDeposit> >*)p);
   }
   static void destruct_vectorlEpairlEpatcLcLIsolationKeyscOrecocLcLIsoDepositgRsPgR(void *p) {
      typedef vector<pair<pat::IsolationKeys,reco::IsoDeposit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<pat::IsolationKeys,reco::IsoDeposit> >

namespace {
  void TriggerDictionaryInitialization_DataFormatsPatCandidates_xr_Impl() {
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
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace std{template <typename > class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/JetCorrFactors.h")))  JetCorrFactors;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/ValueMap.h")))  ValueMap;
}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TauJetCorrFactors.h")))  TauJetCorrFactors;}
class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/StringMap.h")))  StringMap;
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Vertexing.h")))  VertexAssociation;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/EventHypothesis.h")))  EventHypothesis;}
namespace pat{enum  __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Isolation.h 0"))) IsolationKeys : int;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Isolation.h")))  IsoDeposit;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  LookupTableRecord;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  CandKinResolution;}
namespace vid{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/VIDCutFlowResult.h")))  CutFlowResult;}
namespace pat{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h")))  UserHolder;
}
namespace pat{typedef edm::ValueMap<CandKinResolution> CandKinResolutionValueMap __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PATObject.h"))) ;}
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

#include "DataFormats/PatCandidates/interface/TauJetCorrFactors.h"
#include "DataFormats/PatCandidates/interface/JetCorrFactors.h"
#include "DataFormats/PatCandidates/interface/Isolation.h"

#include "DataFormats/PatCandidates/interface/PATObject.h"

#include "DataFormats/PatCandidates/interface/StringMap.h"
#include "DataFormats/PatCandidates/interface/EventHypothesis.h"
#include "DataFormats/PatCandidates/interface/EventHypothesisLooper.h"

#include "DataFormats/PatCandidates/interface/Vertexing.h"

#include "DataFormats/PatCandidates/interface/LookupTableRecord.h"

#include "DataFormats/PatCandidates/interface/CandKinResolution.h"

#include "DataFormats/PatCandidates/interface/VIDCutFlowResult.h"

namespace DataFormats_PatCandidates {
  struct dictionaryother {

  std::pair<std::string, std::vector<float> > jcfcf;
  edm::Wrapper<std::pair<std::string, std::vector<float> > > w_jcfcf;
  std::vector<pat::JetCorrFactors::CorrectionFactor> v_jcfcf;
  edm::Wrapper<std::vector<pat::JetCorrFactors::CorrectionFactor> > w_v_jcfcf;
  std::vector<pat::JetCorrFactors> v_jcf;
  edm::Wrapper<std::vector<pat::JetCorrFactors> >  w_v_jcf;
  edm::ValueMap<pat::JetCorrFactors> vm_jcf;
  edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >  w_vm_jcf;
  //std::vector<pat::TauJetCorrFactors::CorrectionFactor> v_tjcfcf;
  //edm::Wrapper<std::vector<pat::TauJetCorrFactors::CorrectionFactor> > w_v_tjcfcf;
  std::vector<pat::TauJetCorrFactors> v_tjcf;
  edm::Wrapper<std::vector<pat::TauJetCorrFactors> >  w_v_tjcf;
  edm::ValueMap<pat::TauJetCorrFactors> vm_tjcf;
  edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >  w_vm_tjcf;

  edm::Wrapper<StringMap>   w_sm;

  edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >	 w_vm_va;

  edm::Wrapper<std::vector<pat::EventHypothesis> >	 w_v_eh;

  std::pair<pat::IsolationKeys,reco::IsoDeposit>	 p_ik_id;
  std::vector<std::pair<pat::IsolationKeys,reco::IsoDeposit> >	 v_p_ik_id;

  edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >	 w_vm_p_lutr;

  pat::CandKinResolution ckr;
  std::vector<pat::CandKinResolution>  v_ckr;
  pat::CandKinResolutionValueMap vm_ckr;
  edm::Wrapper<pat::CandKinResolutionValueMap> w_vm_ckr;

  vid::CutFlowResult vcfr;
  edm::ValueMap<vid::CutFlowResult> vm_vcfr;
  edm::Wrapper<vid::CutFlowResult> w_vcfr;
  edm::Wrapper<edm::ValueMap<vid::CutFlowResult> > w_vm_vcfr;
  pat::UserHolder<vid::CutFlowResult> uh_vcfr;

  };

}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"StringMap", payloadCode, "@",
"edm::ValueMap<pat::CandKinResolution>", payloadCode, "@",
"edm::ValueMap<pat::JetCorrFactors>", payloadCode, "@",
"edm::ValueMap<pat::LookupTableRecord>", payloadCode, "@",
"edm::ValueMap<pat::TauJetCorrFactors>", payloadCode, "@",
"edm::ValueMap<pat::VertexAssociation>", payloadCode, "@",
"edm::ValueMap<vid::CutFlowResult>", payloadCode, "@",
"edm::Wrapper<StringMap>", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<pat::CandKinResolution> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<pat::JetCorrFactors> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<pat::LookupTableRecord> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<pat::TauJetCorrFactors> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<pat::VertexAssociation> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<vid::CutFlowResult> >", payloadCode, "@",
"edm::Wrapper<pair<string,vector<float> > >", payloadCode, "@",
"edm::Wrapper<pat::CandKinResolutionValueMap>", payloadCode, "@",
"edm::Wrapper<std::pair<std::string,std::vector<float> > >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::EventHypothesis> >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::JetCorrFactors::CorrectionFactor> >", payloadCode, "@",
"edm::Wrapper<vector<pair<string,vector<float> > > >", payloadCode, "@",
"edm::Wrapper<vector<pat::EventHypothesis> >", payloadCode, "@",
"edm::Wrapper<vid::CutFlowResult>", payloadCode, "@",
"pair<pat::IsolationKeys,reco::IsoDeposit>", payloadCode, "@",
"pair<std::string,std::vector<float> >", payloadCode, "@",
"pair<string,vector<float> >", payloadCode, "@",
"pat::CandKinResolution", payloadCode, "@",
"pat::CandKinResolutionValueMap", payloadCode, "@",
"pat::EventHypothesis", payloadCode, "@",
"pat::IsolationKeys", payloadCode, "@",
"pat::JetCorrFactors", payloadCode, "@",
"pat::LookupTableRecord", payloadCode, "@",
"pat::TauJetCorrFactors", payloadCode, "@",
"pat::UserHolder<vid::CutFlowResult>", payloadCode, "@",
"pat::VertexAssociation", payloadCode, "@",
"vector<pair<pat::IsolationKeys,reco::IsoDeposit> >", payloadCode, "@",
"vector<pair<string,vector<float> > >", payloadCode, "@",
"vector<pat::CandKinResolution>", payloadCode, "@",
"vector<pat::EventHypothesis>", payloadCode, "@",
"vector<pat::JetCorrFactors::CorrectionFactor>", payloadCode, "@",
"vector<pat::JetCorrFactors>", payloadCode, "@",
"vector<pat::LookupTableRecord>", payloadCode, "@",
"vector<pat::TauJetCorrFactors>", payloadCode, "@",
"vector<pat::VertexAssociation>", payloadCode, "@",
"vector<std::pair<pat::IsolationKeys,reco::IsoDeposit> >", payloadCode, "@",
"vid::CutFlowResult", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsPatCandidates_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsPatCandidates_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsPatCandidates_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsPatCandidates_xr() {
  TriggerDictionaryInitialization_DataFormatsPatCandidates_xr_Impl();
}
