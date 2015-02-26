// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include "djinni_support.hpp"
#include "interval_handle.hpp"

namespace djinni_generated {

class IntervalHandle final : djinni::JniInterface<::interaxon::example::IntervalHandle, IntervalHandle> {
public:
    using CppType = std::shared_ptr<::interaxon::example::IntervalHandle>;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, std::shared_ptr<::interaxon::example::IntervalHandle> c) { return djinni::JniClass<::djinni_generated::IntervalHandle>::get()._toJava(jniEnv, c); }
    static std::shared_ptr<::interaxon::example::IntervalHandle> fromJava(JNIEnv* jniEnv, jobject j) { return djinni::JniClass<::djinni_generated::IntervalHandle>::get()._fromJava(jniEnv, j); }

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/interaxon/example/IntervalHandle") };
    const jmethodID method_cancel { djinni::jniGetMethodID(clazz.get(), "cancel", "()V") };

    class JavaProxy final : djinni::JavaProxyCacheEntry, public ::interaxon::example::IntervalHandle {
    public:
        JavaProxy(jobject obj);
        virtual void cancel() override;

    private:
        using djinni::JavaProxyCacheEntry::getGlobalRef;
        friend class djinni::JniInterface<::interaxon::example::IntervalHandle, ::djinni_generated::IntervalHandle>;
        friend class djinni::JavaProxyCache<JavaProxy>;
    };

private:
    IntervalHandle();
    friend class djinni::JniClass<::djinni_generated::IntervalHandle>;
};

}  // namespace djinni_generated