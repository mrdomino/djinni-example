// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#import <Foundation/Foundation.h>


@interface IXEDuration : NSObject
- (id)initWithDuration:(IXEDuration *)duration;
- (id)initWithMicroseconds:(int64_t)microseconds;

/** Must not be negative. */
@property (nonatomic, readonly) int64_t microseconds;

- (NSComparisonResult)compare:(IXEDuration *)other;

@end
