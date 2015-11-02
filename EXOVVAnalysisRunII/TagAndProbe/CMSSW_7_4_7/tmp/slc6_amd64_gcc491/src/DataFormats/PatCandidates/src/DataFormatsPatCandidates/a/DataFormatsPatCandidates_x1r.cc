// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdIDataFormatsdIPatCandidatesdIsrcdIDataFormatsPatCandidatesdIadIDataFormatsPatCandidates_x1r

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
#include "src/DataFormats/PatCandidates/src/classes_trigger.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *patcLcLTriggerObject_Dictionary();
   static void patcLcLTriggerObject_TClassManip(TClass*);
   static void *new_patcLcLTriggerObject(void *p = 0);
   static void *newArray_patcLcLTriggerObject(Long_t size, void *p);
   static void delete_patcLcLTriggerObject(void *p);
   static void deleteArray_patcLcLTriggerObject(void *p);
   static void destruct_patcLcLTriggerObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerObject*)
   {
      ::pat::TriggerObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerObject));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerObject", 12, "DataFormats/PatCandidates/interface/TriggerObject.h", 47,
                  typeid(::pat::TriggerObject), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerObject_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerObject) );
      instance.SetNew(&new_patcLcLTriggerObject);
      instance.SetNewArray(&newArray_patcLcLTriggerObject);
      instance.SetDelete(&delete_patcLcLTriggerObject);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerObject);
      instance.SetDestructor(&destruct_patcLcLTriggerObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerObject*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerObject*)0x0)->GetClass();
      patcLcLTriggerObject_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)
   {
      ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >","vector<pat::TriggerObject>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::TriggerObject> >*)
   {
      ::edm::Wrapper<vector<pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::TriggerObject> >", ::edm::Wrapper<vector<pat::TriggerObject> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::TriggerObject> >","edm::Wrapper<std::vector<pat::TriggerObject> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerObject> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)
   {
      ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >", ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 307,
                  typeid(::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >","pat::TriggerObjectRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)
   {
      pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", "string", 96,
                  typeid(pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >) );
      instance.SetNew(&new_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);

      ROOT::AddClassAlternate("pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >","pair<std::string,pat::TriggerObjectRef>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0)->GetClass();
      pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<pat::TriggerObject> >*)
   {
      ::edm::RefProd<vector<pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<pat::TriggerObject> >", ::edm::RefProd<vector<pat::TriggerObject> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<vector<pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<vector<pat::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<vector<pat::TriggerObject> >","pat::TriggerObjectRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerObject> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)
   {
      ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >", ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >","edm::Wrapper<pat::TriggerObjectRefProd>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)
   {
      ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >", ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 35,
                  typeid(::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >","pat::TriggerObjectRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)
   {
      ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >", "DataFormats/Common/interface/RefVectorIterator.h", 19,
                  typeid(::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >","pat::TriggerObjectRefVectorIterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)0x0)->GetClass();
      edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<pat::TriggerObject> >*)
   {
      ::edm::Association<vector<pat::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<pat::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<pat::TriggerObject> >", ::edm::Association<vector<pat::TriggerObject> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<pat::TriggerObject> >), DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Association<vector<pat::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR);

      ROOT::AddClassAlternate("edm::Association<vector<pat::TriggerObject> >","edm::Association<std::vector<pat::TriggerObject> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<pat::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<pat::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<pat::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<pat::TriggerObject> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 16,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >","edm::reftobase::Holder<reco::Candidate,pat::TriggerObjectRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 19,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >","edm::reftobase::RefHolder<pat::TriggerObjectRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >", ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >","edm::Wrapper<edm::Association<std::vector<pat::TriggerObject> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)
   {
      ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<edm::Association<vector<pat::TriggerObject> > >", ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >) );
      instance.SetNew(&new_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<edm::Association<vector<pat::TriggerObject> > >","edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)0x0)->GetClass();
      edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_Dictionary();
   static void pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p);
   static void deleteArray_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p);
   static void destruct_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)
   {
      pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >", "string", 96,
                  typeid(pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >), DefineBehavior(ptr, ptr),
                  &pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >) );
      instance.SetNew(&new_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);

      ROOT::AddClassAlternate("pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >","pair<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)0x0)->GetClass();
      pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *_Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_Dictionary();
   static void _Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p);
   static void deleteArray__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p);
   static void destruct__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)
   {
      ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >));
      static ::ROOT::TGenericClassInfo 
         instance("_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >", "map", 242,
                  typeid(::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >), DefineBehavior(ptr, ptr),
                  &_Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >) );
      instance.SetNew(&new__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetDelete(&delete__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);

      ROOT::AddClassAlternate("_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >","map<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > >::const_iterator");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *_Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)0x0)->GetClass();
      _Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void _Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)
   {
      ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >", ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >","edm::Wrapper<std::map<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)0x0)->GetClass();
      edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTriggerObjectStandAlone_Dictionary();
   static void patcLcLTriggerObjectStandAlone_TClassManip(TClass*);
   static void *new_patcLcLTriggerObjectStandAlone(void *p = 0);
   static void *newArray_patcLcLTriggerObjectStandAlone(Long_t size, void *p);
   static void delete_patcLcLTriggerObjectStandAlone(void *p);
   static void deleteArray_patcLcLTriggerObjectStandAlone(void *p);
   static void destruct_patcLcLTriggerObjectStandAlone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerObjectStandAlone*)
   {
      ::pat::TriggerObjectStandAlone *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerObjectStandAlone));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerObjectStandAlone", 13, "DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h", 30,
                  typeid(::pat::TriggerObjectStandAlone), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerObjectStandAlone_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerObjectStandAlone) );
      instance.SetNew(&new_patcLcLTriggerObjectStandAlone);
      instance.SetNewArray(&newArray_patcLcLTriggerObjectStandAlone);
      instance.SetDelete(&delete_patcLcLTriggerObjectStandAlone);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerObjectStandAlone);
      instance.SetDestructor(&destruct_patcLcLTriggerObjectStandAlone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerObjectStandAlone*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerObjectStandAlone*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerObjectStandAlone*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerObjectStandAlone_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerObjectStandAlone*)0x0)->GetClass();
      patcLcLTriggerObjectStandAlone_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerObjectStandAlone_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)
   {
      ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >","vector<pat::TriggerObjectStandAlone>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)
   {
      ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::TriggerObjectStandAlone> >", ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::TriggerObjectStandAlone> >","edm::Wrapper<std::vector<pat::TriggerObjectStandAlone> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)
   {
      ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >", ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 307,
                  typeid(::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >","pat::TriggerObjectStandAloneRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)
   {
      ::edm::RefProd<vector<pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<pat::TriggerObjectStandAlone> >", ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<vector<pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<vector<pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<vector<pat::TriggerObjectStandAlone> >","pat::TriggerObjectStandAloneRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)
   {
      ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >", ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >","edm::Wrapper<pat::TriggerObjectStandAloneRefProd>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)
   {
      ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >", ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 35,
                  typeid(::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >","pat::TriggerObjectStandAloneRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)
   {
      ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >", "DataFormats/Common/interface/RefVectorIterator.h", 19,
                  typeid(::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >","pat::TriggerObjectStandAloneRefVectorIterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<pat::TriggerObjectStandAlone> >*)
   {
      ::edm::Association<vector<pat::TriggerObjectStandAlone> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<pat::TriggerObjectStandAlone> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<pat::TriggerObjectStandAlone> >", ::edm::Association<vector<pat::TriggerObjectStandAlone> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<pat::TriggerObjectStandAlone> >), DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Association<vector<pat::TriggerObjectStandAlone> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR);

      ROOT::AddClassAlternate("edm::Association<vector<pat::TriggerObjectStandAlone> >","edm::Association<std::vector<pat::TriggerObjectStandAlone> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<pat::TriggerObjectStandAlone> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<pat::TriggerObjectStandAlone> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<pat::TriggerObjectStandAlone> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<pat::TriggerObjectStandAlone> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 16,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);

      ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >","edm::reftobase::Holder<reco::Candidate,pat::TriggerObjectStandAloneRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 19,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR);

      ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >","edm::reftobase::RefHolder<pat::TriggerObjectStandAloneRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >", ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >","edm::Wrapper<edm::Association<std::vector<pat::TriggerObjectStandAlone> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTriggerFilter_Dictionary();
   static void patcLcLTriggerFilter_TClassManip(TClass*);
   static void *new_patcLcLTriggerFilter(void *p = 0);
   static void *newArray_patcLcLTriggerFilter(Long_t size, void *p);
   static void delete_patcLcLTriggerFilter(void *p);
   static void deleteArray_patcLcLTriggerFilter(void *p);
   static void destruct_patcLcLTriggerFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerFilter*)
   {
      ::pat::TriggerFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerFilter));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerFilter", 10, "DataFormats/PatCandidates/interface/TriggerFilter.h", 35,
                  typeid(::pat::TriggerFilter), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerFilter_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerFilter) );
      instance.SetNew(&new_patcLcLTriggerFilter);
      instance.SetNewArray(&newArray_patcLcLTriggerFilter);
      instance.SetDelete(&delete_patcLcLTriggerFilter);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerFilter);
      instance.SetDestructor(&destruct_patcLcLTriggerFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerFilter*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerFilter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerFilter*)0x0)->GetClass();
      patcLcLTriggerFilter_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)
   {
      ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >","vector<pat::TriggerFilter>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::TriggerFilter> >*)
   {
      ::edm::Wrapper<vector<pat::TriggerFilter> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::TriggerFilter> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::TriggerFilter> >", ::edm::Wrapper<vector<pat::TriggerFilter> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::TriggerFilter> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::TriggerFilter> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::TriggerFilter> >","edm::Wrapper<std::vector<pat::TriggerFilter> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::TriggerFilter> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::TriggerFilter> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerFilter> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerFilter> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)
   {
      ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >", ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 307,
                  typeid(::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >), DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);

      ROOT::AddClassAlternate("edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >","pat::TriggerFilterRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<pat::TriggerFilter> >*)
   {
      ::edm::RefProd<vector<pat::TriggerFilter> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<pat::TriggerFilter> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<pat::TriggerFilter> >", ::edm::RefProd<vector<pat::TriggerFilter> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<vector<pat::TriggerFilter> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<vector<pat::TriggerFilter> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<vector<pat::TriggerFilter> >","pat::TriggerFilterRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<pat::TriggerFilter> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<pat::TriggerFilter> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerFilter> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerFilter> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)
   {
      ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >", ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >","edm::Wrapper<pat::TriggerFilterRefProd>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)
   {
      ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >", ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 35,
                  typeid(::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);

      ROOT::AddClassAlternate("edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >","pat::TriggerFilterRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary();
   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)
   {
      ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >", "DataFormats/Common/interface/RefVectorIterator.h", 19,
                  typeid(::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >) );
      instance.SetNew(&new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR);

      ROOT::AddClassAlternate("edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >","pat::TriggerFilterRefVectorIterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)0x0)->GetClass();
      edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTriggerPath_Dictionary();
   static void patcLcLTriggerPath_TClassManip(TClass*);
   static void *new_patcLcLTriggerPath(void *p = 0);
   static void *newArray_patcLcLTriggerPath(Long_t size, void *p);
   static void delete_patcLcLTriggerPath(void *p);
   static void deleteArray_patcLcLTriggerPath(void *p);
   static void destruct_patcLcLTriggerPath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerPath*)
   {
      ::pat::TriggerPath *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerPath));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerPath", 10, "DataFormats/PatCandidates/interface/TriggerPath.h", 39,
                  typeid(::pat::TriggerPath), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerPath_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerPath) );
      instance.SetNew(&new_patcLcLTriggerPath);
      instance.SetNewArray(&newArray_patcLcLTriggerPath);
      instance.SetDelete(&delete_patcLcLTriggerPath);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerPath);
      instance.SetDestructor(&destruct_patcLcLTriggerPath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerPath*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerPath*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerPath*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerPath_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerPath*)0x0)->GetClass();
      patcLcLTriggerPath_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerPath_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)
   {
      ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >","vector<pat::TriggerPath>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::TriggerPath> >*)
   {
      ::edm::Wrapper<vector<pat::TriggerPath> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::TriggerPath> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::TriggerPath> >", ::edm::Wrapper<vector<pat::TriggerPath> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::TriggerPath> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::TriggerPath> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::TriggerPath> >","edm::Wrapper<std::vector<pat::TriggerPath> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::TriggerPath> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::TriggerPath> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerPath> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerPath> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)
   {
      ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >", ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 307,
                  typeid(::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >), DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);

      ROOT::AddClassAlternate("edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >","pat::TriggerPathRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<pat::TriggerPath> >*)
   {
      ::edm::RefProd<vector<pat::TriggerPath> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<pat::TriggerPath> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<pat::TriggerPath> >", ::edm::RefProd<vector<pat::TriggerPath> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<vector<pat::TriggerPath> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<vector<pat::TriggerPath> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<vector<pat::TriggerPath> >","pat::TriggerPathRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<pat::TriggerPath> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<pat::TriggerPath> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerPath> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerPath> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)
   {
      ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >", ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >","edm::Wrapper<pat::TriggerPathRefProd>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)
   {
      ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >", ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 35,
                  typeid(::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);

      ROOT::AddClassAlternate("edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >","pat::TriggerPathRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary();
   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)
   {
      ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >", "DataFormats/Common/interface/RefVectorIterator.h", 19,
                  typeid(::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >) );
      instance.SetNew(&new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR);

      ROOT::AddClassAlternate("edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >","pat::TriggerPathRefVectorIterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)0x0)->GetClass();
      edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEboolcOstringgR_Dictionary();
   static void pairlEboolcOstringgR_TClassManip(TClass*);
   static void *new_pairlEboolcOstringgR(void *p = 0);
   static void *newArray_pairlEboolcOstringgR(Long_t size, void *p);
   static void delete_pairlEboolcOstringgR(void *p);
   static void deleteArray_pairlEboolcOstringgR(void *p);
   static void destruct_pairlEboolcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<bool,string>*)
   {
      pair<bool,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<bool,string>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<bool,string>", "string", 96,
                  typeid(pair<bool,string>), DefineBehavior(ptr, ptr),
                  &pairlEboolcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<bool,string>) );
      instance.SetNew(&new_pairlEboolcOstringgR);
      instance.SetNewArray(&newArray_pairlEboolcOstringgR);
      instance.SetDelete(&delete_pairlEboolcOstringgR);
      instance.SetDeleteArray(&deleteArray_pairlEboolcOstringgR);
      instance.SetDestructor(&destruct_pairlEboolcOstringgR);

      ROOT::AddClassAlternate("pair<bool,string>","pat::L1Seed");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<bool,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEboolcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<bool,string>*)0x0)->GetClass();
      pairlEboolcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEboolcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)
   {
      ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >","vector<pat::L1Seed>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTriggerCondition_Dictionary();
   static void patcLcLTriggerCondition_TClassManip(TClass*);
   static void *new_patcLcLTriggerCondition(void *p = 0);
   static void *newArray_patcLcLTriggerCondition(Long_t size, void *p);
   static void delete_patcLcLTriggerCondition(void *p);
   static void deleteArray_patcLcLTriggerCondition(void *p);
   static void destruct_patcLcLTriggerCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerCondition*)
   {
      ::pat::TriggerCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerCondition));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerCondition", 11, "DataFormats/PatCandidates/interface/TriggerCondition.h", 36,
                  typeid(::pat::TriggerCondition), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerCondition_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerCondition) );
      instance.SetNew(&new_patcLcLTriggerCondition);
      instance.SetNewArray(&newArray_patcLcLTriggerCondition);
      instance.SetDelete(&delete_patcLcLTriggerCondition);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerCondition);
      instance.SetDestructor(&destruct_patcLcLTriggerCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerCondition*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerCondition*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerCondition_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerCondition*)0x0)->GetClass();
      patcLcLTriggerCondition_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerCondition_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)
   {
      ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >","vector<pat::TriggerCondition>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::TriggerCondition> >*)
   {
      ::edm::Wrapper<vector<pat::TriggerCondition> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::TriggerCondition> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::TriggerCondition> >", ::edm::Wrapper<vector<pat::TriggerCondition> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::TriggerCondition> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::TriggerCondition> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::TriggerCondition> >","edm::Wrapper<std::vector<pat::TriggerCondition> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::TriggerCondition> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::TriggerCondition> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerCondition> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerCondition> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)
   {
      ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >", ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 307,
                  typeid(::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >), DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);

      ROOT::AddClassAlternate("edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >","pat::TriggerConditionRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<pat::TriggerCondition> >*)
   {
      ::edm::RefProd<vector<pat::TriggerCondition> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<pat::TriggerCondition> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<pat::TriggerCondition> >", ::edm::RefProd<vector<pat::TriggerCondition> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<vector<pat::TriggerCondition> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<vector<pat::TriggerCondition> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<vector<pat::TriggerCondition> >","pat::TriggerConditionRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<pat::TriggerCondition> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<pat::TriggerCondition> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerCondition> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerCondition> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)
   {
      ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >", ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >","edm::Wrapper<pat::TriggerConditionRefProd>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)
   {
      ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >", ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 35,
                  typeid(::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);

      ROOT::AddClassAlternate("edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >","pat::TriggerConditionRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary();
   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)
   {
      ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >", "DataFormats/Common/interface/RefVectorIterator.h", 19,
                  typeid(::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >) );
      instance.SetNew(&new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR);

      ROOT::AddClassAlternate("edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >","pat::TriggerConditionRefVectorIterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)0x0)->GetClass();
      edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTriggerAlgorithm_Dictionary();
   static void patcLcLTriggerAlgorithm_TClassManip(TClass*);
   static void *new_patcLcLTriggerAlgorithm(void *p = 0);
   static void *newArray_patcLcLTriggerAlgorithm(Long_t size, void *p);
   static void delete_patcLcLTriggerAlgorithm(void *p);
   static void deleteArray_patcLcLTriggerAlgorithm(void *p);
   static void destruct_patcLcLTriggerAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerAlgorithm*)
   {
      ::pat::TriggerAlgorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerAlgorithm));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerAlgorithm", 10, "DataFormats/PatCandidates/interface/TriggerAlgorithm.h", 34,
                  typeid(::pat::TriggerAlgorithm), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerAlgorithm_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerAlgorithm) );
      instance.SetNew(&new_patcLcLTriggerAlgorithm);
      instance.SetNewArray(&newArray_patcLcLTriggerAlgorithm);
      instance.SetDelete(&delete_patcLcLTriggerAlgorithm);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerAlgorithm);
      instance.SetDestructor(&destruct_patcLcLTriggerAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerAlgorithm*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerAlgorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerAlgorithm*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerAlgorithm*)0x0)->GetClass();
      patcLcLTriggerAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)
   {
      ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >", "string", 709,
                  typeid(::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >), DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR);

      ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >","vector<pat::TriggerAlgorithm>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)
   {
      ::edm::Wrapper<vector<pat::TriggerAlgorithm> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pat::TriggerAlgorithm> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pat::TriggerAlgorithm> >", ::edm::Wrapper<vector<pat::TriggerAlgorithm> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<pat::TriggerAlgorithm> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<pat::TriggerAlgorithm> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<pat::TriggerAlgorithm> >","edm::Wrapper<std::vector<pat::TriggerAlgorithm> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)
   {
      ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >", ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 307,
                  typeid(::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >), DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);

      ROOT::AddClassAlternate("edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >","pat::TriggerAlgorithmRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<pat::TriggerAlgorithm> >*)
   {
      ::edm::RefProd<vector<pat::TriggerAlgorithm> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<pat::TriggerAlgorithm> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<pat::TriggerAlgorithm> >", ::edm::RefProd<vector<pat::TriggerAlgorithm> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 50,
                  typeid(::edm::RefProd<vector<pat::TriggerAlgorithm> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<vector<pat::TriggerAlgorithm> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR);

      ROOT::AddClassAlternate("edm::RefProd<vector<pat::TriggerAlgorithm> >","pat::TriggerAlgorithmRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<pat::TriggerAlgorithm> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<pat::TriggerAlgorithm> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerAlgorithm> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<pat::TriggerAlgorithm> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)
   {
      ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >", ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >","edm::Wrapper<pat::TriggerAlgorithmRefProd>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)
   {
      ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >", ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 35,
                  typeid(::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);

      ROOT::AddClassAlternate("edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >","pat::TriggerAlgorithmRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary();
   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)
   {
      ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >", "DataFormats/Common/interface/RefVectorIterator.h", 19,
                  typeid(::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >), DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >) );
      instance.SetNew(&new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR);

      ROOT::AddClassAlternate("edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >","pat::TriggerAlgorithmRefVectorIterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)0x0)->GetClass();
      edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLTriggerEvent_Dictionary();
   static void patcLcLTriggerEvent_TClassManip(TClass*);
   static void *new_patcLcLTriggerEvent(void *p = 0);
   static void *newArray_patcLcLTriggerEvent(Long_t size, void *p);
   static void delete_patcLcLTriggerEvent(void *p);
   static void deleteArray_patcLcLTriggerEvent(void *p);
   static void destruct_patcLcLTriggerEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::TriggerEvent*)
   {
      ::pat::TriggerEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::TriggerEvent));
      static ::ROOT::TGenericClassInfo 
         instance("pat::TriggerEvent", 10, "DataFormats/PatCandidates/interface/TriggerEvent.h", 42,
                  typeid(::pat::TriggerEvent), DefineBehavior(ptr, ptr),
                  &patcLcLTriggerEvent_Dictionary, isa_proxy, 8,
                  sizeof(::pat::TriggerEvent) );
      instance.SetNew(&new_patcLcLTriggerEvent);
      instance.SetNewArray(&newArray_patcLcLTriggerEvent);
      instance.SetDelete(&delete_patcLcLTriggerEvent);
      instance.SetDeleteArray(&deleteArray_patcLcLTriggerEvent);
      instance.SetDestructor(&destruct_patcLcLTriggerEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::TriggerEvent*)
   {
      return GenerateInitInstanceLocal((::pat::TriggerEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::TriggerEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLTriggerEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::TriggerEvent*)0x0)->GetClass();
      patcLcLTriggerEvent_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLTriggerEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpatcLcLTriggerEventgR_Dictionary();
   static void edmcLcLWrapperlEpatcLcLTriggerEventgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpatcLcLTriggerEventgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p);
   static void destruct_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pat::TriggerEvent>*)
   {
      ::edm::Wrapper<pat::TriggerEvent> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pat::TriggerEvent>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pat::TriggerEvent>", ::edm::Wrapper<pat::TriggerEvent>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<pat::TriggerEvent>), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpatcLcLTriggerEventgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<pat::TriggerEvent>) );
      instance.SetNew(&new_edmcLcLWrapperlEpatcLcLTriggerEventgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpatcLcLTriggerEventgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpatcLcLTriggerEventgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpatcLcLTriggerEventgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpatcLcLTriggerEventgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pat::TriggerEvent>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pat::TriggerEvent>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pat::TriggerEvent>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpatcLcLTriggerEventgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pat::TriggerEvent>*)0x0)->GetClass();
      edmcLcLWrapperlEpatcLcLTriggerEventgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpatcLcLTriggerEventgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *patcLcLPackedTriggerPrescales_Dictionary();
   static void patcLcLPackedTriggerPrescales_TClassManip(TClass*);
   static void *new_patcLcLPackedTriggerPrescales(void *p = 0);
   static void *newArray_patcLcLPackedTriggerPrescales(Long_t size, void *p);
   static void delete_patcLcLPackedTriggerPrescales(void *p);
   static void deleteArray_patcLcLPackedTriggerPrescales(void *p);
   static void destruct_patcLcLPackedTriggerPrescales(void *p);

   // Schema evolution read functions
   static void read_patcLcLPackedTriggerPrescales_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("pat::PackedTriggerPrescales");
      static Long_t offset_triggerNames_ = cls->GetDataMemberOffset("triggerNames_");
      const edm::TriggerNames*& triggerNames_ = *(const edm::TriggerNames**)(target+offset_triggerNames_);
      pat::PackedTriggerPrescales* newObj = (pat::PackedTriggerPrescales*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     triggerNames_ = 0; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::PackedTriggerPrescales*)
   {
      ::pat::PackedTriggerPrescales *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::PackedTriggerPrescales));
      static ::ROOT::TGenericClassInfo 
         instance("pat::PackedTriggerPrescales", 10, "DataFormats/PatCandidates/interface/PackedTriggerPrescales.h", 10,
                  typeid(::pat::PackedTriggerPrescales), DefineBehavior(ptr, ptr),
                  &patcLcLPackedTriggerPrescales_Dictionary, isa_proxy, 8,
                  sizeof(::pat::PackedTriggerPrescales) );
      instance.SetNew(&new_patcLcLPackedTriggerPrescales);
      instance.SetNewArray(&newArray_patcLcLPackedTriggerPrescales);
      instance.SetDelete(&delete_patcLcLPackedTriggerPrescales);
      instance.SetDeleteArray(&deleteArray_patcLcLPackedTriggerPrescales);
      instance.SetDestructor(&destruct_patcLcLPackedTriggerPrescales);

      ROOT::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "pat::PackedTriggerPrescales";
      rule->fTarget      = "triggerNames_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_patcLcLPackedTriggerPrescales_0);
      rule->fCode        = "triggerNames_ = 0; ";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::PackedTriggerPrescales*)
   {
      return GenerateInitInstanceLocal((::pat::PackedTriggerPrescales*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::PackedTriggerPrescales*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLPackedTriggerPrescales_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::PackedTriggerPrescales*)0x0)->GetClass();
      patcLcLPackedTriggerPrescales_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLPackedTriggerPrescales_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR_Dictionary();
   static void edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p);
   static void destruct_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pat::PackedTriggerPrescales>*)
   {
      ::edm::Wrapper<pat::PackedTriggerPrescales> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pat::PackedTriggerPrescales>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pat::PackedTriggerPrescales>", ::edm::Wrapper<pat::PackedTriggerPrescales>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<pat::PackedTriggerPrescales>), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<pat::PackedTriggerPrescales>) );
      instance.SetNew(&new_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pat::PackedTriggerPrescales>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pat::PackedTriggerPrescales>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pat::PackedTriggerPrescales>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pat::PackedTriggerPrescales>*)0x0)->GetClass();
      edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerObject(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerObject : new ::pat::TriggerObject;
   }
   static void *newArray_patcLcLTriggerObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerObject[nElements] : new ::pat::TriggerObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerObject(void *p) {
      delete ((::pat::TriggerObject*)p);
   }
   static void deleteArray_patcLcLTriggerObject(void *p) {
      delete [] ((::pat::TriggerObject*)p);
   }
   static void destruct_patcLcLTriggerObject(void *p) {
      typedef ::pat::TriggerObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerObject

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> > : new ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >[nElements] : new ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectmUcOvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerObject> > : new ::edm::Wrapper<vector<pat::TriggerObject> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerObject> >[nElements] : new ::edm::Wrapper<vector<pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > : new ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >;
   }
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >[nElements] : new ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > : new pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >;
   }
   static void *newArray_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements] : new pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void deleteArray_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void destruct_pairlEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerObject> > : new ::edm::RefProd<vector<pat::TriggerObject> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerObject> >[nElements] : new ::edm::RefProd<vector<pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::RefProd<vector<pat::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<pat::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::RefProd<vector<pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > > : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >[nElements] : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > : new ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >[nElements] : new ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > : new ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >;
   }
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >[nElements] : new ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Association<vector<pat::TriggerObject> > : new ::edm::Association<vector<pat::TriggerObject> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Association<vector<pat::TriggerObject> >[nElements] : new ::edm::Association<vector<pat::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::Association<vector<pat::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::Association<vector<pat::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::Association<vector<pat::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<pat::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > > : new ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > > : new ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >;
   }
   static void *newArray_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >[nElements] : new ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >*)p);
   }
   static void destruct_edmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<edm::Association<vector<pat::TriggerObject> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > : new pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >;
   }
   static void *newArray_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >[nElements] : new pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      delete ((pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)p);
   }
   static void deleteArray_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      delete [] ((pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)p);
   }
   static void destruct_pairlEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      typedef pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > > : new ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >;
   }
   static void *newArray__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >[nElements] : new ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      delete ((::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)p);
   }
   static void deleteArray__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      delete [] ((::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)p);
   }
   static void destruct__Rb_tree_const_iteratorlEpairlEconstsPstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      typedef ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > > : new ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >;
   }
   static void *newArray_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >[nElements] : new ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEmaplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerObjectStandAlone(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerObjectStandAlone : new ::pat::TriggerObjectStandAlone;
   }
   static void *newArray_patcLcLTriggerObjectStandAlone(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerObjectStandAlone[nElements] : new ::pat::TriggerObjectStandAlone[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerObjectStandAlone(void *p) {
      delete ((::pat::TriggerObjectStandAlone*)p);
   }
   static void deleteArray_patcLcLTriggerObjectStandAlone(void *p) {
      delete [] ((::pat::TriggerObjectStandAlone*)p);
   }
   static void destruct_patcLcLTriggerObjectStandAlone(void *p) {
      typedef ::pat::TriggerObjectStandAlone current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerObjectStandAlone

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> > : new ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >[nElements] : new ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerObjectStandAlonemUcOvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> > : new ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >[nElements] : new ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > : new ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >;
   }
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >[nElements] : new ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerObjectStandAlone> > : new ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >[nElements] : new ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::edm::RefProd<vector<pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > > : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >[nElements] : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > : new ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >[nElements] : new ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > : new ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >;
   }
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >[nElements] : new ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Association<vector<pat::TriggerObjectStandAlone> > : new ::edm::Association<vector<pat::TriggerObjectStandAlone> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Association<vector<pat::TriggerObjectStandAlone> >[nElements] : new ::edm::Association<vector<pat::TriggerObjectStandAlone> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete ((::edm::Association<vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      delete [] ((::edm::Association<vector<pat::TriggerObjectStandAlone> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgR(void *p) {
      typedef ::edm::Association<vector<pat::TriggerObjectStandAlone> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<pat::TriggerObjectStandAlone> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectStandAlonegRcOpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > > : new ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectStandAlonegRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerFilter(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerFilter : new ::pat::TriggerFilter;
   }
   static void *newArray_patcLcLTriggerFilter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerFilter[nElements] : new ::pat::TriggerFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerFilter(void *p) {
      delete ((::pat::TriggerFilter*)p);
   }
   static void deleteArray_patcLcLTriggerFilter(void *p) {
      delete [] ((::pat::TriggerFilter*)p);
   }
   static void destruct_patcLcLTriggerFilter(void *p) {
      typedef ::pat::TriggerFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerFilter

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> > : new ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >[nElements] : new ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerFiltermUcOvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerFilter> > : new ::edm::Wrapper<vector<pat::TriggerFilter> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerFilter> >[nElements] : new ::edm::Wrapper<vector<pat::TriggerFilter> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::TriggerFilter> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::TriggerFilter> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::TriggerFilter> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::TriggerFilter> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > : new ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >;
   }
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >[nElements] : new ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      delete ((::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      typedef ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerFilter> > : new ::edm::RefProd<vector<pat::TriggerFilter> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerFilter> >[nElements] : new ::edm::RefProd<vector<pat::TriggerFilter> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      delete ((::edm::RefProd<vector<pat::TriggerFilter> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<pat::TriggerFilter> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgR(void *p) {
      typedef ::edm::RefProd<vector<pat::TriggerFilter> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<pat::TriggerFilter> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > > : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >[nElements] : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerFiltergRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > : new ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >[nElements] : new ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      delete ((::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      typedef ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > : new ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >;
   }
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >[nElements] : new ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      delete ((::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      delete [] ((::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >*)p);
   }
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltercOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerFiltergRcOpatcLcLTriggerFiltergRsPgR(void *p) {
      typedef ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerPath(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerPath : new ::pat::TriggerPath;
   }
   static void *newArray_patcLcLTriggerPath(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerPath[nElements] : new ::pat::TriggerPath[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerPath(void *p) {
      delete ((::pat::TriggerPath*)p);
   }
   static void deleteArray_patcLcLTriggerPath(void *p) {
      delete [] ((::pat::TriggerPath*)p);
   }
   static void destruct_patcLcLTriggerPath(void *p) {
      typedef ::pat::TriggerPath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerPath

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> > : new ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >[nElements] : new ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerPathmUcOvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerPath> > : new ::edm::Wrapper<vector<pat::TriggerPath> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerPath> >[nElements] : new ::edm::Wrapper<vector<pat::TriggerPath> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::TriggerPath> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::TriggerPath> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::TriggerPath> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::TriggerPath> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > : new ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >;
   }
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >[nElements] : new ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      delete ((::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      typedef ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerPath> > : new ::edm::RefProd<vector<pat::TriggerPath> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerPath> >[nElements] : new ::edm::RefProd<vector<pat::TriggerPath> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      delete ((::edm::RefProd<vector<pat::TriggerPath> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<pat::TriggerPath> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgR(void *p) {
      typedef ::edm::RefProd<vector<pat::TriggerPath> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<pat::TriggerPath> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > > : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >[nElements] : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerPathgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > : new ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >[nElements] : new ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > : new ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >;
   }
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >[nElements] : new ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      delete ((::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      delete [] ((::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >*)p);
   }
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerPathgRcOpatcLcLTriggerPathgRsPgR(void *p) {
      typedef ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEboolcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<bool,string> : new pair<bool,string>;
   }
   static void *newArray_pairlEboolcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<bool,string>[nElements] : new pair<bool,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEboolcOstringgR(void *p) {
      delete ((pair<bool,string>*)p);
   }
   static void deleteArray_pairlEboolcOstringgR(void *p) {
      delete [] ((pair<bool,string>*)p);
   }
   static void destruct_pairlEboolcOstringgR(void *p) {
      typedef pair<bool,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<bool,string>

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > > : new ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >[nElements] : new ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpairlEboolcOstringgRmUcOvectorlEpairlEboolcOstringgRsPgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerCondition(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerCondition : new ::pat::TriggerCondition;
   }
   static void *newArray_patcLcLTriggerCondition(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerCondition[nElements] : new ::pat::TriggerCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerCondition(void *p) {
      delete ((::pat::TriggerCondition*)p);
   }
   static void deleteArray_patcLcLTriggerCondition(void *p) {
      delete [] ((::pat::TriggerCondition*)p);
   }
   static void destruct_patcLcLTriggerCondition(void *p) {
      typedef ::pat::TriggerCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerCondition

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> > : new ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >[nElements] : new ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerConditionmUcOvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerCondition> > : new ::edm::Wrapper<vector<pat::TriggerCondition> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerCondition> >[nElements] : new ::edm::Wrapper<vector<pat::TriggerCondition> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::TriggerCondition> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::TriggerCondition> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::TriggerCondition> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::TriggerCondition> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > : new ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >;
   }
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >[nElements] : new ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      delete ((::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      typedef ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerCondition> > : new ::edm::RefProd<vector<pat::TriggerCondition> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerCondition> >[nElements] : new ::edm::RefProd<vector<pat::TriggerCondition> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      delete ((::edm::RefProd<vector<pat::TriggerCondition> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<pat::TriggerCondition> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgR(void *p) {
      typedef ::edm::RefProd<vector<pat::TriggerCondition> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<pat::TriggerCondition> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > > : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >[nElements] : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerConditiongRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > : new ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >[nElements] : new ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      delete ((::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      typedef ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > : new ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >;
   }
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >[nElements] : new ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      delete ((::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      delete [] ((::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >*)p);
   }
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerConditiongRcOpatcLcLTriggerConditiongRsPgR(void *p) {
      typedef ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerAlgorithm(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerAlgorithm : new ::pat::TriggerAlgorithm;
   }
   static void *newArray_patcLcLTriggerAlgorithm(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerAlgorithm[nElements] : new ::pat::TriggerAlgorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerAlgorithm(void *p) {
      delete ((::pat::TriggerAlgorithm*)p);
   }
   static void deleteArray_patcLcLTriggerAlgorithm(void *p) {
      delete [] ((::pat::TriggerAlgorithm*)p);
   }
   static void destruct_patcLcLTriggerAlgorithm(void *p) {
      typedef ::pat::TriggerAlgorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerAlgorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> > : new ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >[nElements] : new ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPpatcLcLTriggerAlgorithmmUcOvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerAlgorithm> > : new ::edm::Wrapper<vector<pat::TriggerAlgorithm> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pat::TriggerAlgorithm> >[nElements] : new ::edm::Wrapper<vector<pat::TriggerAlgorithm> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pat::TriggerAlgorithm> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pat::TriggerAlgorithm> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pat::TriggerAlgorithm> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > : new ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >;
   }
   static void *newArray_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >[nElements] : new ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete ((::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      typedef ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerAlgorithm> > : new ::edm::RefProd<vector<pat::TriggerAlgorithm> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefProd<vector<pat::TriggerAlgorithm> >[nElements] : new ::edm::RefProd<vector<pat::TriggerAlgorithm> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete ((::edm::RefProd<vector<pat::TriggerAlgorithm> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<pat::TriggerAlgorithm> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      typedef ::edm::RefProd<vector<pat::TriggerAlgorithm> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<pat::TriggerAlgorithm> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > > : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >[nElements] : new ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefProdlEvectorlEpatcLcLTriggerAlgorithmgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > : new ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >[nElements] : new ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > : new ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >;
   }
   static void *newArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >[nElements] : new ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete ((::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      delete [] ((::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*)p);
   }
   static void destruct_edmcLcLRefVectorIteratorlEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerAlgorithmgRcOpatcLcLTriggerAlgorithmgRsPgR(void *p) {
      typedef ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLTriggerEvent(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerEvent : new ::pat::TriggerEvent;
   }
   static void *newArray_patcLcLTriggerEvent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::TriggerEvent[nElements] : new ::pat::TriggerEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLTriggerEvent(void *p) {
      delete ((::pat::TriggerEvent*)p);
   }
   static void deleteArray_patcLcLTriggerEvent(void *p) {
      delete [] ((::pat::TriggerEvent*)p);
   }
   static void destruct_patcLcLTriggerEvent(void *p) {
      typedef ::pat::TriggerEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::TriggerEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<pat::TriggerEvent> : new ::edm::Wrapper<pat::TriggerEvent>;
   }
   static void *newArray_edmcLcLWrapperlEpatcLcLTriggerEventgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<pat::TriggerEvent>[nElements] : new ::edm::Wrapper<pat::TriggerEvent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p) {
      delete ((::edm::Wrapper<pat::TriggerEvent>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p) {
      delete [] ((::edm::Wrapper<pat::TriggerEvent>*)p);
   }
   static void destruct_edmcLcLWrapperlEpatcLcLTriggerEventgR(void *p) {
      typedef ::edm::Wrapper<pat::TriggerEvent> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pat::TriggerEvent>

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLPackedTriggerPrescales(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::PackedTriggerPrescales : new ::pat::PackedTriggerPrescales;
   }
   static void *newArray_patcLcLPackedTriggerPrescales(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::PackedTriggerPrescales[nElements] : new ::pat::PackedTriggerPrescales[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLPackedTriggerPrescales(void *p) {
      delete ((::pat::PackedTriggerPrescales*)p);
   }
   static void deleteArray_patcLcLPackedTriggerPrescales(void *p) {
      delete [] ((::pat::PackedTriggerPrescales*)p);
   }
   static void destruct_patcLcLPackedTriggerPrescales(void *p) {
      typedef ::pat::PackedTriggerPrescales current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::PackedTriggerPrescales

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<pat::PackedTriggerPrescales> : new ::edm::Wrapper<pat::PackedTriggerPrescales>;
   }
   static void *newArray_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<pat::PackedTriggerPrescales>[nElements] : new ::edm::Wrapper<pat::PackedTriggerPrescales>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p) {
      delete ((::edm::Wrapper<pat::PackedTriggerPrescales>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p) {
      delete [] ((::edm::Wrapper<pat::PackedTriggerPrescales>*)p);
   }
   static void destruct_edmcLcLWrapperlEpatcLcLPackedTriggerPrescalesgR(void *p) {
      typedef ::edm::Wrapper<pat::PackedTriggerPrescales> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pat::PackedTriggerPrescales>

namespace ROOT {
   static TClass *vectorlEpatcLcLTriggerPathgR_Dictionary();
   static void vectorlEpatcLcLTriggerPathgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTriggerPathgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTriggerPathgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTriggerPathgR(void *p);
   static void deleteArray_vectorlEpatcLcLTriggerPathgR(void *p);
   static void destruct_vectorlEpatcLcLTriggerPathgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TriggerPath>*)
   {
      vector<pat::TriggerPath> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TriggerPath>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TriggerPath>", -2, "vector", 214,
                  typeid(vector<pat::TriggerPath>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTriggerPathgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TriggerPath>) );
      instance.SetNew(&new_vectorlEpatcLcLTriggerPathgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTriggerPathgR);
      instance.SetDelete(&delete_vectorlEpatcLcLTriggerPathgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTriggerPathgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTriggerPathgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TriggerPath> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TriggerPath>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTriggerPathgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TriggerPath>*)0x0)->GetClass();
      vectorlEpatcLcLTriggerPathgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTriggerPathgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTriggerPathgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerPath> : new vector<pat::TriggerPath>;
   }
   static void *newArray_vectorlEpatcLcLTriggerPathgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerPath>[nElements] : new vector<pat::TriggerPath>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTriggerPathgR(void *p) {
      delete ((vector<pat::TriggerPath>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTriggerPathgR(void *p) {
      delete [] ((vector<pat::TriggerPath>*)p);
   }
   static void destruct_vectorlEpatcLcLTriggerPathgR(void *p) {
      typedef vector<pat::TriggerPath> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TriggerPath>

namespace ROOT {
   static TClass *vectorlEpatcLcLTriggerObjectStandAlonegR_Dictionary();
   static void vectorlEpatcLcLTriggerObjectStandAlonegR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTriggerObjectStandAlonegR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p);
   static void deleteArray_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p);
   static void destruct_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TriggerObjectStandAlone>*)
   {
      vector<pat::TriggerObjectStandAlone> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TriggerObjectStandAlone>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TriggerObjectStandAlone>", -2, "vector", 214,
                  typeid(vector<pat::TriggerObjectStandAlone>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTriggerObjectStandAlonegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TriggerObjectStandAlone>) );
      instance.SetNew(&new_vectorlEpatcLcLTriggerObjectStandAlonegR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTriggerObjectStandAlonegR);
      instance.SetDelete(&delete_vectorlEpatcLcLTriggerObjectStandAlonegR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTriggerObjectStandAlonegR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTriggerObjectStandAlonegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TriggerObjectStandAlone> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TriggerObjectStandAlone>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTriggerObjectStandAlonegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TriggerObjectStandAlone>*)0x0)->GetClass();
      vectorlEpatcLcLTriggerObjectStandAlonegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTriggerObjectStandAlonegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerObjectStandAlone> : new vector<pat::TriggerObjectStandAlone>;
   }
   static void *newArray_vectorlEpatcLcLTriggerObjectStandAlonegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerObjectStandAlone>[nElements] : new vector<pat::TriggerObjectStandAlone>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p) {
      delete ((vector<pat::TriggerObjectStandAlone>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p) {
      delete [] ((vector<pat::TriggerObjectStandAlone>*)p);
   }
   static void destruct_vectorlEpatcLcLTriggerObjectStandAlonegR(void *p) {
      typedef vector<pat::TriggerObjectStandAlone> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TriggerObjectStandAlone>

namespace ROOT {
   static TClass *vectorlEpatcLcLTriggerObjectgR_Dictionary();
   static void vectorlEpatcLcLTriggerObjectgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTriggerObjectgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTriggerObjectgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTriggerObjectgR(void *p);
   static void deleteArray_vectorlEpatcLcLTriggerObjectgR(void *p);
   static void destruct_vectorlEpatcLcLTriggerObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TriggerObject>*)
   {
      vector<pat::TriggerObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TriggerObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TriggerObject>", -2, "vector", 214,
                  typeid(vector<pat::TriggerObject>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTriggerObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TriggerObject>) );
      instance.SetNew(&new_vectorlEpatcLcLTriggerObjectgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTriggerObjectgR);
      instance.SetDelete(&delete_vectorlEpatcLcLTriggerObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTriggerObjectgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTriggerObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TriggerObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TriggerObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTriggerObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TriggerObject>*)0x0)->GetClass();
      vectorlEpatcLcLTriggerObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTriggerObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTriggerObjectgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerObject> : new vector<pat::TriggerObject>;
   }
   static void *newArray_vectorlEpatcLcLTriggerObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerObject>[nElements] : new vector<pat::TriggerObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTriggerObjectgR(void *p) {
      delete ((vector<pat::TriggerObject>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTriggerObjectgR(void *p) {
      delete [] ((vector<pat::TriggerObject>*)p);
   }
   static void destruct_vectorlEpatcLcLTriggerObjectgR(void *p) {
      typedef vector<pat::TriggerObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TriggerObject>

namespace ROOT {
   static TClass *vectorlEpatcLcLTriggerFiltergR_Dictionary();
   static void vectorlEpatcLcLTriggerFiltergR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTriggerFiltergR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTriggerFiltergR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTriggerFiltergR(void *p);
   static void deleteArray_vectorlEpatcLcLTriggerFiltergR(void *p);
   static void destruct_vectorlEpatcLcLTriggerFiltergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TriggerFilter>*)
   {
      vector<pat::TriggerFilter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TriggerFilter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TriggerFilter>", -2, "vector", 214,
                  typeid(vector<pat::TriggerFilter>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTriggerFiltergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TriggerFilter>) );
      instance.SetNew(&new_vectorlEpatcLcLTriggerFiltergR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTriggerFiltergR);
      instance.SetDelete(&delete_vectorlEpatcLcLTriggerFiltergR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTriggerFiltergR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTriggerFiltergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TriggerFilter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TriggerFilter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTriggerFiltergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TriggerFilter>*)0x0)->GetClass();
      vectorlEpatcLcLTriggerFiltergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTriggerFiltergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTriggerFiltergR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerFilter> : new vector<pat::TriggerFilter>;
   }
   static void *newArray_vectorlEpatcLcLTriggerFiltergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerFilter>[nElements] : new vector<pat::TriggerFilter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTriggerFiltergR(void *p) {
      delete ((vector<pat::TriggerFilter>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTriggerFiltergR(void *p) {
      delete [] ((vector<pat::TriggerFilter>*)p);
   }
   static void destruct_vectorlEpatcLcLTriggerFiltergR(void *p) {
      typedef vector<pat::TriggerFilter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TriggerFilter>

namespace ROOT {
   static TClass *vectorlEpatcLcLTriggerConditiongR_Dictionary();
   static void vectorlEpatcLcLTriggerConditiongR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTriggerConditiongR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTriggerConditiongR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTriggerConditiongR(void *p);
   static void deleteArray_vectorlEpatcLcLTriggerConditiongR(void *p);
   static void destruct_vectorlEpatcLcLTriggerConditiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TriggerCondition>*)
   {
      vector<pat::TriggerCondition> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TriggerCondition>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TriggerCondition>", -2, "vector", 214,
                  typeid(vector<pat::TriggerCondition>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTriggerConditiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TriggerCondition>) );
      instance.SetNew(&new_vectorlEpatcLcLTriggerConditiongR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTriggerConditiongR);
      instance.SetDelete(&delete_vectorlEpatcLcLTriggerConditiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTriggerConditiongR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTriggerConditiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TriggerCondition> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TriggerCondition>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTriggerConditiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TriggerCondition>*)0x0)->GetClass();
      vectorlEpatcLcLTriggerConditiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTriggerConditiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTriggerConditiongR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerCondition> : new vector<pat::TriggerCondition>;
   }
   static void *newArray_vectorlEpatcLcLTriggerConditiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerCondition>[nElements] : new vector<pat::TriggerCondition>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTriggerConditiongR(void *p) {
      delete ((vector<pat::TriggerCondition>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTriggerConditiongR(void *p) {
      delete [] ((vector<pat::TriggerCondition>*)p);
   }
   static void destruct_vectorlEpatcLcLTriggerConditiongR(void *p) {
      typedef vector<pat::TriggerCondition> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TriggerCondition>

namespace ROOT {
   static TClass *vectorlEpatcLcLTriggerAlgorithmgR_Dictionary();
   static void vectorlEpatcLcLTriggerAlgorithmgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLTriggerAlgorithmgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLTriggerAlgorithmgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLTriggerAlgorithmgR(void *p);
   static void deleteArray_vectorlEpatcLcLTriggerAlgorithmgR(void *p);
   static void destruct_vectorlEpatcLcLTriggerAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::TriggerAlgorithm>*)
   {
      vector<pat::TriggerAlgorithm> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::TriggerAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::TriggerAlgorithm>", -2, "vector", 214,
                  typeid(vector<pat::TriggerAlgorithm>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLTriggerAlgorithmgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::TriggerAlgorithm>) );
      instance.SetNew(&new_vectorlEpatcLcLTriggerAlgorithmgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLTriggerAlgorithmgR);
      instance.SetDelete(&delete_vectorlEpatcLcLTriggerAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLTriggerAlgorithmgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLTriggerAlgorithmgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::TriggerAlgorithm> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::TriggerAlgorithm>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLTriggerAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::TriggerAlgorithm>*)0x0)->GetClass();
      vectorlEpatcLcLTriggerAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLTriggerAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLTriggerAlgorithmgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerAlgorithm> : new vector<pat::TriggerAlgorithm>;
   }
   static void *newArray_vectorlEpatcLcLTriggerAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::TriggerAlgorithm>[nElements] : new vector<pat::TriggerAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLTriggerAlgorithmgR(void *p) {
      delete ((vector<pat::TriggerAlgorithm>*)p);
   }
   static void deleteArray_vectorlEpatcLcLTriggerAlgorithmgR(void *p) {
      delete [] ((vector<pat::TriggerAlgorithm>*)p);
   }
   static void destruct_vectorlEpatcLcLTriggerAlgorithmgR(void *p) {
      typedef vector<pat::TriggerAlgorithm> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::TriggerAlgorithm>

namespace ROOT {
   static TClass *vectorlEpairlEboolcOstringgRsPgR_Dictionary();
   static void vectorlEpairlEboolcOstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEboolcOstringgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEboolcOstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEboolcOstringgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEboolcOstringgRsPgR(void *p);
   static void destruct_vectorlEpairlEboolcOstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<bool,string> >*)
   {
      vector<pair<bool,string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<bool,string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<bool,string> >", -2, "vector", 214,
                  typeid(vector<pair<bool,string> >), DefineBehavior(ptr, ptr),
                  &vectorlEpairlEboolcOstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<bool,string> >) );
      instance.SetNew(&new_vectorlEpairlEboolcOstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEboolcOstringgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEboolcOstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEboolcOstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEboolcOstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<bool,string> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<bool,string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEboolcOstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<bool,string> >*)0x0)->GetClass();
      vectorlEpairlEboolcOstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEboolcOstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEboolcOstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<bool,string> > : new vector<pair<bool,string> >;
   }
   static void *newArray_vectorlEpairlEboolcOstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<bool,string> >[nElements] : new vector<pair<bool,string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEboolcOstringgRsPgR(void *p) {
      delete ((vector<pair<bool,string> >*)p);
   }
   static void deleteArray_vectorlEpairlEboolcOstringgRsPgR(void *p) {
      delete [] ((vector<pair<bool,string> >*)p);
   }
   static void destruct_vectorlEpairlEboolcOstringgRsPgR(void *p) {
      typedef vector<pair<bool,string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<bool,string> >

namespace ROOT {
   static TClass *maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_Dictionary();
   static void maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p);
   static void deleteArray_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p);
   static void destruct_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)
   {
      map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >", -2, "map", 96,
                  typeid(map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >), DefineBehavior(ptr, ptr),
                  &maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >) );
      instance.SetNew(&new_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)0x0)->GetClass();
      maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > : new map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >;
   }
   static void *newArray_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >[nElements] : new map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      delete ((map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)p);
   }
   static void deleteArray_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      delete [] ((map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >*)p);
   }
   static void destruct_maplEstringcOedmcLcLRefProdlEedmcLcLAssociationlEvectorlEpatcLcLTriggerObjectgRsPgRsPgRsPgR(void *p) {
      typedef map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >

namespace ROOT {
   static TClass *maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary();
   static void maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void deleteArray_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);
   static void destruct_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)
   {
      map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", -2, "map", 96,
                  typeid(map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >), DefineBehavior(ptr, ptr),
                  &maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >) );
      instance.SetNew(&new_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDelete(&delete_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)0x0)->GetClass();
      maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > : new map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >;
   }
   static void *newArray_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements] : new map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete ((map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void deleteArray_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      delete [] ((map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >*)p);
   }
   static void destruct_maplEstringcOedmcLcLReflEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEpatcLcLTriggerObjectgRcOpatcLcLTriggerObjectgRsPgRsPgR(void *p) {
      typedef map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >

namespace {
  void TriggerDictionaryInitialization_DataFormatsPatCandidates_x1r_Impl() {
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
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h")))  TriggerObject;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  ValueTrait;
}}
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h")))  Candidate;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h")))  TriggerObjectStandAlone;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerEvent.h")))  TriggerFilter;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerEvent.h")))  TriggerPath;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerEvent.h")))  TriggerCondition;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerEvent.h")))  TriggerAlgorithm;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/TriggerEvent.h")))  TriggerEvent;}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/PackedTriggerPrescales.h")))  PackedTriggerPrescales;}
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

#include "DataFormats/PatCandidates/interface/TriggerObjectStandAlone.h"
#include "DataFormats/PatCandidates/interface/TriggerEvent.h"
#include "DataFormats/PatCandidates/interface/PackedTriggerPrescales.h"
#include <iterator>
#include <vector>

namespace DataFormats_PatCandidates {
  struct dictionarytrigger {

  pat::TriggerObjectCollection v_p_to;
  pat::TriggerObjectCollection::const_iterator v_p_to_ci;
  edm::Wrapper<pat::TriggerObjectCollection> w_v_p_to;
  pat::TriggerObjectRef r_p_to;
  std::pair< std::string, pat::TriggerObjectRef > p_r_p_to;
  pat::TriggerObjectMatchMap m_r_p_to;
  pat::TriggerObjectRefProd rp_p_to;
  edm::Wrapper<pat::TriggerObjectRefProd> w_rp_p_to;
  pat::TriggerObjectRefVector rv_p_to;
  pat::TriggerObjectRefVectorIterator rv_p_to_i;
  pat::TriggerObjectMatch a_p_to;
  edm::reftobase::Holder<reco::Candidate, pat::TriggerObjectRef> h_p_to;
  edm::reftobase::RefHolder<pat::TriggerObjectRef> rh_p_to;
//   edm::reftobase::VectorHolder<reco::Candidate, pat::TriggerObjectRefVector> vh_p_to;
//   edm::reftobase::RefVectorHolder<pat::TriggerObjectRefVector> rvh_p_to;
  edm::Wrapper<pat::TriggerObjectMatch> w_a_p_to;
  pat::TriggerObjectMatchRefProd rp_a_p_to;
  std::pair< std::string, pat::TriggerObjectMatchRefProd > p_rp_a_p_to;
  pat::TriggerObjectMatchContainer m_rp_a_p_to;
  pat::TriggerObjectMatchContainer::const_iterator m_rp_a_p_to_ci;
  edm::Wrapper<pat::TriggerObjectMatchContainer> w_m_rp_a_p_to;

  pat::TriggerObjectStandAloneCollection v_p_tosa;
  pat::TriggerObjectStandAloneCollection::const_iterator v_p_tosa_ci;
  edm::Wrapper<pat::TriggerObjectStandAloneCollection> w_v_p_tosa;
  pat::TriggerObjectStandAloneRef r_p_tosa;
  pat::TriggerObjectStandAloneRefProd rp_p_tosa;
  edm::Wrapper<pat::TriggerObjectStandAloneRefProd> w_rp_p_tosa;
  pat::TriggerObjectStandAloneRefVector rv_p_tosa;
  pat::TriggerObjectStandAloneRefVectorIterator rv_p_tosa_i;
  pat::TriggerObjectStandAloneMatch a_p_tosa;
  edm::reftobase::Holder<reco::Candidate, pat::TriggerObjectStandAloneRef> h_p_tosa;
  edm::reftobase::RefHolder<pat::TriggerObjectStandAloneRef> rh_p_tosa;
//   edm::reftobase::VectorHolder<reco::Candidate, pat::TriggerObjectStandAloneRefVector> vh_p_tosa;
//   edm::reftobase::RefVectorHolder<pat::TriggerObjectStandAloneRefVector> rvh_p_tosa;
  edm::Wrapper<pat::TriggerObjectStandAloneMatch> w_a_p_tosa;

  pat::TriggerFilterCollection v_p_tf;
  pat::TriggerFilterCollection::const_iterator v_p_tf_ci;
  edm::Wrapper<pat::TriggerFilterCollection> w_v_p_tf;
  pat::TriggerFilterRef r_p_tf;
  pat::TriggerFilterRefProd rp_p_tf;
  edm::Wrapper<pat::TriggerFilterRefProd> w_rp_p_tf;
  pat::TriggerFilterRefVector rv_p_tf;
  pat::TriggerFilterRefVectorIterator rv_p_tf_i;

  pat::TriggerPathCollection v_p_tp;
  pat::TriggerPathCollection::const_iterator v_p_tp_ci;
  edm::Wrapper<pat::TriggerPathCollection> w_v_p_tp;
  pat::TriggerPathRef r_p_tp;
  pat::TriggerPathRefProd rp_p_tp;
  edm::Wrapper<pat::TriggerPathRefProd> w_rp_p_tp;
  pat::TriggerPathRefVector rv_p_tp;
  pat::TriggerPathRefVectorIterator rv_p_tp_i;
  pat::L1Seed p_bs;
  pat::L1SeedCollection vp_bs;
  pat::L1SeedCollection::const_iterator vp_bs_ci;

  pat::TriggerConditionCollection v_p_tc;
  pat::TriggerConditionCollection::const_iterator v_p_tc_ci;
  edm::Wrapper<pat::TriggerConditionCollection> w_v_p_tc;
  pat::TriggerConditionRef r_p_tc;
  pat::TriggerConditionRefProd rp_p_tc;
  edm::Wrapper<pat::TriggerConditionRefProd> w_rp_p_tc;
  pat::TriggerConditionRefVector rv_p_tc;
  pat::TriggerConditionRefVectorIterator rv_p_tc_i;

  pat::TriggerAlgorithmCollection v_p_ta;
  pat::TriggerAlgorithmCollection::const_iterator v_p_ta_ci;
  edm::Wrapper<pat::TriggerAlgorithmCollection> w_v_p_ta;
  pat::TriggerAlgorithmRef r_p_ta;
  pat::TriggerAlgorithmRefProd rp_p_ta;
  edm::Wrapper<pat::TriggerAlgorithmRefProd> w_rp_p_ta;
  pat::TriggerAlgorithmRefVector rv_p_ta;
  pat::TriggerAlgorithmRefVectorIterator rv_p_ta_i;

  edm::Wrapper<pat::TriggerEvent> w_p_te;

  edm::Wrapper<pat::PackedTriggerPrescales> w_p_ptp;

  std::iterator<std::random_access_iterator_tag,edm::Ref<std::vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerPath>,pat::TriggerPath> >,long,edm::Ref<std::vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerPath>,pat::TriggerPath> >*,edm::Ref<std::vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerPath>,pat::TriggerPath> >&> iter_big_1;

  std::iterator<std::random_access_iterator_tag,edm::Ref<std::vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >,long,edm::Ref<std::vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >*,edm::Ref<std::vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >&> iter_big_2;

  std::iterator<std::random_access_iterator_tag,edm::Ref<std::vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerFilter>,pat::TriggerFilter> >,long,edm::Ref<std::vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerFilter>,pat::TriggerFilter> >*,edm::Ref<std::vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerFilter>,pat::TriggerFilter> >&> iter_big_3;

  std::iterator<std::random_access_iterator_tag,edm::Ref<std::vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerObject>,pat::TriggerObject> >,long,edm::Ref<std::vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerObject>,pat::TriggerObject> >*,edm::Ref<std::vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerObject>,pat::TriggerObject> >&> iter_big_4;

  std::iterator<std::random_access_iterator_tag,edm::Ref<std::vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerCondition>,pat::TriggerCondition> >,long,edm::Ref<std::vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerCondition>,pat::TriggerCondition> >*,edm::Ref<std::vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerCondition>,pat::TriggerCondition> >&> iter_big_5;

  std::iterator<std::random_access_iterator_tag,edm::Ref<std::vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >,long,edm::Ref<std::vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >*,edm::Ref<std::vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<std::vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >&> iter_big_6;
  };

}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"_Rb_tree_const_iterator<pair<const string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pair<bool,string>*,vector<pair<bool,string> > >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pat::TriggerAlgorithm*,vector<pat::TriggerAlgorithm> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pat::TriggerCondition*,vector<pat::TriggerCondition> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pat::TriggerFilter*,vector<pat::TriggerFilter> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pat::TriggerObject*,vector<pat::TriggerObject> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pat::TriggerObjectStandAlone*,vector<pat::TriggerObjectStandAlone> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const pat::TriggerPath*,vector<pat::TriggerPath> >", payloadCode, "@",
"edm::Association<std::vector<pat::TriggerObject> >", payloadCode, "@",
"edm::Association<std::vector<pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::Association<vector<pat::TriggerObject> >", payloadCode, "@",
"edm::Association<vector<pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::Ref<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >", payloadCode, "@",
"edm::Ref<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >", payloadCode, "@",
"edm::Ref<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >", payloadCode, "@",
"edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >", payloadCode, "@",
"edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::Ref<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >", payloadCode, "@",
"edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > >", payloadCode, "@",
"edm::RefProd<edm::Association<vector<pat::TriggerObject> > >", payloadCode, "@",
"edm::RefProd<vector<pat::TriggerAlgorithm> >", payloadCode, "@",
"edm::RefProd<vector<pat::TriggerCondition> >", payloadCode, "@",
"edm::RefProd<vector<pat::TriggerFilter> >", payloadCode, "@",
"edm::RefProd<vector<pat::TriggerObject> >", payloadCode, "@",
"edm::RefProd<vector<pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::RefProd<vector<pat::TriggerPath> >", payloadCode, "@",
"edm::RefVector<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >", payloadCode, "@",
"edm::RefVector<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >", payloadCode, "@",
"edm::RefVector<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >", payloadCode, "@",
"edm::RefVector<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >", payloadCode, "@",
"edm::RefVector<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::RefVector<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >", payloadCode, "@",
"edm::RefVectorIterator<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm,edm::refhelper::FindUsingAdvance<vector<pat::TriggerAlgorithm>,pat::TriggerAlgorithm> >", payloadCode, "@",
"edm::RefVectorIterator<vector<pat::TriggerCondition>,pat::TriggerCondition,edm::refhelper::FindUsingAdvance<vector<pat::TriggerCondition>,pat::TriggerCondition> >", payloadCode, "@",
"edm::RefVectorIterator<vector<pat::TriggerFilter>,pat::TriggerFilter,edm::refhelper::FindUsingAdvance<vector<pat::TriggerFilter>,pat::TriggerFilter> >", payloadCode, "@",
"edm::RefVectorIterator<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> >", payloadCode, "@",
"edm::RefVectorIterator<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::RefVectorIterator<vector<pat::TriggerPath>,pat::TriggerPath,edm::refhelper::FindUsingAdvance<vector<pat::TriggerPath>,pat::TriggerPath> >", payloadCode, "@",
"edm::Wrapper<edm::Association<std::vector<pat::TriggerObject> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<std::vector<pat::TriggerObjectStandAlone> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<pat::TriggerObject> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<pat::TriggerObjectStandAlone> > >", payloadCode, "@",
"edm::Wrapper<edm::RefProd<vector<pat::TriggerAlgorithm> > >", payloadCode, "@",
"edm::Wrapper<edm::RefProd<vector<pat::TriggerCondition> > >", payloadCode, "@",
"edm::Wrapper<edm::RefProd<vector<pat::TriggerFilter> > >", payloadCode, "@",
"edm::Wrapper<edm::RefProd<vector<pat::TriggerObject> > >", payloadCode, "@",
"edm::Wrapper<edm::RefProd<vector<pat::TriggerObjectStandAlone> > >", payloadCode, "@",
"edm::Wrapper<edm::RefProd<vector<pat::TriggerPath> > >", payloadCode, "@",
"edm::Wrapper<map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > > >", payloadCode, "@",
"edm::Wrapper<pat::PackedTriggerPrescales>", payloadCode, "@",
"edm::Wrapper<pat::TriggerAlgorithmRefProd>", payloadCode, "@",
"edm::Wrapper<pat::TriggerConditionRefProd>", payloadCode, "@",
"edm::Wrapper<pat::TriggerEvent>", payloadCode, "@",
"edm::Wrapper<pat::TriggerFilterRefProd>", payloadCode, "@",
"edm::Wrapper<pat::TriggerObjectRefProd>", payloadCode, "@",
"edm::Wrapper<pat::TriggerObjectStandAloneRefProd>", payloadCode, "@",
"edm::Wrapper<pat::TriggerPathRefProd>", payloadCode, "@",
"edm::Wrapper<std::map<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > > >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::TriggerAlgorithm> >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::TriggerCondition> >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::TriggerFilter> >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::TriggerObject> >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::Wrapper<std::vector<pat::TriggerPath> >", payloadCode, "@",
"edm::Wrapper<vector<pat::TriggerAlgorithm> >", payloadCode, "@",
"edm::Wrapper<vector<pat::TriggerCondition> >", payloadCode, "@",
"edm::Wrapper<vector<pat::TriggerFilter> >", payloadCode, "@",
"edm::Wrapper<vector<pat::TriggerObject> >", payloadCode, "@",
"edm::Wrapper<vector<pat::TriggerObjectStandAlone> >", payloadCode, "@",
"edm::Wrapper<vector<pat::TriggerPath> >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,pat::TriggerObjectRef>", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,pat::TriggerObjectStandAloneRef>", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObjectStandAlone>,pat::TriggerObjectStandAlone> > >", payloadCode, "@",
"edm::reftobase::RefHolder<pat::TriggerObjectRef>", payloadCode, "@",
"edm::reftobase::RefHolder<pat::TriggerObjectStandAloneRef>", payloadCode, "@",
"map<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > >", payloadCode, "@",
"map<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > >::const_iterator", payloadCode, "@",
"map<std::string,pat::TriggerObjectRef>", payloadCode, "@",
"map<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", payloadCode, "@",
"map<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >", payloadCode, "@",
"pair<bool,string>", payloadCode, "@",
"pair<std::string,edm::RefProd<edm::Association<std::vector<pat::TriggerObject> > > >", payloadCode, "@",
"pair<std::string,pat::TriggerObjectRef>", payloadCode, "@",
"pair<string,edm::Ref<vector<pat::TriggerObject>,pat::TriggerObject,edm::refhelper::FindUsingAdvance<vector<pat::TriggerObject>,pat::TriggerObject> > >", payloadCode, "@",
"pair<string,edm::RefProd<edm::Association<vector<pat::TriggerObject> > > >", payloadCode, "@",
"pat::L1Seed", payloadCode, "@",
"pat::PackedTriggerPrescales", payloadCode, "@",
"pat::TriggerAlgorithm", payloadCode, "@",
"pat::TriggerAlgorithmRef", payloadCode, "@",
"pat::TriggerAlgorithmRefProd", payloadCode, "@",
"pat::TriggerAlgorithmRefVector", payloadCode, "@",
"pat::TriggerAlgorithmRefVectorIterator", payloadCode, "@",
"pat::TriggerCondition", payloadCode, "@",
"pat::TriggerConditionRef", payloadCode, "@",
"pat::TriggerConditionRefProd", payloadCode, "@",
"pat::TriggerConditionRefVector", payloadCode, "@",
"pat::TriggerConditionRefVectorIterator", payloadCode, "@",
"pat::TriggerEvent", payloadCode, "@",
"pat::TriggerFilter", payloadCode, "@",
"pat::TriggerFilterRef", payloadCode, "@",
"pat::TriggerFilterRefProd", payloadCode, "@",
"pat::TriggerFilterRefVector", payloadCode, "@",
"pat::TriggerFilterRefVectorIterator", payloadCode, "@",
"pat::TriggerObject", payloadCode, "@",
"pat::TriggerObjectRef", payloadCode, "@",
"pat::TriggerObjectRefProd", payloadCode, "@",
"pat::TriggerObjectRefVector", payloadCode, "@",
"pat::TriggerObjectRefVectorIterator", payloadCode, "@",
"pat::TriggerObjectStandAlone", payloadCode, "@",
"pat::TriggerObjectStandAloneRef", payloadCode, "@",
"pat::TriggerObjectStandAloneRefProd", payloadCode, "@",
"pat::TriggerObjectStandAloneRefVector", payloadCode, "@",
"pat::TriggerObjectStandAloneRefVectorIterator", payloadCode, "@",
"pat::TriggerPath", payloadCode, "@",
"pat::TriggerPathRef", payloadCode, "@",
"pat::TriggerPathRefProd", payloadCode, "@",
"pat::TriggerPathRefVector", payloadCode, "@",
"pat::TriggerPathRefVectorIterator", payloadCode, "@",
"vector<pair<bool,string> >", payloadCode, "@",
"vector<pat::L1Seed>", payloadCode, "@",
"vector<pat::L1Seed>::const_iterator", payloadCode, "@",
"vector<pat::TriggerAlgorithm>", payloadCode, "@",
"vector<pat::TriggerAlgorithm>::const_iterator", payloadCode, "@",
"vector<pat::TriggerCondition>", payloadCode, "@",
"vector<pat::TriggerCondition>::const_iterator", payloadCode, "@",
"vector<pat::TriggerFilter>", payloadCode, "@",
"vector<pat::TriggerFilter>::const_iterator", payloadCode, "@",
"vector<pat::TriggerObject>", payloadCode, "@",
"vector<pat::TriggerObject>::const_iterator", payloadCode, "@",
"vector<pat::TriggerObjectStandAlone>", payloadCode, "@",
"vector<pat::TriggerObjectStandAlone>::const_iterator", payloadCode, "@",
"vector<pat::TriggerPath>", payloadCode, "@",
"vector<pat::TriggerPath>::const_iterator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsPatCandidates_x1r",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsPatCandidates_x1r_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsPatCandidates_x1r_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsPatCandidates_x1r() {
  TriggerDictionaryInitialization_DataFormatsPatCandidates_x1r_Impl();
}
