// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include "error.hpp"

namespace interaxon { namespace example {

/**
 * Like action, but exposes a separate method to signal errors, e.g. in
 * connection establishment or starting a thread.
 */
class Errorable {
public:
    virtual ~Errorable() {}

    virtual void do() = 0;

    /** Returns true iff caller should retry the action. */
    virtual bool error(const Error & the_error) = 0;
};

} }  // namespace interaxon::example