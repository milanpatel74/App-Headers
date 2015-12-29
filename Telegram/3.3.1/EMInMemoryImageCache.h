//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface EMInMemoryImageCache : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_residentImages;
    unsigned long long _maxResidentSize;
    unsigned long long _residentImagesTotalSize;
    unsigned long long _nextAccessIndex;
}

- (void).cxx_destruct;
- (void)_debugPrintStats;
- (id)imageForKey:(id)arg1;
- (void)_addResidentImage:(id)arg1 forKey:(id)arg2;
- (void)setImageDataWithSize:(struct CGSize)arg1 generator:(CDUnknownBlockType)arg2 forKey:(id)arg3;
- (id)initWithMaxResidentSize:(unsigned long long)arg1;
- (id)init;

@end

