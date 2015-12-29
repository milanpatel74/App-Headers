//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSData, NSString, NSURL;

@protocol SCSnapVideoFilterState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long thumbnailOrientation;
@property(readonly, nonatomic) long long videoTargetOrientation;
@property(readonly, nonatomic) double videoTargetAspectRatio;
@property(readonly, nonatomic) _Bool audioEnabled;
@property(readonly, nonatomic) _Bool highQuality;
@property(readonly, copy, nonatomic) NSData *overlayImageForThumbnailPNGData;
@property(readonly, copy, nonatomic) NSData *overlayImagePNGData;
@property(readonly, nonatomic) long long overlayImageFileSizeBits;
@property(readonly, copy, nonatomic) NSString *filterName;
@property(readonly, nonatomic) _Bool flipsVideoSourceOrientation;
@property(readonly, copy, nonatomic) NSData *overridingAudioData;
@property(readonly, copy, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) NSString *uuid;
@end

