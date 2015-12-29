//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernMediaListItemContentView.h"

#import "TGModernGalleryTransitionView.h"

@class NSString, TGAssetImageView, TGImagePickerCellCheckButton;

@interface TGMediaPickerAssetItemView : TGModernMediaListItemContentView <TGModernGalleryTransitionView>
{
    TGImagePickerCellCheckButton *_checkButton;
    CDUnknownBlockType _isItemSelected;
    CDUnknownBlockType _isItemHidden;
    CDUnknownBlockType _changeItemSelection;
    TGAssetImageView *_imageView;
}

@property(readonly, nonatomic) TGAssetImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)transitionImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)checkButtonPressed;
- (void)updateSelectionAnimated:(_Bool)arg1;
- (void)updateHiddenAnimated:(_Bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setItem:(id)arg1 synchronously:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

