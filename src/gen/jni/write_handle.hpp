// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include "djinni_support.hpp"
#include "write_handle.hpp"

namespace djinni_generated {

class WriteHandle final : djinni::JniInterface<::interaxon::example::WriteHandle, WriteHandle> {
public:
    using CppType = std::shared_ptr<::interaxon::example::WriteHandle>;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, std::shared_ptr<::interaxon::example::WriteHandle> c) { return djinni::JniClass<::djinni_generated::WriteHandle>::get()._toJava(jniEnv, c); }
    static std::shared_ptr<::interaxon::example::WriteHandle> fromJava(JNIEnv* jniEnv, jobject j) { return djinni::JniClass<::djinni_generated::WriteHandle>::get()._fromJava(jniEnv, j); }

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/interaxon/example/WriteHandle") };
    const jmethodID method_write { djinni::jniGetMethodID(clazz.get(), "write", "([B)J") };

    class JavaProxy final : djinni::JavaProxyCacheEntry, public ::interaxon::example::WriteHandle {
    public:
        JavaProxy(jobject obj);
        virtual int64_t write(const std::vector<uint8_t> & bytes) override;

    private:
        using djinni::JavaProxyCacheEntry::getGlobalRef;
        friend class djinni::JniInterface<::interaxon::example::WriteHandle, ::djinni_generated::WriteHandle>;
        friend class djinni::JavaProxyCache<JavaProxy>;
    };

private:
    WriteHandle();
    friend class djinni::JniClass<::djinni_generated::WriteHandle>;
};

}  // namespace djinni_generated