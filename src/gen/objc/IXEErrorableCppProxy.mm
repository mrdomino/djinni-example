// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from platform.djinni

#import "IXEErrorableCppProxy+Private.h"
#import "DJIError.h"
#import "IXEError+Private.h"
#import "IXEErrorable.h"
#include <exception>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@implementation IXEErrorableCppProxy

- (id)initWithCpp:(const std::shared_ptr<::interaxon::example::Errorable> &)cppRef
{
    if (self = [super init]) {
        _cppRef = cppRef;
    }
    return self;
}

- (void)dealloc
{
    djinni::DbxCppWrapperCache<::interaxon::example::Errorable> & cache = djinni::DbxCppWrapperCache<::interaxon::example::Errorable>::getInstance();
    cache.remove(_cppRef);
}

+ (id)errorableWithCpp:(const std::shared_ptr<::interaxon::example::Errorable> &)cppRef
{
    djinni::DbxCppWrapperCache<::interaxon::example::Errorable> & cache = djinni::DbxCppWrapperCache<::interaxon::example::Errorable>::getInstance();
    return cache.get(cppRef, [] (const std::shared_ptr<::interaxon::example::Errorable> & p) { return [[IXEErrorableCppProxy alloc] initWithCpp:p]; });
}

- (void)do {
    try {
        _cppRef->do();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)error:(IXEError *)theError {
    try {
        ::interaxon::example::Error cppTheError = std::move([theError cppError]);
        bool cppRet = _cppRef->error(std::move(cppTheError));
        BOOL objcRet = (cppRet) ? YES : NO;
        return objcRet;
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

@end