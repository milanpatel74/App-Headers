//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FeedButton, FlashButton, FriendButton, NSTimer, SCCameraTimer, SCFlipCameraButton, SCGrowingButton, SCLensesUIController, SCLongPressAnimationView, SCLongPressGestureRecognizer, SCNightModeButton, SCPurpleTooltipBalloon, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface SCCameraOverlayView : UIView
{
    UIView *_hidableViewContainer;
    _Bool _shouldShowNightModeButton;
    UIView *_helpTapAndHoldScreen;
    id <SCCameraOverlayDelegate> _delegate;
    FeedButton *_feedButton;
    FriendButton *_storiesButton;
    FlashButton *_flashButton;
    SCGrowingButton *_galleryEnterButton;
    SCGrowingButton *_replyBackButtonLeft;
    SCGrowingButton *_replyBackButtonRight;
    SCGrowingButton *_xButton;
    SCGrowingButton *_galleryButton;
    SCFlipCameraButton *_frontCameraButton;
    SCNightModeButton *_nightModeButton;
    SCGrowingButton *_profileButton;
    SCCameraTimer *_cameraTimer;
    SCPurpleTooltipBalloon *_profileButtonTooltip;
    UILabel *_scanTooltip;
    NSTimer *_nightModeTimer;
    SCLongPressAnimationView *_longPressAnimationView;
    NSTimer *_timerForHideProfileTooltip;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCLongPressGestureRecognizer *_longPressOnCameraTimerGestureRecognizer;
    SCLongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UISwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    SCLensesUIController *_lensesUIController;
}

