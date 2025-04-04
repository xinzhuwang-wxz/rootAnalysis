// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Loop
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
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

// Header files passed as explicit arguments
#include "src/EventLoop.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *Algorithm_Dictionary();
   static void Algorithm_TClassManip(TClass*);
   static void *new_Algorithm(void *p = nullptr);
   static void *newArray_Algorithm(Long_t size, void *p);
   static void delete_Algorithm(void *p);
   static void deleteArray_Algorithm(void *p);
   static void destruct_Algorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Algorithm*)
   {
      ::Algorithm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Algorithm));
      static ::ROOT::TGenericClassInfo 
         instance("Algorithm", "Algorithm.h", 15,
                  typeid(::Algorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Algorithm_Dictionary, isa_proxy, 4,
                  sizeof(::Algorithm) );
      instance.SetNew(&new_Algorithm);
      instance.SetNewArray(&newArray_Algorithm);
      instance.SetDelete(&delete_Algorithm);
      instance.SetDeleteArray(&deleteArray_Algorithm);
      instance.SetDestructor(&destruct_Algorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Algorithm*)
   {
      return GenerateInitInstanceLocal(static_cast<::Algorithm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Algorithm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Algorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::Algorithm*>(nullptr))->GetClass();
      Algorithm_TClassManip(theClass);
   return theClass;
   }

   static void Algorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventLoop_Dictionary();
   static void EventLoop_TClassManip(TClass*);
   static void *new_EventLoop(void *p = nullptr);
   static void *newArray_EventLoop(Long_t size, void *p);
   static void delete_EventLoop(void *p);
   static void deleteArray_EventLoop(void *p);
   static void destruct_EventLoop(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventLoop*)
   {
      ::EventLoop *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventLoop));
      static ::ROOT::TGenericClassInfo 
         instance("EventLoop", "EventLoop.h", 11,
                  typeid(::EventLoop), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventLoop_Dictionary, isa_proxy, 4,
                  sizeof(::EventLoop) );
      instance.SetNew(&new_EventLoop);
      instance.SetNewArray(&newArray_EventLoop);
      instance.SetDelete(&delete_EventLoop);
      instance.SetDeleteArray(&deleteArray_EventLoop);
      instance.SetDestructor(&destruct_EventLoop);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventLoop*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventLoop*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventLoop*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventLoop_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventLoop*>(nullptr))->GetClass();
      EventLoop_TClassManip(theClass);
   return theClass;
   }

   static void EventLoop_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Algorithm(void *p) {
      return  p ? new(p) ::Algorithm : new ::Algorithm;
   }
   static void *newArray_Algorithm(Long_t nElements, void *p) {
      return p ? new(p) ::Algorithm[nElements] : new ::Algorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_Algorithm(void *p) {
      delete (static_cast<::Algorithm*>(p));
   }
   static void deleteArray_Algorithm(void *p) {
      delete [] (static_cast<::Algorithm*>(p));
   }
   static void destruct_Algorithm(void *p) {
      typedef ::Algorithm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Algorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventLoop(void *p) {
      return  p ? new(p) ::EventLoop : new ::EventLoop;
   }
   static void *newArray_EventLoop(Long_t nElements, void *p) {
      return p ? new(p) ::EventLoop[nElements] : new ::EventLoop[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventLoop(void *p) {
      delete (static_cast<::EventLoop*>(p));
   }
   static void deleteArray_EventLoop(void *p) {
      delete [] (static_cast<::EventLoop*>(p));
   }
   static void destruct_EventLoop(void *p) {
      typedef ::EventLoop current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventLoop

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 341,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::__1::vector<TString, std::__1::allocator<TString>>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr))->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete (static_cast<vector<TString>*>(p));
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] (static_cast<vector<TString>*>(p));
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlEAlgorithmmUgR_Dictionary();
   static void vectorlEAlgorithmmUgR_TClassManip(TClass*);
   static void *new_vectorlEAlgorithmmUgR(void *p = nullptr);
   static void *newArray_vectorlEAlgorithmmUgR(Long_t size, void *p);
   static void delete_vectorlEAlgorithmmUgR(void *p);
   static void deleteArray_vectorlEAlgorithmmUgR(void *p);
   static void destruct_vectorlEAlgorithmmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Algorithm*>*)
   {
      vector<Algorithm*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Algorithm*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Algorithm*>", -2, "vector", 341,
                  typeid(vector<Algorithm*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEAlgorithmmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Algorithm*>) );
      instance.SetNew(&new_vectorlEAlgorithmmUgR);
      instance.SetNewArray(&newArray_vectorlEAlgorithmmUgR);
      instance.SetDelete(&delete_vectorlEAlgorithmmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEAlgorithmmUgR);
      instance.SetDestructor(&destruct_vectorlEAlgorithmmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Algorithm*> >()));

      ::ROOT::AddClassAlternate("vector<Algorithm*>","std::__1::vector<Algorithm*, std::__1::allocator<Algorithm*>>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<Algorithm*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEAlgorithmmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<Algorithm*>*>(nullptr))->GetClass();
      vectorlEAlgorithmmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEAlgorithmmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEAlgorithmmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Algorithm*> : new vector<Algorithm*>;
   }
   static void *newArray_vectorlEAlgorithmmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Algorithm*>[nElements] : new vector<Algorithm*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEAlgorithmmUgR(void *p) {
      delete (static_cast<vector<Algorithm*>*>(p));
   }
   static void deleteArray_vectorlEAlgorithmmUgR(void *p) {
      delete [] (static_cast<vector<Algorithm*>*>(p));
   }
   static void destruct_vectorlEAlgorithmmUgR(void *p) {
      typedef vector<Algorithm*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<Algorithm*>

namespace {
  void TriggerDictionaryInitialization_libLoop_Impl() {
    static const char* headers[] = {
"src/EventLoop.h",
nullptr
    };
    static const char* includePaths[] = {
"/Users/physicsboy/anaconda3/include",
"/Users/physicsboy/Desktop/rootAnalysis/Loop",
"/Users/physicsboy/Desktop/rootAnalysis/Loop/src",
"/Users/physicsboy/Desktop/rootAnalysis/Loop/../Data/src",
"/Users/physicsboy/Desktop/rootAnalysis/Loop/../Algorithms/src",
"/Users/physicsboy/Desktop/rootAnalysis/Loop/../Algorithms/inc",
"/Users/physicsboy/anaconda3/include/",
"/Users/physicsboy/Desktop/rootAnalysis/Loop/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libLoop dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Algorithm.h")))  __attribute__((annotate("$clingAutoload$src/EventLoop.h")))  Algorithm;
class __attribute__((annotate("$clingAutoload$src/EventLoop.h")))  EventLoop;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libLoop dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "src/EventLoop.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Algorithm", payloadCode, "@",
"EventLoop", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLoop",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLoop_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLoop_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLoop() {
  TriggerDictionaryInitialization_libLoop_Impl();
}
