// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "platform.hpp"  // my header
#include "HList.hpp"
#include "HOptional.hpp"
#include "action.hpp"
#include "bluetooth_connection_callback.hpp"
#include "bluetooth_connection_handle.hpp"
#include "bluetooth_device.hpp"
#include "bluetooth_device_callback.hpp"
#include "device_callback_handle.hpp"
#include "duration.hpp"
#include "errorable.hpp"
#include "interval_handle.hpp"

namespace djinni_generated {

Platform::Platform() : djinni::JniInterface<::interaxon::example::Platform, Platform>() {}

Platform::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}

void Platform::JavaProxy::JavaProxy::defer_action(const std::shared_ptr<::interaxon::example::Action> & c_act, const ::interaxon::example::Duration & c_until) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_act(jniEnv, Action::toJava(jniEnv, c_act));
    djinni::LocalRef<jobject> j_until(jniEnv, Duration::toJava(jniEnv, c_until));
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_deferAction, j_act.get(), j_until.get());
    djinni::jniExceptionCheck(jniEnv);
};

void Platform::JavaProxy::JavaProxy::thread_action(const std::shared_ptr<::interaxon::example::Errorable> & c_act) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_act(jniEnv, Errorable::toJava(jniEnv, c_act));
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_threadAction, j_act.get());
    djinni::jniExceptionCheck(jniEnv);
};

std::shared_ptr<::interaxon::example::IntervalHandle> Platform::JavaProxy::JavaProxy::repeat_action(const std::shared_ptr<::interaxon::example::Action> & c_act, const ::interaxon::example::Duration & c_at_interval) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_act(jniEnv, Action::toJava(jniEnv, c_act));
    djinni::LocalRef<jobject> j_at_interval(jniEnv, Duration::toJava(jniEnv, c_at_interval));
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_repeatAction, j_act.get(), j_at_interval.get()));
    djinni::jniExceptionCheck(jniEnv);
    return IntervalHandle::fromJava(jniEnv, jret.get());
};

std::vector<std::shared_ptr<::interaxon::example::BluetoothDevice>> Platform::JavaProxy::JavaProxy::all_devices() {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_allDevices));
    djinni::jniExceptionCheck(jniEnv);
    return ::djinni::HList<BluetoothDevice>::fromJava(jniEnv, jret.get());
};

std::shared_ptr<::interaxon::example::BluetoothDevice> Platform::JavaProxy::JavaProxy::wait_for_device_until(const std::optional<::interaxon::example::Duration> & c_timeout) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_timeout(jniEnv, ::djinni::HOptional<std::optional, Duration>::toJava(jniEnv, c_timeout));
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_waitForDeviceUntil, j_timeout.get()));
    djinni::jniExceptionCheck(jniEnv);
    return BluetoothDevice::fromJava(jniEnv, jret.get());
};

std::shared_ptr<::interaxon::example::DeviceCallbackHandle> Platform::JavaProxy::JavaProxy::add_device_callback(const std::shared_ptr<::interaxon::example::BluetoothDeviceCallback> & c_callback) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_callback(jniEnv, BluetoothDeviceCallback::toJava(jniEnv, c_callback));
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_addDeviceCallback, j_callback.get()));
    djinni::jniExceptionCheck(jniEnv);
    return DeviceCallbackHandle::fromJava(jniEnv, jret.get());
};

std::shared_ptr<::interaxon::example::BluetoothConnectionHandle> Platform::JavaProxy::JavaProxy::connect_to_device(const std::shared_ptr<::interaxon::example::BluetoothDevice> & c_device, const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & c_callback) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_device(jniEnv, BluetoothDevice::toJava(jniEnv, c_device));
    djinni::LocalRef<jobject> j_callback(jniEnv, BluetoothConnectionCallback::toJava(jniEnv, c_callback));
    const auto & data = djinni::JniClass<::djinni_generated::Platform>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_connectToDevice, j_device.get(), j_callback.get()));
    djinni::jniExceptionCheck(jniEnv);
    return BluetoothConnectionHandle::fromJava(jniEnv, jret.get());
};

}  // namespace djinni_generated