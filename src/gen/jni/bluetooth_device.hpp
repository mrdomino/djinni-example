// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include "bluetooth_device.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BluetoothDevice final : djinni::JniInterface<::interaxon::example::BluetoothDevice, BluetoothDevice> {
public:
    using CppType = std::shared_ptr<::interaxon::example::BluetoothDevice>;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, std::shared_ptr<::interaxon::example::BluetoothDevice> c) { return djinni::JniClass<::djinni_generated::BluetoothDevice>::get()._toJava(jniEnv, c); }
    static std::shared_ptr<::interaxon::example::BluetoothDevice> fromJava(JNIEnv* jniEnv, jobject j) { return djinni::JniClass<::djinni_generated::BluetoothDevice>::get()._fromJava(jniEnv, j); }

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/interaxon/example/BluetoothDevice") };
    const jmethodID method_name { djinni::jniGetMethodID(clazz.get(), "name", "()Ljava/lang/String;") };
    const jmethodID method_address { djinni::jniGetMethodID(clazz.get(), "address", "()Ljava/lang/String;") };

    class JavaProxy final : djinni::JavaProxyCacheEntry, public ::interaxon::example::BluetoothDevice {
    public:
        JavaProxy(jobject obj);
        virtual std::string name() override;
        virtual std::string address() override;

    private:
        using djinni::JavaProxyCacheEntry::getGlobalRef;
        friend class djinni::JniInterface<::interaxon::example::BluetoothDevice, ::djinni_generated::BluetoothDevice>;
        friend class djinni::JavaProxyCache<JavaProxy>;
    };

private:
    BluetoothDevice();
    friend class djinni::JniClass<::djinni_generated::BluetoothDevice>;
};

}  // namespace djinni_generated