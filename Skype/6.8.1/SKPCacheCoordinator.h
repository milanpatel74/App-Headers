//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKPCacheCoordinator : NSObject
{
    NSString *_skypeIdentity;
}

@property(retain, nonatomic) NSString *skypeIdentity; // @synthesize skypeIdentity=_skypeIdentity;
- (void).cxx_destruct;
- (id)errorDictionaryWithObject:(id)arg1 name:(id)arg2 path:(id)arg3 exception:(id)arg4;
- (id)actualPathForSymbolicPath:(id)arg1;
- (void)storeObject:(id)arg1 withName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getObjectWithName:(id)arg1 error:(id *)arg2;
- (id)dataObjectWithName:(id)arg1 error:(id *)arg2;
- (_Bool)hasCachedObjectWithName:(id)arg1 error:(id *)arg2;

@end
