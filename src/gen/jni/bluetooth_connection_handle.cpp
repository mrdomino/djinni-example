// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "bluetooth_connection_handle.hpp"  // my header

namespace djinni_generated {

BluetoothConnectionHandle::BluetoothConnectionHandle() : djinni::JniInterface<::interaxon::example::BluetoothConnectionHandle, BluetoothConnectionHandle>() {}

BluetoothConnectionHandle::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}

void BluetoothConnectionHandle::JavaProxy::JavaProxy::request_write() {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    const auto & data = djinni::JniClass<::djinni_generated::BluetoothConnectionHandle>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_requestWrite);
    djinni::jniExceptionCheck(jniEnv);
};

void BluetoothConnectionHandle::JavaProxy::JavaProxy::close() {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    const auto & data = djinni::JniClass<::djinni_generated::BluetoothConnectionHandle>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_close);
    djinni::jniExceptionCheck(jniEnv);
};

}  // namespace djinni_generated
