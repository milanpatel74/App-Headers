//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTQueue, NSMutableDictionary;

@interface TGMemoryImageCache : NSObject
{
    MTQueue *_queue;
    unsigned long long _softMemoryLimit;
    unsigned long long _hardMemoryLimit;
    NSMutableDictionary *_cache;
    unsigned long long _cacheSize;
    NSMutableDictionary *_averageColors;
}

- (void).cxx_destruct;
- (_Bool)averageColorForKey:(id)arg1 color:(unsigned int *)arg2;
- (void)setAverageColor:(unsigned int)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2 attributes:(id)arg3;
- (id)imageForKey:(id)arg1 attributes:(id *)arg2;
- (void)_addSize:(unsigned long long)arg1;
- (id)initWithSoftMemoryLimit:(unsigned long long)arg1 hardMemoryLimit:(unsigned long long)arg2;

@end

