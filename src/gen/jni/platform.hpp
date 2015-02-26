// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include "djinni_support.hpp"
#include "platform.hpp"

namespace djinni_generated {

class Platform final : djinni::JniInterface<::interaxon::example::Platform, Platform> {
public:
    using CppType = std::shared_ptr<::interaxon::example::Platform>;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, std::shared_ptr<::interaxon::example::Platform> c) { return djinni::JniClass<::djinni_generated::Platform>::get()._toJava(jniEnv, c); }
    static std::shared_ptr<::interaxon::example::Platform> fromJava(JNIEnv* jniEnv, jobject j) { return djinni::JniClass<::djinni_generated::Platform>::get()._fromJava(jniEnv, j); }

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/interaxon/example/Platform") };
    const jmethodID method_deferAction { djinni::jniGetMethodID(clazz.get(), "deferAction", "(Lcom/interaxon/example/Action;Lcom/interaxon/example/Duration;)V") };
    const jmethodID method_threadAction { djinni::jniGetMethodID(clazz.get(), "threadAction", "(Lcom/interaxon/example/Errorable;)V") };
    const jmethodID method_repeatAction { djinni::jniGetMethodID(clazz.get(), "repeatAction", "(Lcom/interaxon/example/Action;Lcom/interaxon/example/Duration;)Lcom/interaxon/example/IntervalHandle;") };
    const jmethodID method_allDevices { djinni::jniGetMethodID(clazz.get(), "allDevices", "()Ljava/util/ArrayList;") };
    const jmethodID method_waitForDeviceUntil { djinni::jniGetMethodID(clazz.get(), "waitForDeviceUntil", "(Lcom/interaxon/example/Duration;)Lcom/interaxon/example/BluetoothDevice;") };
    const jmethodID method_addDeviceCallback { djinni::jniGetMethodID(clazz.get(), "addDeviceCallback", "(Lcom/interaxon/example/BluetoothDeviceCallback;)Lcom/interaxon/example/DeviceCallbackHandle;") };
    const jmethodID method_connectToDevice { djinni::jniGetMethodID(clazz.get(), "connectToDevice", "(Lcom/interaxon/example/BluetoothDevice;Lcom/interaxon/example/BluetoothConnectionCallback;)Lcom/interaxon/example/BluetoothConnectionHandle;") };

    class JavaProxy final : djinni::JavaProxyCacheEntry, public ::interaxon::example::Platform {
    public:
        JavaProxy(jobject obj);
        virtual void defer_action(const std::shared_ptr<::interaxon::example::Action> & act, const ::interaxon::example::Duration & until) override;
        virtual void thread_action(const std::shared_ptr<::interaxon::example::Errorable> & act) override;
        virtual std::shared_ptr<::interaxon::example::IntervalHandle> repeat_action(const std::shared_ptr<::interaxon::example::Action> & act, const ::interaxon::example::Duration & at_interval) override;
        virtual std::vector<std::shared_ptr<::interaxon::example::BluetoothDevice>> all_devices() override;
        virtual std::shared_ptr<::interaxon::example::BluetoothDevice> wait_for_device_until(const std::optional<::interaxon::example::Duration> & timeout) override;
        virtual std::shared_ptr<::interaxon::example::DeviceCallbackHandle> add_device_callback(const std::shared_ptr<::interaxon::example::BluetoothDeviceCallback> & callback) override;
        virtual std::shared_ptr<::interaxon::example::BluetoothConnectionHandle> connect_to_device(const std::shared_ptr<::interaxon::example::BluetoothDevice> & device, const std::shared_ptr<::interaxon::example::BluetoothConnectionCallback> & callback) override;

    private:
        using djinni::JavaProxyCacheEntry::getGlobalRef;
        friend class djinni::JniInterface<::interaxon::example::Platform, ::djinni_generated::Platform>;
        friend class djinni::JavaProxyCache<JavaProxy>;
    };

private:
    Platform();
    friend class djinni::JniClass<::djinni_generated::Platform>;
};

}  // namespace djinni_generated
