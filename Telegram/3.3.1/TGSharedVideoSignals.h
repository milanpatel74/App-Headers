//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGSharedVideoSignals : NSObject
{
}

+ (id)squareVideoThumbnail:(id)arg1 ofSize:(struct CGSize)arg2 threadPool:(id)arg3 memoryCache:(id)arg4 pixelProcessingBlock:(CDUnknownBlockType)arg5;
+ (id)localImageForFullSizeVideo:(id)arg1;
+ (id)localImageForLowQualityVideoThumbnail:(id)arg1;
+ (id)localCachedImageForVideoThumbnail:(id)arg1 ofSize:(struct CGSize)arg2 renderSize:(struct CGSize)arg3 lowQuality:(_Bool)arg4;
+ (id)_localCachedImageForVideoThumbnail:(id)arg1 ofSize:(struct CGSize)arg2 renderSize:(struct CGSize)arg3 lowQuality:(_Bool)arg4;
+ (id)pathForVideoDirectory:(id)arg1;

@end

