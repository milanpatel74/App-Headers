//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGSharedFileSignals : NSObject
{
}

+ (id)squareFileThumbnail:(id)arg1 ofSize:(struct CGSize)arg2 threadPool:(id)arg3 memoryCache:(id)arg4 pixelProcessingBlock:(CDUnknownBlockType)arg5;
+ (id)localImageForFullSizeFile:(id)arg1;
+ (id)localImageForLowQualityFileThumbnail:(id)arg1;
+ (id)localCachedImageForFileThumbnail:(id)arg1 ofSize:(struct CGSize)arg2 renderSize:(struct CGSize)arg3 lowQuality:(_Bool)arg4;
+ (id)_localCachedImageForFileThumbnail:(id)arg1 ofSize:(struct CGSize)arg2 renderSize:(struct CGSize)arg3 lowQuality:(_Bool)arg4;
+ (id)pathForFileDirectory:(id)arg1;

@end

