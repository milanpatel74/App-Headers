//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGOverlayController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, PGCameraShotMetadata, PGPhotoEditorValues, TGCameraPhotoPreviewWrapperView, TGModernGalleryZoomableScrollView, TGPhotoEditorController, TGPhotoToolbarView, UIImage, UIImageView, UIView;

@interface TGCameraPhotoPreviewController : TGOverlayController <UIScrollViewDelegate>
{
    UIImage *_image;
    UIImage *_editedImage;
    PGPhotoEditorValues *_editorValues;
    PGCameraShotMetadata *_metadata;
    NSString *_caption;
    TGCameraPhotoPreviewWrapperView *_wrapperView;
    UIView *_transitionParentView;
    TGModernGalleryZoomableScrollView *_scrollView;
    UIImageView *_imageView;
    NSArray *_availableTabs;
    TGPhotoToolbarView *_portraitToolbarView;
    TGPhotoToolbarView *_landscapeToolbarView;
    _Bool _transitionInProgress;
    _Bool _dismissing;
    _Bool _disallowCaptions;
    CDUnknownBlockType _beginTransitionIn;
    CDUnknownBlockType _beginTransitionOut;
    CDUnknownBlockType _photoEditorShown;
    CDUnknownBlockType _photoEditorHidden;
    CDUnknownBlockType _retakePressed;
    CDUnknownBlockType _sendPressed;
    CDUnknownBlockType _userListSignal;
    CDUnknownBlockType _hashtagListSignal;
    TGPhotoEditorController *_editorController;
}

@property(nonatomic) __weak TGPhotoEditorController *editorController; // @synthesize editorController=_editorController;
@property(copy, nonatomic) CDUnknownBlockType hashtagListSignal; // @synthesize hashtagListSignal=_hashtagListSignal;
@property(copy, nonatomic) CDUnknownBlockType userListSignal; // @synthesize userListSignal=_userListSignal;
@property(copy, nonatomic) CDUnknownBlockType sendPressed; // @synthesize sendPressed=_sendPressed;
@property(copy, nonatomic) CDUnknownBlockType retakePressed; // @synthesize retakePressed=_retakePressed;
@property(copy, nonatomic) CDUnknownBlockType photoEditorHidden; // @synthesize photoEditorHidden=_photoEditorHidden;
@property(copy, nonatomic) CDUnknownBlockType photoEditorShown; // @synthesize photoEditorShown=_photoEditorShown;
@property(copy, nonatomic) CDUnknownBlockType beginTransitionOut; // @synthesize beginTransitionOut=_beginTransitionOut;
@property(copy, nonatomic) CDUnknownBlockType beginTransitionIn; // @synthesize beginTransitionIn=_beginTransitionIn;
@property(nonatomic) _Bool disallowCaptions; // @synthesize disallowCaptions=_disallowCaptions;
- (void).cxx_destruct;
- (void)updateLayout:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setToolbarsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentPhotoEditorWithTab:(int)arg1;
- (void)updateEditorButtonsForEditorValues:(id)arg1 hasCaption:(_Bool)arg2;
- (void)adjustZoom;
- (void)reset;
- (struct CGSize)contentSize;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)transitionOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)transitionIn;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)navigationBarShouldBeHidden;
- (long long)requiredNavigationBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)dismiss;
- (void)loadView;
- (id)initWithImage:(id)arg1 metadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

