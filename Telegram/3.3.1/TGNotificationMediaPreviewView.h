//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGNotificationPreviewView.h"

@class NSString, TGImageView, TGMediaAttachment, UIImageView, UILabel, UIView;

@interface TGNotificationMediaPreviewView : TGNotificationPreviewView
{
    UIView *_wrapperView;
    TGImageView *_imageView;
    UIView *_textWrapperView;
    TGMediaAttachment *_attachment;
    _Bool _mediaIsAvailable;
    struct CGSize _displaySize;
    NSString *_imageUri;
    _Bool _loaded;
    NSString *_legacyThumbnailCacheUri;
    _Bool _hasCaption;
    _Bool _hasDuration;
    UIImageView *_durationBackground;
    UILabel *_durationLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)displaySizeForSize:(struct CGSize)arg1;
- (double)expandedHeightForContainerSize:(struct CGSize)arg1;
- (void)setExpandProgress:(double)arg1;
- (void)imageDataInvalidated:(id)arg1;
- (id)initWithMessage:(id)arg1 conversation:(id)arg2 attachment:(id)arg3 peers:(id)arg4;

@end

