// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include "djinni_support.hpp"
#include "error_code.hpp"

namespace djinni_generated {

class ErrorCode final : djinni::JniEnum {
public:
    using CppType = ::interaxon::example::ErrorCode;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, ::interaxon::example::ErrorCode c) { return djinni::JniClass<ErrorCode>::get().create(jniEnv, static_cast<int>(c)).release(); }
    static ::interaxon::example::ErrorCode fromJava(JNIEnv* jniEnv, jobject j) { return static_cast<::interaxon::example::ErrorCode>(djinni::JniClass<ErrorCode>::get().ordinal(jniEnv, j)); }

private:
    ErrorCode() : JniEnum("com/interaxon/example/ErrorCode") {}
    friend class djinni::JniClass<ErrorCode>;
};

}  // namespace djinni_generated
