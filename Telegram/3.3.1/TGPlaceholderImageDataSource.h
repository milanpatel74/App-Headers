//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGImageDataSource.h"

@interface TGPlaceholderImageDataSource : TGImageDataSource
{
}

+ (id)imageCache;
+ (void)load;
- (id)_createAndCachePlaceholderWithArgs:(id)arg1;
- (CDStruct_9d3f4b40)_colorsForGroupId:(long long)arg1;
- (CDStruct_9d3f4b40)_colorsForUid:(int)arg1;
- (id)loadDataSyncWithUri:(id)arg1 canWait:(_Bool)arg2 acceptPartialData:(_Bool)arg3 asyncTaskId:(id *)arg4 progress:(CDUnknownBlockType)arg5 partialCompletion:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)cacheKeyForArgs:(id)arg1;
- (id)loadAttributeSyncForUri:(id)arg1 attribute:(id)arg2;
- (id)groupGradient:(long long)arg1;
- (_Bool)canHandleAttributeUri:(id)arg1;
- (_Bool)canHandleUri:(id)arg1;

@end