@property(retain, nonatomic) SCLensesUIController *lensesUIController; // @synthesize lensesUIController=_lensesUIController;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGestureRecognizer; // @synthesize leftSwipeGestureRecognizer=_leftSwipeGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) SCLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SCLongPressGestureRecognizer *longPressOnCameraTimerGestureRecognizer; // @synthesize longPressOnCameraTimerGestureRecognizer=_longPressOnCameraTimerGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSTimer *timerForHideProfileTooltip; // @synthesize timerForHideProfileTooltip=_timerForHideProfileTooltip;
@property(nonatomic) __weak SCLongPressAnimationView *longPressAnimationView; // @synthesize longPressAnimationView=_longPressAnimationView;
@property(retain, nonatomic) NSTimer *nightModeTimer; // @synthesize nightModeTimer=_nightModeTimer;
@property(nonatomic) _Bool shouldShowNightModeButton; // @synthesize shouldShowNightModeButton=_shouldShowNightModeButton;
@property(retain, nonatomic) UILabel *scanTooltip; // @synthesize scanTooltip=_scanTooltip;
@property(retain, nonatomic) SCPurpleTooltipBalloon *profileButtonTooltip; // @synthesize profileButtonTooltip=_profileButtonTooltip;
@property(retain, nonatomic) SCCameraTimer *cameraTimer; // @synthesize cameraTimer=_cameraTimer;
@property(retain, nonatomic) SCGrowingButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) SCNightModeButton *nightModeButton; // @synthesize nightModeButton=_nightModeButton;
@property(retain, nonatomic) SCFlipCameraButton *frontCameraButton; // @synthesize frontCameraButton=_frontCameraButton;
@property(retain, nonatomic) SCGrowingButton *galleryButton; // @synthesize galleryButton=_galleryButton;
@property(retain, nonatomic) SCGrowingButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) SCGrowingButton *replyBackButtonRight; // @synthesize replyBackButtonRight=_replyBackButtonRight;
@property(retain, nonatomic) SCGrowingButton *replyBackButtonLeft; // @synthesize replyBackButtonLeft=_replyBackButtonLeft;
@property(retain, nonatomic) SCGrowingButton *galleryEnterButton; // @synthesize galleryEnterButton=_galleryEnterButton;
@property(retain, nonatomic) FlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) FriendButton *storiesButton; // @synthesize storiesButton=_storiesButton;
@property(retain, nonatomic) FeedButton *feedButton; // @synthesize feedButton=_feedButton;
@property(nonatomic) __weak id <SCCameraOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *helpTapAndHoldScreen; // @synthesize helpTapAndHoldScreen=_helpTapAndHoldScreen;
- (void).cxx_destruct;
- (_Bool)isPanGestureRecognizer:(id)arg1;
- (_Bool)isPinchGestureRecognizer:(id)arg1;
- (_Bool)isDoubleTapGestureRecognizer:(id)arg1;
- (_Bool)isTapGestureRecognizer:(id)arg1;
- (_Bool)isLongPressGestureRecognizer:(id)arg1;
- (_Bool)isLongPressOnCameraTimerGestureRecognizer:(id)arg1;
- (void)hideLongPressAnimationWithSuccess:(_Bool)arg1;
- (void)moveLongPressAnimationToPoint:(struct CGPoint)arg1;
- (void)showLongPressAnimationAtPoint:(struct CGPoint)arg1;
- (void)showTapAnimationAtPoint:(struct CGPoint)arg1;
- (_Bool)pointInsideReplyButton:(struct CGPoint)arg1;
- (_Bool)pointInsideCameraButton:(struct CGPoint)arg1;
- (_Bool)pointInsideButton:(struct CGPoint)arg1;
- (_Bool)point:(struct CGPoint)arg1 insideFrame:(struct CGRect)arg2;
- (_Bool)point:(struct CGPoint)arg1 isNearOrInsideFrame:(struct CGRect)arg2;
- (id)imageForProfileButtonInState:(unsigned long long)arg1 needsHighlighting:(_Bool)arg2;
- (void)setHighlightedGhostWithNewFriendsCount:(long long)arg1;
- (void)setNewStoryBadgeCount:(double)arg1;
- (void)setFeedButtonBadgeNumber:(long long)arg1 hasUnviewedSnaps:(long long)arg2 hasUnviewedCash:(_Bool)arg3 hasUnviewedChats:(_Bool)arg4;
- (void)setPanGestureRecognizerEnabled:(_Bool)arg1;
- (void)setFlipCameraHidable:(_Bool)arg1;
- (void)removeCurrentLensIconFromCameraButton;
- (void)applyCurrentLensIconToCameraButton;
- (void)shouldRestoreLensWithId:(id)arg1;
- (void)buyCurrentLens;
- (_Bool)isActiveFeaturedLens;
- (_Bool)isActiveSponsoredLens;
- (_Bool)isActiveGeoLens;
- (id)activeLensId;
- (void)setLensesActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetTapGestureRecognizers;
- (void)canFlipCamera:(_Bool)arg1;
- (void)animateFrontCameraButton;
- (void)showButtons;
- (void)hideButtons;
- (void)setButtonsForState:(long long)arg1;
- (void)setActionButtonsHidden:(_Bool)arg1;
- (void)hideReplyButtons;
@property(nonatomic) double currentTime;
- (struct CGRect)cameraTimerFrame;
- (void)setCameraTimerHidden:(_Bool)arg1;
@property(nonatomic) double preRecordAnimationTime;
@property(readonly, nonatomic) _Bool isNightModeActive;
- (void)setNightModeActive:(_Bool)arg1;
- (void)turnFlashOn:(_Bool)arg1;
- (void)flashButtonHidden:(_Bool)arg1;
- (void)cameraFlippedFrontFacing:(_Bool)arg1;
- (void)hideNightModeButton:(id)arg1;
- (void)hideNightModeButton;
@property(readonly, nonatomic) _Bool hasOngoingHideNightModeButtonOperation;
- (_Bool)isNightModeButtonHidden;
- (void)hideNightModeButtonWithDelay;
- (void)abortNightModeButtonHiddenAnimation;
- (void)showNightModeButtonWithAnimation;
- (void)showFrontCameraButton;
- (void)hideFrontCameraButton;
- (void)hideScanTooltip;
- (_Bool)isScanTooltipVisible;
- (void)showScanTooltip;
- (void)hideProfileTooltip:(id)arg1;
- (void)showProfileTooltip:(_Bool)arg1 withText:(id)arg2;
- (void)showProfileTooltip:(_Bool)arg1 withText:(id)arg2 withExpireInSecs:(unsigned long long)arg3;
- (void)initializeAndAddFlashButton;
- (void)initializeNightModeButton;
- (void)initializeAndAddCameraFlipButton;
- (void)initializeAndAddAddFriendButton;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2;
- (struct CGRect)initialCameraTimerFrame;

@end

