// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#pragma once

#include <memory>
#include <string>

namespace interaxon { namespace example {

class BluetoothConnectionCallback;
class BluetoothConnectionHandle;

/**
 * Bluetooth device representation.
 *
 * May hold some platform-specific state, e.g. a Bluetooth socket on Android or
 * an EAAccessory on iOS. It is therefore an interface and not a record.
 */
class BluetoothDevice {
public:
    virtual ~BluetoothDevice() {}

    virtual std::string name() = 0;

    virtual std::string address() = 0;

    virtual std::shared_ptr<BluetoothConnectionHandle> connect(const std::shared_ptr<BluetoothConnectionCallback> & callback) = 0;
};

} }  // namespace interaxon::example
