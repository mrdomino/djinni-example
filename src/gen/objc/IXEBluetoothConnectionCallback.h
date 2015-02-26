// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#import "IXEWriteHandle.h"
#import <Foundation/Foundation.h>
@class IXEError;

/** Owned by the platform code. Provides callbacks on various connection events. */

@protocol IXEBluetoothConnectionCallback

/** Called once when the connection has opened successfully. */
- (void)onOpen;

/**
 * Called once when the connection ends for any reason. Returns true iff
 * caller should retry the connection.
 */
- (BOOL)onClose:(IXEError *)error;

/**
 * Called every time data is read from the connection. Callee must consume
 * (or buffer) all bytes.
 */
- (void)onRead:(NSData *)bytes;

/**
 * Called every time data can be written to the connection. Returns a handle
 * that may be used once. Will be called repeatedly as long as the handle is
 * used and space is available.
 */
- (id <IXEWriteHandle>)canWrite;

@end
