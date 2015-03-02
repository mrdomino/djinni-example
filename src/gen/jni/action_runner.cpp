// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#include "action_runner.hpp"  // my header
#include "action.hpp"
#include "duration.hpp"
#include "errorable.hpp"
#include "interval_handle.hpp"

namespace djinni_generated {

ActionRunner::ActionRunner() : djinni::JniInterface<::interaxon::example::ActionRunner, ActionRunner>() {}

ActionRunner::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}

void ActionRunner::JavaProxy::JavaProxy::defer_action(const std::shared_ptr<::interaxon::example::Action> & c_act, const ::interaxon::example::Duration & c_until) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_act(jniEnv, Action::toJava(jniEnv, c_act));
    djinni::LocalRef<jobject> j_until(jniEnv, Duration::toJava(jniEnv, c_until));
    const auto & data = djinni::JniClass<::djinni_generated::ActionRunner>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_deferAction, j_act.get(), j_until.get());
    djinni::jniExceptionCheck(jniEnv);
};

void ActionRunner::JavaProxy::JavaProxy::thread_action(const std::shared_ptr<::interaxon::example::Errorable> & c_act) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_act(jniEnv, Errorable::toJava(jniEnv, c_act));
    const auto & data = djinni::JniClass<::djinni_generated::ActionRunner>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_threadAction, j_act.get());
    djinni::jniExceptionCheck(jniEnv);
};

std::shared_ptr<::interaxon::example::IntervalHandle> ActionRunner::JavaProxy::JavaProxy::repeat_action(const std::shared_ptr<::interaxon::example::Action> & c_act, const ::interaxon::example::Duration & c_at_interval) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_act(jniEnv, Action::toJava(jniEnv, c_act));
    djinni::LocalRef<jobject> j_at_interval(jniEnv, Duration::toJava(jniEnv, c_at_interval));
    const auto & data = djinni::JniClass<::djinni_generated::ActionRunner>::get();
    djinni::LocalRef<jobject> jret(jniEnv, jniEnv->CallObjectMethod(getGlobalRef(), data.method_repeatAction, j_act.get(), j_at_interval.get()));
    djinni::jniExceptionCheck(jniEnv);
    return IntervalHandle::fromJava(jniEnv, jret.get());
};

}  // namespace djinni_generated