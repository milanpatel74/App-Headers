//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGPhotoEditorTabController.h"

@class NSObject<OS_dispatch_semaphore>, PGPhotoEditor, TGModernButton, TGPhotoCropView, TGPhotoEditorPreviewView, UIImage, UIView;

@interface TGPhotoCropController : TGPhotoEditorTabController
{
    _Bool _forVideo;
    UIView *_wrapperView;
    double _autoRotationAngle;
    UIView *_buttonsWrapperView;
    TGModernButton *_rotateButton;
    TGModernButton *_mirrorButton;
    TGModernButton *_aspectRatioButton;
    TGModernButton *_resetButton;
    TGPhotoCropView *_cropView;
    UIImage *_screenImage;
    UIView *_snapshotView;
    UIImage *_snapshotImage;
    _Bool _appeared;
    UIImage *_imagePendingLoad;
    struct CGRect _transitionOutFrame;
    UIView *_transitionOutView;
    double _resetButtonWidth;
    NSObject<OS_dispatch_semaphore> *_waitSemaphore;
    _Bool _switching;
    CDUnknownBlockType _finishedPhotoProcessing;
    CDUnknownBlockType _cropReset;
    PGPhotoEditor *_photoEditor;
    TGPhotoEditorPreviewView *_previewView;
}

+ (struct CGRect)photoContainerFrameForParentViewFrame:(struct CGRect)arg1 toolbarLandscapeSize:(double)arg2 orientation:(long long)arg3 hasArbitraryRotation:(_Bool)arg4;
@property(nonatomic) __weak TGPhotoEditorPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak PGPhotoEditor *photoEditor; // @synthesize photoEditor=_photoEditor;
@property(copy, nonatomic) CDUnknownBlockType cropReset; // @synthesize cropReset=_cropReset;
@property(copy, nonatomic) CDUnknownBlockType finishedPhotoProcessing; // @synthesize finishedPhotoProcessing=_finishedPhotoProcessing;
@property(readonly, nonatomic) _Bool switching; // @synthesize switching=_switching;
- (void).cxx_destruct;
- (void)updateLayout:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAutoButtonHidden:(_Bool)arg1;
- (void)resetButtonPressed;
- (void)aspectRatioButtonPressed;
- (void)mirrorButtonPressed;
- (void)rotateButtonPressed;
- (void)rotate;
@property(readonly, nonatomic) long long cropOrientation;
- (void)prepareTransitionOutSaving:(_Bool)arg1;
- (id)transitionOutReferenceView;
- (struct CGRect)transitionOutReferenceFrame;
- (void)transitionOutSaving:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)_targetFrameForTransitionInFromFrame:(struct CGRect)arg1;
- (void)transitionOutSwitching:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishedTransitionInWithView:(id)arg1;
- (void)transitionIn;
- (void)_updateEditorValues;
- (void)setBackdropImage:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setSnapshotImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setAutorotationAngle:(double)arg1;
- (_Bool)isDismissAllowed;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithPhotoEditor:(id)arg1 previewView:(id)arg2 metadata:(id)arg3 forVideo:(_Bool)arg4;

@end
