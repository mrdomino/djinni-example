// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#import "IXEBluetoothDeviceObjcProxy+Private.h"
#import "IXEBluetoothDevice.h"

namespace dropboxsync
{
    BluetoothDeviceObjcProxy::BluetoothDeviceObjcProxy (id objcRef)
    {
        assert([[objcRef class] conformsToProtocol:@protocol(IXEBluetoothDevice)]);
        this->objcRef = objcRef;
    }

    BluetoothDeviceObjcProxy::~BluetoothDeviceObjcProxy ()
    {
        djinni::DbxObjcWrapperCache<BluetoothDeviceObjcProxy> & cache = djinni::DbxObjcWrapperCache<BluetoothDeviceObjcProxy>::getInstance();
        cache.remove(objcRef);
    }

    std::shared_ptr<::interaxon::example::BluetoothDevice> BluetoothDeviceObjcProxy::bluetooth_device_with_objc (id objcRef)
    {
        djinni::DbxObjcWrapperCache<BluetoothDeviceObjcProxy> & cache = djinni::DbxObjcWrapperCache<BluetoothDeviceObjcProxy>::getInstance();
        return static_cast<std::shared_ptr<::interaxon::example::BluetoothDevice>>(cache.get(objcRef));
    }

    std::string BluetoothDeviceObjcProxy::name ()
    {
        @autoreleasepool {
            NSString *objcRet = [objcRef name];
            std::string cppRet([objcRet UTF8String], [objcRet lengthOfBytesUsingEncoding:NSUTF8StringEncoding]);
            return cppRet;
        }
    }

    std::string BluetoothDeviceObjcProxy::address ()
    {
        @autoreleasepool {
            NSString *objcRet = [objcRef address];
            std::string cppRet([objcRet UTF8String], [objcRet lengthOfBytesUsingEncoding:NSUTF8StringEncoding]);
            return cppRet;
        }
    }
}
