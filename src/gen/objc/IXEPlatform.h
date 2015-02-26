// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#import "IXEAction.h"
#import "IXEBluetoothConnectionCallback.h"
#import "IXEBluetoothConnectionHandle.h"
#import "IXEBluetoothDevice.h"
#import "IXEBluetoothDeviceCallback.h"
#import "IXEDeviceCallbackHandle.h"
#import "IXEErrorable.h"
#import "IXEIntervalHandle.h"
#import <Foundation/Foundation.h>
@class IXEDuration;


@protocol IXEPlatform

/**
 * Act at some later time in the caller's thread. If until is 0, act will be
 * run as soon as possible but not until after the caller has returned (i.e.
 * defer_action will not block if act blocks.)
 */
- (void)deferAction:(id <IXEAction>)act until:(IXEDuration *)until;

/**
 * Runs act immediately in a new thread. Calls error() if something went
 * wrong setting up the thread.
 */
- (void)threadAction:(id <IXEErrorable>)act;

/**
 * Run r at the specified interval. Runs as frequently at possible if the
 * interval is 0 (or is less than the time r takes to complete). Never runs
 * multiple times concurrently. Interval must be non-negative. If r cancels
 * the handle in do, r will not be called again.
 */
- (id <IXEIntervalHandle>)repeatAction:(id <IXEAction>)act atInterval:(IXEDuration *)atInterval;

/**
 * List of Bluetooth devices accessible to the API right now.
 * On Android, this is all paired devices. On iOS, this is all connected
 * devices.
 */
- (NSArray *)allDevices;

/**
 * Return a Bluetooth device if one is available at any time before timeout.
 * Returns a null reference if the timeout expired.
 */
- (id <IXEBluetoothDevice>)waitForDeviceUntil:(IXEDuration *)timeout;

/**
 * Register a callback to be called any time a Bluetooth device becomes
 * available.
 */
- (id <IXEDeviceCallbackHandle>)addDeviceCallback:(id <IXEBluetoothDeviceCallback>)callback;

/** Initiate a non-blocking connection to the specified Bluetooth device. */
- (id <IXEBluetoothConnectionHandle>)connectToDevice:(id <IXEBluetoothDevice>)device callback:(id <IXEBluetoothConnectionCallback>)callback;

@end