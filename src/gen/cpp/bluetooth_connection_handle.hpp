// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include <cstdint>
#include <vector>

namespace interaxon { namespace example {

/**
 * Owned by the native code. Used to signal that we want to write or end the
 * connection.
 */
class BluetoothConnectionHandle {
public:
    virtual ~BluetoothConnectionHandle() {}

    /**
     * Write zero or more bytes, returning the number of bytes written. Return
     * is always non-negative. If this returns 0, wait for can_write() to be
     * called on the callback.
     */
    virtual int64_t write(const std::vector<uint8_t> & bytes) = 0;

    /** Close the connection. on_close() receives an error_code of canceled. */
    virtual void close() = 0;
};

} }  // namespace interaxon::example
