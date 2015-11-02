// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdIPhysicsToolsdITagAndProbedIsrcdIPhysicsToolsTagAndProbedIadIPhysicsToolsTagAndProbe_xr

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
#include "src/PhysicsTools/TagAndProbe/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_RooCBExGaussShape(void *p = 0);
   static void *newArray_RooCBExGaussShape(Long_t size, void *p);
   static void delete_RooCBExGaussShape(void *p);
   static void deleteArray_RooCBExGaussShape(void *p);
   static void destruct_RooCBExGaussShape(void *p);
   static void streamer_RooCBExGaussShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCBExGaussShape*)
   {
      ::RooCBExGaussShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCBExGaussShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCBExGaussShape", ::RooCBExGaussShape::Class_Version(), "PhysicsTools/TagAndProbe/interface/RooCBExGaussShape.h", 16,
                  typeid(::RooCBExGaussShape), DefineBehavior(ptr, ptr),
                  &::RooCBExGaussShape::Dictionary, isa_proxy, 24,
                  sizeof(::RooCBExGaussShape) );
      instance.SetNew(&new_RooCBExGaussShape);
      instance.SetNewArray(&newArray_RooCBExGaussShape);
      instance.SetDelete(&delete_RooCBExGaussShape);
      instance.SetDeleteArray(&deleteArray_RooCBExGaussShape);
      instance.SetDestructor(&destruct_RooCBExGaussShape);
      instance.SetStreamerFunc(&streamer_RooCBExGaussShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCBExGaussShape*)
   {
      return GenerateInitInstanceLocal((::RooCBExGaussShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooCBExGaussShape*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ZGeneratorLineShape(void *p = 0);
   static void *newArray_ZGeneratorLineShape(Long_t size, void *p);
   static void delete_ZGeneratorLineShape(void *p);
   static void deleteArray_ZGeneratorLineShape(void *p);
   static void destruct_ZGeneratorLineShape(void *p);
   static void streamer_ZGeneratorLineShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ZGeneratorLineShape*)
   {
      ::ZGeneratorLineShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ZGeneratorLineShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ZGeneratorLineShape", ::ZGeneratorLineShape::Class_Version(), "PhysicsTools/TagAndProbe/interface/ZGeneratorLineShape.h", 10,
                  typeid(::ZGeneratorLineShape), DefineBehavior(ptr, ptr),
                  &::ZGeneratorLineShape::Dictionary, isa_proxy, 24,
                  sizeof(::ZGeneratorLineShape) );
      instance.SetNew(&new_ZGeneratorLineShape);
      instance.SetNewArray(&newArray_ZGeneratorLineShape);
      instance.SetDelete(&delete_ZGeneratorLineShape);
      instance.SetDeleteArray(&deleteArray_ZGeneratorLineShape);
      instance.SetDestructor(&destruct_ZGeneratorLineShape);
      instance.SetStreamerFunc(&streamer_ZGeneratorLineShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ZGeneratorLineShape*)
   {
      return GenerateInitInstanceLocal((::ZGeneratorLineShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ZGeneratorLineShape*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCMSShape(void *p = 0);
   static void *newArray_RooCMSShape(Long_t size, void *p);
   static void delete_RooCMSShape(void *p);
   static void deleteArray_RooCMSShape(void *p);
   static void destruct_RooCMSShape(void *p);
   static void streamer_RooCMSShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCMSShape*)
   {
      ::RooCMSShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCMSShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooCMSShape", ::RooCMSShape::Class_Version(), "PhysicsTools/TagAndProbe/interface/RooCMSShape.h", 32,
                  typeid(::RooCMSShape), DefineBehavior(ptr, ptr),
                  &::RooCMSShape::Dictionary, isa_proxy, 24,
                  sizeof(::RooCMSShape) );
      instance.SetNew(&new_RooCMSShape);
      instance.SetNewArray(&newArray_RooCMSShape);
      instance.SetDelete(&delete_RooCMSShape);
      instance.SetDeleteArray(&deleteArray_RooCMSShape);
      instance.SetDestructor(&destruct_RooCMSShape);
      instance.SetStreamerFunc(&streamer_RooCMSShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCMSShape*)
   {
      return GenerateInitInstanceLocal((::RooCMSShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooCMSShape*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RooCBExGaussShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCBExGaussShape::Class_Name()
{
   return "RooCBExGaussShape";
}

//______________________________________________________________________________
const char *RooCBExGaussShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCBExGaussShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooCBExGaussShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCBExGaussShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCBExGaussShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCBExGaussShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCBExGaussShape::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCBExGaussShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ZGeneratorLineShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ZGeneratorLineShape::Class_Name()
{
   return "ZGeneratorLineShape";
}

//______________________________________________________________________________
const char *ZGeneratorLineShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ZGeneratorLineShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ZGeneratorLineShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ZGeneratorLineShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ZGeneratorLineShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ZGeneratorLineShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ZGeneratorLineShape::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ZGeneratorLineShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCMSShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCMSShape::Class_Name()
{
   return "RooCMSShape";
}

//______________________________________________________________________________
const char *RooCMSShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCMSShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooCMSShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCMSShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCMSShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCMSShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCMSShape::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCMSShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RooCBExGaussShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCBExGaussShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCBExGaussShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCBExGaussShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCBExGaussShape(void *p) {
      return  p ? new(p) ::RooCBExGaussShape : new ::RooCBExGaussShape;
   }
   static void *newArray_RooCBExGaussShape(Long_t nElements, void *p) {
      return p ? new(p) ::RooCBExGaussShape[nElements] : new ::RooCBExGaussShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCBExGaussShape(void *p) {
      delete ((::RooCBExGaussShape*)p);
   }
   static void deleteArray_RooCBExGaussShape(void *p) {
      delete [] ((::RooCBExGaussShape*)p);
   }
   static void destruct_RooCBExGaussShape(void *p) {
      typedef ::RooCBExGaussShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCBExGaussShape(TBuffer &buf, void *obj) {
      ((::RooCBExGaussShape*)obj)->::RooCBExGaussShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCBExGaussShape

//______________________________________________________________________________
void ZGeneratorLineShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class ZGeneratorLineShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ZGeneratorLineShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(ZGeneratorLineShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ZGeneratorLineShape(void *p) {
      return  p ? new(p) ::ZGeneratorLineShape : new ::ZGeneratorLineShape;
   }
   static void *newArray_ZGeneratorLineShape(Long_t nElements, void *p) {
      return p ? new(p) ::ZGeneratorLineShape[nElements] : new ::ZGeneratorLineShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_ZGeneratorLineShape(void *p) {
      delete ((::ZGeneratorLineShape*)p);
   }
   static void deleteArray_ZGeneratorLineShape(void *p) {
      delete [] ((::ZGeneratorLineShape*)p);
   }
   static void destruct_ZGeneratorLineShape(void *p) {
      typedef ::ZGeneratorLineShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ZGeneratorLineShape(TBuffer &buf, void *obj) {
      ((::ZGeneratorLineShape*)obj)->::ZGeneratorLineShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::ZGeneratorLineShape

//______________________________________________________________________________
void RooCMSShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCMSShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCMSShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCMSShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCMSShape(void *p) {
      return  p ? new(p) ::RooCMSShape : new ::RooCMSShape;
   }
   static void *newArray_RooCMSShape(Long_t nElements, void *p) {
      return p ? new(p) ::RooCMSShape[nElements] : new ::RooCMSShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCMSShape(void *p) {
      delete ((::RooCMSShape*)p);
   }
   static void deleteArray_RooCMSShape(void *p) {
      delete [] ((::RooCMSShape*)p);
   }
   static void destruct_RooCMSShape(void *p) {
      typedef ::RooCMSShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCMSShape(TBuffer &buf, void *obj) {
      ((::RooCMSShape*)obj)->::RooCMSShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCMSShape

namespace {
  void TriggerDictionaryInitialization_PhysicsToolsTagAndProbe_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/shome/jngadiub/EXOVVAnalysisRunII/TagAndProbe/Electrons/CMSSW_7_4_7_patch2/src",
"/shome/jngadiub/EXOVVAnalysisRunII/TagAndProbe/Electrons/CMSSW_7_4_7_patch2/poison",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw-patch/CMSSW_7_4_7_patch2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd5/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/boost/1.57.0-jlbgio/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/pcre/7.9__8.33-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/bz2lib/1.0.5-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/clhep/2.1.4.1-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/gsl/1.10-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/hepmc/2.06.07-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/libuuid/2.22.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/python/2.7.6-cms/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/tbb/43_20141023oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/xerces-c/2.8.0-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/zlib/1.2.8-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd5/include",
"/shome/jngadiub/EXOVVAnalysisRunII/TagAndProbe/Electrons/CMSSW_7_4_7_patch2/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$PhysicsTools/TagAndProbe/interface/RooCBExGaussShape.h")))  RooCBExGaussShape;
class __attribute__((annotate("$clingAutoload$PhysicsTools/TagAndProbe/interface/ZGeneratorLineShape.h")))  ZGeneratorLineShape;
class __attribute__((annotate("$clingAutoload$PhysicsTools/TagAndProbe/interface/RooCMSShape.h")))  RooCMSShape;
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
  #define CMSSW_GIT_HASH "CMSSW_7_4_7_patch2"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_7_4_7_patch2"
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
#include "PhysicsTools/TagAndProbe/interface/RooCBExGaussShape.h"
#include "PhysicsTools/TagAndProbe/interface/RooCMSShape.h"
#include "PhysicsTools/TagAndProbe/interface/ZGeneratorLineShape.h"
//#include "PhysicsTools/TagAndProbe/interface/TemplatedPDFFromMC.h"

#include "TVirtualFFT.h"
#include "RooDataHist.h"

namespace PhysicsTools_TagAndProbe {
  struct dictionary {
  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"RooCBExGaussShape", payloadCode, "@",
"RooCMSShape", payloadCode, "@",
"ZGeneratorLineShape", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PhysicsToolsTagAndProbe_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PhysicsToolsTagAndProbe_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PhysicsToolsTagAndProbe_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PhysicsToolsTagAndProbe_xr() {
  TriggerDictionaryInitialization_PhysicsToolsTagAndProbe_xr_Impl();
}
