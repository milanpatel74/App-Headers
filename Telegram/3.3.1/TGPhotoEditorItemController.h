//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "TGViewControllerNavigationBarAppearance.h"

@class NSString, PGPhotoEditor, TGPhotoEditorPreviewView, TGPhotoEditorToolButtonsView, UILabel, UIView, UIView<TGPhotoEditorToolView>;

@interface TGPhotoEditorItemController : TGViewController <TGViewControllerNavigationBarAppearance>
{
    id <PGPhotoEditorItem> _editorItem;
    UIView *_wrapperView;
    UIView *_portraitToolsWrapperView;
    UIView *_landscapeToolsWrapperView;
    UILabel *_portraitTitleLabel;
    UILabel *_landscapeTitleLabel;
    UIView<TGPhotoEditorToolView> *_toolAreaView;
    UIView<TGPhotoEditorToolView> *_portraitToolControlView;
    UIView<TGPhotoEditorToolView> *_landscapeToolControlView;
    TGPhotoEditorToolButtonsView *_portraitButtonsView;
    TGPhotoEditorToolButtonsView *_landscapeButtonsView;
    UIView *_initialPreviewSuperview;
    _Bool _dismissing;
    _Bool _animating;
    _Bool _enhanceInitialAppearance;
    _Bool _initialAppearance;
    _Bool _skipProcessingOnCompletion;
    CDUnknownBlockType _editorItemUpdated;
    CDUnknownBlockType _beginTransitionIn;
    CDUnknownBlockType _beginTransitionOut;
    CDUnknownBlockType _finishedCombinedTransition;
    double _toolbarLandscapeSize;
    PGPhotoEditor *_photoEditor;
    TGPhotoEditorPreviewView *_previewView;
}

@property(nonatomic) __weak TGPhotoEditorPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak PGPhotoEditor *photoEditor; // @synthesize photoEditor=_photoEditor;
@property(nonatomic) _Bool skipProcessingOnCompletion; // @synthesize skipProcessingOnCompletion=_skipProcessingOnCompletion;
@property(nonatomic) _Bool initialAppearance; // @synthesize initialAppearance=_initialAppearance;
@property(nonatomic) double toolbarLandscapeSize; // @synthesize toolbarLandscapeSize=_toolbarLandscapeSize;
@property(copy, nonatomic) CDUnknownBlockType finishedCombinedTransition; // @synthesize finishedCombinedTransition=_finishedCombinedTransition;
@property(copy, nonatomic) CDUnknownBlockType beginTransitionOut; // @synthesize beginTransitionOut=_beginTransitionOut;
@property(copy, nonatomic) CDUnknownBlockType beginTransitionIn; // @synthesize beginTransitionIn=_beginTransitionIn;
@property(copy, nonatomic) CDUnknownBlockType editorItemUpdated; // @synthesize editorItemUpdated=_editorItemUpdated;
- (void).cxx_destruct;
- (void)updateLayout:(long long)arg1;
- (struct CGSize)referenceViewSize;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)transitionOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)transitionIn;
- (void)finishedCombinedAppearance;
- (void)prepareForCombinedAppearance;
- (void)_applyDefaultEnhanceIfNeeded;
- (void)setToolTitle:(id)arg1;
- (_Bool)navigationBarShouldBeHidden;
- (long long)requiredNavigationBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)attachPreviewView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithEditorItem:(id)arg1 photoEditor:(id)arg2 previewView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

