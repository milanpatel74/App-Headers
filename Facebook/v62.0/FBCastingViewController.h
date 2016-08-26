/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBModalContentViewController.h>
#import <Facebook/FBCastingLiveCommentsViewControllerDelegate.h>
#import <Facebook/FBTVCastingPlaybackEventListener.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBVideoCastingViewControllerDelegate.h>
#import <Facebook/FBNuxStepChainControllerDelegate.h>
#import <Facebook/FBMediaUFIBarControllerPresentingViewController.h>
#import <Facebook/FBDisplayableMediaTransitioningDelegate.h>
#import <Facebook/FBDisplayableMediaTransitionManagerDelegate.h>
#import <Facebook/FBFullScreenVideoViewControlling.h>
#import <Facebook/FBModalContainerViewControllerDelegate.h>

@protocol FBMediaUFIBarControllerDelegate, FBVideoPresentingDelegate;
@class FBMemFeedStory, FBUserSession, FBMemVideo, NSArray, FBButtonWithExtendedTapTarget, FBNetworkImageView, PABlurView, FBVideoCastingViewController, UILabel, FBCastingLiveCommentsViewController, FBCastingCommentsBarController, FBMediaUFIBarController, FBNuxController, UIView, FBVideoViewManager, NSString;

@interface FBCastingViewController : UIViewController <FBModalContentViewController, FBCastingLiveCommentsViewControllerDelegate, FBTVCastingPlaybackEventListener, FBVideoPlaybackEventListener, FBVideoCastingViewControllerDelegate, FBNuxStepChainControllerDelegate, FBMediaUFIBarControllerPresentingViewController, FBDisplayableMediaTransitioningDelegate, FBDisplayableMediaTransitionManagerDelegate, FBFullScreenVideoViewControlling, FBModalContainerViewControllerDelegate> {

	FBMemFeedStory* _story;
	FBUserSession* _session;
	FBMemVideo* _videoObject;
	NSArray* _trackingCodes;
	FBButtonWithExtendedTapTarget* _dismissButton;
	FBNetworkImageView* _backgroundView;
	PABlurView* _backgroundBlurView;
	FBVideoCastingViewController* _castingVideoViewController;
	FBNetworkImageView* _ownerImageView;
	UILabel* _titleLabel;
	FBCastingLiveCommentsViewController* _commentsViewController;
	FBCastingCommentsBarController* _commentsBarController;
	FBMediaUFIBarController* _ufiBarController;
	id<FBMediaUFIBarControllerDelegate> _ufiDelegate;
	FBNuxController* _nuxController;
	BOOL _isDismissing;
	unsigned long long _viewState;
	UIView* _transitionOverlay;
	BOOL _isDraggingCommentBar;
	double _commentBarDragPercent;
	double _commentBarDragStartPosition;
	BOOL _preventAutoPlayIfManuallyPaused;
	FBVideoViewManager* _viewManager;
	id<FBVideoPresentingDelegate> _fullscreenVideoDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBVideoViewManager * viewManager;                                        //@synthesize viewManager=_viewManager - In the implementation block
@property (assign,nonatomic) BOOL autoDismissWhenVideoFinishes; 
@property (nonatomic,readonly) BOOL canAutoAdvance; 
@property (nonatomic,readonly) FBMediaUFIBarController * ufiBarController; 
@property (assign,nonatomic,__weak) id<FBVideoPresentingDelegate> fullscreenVideoDelegate;              //@synthesize fullscreenVideoDelegate=_fullscreenVideoDelegate - In the implementation block
@property (assign,nonatomic) BOOL preventAutoPlayIfManuallyPaused;                                      //@synthesize preventAutoPlayIfManuallyPaused=_preventAutoPlayIfManuallyPaused - In the implementation block
-(id)analyticsModule;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(FBVideoViewManager *)viewManager;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)dismissModalContainerViewController:(id)arg1 ;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)scrollViewForDismissingModalContainerViewController:(id)arg1 ;
-(BOOL)swipeGestureCanDismissModalContainerViewController:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 containerView:(id)arg3 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1 ;
-(BOOL)transitionManagerSupportsInteractiveDismissOnlyOnPresentedView:(id)arg1 ;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2 ;
-(void)setAutoDismissWhenVideoFinishes:(BOOL)arg1 ;
-(void)setPreventAutoPlayIfManuallyPaused:(BOOL)arg1 ;
-(void)resetViewManager;
-(void)didFinishAnimatingViewAfterCancelingDismissal:(BOOL)arg1 ;
-(void)configureViewManager;
-(FBMediaUFIBarController *)ufiBarController;
-(CGRect)animationFrameForView;
-(BOOL)canAutoAdvance;
-(BOOL)autoDismissWhenVideoFinishes;
-(id<FBVideoPresentingDelegate>)fullscreenVideoDelegate;
-(void)setFullscreenVideoDelegate:(id<FBVideoPresentingDelegate>)arg1 ;
-(BOOL)preventAutoPlayIfManuallyPaused;
-(id)initWithViewManager:(id)arg1 castingPlaybackController:(id)arg2 story:(id)arg3 video:(id)arg4 ufiDelegate:(id)arg5 session:(id)arg6 trackingCodes:(id)arg7 ;
-(BOOL)canShowMoreOption;
-(void)dismissAfterDeletion;
-(void)disableDismissal;
-(void)enableDismissal;
-(void)_didUpdatePlaybackTime:(double)arg1 ;
-(void)tvVideoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)_toggleCommentsVisible;
-(void)_dragBar:(id)arg1 ;
-(CGRect)_dismissButtonFrame;
-(CGRect)_castingFrame;
-(CGRect)_backgroundFrame;
-(CGRect)_commentsFrame;
-(CGRect)_commentsBarFrame;
-(CGRect)_titleFrameGivenVideoFrame:(CGRect)arg1 ;
-(CGRect)_ownerImageFrameGivenTitleFrame:(CGRect)arg1 ;
-(void)_showComments;
-(void)commentsViewControllerDidTapClose:(id)arg1 ;
-(void)commentsViewControllerStartedSocialInviteFlow:(id)arg1 ;
-(void)commentsViewControllerFinishedSocialInviteFlow:(id)arg1 ;
-(void)_arrangeSubviewsAfterAnimation;
-(void)videoControllerWillStartCasting:(id)arg1 ;
-(void)videoControllerDidSwitchDevices:(id)arg1 ;
-(void)videoControllerWillStopCasting:(id)arg1 ;
-(void)videoControllerDidStartCasting:(id)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end
