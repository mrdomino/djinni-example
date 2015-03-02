// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "errorable.hpp"  // my header
#include "HBool.hpp"
#include "error.hpp"

namespace djinni_generated {

Errorable::Errorable() : djinni::JniInterface<::interaxon::example::Errorable, Errorable>("com/interaxon/example/Errorable$CppProxy") {}

using namespace ::djinni_generated;

CJNIEXPORT void JNICALL Java_com_interaxon_example_Errorable_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::interaxon::example::Errorable>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_interaxon_example_Errorable_00024CppProxy_native_1ok(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::interaxon::example::Errorable> & ref = djinni::CppProxyHandle<::interaxon::example::Errorable>::get(nativeRef);

        ref->ok();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_com_interaxon_example_Errorable_00024CppProxy_native_1error(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_theError)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::interaxon::example::Errorable> & ref = djinni::CppProxyHandle<::interaxon::example::Errorable>::get(nativeRef);
        ::interaxon::example::Error c_the_error = Error::fromJava(jniEnv, j_theError);

        bool cr = ref->error(c_the_error);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter*/)
}

}  // namespace djinni_generated
