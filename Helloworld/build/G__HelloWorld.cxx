// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__HelloWorld
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
#include "src/Helloworld.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *HelloWorld_Dictionary();
   static void HelloWorld_TClassManip(TClass*);
   static void *new_HelloWorld(void *p = nullptr);
   static void *newArray_HelloWorld(Long_t size, void *p);
   static void delete_HelloWorld(void *p);
   static void deleteArray_HelloWorld(void *p);
   static void destruct_HelloWorld(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HelloWorld*)
   {
      ::HelloWorld *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HelloWorld));
      static ::ROOT::TGenericClassInfo 
         instance("HelloWorld", "src/Helloworld.h", 3,
                  typeid(::HelloWorld), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HelloWorld_Dictionary, isa_proxy, 4,
                  sizeof(::HelloWorld) );
      instance.SetNew(&new_HelloWorld);
      instance.SetNewArray(&newArray_HelloWorld);
      instance.SetDelete(&delete_HelloWorld);
      instance.SetDeleteArray(&deleteArray_HelloWorld);
      instance.SetDestructor(&destruct_HelloWorld);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HelloWorld*)
   {
      return GenerateInitInstanceLocal(static_cast<::HelloWorld*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::HelloWorld*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HelloWorld_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::HelloWorld*>(nullptr))->GetClass();
      HelloWorld_TClassManip(theClass);
   return theClass;
   }

   static void HelloWorld_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_HelloWorld(void *p) {
      return  p ? new(p) ::HelloWorld : new ::HelloWorld;
   }
   static void *newArray_HelloWorld(Long_t nElements, void *p) {
      return p ? new(p) ::HelloWorld[nElements] : new ::HelloWorld[nElements];
   }
   // Wrapper around operator delete
   static void delete_HelloWorld(void *p) {
      delete (static_cast<::HelloWorld*>(p));
   }
   static void deleteArray_HelloWorld(void *p) {
      delete [] (static_cast<::HelloWorld*>(p));
   }
   static void destruct_HelloWorld(void *p) {
      typedef ::HelloWorld current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::HelloWorld

namespace {
  void TriggerDictionaryInitialization_libHelloWorld_Impl() {
    static const char* headers[] = {
"src/Helloworld.h",
nullptr
    };
    static const char* includePaths[] = {
"/Users/physicsboy/anaconda3/include",
"/Users/physicsboy/Desktop/rootAnalysis/Helloworld",
"/Users/physicsboy/anaconda3/include/",
"/Users/physicsboy/Desktop/rootAnalysis/Helloworld/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libHelloWorld dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$src/Helloworld.h")))  HelloWorld;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHelloWorld dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "src/Helloworld.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"HelloWorld", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHelloWorld",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHelloWorld_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHelloWorld_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHelloWorld() {
  TriggerDictionaryInitialization_libHelloWorld_Impl();
}
