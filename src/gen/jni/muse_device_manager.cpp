// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "muse_device_manager.hpp"  // my header
#include "HList.hpp"
#include "HOptional.hpp"
#include "bluetooth_device.hpp"
#include "bluetooth_device_callback.hpp"
#include "device_callback_handle.hpp"
#include "duration.hpp"

namespace djinni_generated {

MuseDeviceManager::MuseDeviceManager() : djinni::JniInterface<::interaxon::example::MuseDeviceManager, MuseDeviceManager>() {}

MuseDeviceManager::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}

std::vector<std::shared_ptr<::interaxon::example::BluetoothDevice>> MuseDeviceManager::JavaProxy::JavaProxy::all_muses() {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    const auto & data = djinni::JniClass<::djinni_generated::MuseDeviceManager>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_allMuses));
    djinni::jniExceptionCheck(jniEnv);
    return ::djinni::HList<BluetoothDevice>::fromJava(jniEnv, jret.get());
};

std::shared_ptr<::interaxon::example::BluetoothDevice> MuseDeviceManager::JavaProxy::JavaProxy::wait_for_muse_until(const std::optional<::interaxon::example::Duration> & c_timeout) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_timeout(jniEnv, ::djinni::HOptional<std::optional, Duration>::toJava(jniEnv, c_timeout));
    const auto & data = djinni::JniClass<::djinni_generated::MuseDeviceManager>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_waitForMuseUntil, j_timeout.get()));
    djinni::jniExceptionCheck(jniEnv);
    return BluetoothDevice::fromJava(jniEnv, jret.get());
};

std::shared_ptr<::interaxon::example::DeviceCallbackHandle> MuseDeviceManager::JavaProxy::JavaProxy::add_device_callback(const std::shared_ptr<::interaxon::example::BluetoothDeviceCallback> & c_callback) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_callback(jniEnv, BluetoothDeviceCallback::toJava(jniEnv, c_callback));
    const auto & data = djinni::JniClass<::djinni_generated::MuseDeviceManager>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_addDeviceCallback, j_callback.get()));
    djinni::jniExceptionCheck(jniEnv);
    return DeviceCallbackHandle::fromJava(jniEnv, jret.get());
};

}  // namespace djinni_generated