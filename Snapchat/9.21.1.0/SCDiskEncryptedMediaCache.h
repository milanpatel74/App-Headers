//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TMDiskCache, TMMemoryCache;

@interface SCDiskEncryptedMediaCache : NSObject
{
    TMMemoryCache *_memoryCache;
    TMDiskCache *_diskCache;
    NSObject<OS_dispatch_queue> *_encryptionQueue;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 clientEncrpytion:(id)arg2 forKey:(id)arg3 queue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)objectForKey:(id)arg1 clientEncrpytion:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithCacheName:(id)arg1;

@end

