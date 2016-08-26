/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBFacecastFeedbackInputViewControllerDelegate.h>
#import <Facebook/FBFacecastSocialMenuControllerDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBTVCastingPlaybackEventListener.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBTVCastingFeedbackToggleDelegate.h>

@protocol FBTVCastingPlaybackControlling, FBCastingLiveCommentsViewControllerDelegate;
@class FBMemVideo, FBUserSession, FBMemFeedStory, NSArray, FBVideoPlaybackController, FBKeyboardObserver, FBFacecastLiveEventsViewController, FBFacecastFeedbackInputViewController, FBFacecastSocialMenuController, FBCastingCommentsHeaderView, FBTVCastingFeedbackToggle, UIGestureRecognizer, NSString;

@interface FBCastingLiveCommentsViewController : UIViewController <FBScenePathHolding, FBFacecastFeedbackInputViewControllerDelegate, FBFacecastSocialMenuControllerDelegate, FBKeyboardObserverDelegate, FBTVCastingPlaybackEventListener, FBVideoPlaybackEventListener, UIGestureRecognizerDelegate, FBTVCastingFeedbackToggleDelegate> {

	FBMemVideo* _video;
	FBUserSession* _session;
	FBMemFeedStory* _story;
	NSArray* _trackingCodes;
	FBVideoPlaybackController* _videoController;
	id<FBTVCastingPlaybackControlling> _playbackController;
	FBKeyboardObserver* _keyboardObserver;
	FBFacecastLiveEventsViewController* _liveEventsViewController;
	FBFacecastFeedbackInputViewController* _feedbackViewController;
	FBFacecastSocialMenuController* _socialMenuController;
	FBCastingCommentsHeaderView* _headerView;
	FBTVCastingFeedbackToggle* _feedbackToggle;
	CGRect _keyboardFrameInScreen;
	CGRect _commentsFrame;
	UIGestureRecognizer* _gestureRecognizer;
	BOOL _activated;
	id<FBCastingLiveCommentsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCastingLiveCommentsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=activate:,getter=isActivated,nonatomic) BOOL activated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)_didTapSelf;
-(double)_currentVodTime;
-(void)_didUpdatePlaybackTime:(double)arg1 ;
-(void)facecastFeedbackInputViewControllerUpdatedContentSize:(id)arg1 ;
-(void)facecastFeedbackInputViewController:(id)arg1 committedReactionKey:(long long)arg2 withActorID:(id)arg3 ;
-(void)facecastFeedbackInputViewController:(id)arg1 committedComment:(id)arg2 ;
-(void)facecastFeedbackInputViewController:(id)arg1 selectedInvite:(id)arg2 ;
-(double)facecastFeedbackInputViewControllerPlaybackTime:(id)arg1 ;
-(double)facecastFeedbackInputViewControllerLiveAudioTimestamp:(id)arg1 ;
-(void)facecastSocialMenuControllerDismissed:(id)arg1 ;
-(void)tvVideoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)_resizeContainerWithKeyboardEndFrame:(CGRect)arg1 beginFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 keyboardIsBeingShown:(BOOL)arg5 ;
-(id)initWithStory:(id)arg1 video:(id)arg2 session:(id)arg3 trackingCodes:(id)arg4 ;
-(void)setupWithPlaybackController:(id)arg1 videoController:(id)arg2 ;
-(void)feedbackToggleDidChangeValue:(id)arg1 ;
-(void)setDelegate:(id<FBCastingLiveCommentsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCastingLiveCommentsViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)activate:(BOOL)arg1 ;
-(BOOL)isActivated;
@end
