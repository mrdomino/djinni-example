// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "bluetooth_connection_callback.hpp"  // my header
#include "HBinary.hpp"
#include "HBool.hpp"
#include "error.hpp"
#include "write_handle.hpp"

namespace djinni_generated {

BluetoothConnectionCallback::BluetoothConnectionCallback() : djinni::JniInterface<::interaxon::example::BluetoothConnectionCallback, BluetoothConnectionCallback>("com/interaxon/example/BluetoothConnectionCallback$CppProxy") {}

using namespace ::djinni_generated;

CJNIEXPORT void JNICALL Java_com_interaxon_example_BluetoothConnectionCallback_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::interaxon::example::BluetoothConnectionCallback>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_interaxon_example_BluetoothConnectionCallback_00024CppProxy_native_1onOpen(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & ref = djinni::CppProxyHandle<::interaxon::example::BluetoothConnectionCallback>::get(nativeRef);

        ref->on_open();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_com_interaxon_example_BluetoothConnectionCallback_00024CppProxy_native_1onClose(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_error)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & ref = djinni::CppProxyHandle<::interaxon::example::BluetoothConnectionCallback>::get(nativeRef);
        ::interaxon::example::Error c_error = Error::fromJava(jniEnv, j_error);

        bool cr = ref->on_close(c_error);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter*/)
}

CJNIEXPORT void JNICALL Java_com_interaxon_example_BluetoothConnectionCallback_00024CppProxy_native_1onRead(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyteArray j_bytes)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & ref = djinni::CppProxyHandle<::interaxon::example::BluetoothConnectionCallback>::get(nativeRef);
        std::vector<uint8_t> c_bytes = ::djinni::HBinary::fromJava(jniEnv, j_bytes);

        ref->on_read(c_bytes);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_interaxon_example_BluetoothConnectionCallback_00024CppProxy_native_1canWrite(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & ref = djinni::CppProxyHandle<::interaxon::example::BluetoothConnectionCallback>::get(nativeRef);

        std::shared_ptr<::interaxon::example::WriteHandle> cr = ref->can_write();

        return WriteHandle::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter*/)
}

}  // namespace djinni_generated
