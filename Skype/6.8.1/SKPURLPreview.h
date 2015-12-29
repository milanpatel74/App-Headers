//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSAttributedString, NSString, NSURL;

@interface SKPURLPreview : NSObject <NSCoding>
{
    _Bool _isThumbnailAnimated;
    NSURL *_sourceURL;
    NSURL *_thumbnailURL;
    NSURL *_thumbnailFullSizeURL;
    NSURL *_faviconURL;
    NSURL *_userPictureURL;
    NSString *_previewTitle;
    NSAttributedString *_previewDescription;
    NSString *_previewService;
    long long _type;
    struct CGSize _thumbnailSize;
}

@property(readonly, nonatomic) _Bool isThumbnailAnimated; // @synthesize isThumbnailAnimated=_isThumbnailAnimated;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *previewService; // @synthesize previewService=_previewService;
@property(copy, nonatomic) NSAttributedString *previewDescription; // @synthesize previewDescription=_previewDescription;
@property(copy, nonatomic) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
@property(readonly, nonatomic) NSURL *userPictureURL; // @synthesize userPictureURL=_userPictureURL;
@property(retain, nonatomic) NSURL *faviconURL; // @synthesize faviconURL=_faviconURL;
@property(retain, nonatomic) NSURL *thumbnailFullSizeURL; // @synthesize thumbnailFullSizeURL=_thumbnailFullSizeURL;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviewTitle:(id)arg1 previewDescription:(id)arg2 thumbnailSize:(struct CGSize)arg3 thumbnailIsAnimated:(_Bool)arg4 thumbnailURL:(id)arg5 thumbnailFullSizeURL:(id)arg6 faviconURL:(id)arg7 previewService:(id)arg8 type:(id)arg9 sourceURL:(id)arg10;

@end

