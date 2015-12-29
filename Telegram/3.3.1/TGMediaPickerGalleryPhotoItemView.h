//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernGalleryZoomableItemView.h"

#import "TGModernGalleryEditableItemView.h"

@class NSString, TGAssetImageView, TGMessageImageViewOverlayView, UILabel;

@interface TGMediaPickerGalleryPhotoItemView : TGModernGalleryZoomableItemView <TGModernGalleryEditableItemView>
{
    UILabel *_fileInfoLabel;
    TGMessageImageViewOverlayView *_progressView;
    _Bool _progressVisible;
    unsigned long long _attributesRequestToken;
    long long _attributesVersion;
    TGAssetImageView *_imageView;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) TGAssetImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (struct CGRect)transitionViewContentRect;
- (id)transitionView;
- (id)contentView;
- (struct CGSize)contentSize;
- (id)footerView;
- (void)singleTap;
- (void)setProgressVisible:(_Bool)arg1 value:(float)arg2 animated:(_Bool)arg3;
- (void)setItem:(id)arg1 synchronously:(_Bool)arg2;
- (void)prepareForRecycle;
- (void)setHiddenAsBeingEdited:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

