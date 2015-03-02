// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "bluetooth_device.hpp"  // my header
#include "HString.hpp"
#include "bluetooth_connection_callback.hpp"
#include "bluetooth_connection_handle.hpp"

namespace djinni_generated {

BluetoothDevice::BluetoothDevice() : djinni::JniInterface<::interaxon::example::BluetoothDevice, BluetoothDevice>() {}

BluetoothDevice::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}

std::string BluetoothDevice::JavaProxy::JavaProxy::name() {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    const auto & data = djinni::JniClass<::djinni_generated::BluetoothDevice>::get();
    djinni::LocalRef<jstring> jret(jniEnv, static_cast<jstring>(jniEnv->CallObjectMethod(getGlobalRef(), data.method_name)));
    djinni::jniExceptionCheck(jniEnv);
    return ::djinni::HString::fromJava(jniEnv, jret.get());
};

std::string BluetoothDevice::JavaProxy::JavaProxy::address() {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    const auto & data = djinni::JniClass<::djinni_generated::BluetoothDevice>::get();
    djinni::LocalRef<jstring> jret(jniEnv, static_cast<jstring>(jniEnv->CallObjectMethod(getGlobalRef(), data.method_address)));
    djinni::jniExceptionCheck(jniEnv);
    return ::djinni::HString::fromJava(jniEnv, jret.get());
};

std::shared_ptr<::interaxon::example::BluetoothConnectionHandle> BluetoothDevice::JavaProxy::JavaProxy::connect(const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & c_callback) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_callback(jniEnv, BluetoothConnectionCallback::toJava(jniEnv, c_callback));
    const auto & data = djinni::JniClass<::djinni_generated::BluetoothDevice>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_connect, j_callback.get()));
    djinni::jniExceptionCheck(jniEnv);
    return BluetoothConnectionHandle::fromJava(jniEnv, jret.get());
};

}  // namespace djinni_generated
