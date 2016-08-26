//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATQueue, NSMutableDictionary, TGMemoryImageCache, TGModernCache;

@interface TGMediaStoreContext : NSObject
{
    NSMutableDictionary *_mediaImageAverageColorCache;
    TGMemoryImageCache *_mediaImageCache;
    TGMemoryImageCache *_mediaReducedImageCache;
    struct _opaque_pthread_rwlock_t _mediaImageAverageColorCacheLock;
    struct _opaque_pthread_rwlock_t _mediaImageCacheLock;
    struct _opaque_pthread_rwlock_t _mediaReducedImageCacheLock;
    ATQueue *_mediaReducedImageGenerationQueue;
    TGModernCache *_temporaryFilesCache;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)inMediaReducedImageCacheGenerationQueue:(CDUnknownBlockType)arg1;
- (void)setMediaImageForKey:(id)arg1 image:(id)arg2 attributes:(id)arg3;
- (id)mediaImage:(id)arg1 attributes:(id *)arg2;
- (void)setMediaReducedImageForKey:(id)arg1 reducedImage:(id)arg2 attributes:(id)arg3;
- (id)mediaReducedImage:(id)arg1 attributes:(id *)arg2;
- (void)setMediaImageAverageColorForKey:(id)arg1 averageColor:(id)arg2;
- (id)mediaImageAverageColor:(id)arg1;
- (id)temporaryFilesCache;
- (id)init;

@end
