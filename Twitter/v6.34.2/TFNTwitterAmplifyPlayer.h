/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNDockableViewGestureHandlerDelegate.h>
#import <Twitter/TFNTwitterAmplifyPlayerViewDelegate.h>
#import <Twitter/TFNTwitterAmplifyAVPlayerDelegate.h>
#import <Twitter/TFNTwitterAVPlayerController.h>
#import <Twitter/TFNTwitterAmplifyPlayerScribeHelper.h>
#import <Twitter/TFNTwitterAVDockablePlayer.h>

@protocol TFNTwitterAmplifyPlayerDelegate, TFNTwitterAmplifyPlayerActionHandler;
@class TFNTwitterSearchStream, TFNLegacyDockableViewGestureHandler, TFNTwitterAmplifyPlayerViewGestureHandler, TFNTwitterDynamicVideoAd, TFNTwitterMediaConfiguration, TFNDataViewController, TFNTwitterStatus, TFNTwitterAmplifyAbstractVideo, TFNTwitterAmplifyAbstractInstance, TFNTwitterAVPlayerRequest, TFNTwitterAmplifyAVPlayer, NSMutableArray, TFNTwitterAmplifyPlayerView, TFNBlurrableImageView, TFNTwitterAccount, UIView, NSString;

@interface TFNTwitterAmplifyPlayer : NSObject <TFNDockableViewGestureHandlerDelegate, TFNTwitterAmplifyPlayerViewDelegate, TFNTwitterAmplifyAVPlayerDelegate, TFNTwitterAVPlayerController, TFNTwitterAmplifyPlayerScribeHelper, TFNTwitterAVDockablePlayer> {

	/*^block*/id _disposeBlock;
	TFNTwitterSearchStream* _relatedVideoSearchStream;
	TFNLegacyDockableViewGestureHandler* _dockableViewGestureHandler;
	TFNTwitterAmplifyPlayerViewGestureHandler* _playerViewGestureHandler;
	TFNTwitterDynamicVideoAd* _cachedDynamicAd;
	CGSize _cachedPresentationSize;
	BOOL _attemptingToForcePlayback;
	BOOL _hasRelatedVideos;
	BOOL _initialResumePlayback;
	BOOL _wasPlayingBeforeAppResigned;
	double _lastLatencyMeasurementStartTime;
	BOOL _isReplay;
	BOOL _didInitiatePlayback;
	long long _currentOrientation;
	BOOL _playbackDidStart;
	BOOL _playing;
	BOOL _prefersStatusBarHidden;
	BOOL _allPlayersDidFinishPlayback;
	BOOL _didBeginGeneratingDeviceOrientationNotifications;
	BOOL _didPlayAd;
	BOOL _didSeekToInitialContentStartTime;
	BOOL _disposed;
	BOOL _hasDocked;
	BOOL _gestureHandlerEnabled;
	BOOL _muted;
	BOOL _shouldSkipContent;
	BOOL _autoplayContentDidSendPlaybackComplete;
	BOOL _autoplayContentDidSendPlaybackStart;
	BOOL _autoplayContentDidSendPlayFromTap;
	BOOL _autoplayContentDidSendVideoView;
	BOOL _autoplayContentDidSendViewThreshold;
	TFNTwitterMediaConfiguration* _configuration;
	TFNDataViewController* _presentingViewController;
	long long _displayMode;
	id<TFNTwitterAmplifyPlayerDelegate> _delegate;
	TFNTwitterStatus* _status;
	id<TFNTwitterAmplifyPlayerActionHandler> _actionHandler;
	TFNTwitterAmplifyAbstractVideo* _adVideo;
	TFNTwitterAmplifyAbstractInstance* _amplifyInstance;
	TFNTwitterAVPlayerRequest* _avPlayerRequest;
	TFNTwitterAmplifyAVPlayer* _currentAVPlayer;
	NSMutableArray* _videosToPlay;
	double _initialContentStartTime;
	NSMutableArray* _autoplayContentTentpolesDidPass;
	TFNTwitterAmplifyPlayerView* _playerView;
	TFNBlurrableImageView* _windowOverlayView;

}

@property (nonatomic,retain) TFNTwitterMediaConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                 //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterAmplifyPlayerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account; 
@property (nonatomic,readonly) double defaultContentDuration; 
@property (nonatomic,readonly) BOOL pausedAfterPlaybackStart; 
@property (nonatomic,readonly) BOOL playbackDidStart;                                               //@synthesize playbackDidStart=_playbackDidStart - In the implementation block
@property (assign,nonatomic) BOOL playing;                                                          //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@property (nonatomic,readonly) BOOL prefersStatusBarHidden;                                         //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status;                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,readonly) id<TFNTwitterAmplifyPlayerActionHandler> actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) TFNTwitterAmplifyAbstractVideo * adVideo;                              //@synthesize adVideo=_adVideo - In the implementation block
@property (nonatomic,retain) TFNTwitterAmplifyAbstractInstance * amplifyInstance;                   //@synthesize amplifyInstance=_amplifyInstance - In the implementation block
@property (nonatomic,retain) TFNTwitterAVPlayerRequest * avPlayerRequest;                           //@synthesize avPlayerRequest=_avPlayerRequest - In the implementation block
@property (nonatomic,retain) TFNTwitterAmplifyAVPlayer * currentAVPlayer;                           //@synthesize currentAVPlayer=_currentAVPlayer - In the implementation block
@property (nonatomic,readonly) TFNTwitterDynamicVideoAd * dynamicAd; 
@property (nonatomic,retain) NSMutableArray * videosToPlay;                                         //@synthesize videosToPlay=_videosToPlay - In the implementation block
@property (nonatomic,readonly) long long adPosition; 
@property (nonatomic,readonly) BOOL allowDynamicAd; 
@property (assign,nonatomic) BOOL allPlayersDidFinishPlayback;                                      //@synthesize allPlayersDidFinishPlayback=_allPlayersDidFinishPlayback - In the implementation block
@property (assign,nonatomic) BOOL didBeginGeneratingDeviceOrientationNotifications;                 //@synthesize didBeginGeneratingDeviceOrientationNotifications=_didBeginGeneratingDeviceOrientationNotifications - In the implementation block
@property (assign,nonatomic) BOOL didPlayAd;                                                        //@synthesize didPlayAd=_didPlayAd - In the implementation block
@property (assign,nonatomic) BOOL didSeekToInitialContentStartTime;                                 //@synthesize didSeekToInitialContentStartTime=_didSeekToInitialContentStartTime - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                                         //@synthesize disposed=_disposed - In the implementation block
@property (assign,nonatomic) BOOL hasDocked;                                                        //@synthesize hasDocked=_hasDocked - In the implementation block
@property (nonatomic,readonly) BOOL hasUnplayedAds; 
@property (assign,nonatomic) BOOL gestureHandlerEnabled;                                            //@synthesize gestureHandlerEnabled=_gestureHandlerEnabled - In the implementation block
@property (assign,nonatomic) double initialContentStartTime;                                        //@synthesize initialContentStartTime=_initialContentStartTime - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                            //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipContent;                                                //@synthesize shouldSkipContent=_shouldSkipContent - In the implementation block
@property (assign,nonatomic) BOOL autoplayContentDidSendPlaybackComplete;                           //@synthesize autoplayContentDidSendPlaybackComplete=_autoplayContentDidSendPlaybackComplete - In the implementation block
@property (assign,nonatomic) BOOL autoplayContentDidSendPlaybackStart;                              //@synthesize autoplayContentDidSendPlaybackStart=_autoplayContentDidSendPlaybackStart - In the implementation block
@property (assign,nonatomic) BOOL autoplayContentDidSendPlayFromTap;                                //@synthesize autoplayContentDidSendPlayFromTap=_autoplayContentDidSendPlayFromTap - In the implementation block
@property (assign,nonatomic) BOOL autoplayContentDidSendVideoView;                                  //@synthesize autoplayContentDidSendVideoView=_autoplayContentDidSendVideoView - In the implementation block
@property (assign,nonatomic) BOOL autoplayContentDidSendViewThreshold;                              //@synthesize autoplayContentDidSendViewThreshold=_autoplayContentDidSendViewThreshold - In the implementation block
@property (nonatomic,retain) NSMutableArray * autoplayContentTentpolesDidPass;                      //@synthesize autoplayContentTentpolesDidPass=_autoplayContentTentpolesDidPass - In the implementation block
@property (nonatomic,readonly) NSString * scribeElement; 
@property (nonatomic,retain) TFNTwitterAmplifyPlayerView * playerView;                              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) TFNBlurrableImageView * windowOverlayView;                             //@synthesize windowOverlayView=_windowOverlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic,__weak) TFNDataViewController * presentingViewController;               //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(NSString *)scribeElement;
-(void)unpauseIfAppropriate;
-(void)_deviceOrientationDidChange:(id)arg1 ;
-(void)setPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 ;
-(TFNTwitterAmplifyAVPlayer *)currentAVPlayer;
-(double)defaultContentDuration;
-(void)scribePlaybackStateDidChange:(BOOL)arg1 ;
-(void)scribeDidTapReplayButton;
-(void)scribeDidEndScrub;
-(BOOL)pausedAfterPlaybackStart;
-(void)exitFullscreenModeAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)playbackDidStart;
-(void)expandToFullscreenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tapToExpandAutoplay;
-(BOOL)allowDynamicAd;
-(void)avPlayer:(id)arg1 didError:(id)arg2 withMessage:(id)arg3 ;
-(void)avPlayer:(id)arg1 playbackTimeDidProgress:(double)arg2 withIncrement:(double)arg3 ;
-(void)avPlayerDidFinishPlayback:(id)arg1 ;
-(void)avPlayerDidRecoverFromStall:(id)arg1 ;
-(void)avPlayerDidStall:(id)arg1 ;
-(long long)adPosition;
-(void)avScribePlayer:(id)arg1 scribeAction:(id)arg2 page:(id)arg3 section:(id)arg4 component:(id)arg5 element:(id)arg6 withCurrentPlaybackTime:(double)arg7 parameters:(id)arg8 ;
-(void)_disposeComponents;
-(void)_pausePlayback;
-(void)_scribeAction:(id)arg1 withElement:(id)arg2 parameters:(id)arg3 ;
-(void)_logPromotedEvent:(long long)arg1 withParameters:(id)arg2 ;
-(void)_resumePlayback;
-(long long)_promotedEventForScribeAction:(id)arg1 ;
-(void)_scribeAction:(id)arg1 withPage:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 parameters:(id)arg6 ;
-(double)_measureLatencyWithAction:(id)arg1 ;
-(id)_currentConnectionType;
-(CGRect)dockableViewController:(id)arg1 dockFrameInHostView:(id)arg2 forDockableView:(id)arg3 ;
-(void)dockableViewController:(id)arg1 didBeginPanDockableView:(id)arg2 ;
-(void)dockableViewController:(id)arg1 didDismissDockableView:(id)arg2 ;
-(void)dockableViewController:(id)arg1 didDockDockableView:(id)arg2 ;
-(void)dockableViewController:(id)arg1 didFullscreenDockableView:(id)arg2 ;
-(void)dockableViewController:(id)arg1 didProgressFullscreenPanDockableView:(id)arg2 withCompletionPercentage:(double)arg3 ;
-(void)dockableViewController:(id)arg1 willAnimateToDismissDockableView:(id)arg2 viaGesture:(BOOL)arg3 ;
-(void)dockableViewController:(id)arg1 willAnimateToDockDockableView:(id)arg2 viaGesture:(BOOL)arg3 ;
-(void)dockableViewController:(id)arg1 willAnimateToFullscreenDockableView:(id)arg2 viaGesture:(BOOL)arg3 ;
-(void)dockableViewController:(id)arg1 didChangeDeviceOrientation:(long long)arg2 ;
-(double)viewThresholdForAVScribeAutoplayPlayer:(id)arg1 ;
-(BOOL)shouldSendTapEventForAVScribeAutoplayPlayer:(id)arg1 ;
-(BOOL)shouldIncrementAccumulativeViewThresholdPlaybackTimeForAVScribeAutoplayPlayer:(id)arg1 ;
-(id)accountForAmplifyPlayerView:(id)arg1 ;
-(long long)currentOrientationForPlayerView:(id)arg1 ;
-(id)fullscreenWindowForAmplifyPlayerView:(id)arg1 ;
-(void)amplifyPlayerViewDidEngageReply:(id)arg1 viaButton:(id)arg2 ;
-(void)amplifyPlayerViewDidEngageRetweet:(id)arg1 viaButton:(id)arg2 ;
-(void)amplifyPlayerViewDidEngageFavorite:(id)arg1 viaButton:(id)arg2 ;
-(void)amplifyPlayerViewDidEngageMore:(id)arg1 viaButton:(id)arg2 ;
-(void)amplifyPlayerViewWillEnterFullscreen:(id)arg1 ;
-(void)amplifyPlayerViewDidEnterFullscreen:(id)arg1 ;
-(void)amplifyPlayerViewWillExitFullscreen:(id)arg1 ;
-(void)amplifyPlayerViewDidExitFullscreen:(id)arg1 ;
-(void)amplifyPlayerView:(id)arg1 didPerformAction:(id)arg2 withElement:(id)arg3 parameters:(id)arg4 ;
-(BOOL)amplifyPlayerViewHasRelatedVideos:(id)arg1 ;
-(void)amplifyPlayerViewDidEngageCTA:(id)arg1 ;
-(void)amplifyPlayerViewDidTap:(id)arg1 ;
-(void)amplifyPlayerViewDidTapFullscreenButton:(id)arg1 ;
-(void)amplifyPlayerViewDidTapDockButton:(id)arg1 ;
-(void)amplifyPlayerViewDidTapCloseButton:(id)arg1 ;
-(void)amplifyPlayerView:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)amplifyPlayerView:(id)arg1 didBeginScrubLastVideo:(BOOL)arg2 ;
-(void)amplifyPlayerViewDidEndScrub:(id)arg1 ;
-(BOOL)amplifyPlayerView:(id)arg1 isLastVideo:(id)arg2 ;
-(BOOL)amplifyPlayerView:(id)arg1 controllableWithCurrentPlaybackTime:(double)arg2 ;
-(long long)installStatusForAmplifyPlayerView:(id)arg1 ;
-(void)attachAmplifyPlayerViewToInline:(id)arg1 ;
-(id)inlineParentViewForAmplifyPlayerView:(id)arg1 ;
-(CGRect)inlineFrameForAmplifyPlayerView:(id)arg1 ;
-(void)amplifyPlayerViewDidTapReplayButton:(id)arg1 ;
-(void)amplifyPlayerViewViewRelatedVideo:(id)arg1 ;
-(TFNTwitterAmplifyAbstractVideo *)adVideo;
-(BOOL)didPlayAd;
-(TFNTwitterAmplifyAbstractInstance *)amplifyInstance;
-(void)setHasDocked:(BOOL)arg1 ;
-(long long)_deviceOrientationForCurrentInterfaceOrientation;
-(void)_removeNotificationObservers;
-(void)_requestAmplifyInstance;
-(void)_checkHasRelatedVideos;
-(id)_createPlaylistInstance;
-(void)setAmplifyInstance:(TFNTwitterAmplifyAbstractInstance *)arg1 ;
-(void)_createPlayerView;
-(void)_didFinishLoadingPlaylist;
-(void)_didFailToLoadPlaylistWithError:(id)arg1 ;
-(TFNTwitterDynamicVideoAd *)dynamicAd;
-(void)_moreVideoStreamDidUpdate:(id)arg1 ;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(void)setGestureHandlerEnabled:(BOOL)arg1 ;
-(void)_didFinishAttachingPlayerView;
-(void)disposeWithAnimation:(long long)arg1 ;
-(void)setDidBeginGeneratingDeviceOrientationNotifications:(BOOL)arg1 ;
-(BOOL)_interfaceSupportsLandscape;
-(void)_applicationOrientationDidChange:(id)arg1 ;
-(void)_setupVideosToPlay;
-(BOOL)shouldSkipContent;
-(NSMutableArray *)videosToPlay;
-(void)_setupAVPlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentAVPlayer:(TFNTwitterAmplifyAVPlayer *)arg1 ;
-(void)setVideosToPlay:(NSMutableArray *)arg1 ;
-(void)setAdVideo:(TFNTwitterAmplifyAbstractVideo *)arg1 ;
-(TFNTwitterAVPlayerRequest *)avPlayerRequest;
-(void)setAvPlayerRequest:(TFNTwitterAVPlayerRequest *)arg1 ;
-(void)_avPlayerRequestDidCompleteWithAVPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)disposed;
-(double)initialContentStartTime;
-(BOOL)autoplayContentDidSendPlaybackComplete;
-(BOOL)autoplayContentDidSendPlaybackStart;
-(BOOL)autoplayContentDidSendPlayFromTap;
-(BOOL)autoplayContentDidSendVideoView;
-(BOOL)autoplayContentDidSendViewThreshold;
-(NSMutableArray *)autoplayContentTentpolesDidPass;
-(void)_attachPlayerView;
-(BOOL)hasUnplayedAds;
-(void)_forcePlayAdAndSkipContent:(BOOL)arg1 ;
-(void)setShouldSkipContent:(BOOL)arg1 ;
-(void)setInitialContentStartTime:(double)arg1 ;
-(void)setAutoplayContentDidSendPlaybackComplete:(BOOL)arg1 ;
-(void)setAutoplayContentDidSendPlaybackStart:(BOOL)arg1 ;
-(void)setAutoplayContentDidSendPlayFromTap:(BOOL)arg1 ;
-(void)setAutoplayContentDidSendVideoView:(BOOL)arg1 ;
-(void)setAutoplayContentDidSendViewThreshold:(BOOL)arg1 ;
-(void)setAutoplayContentTentpolesDidPass:(NSMutableArray *)arg1 ;
-(BOOL)allPlayersDidFinishPlayback;
-(void)_invokeCTAApp;
-(void)_invokeCTAOpenURL;
-(id)_ctaPromotedEventParametersWithScribeParameters:(id)arg1 ;
-(void)_logPromotedEvent:(long long)arg1 withVideo:(id)arg2 currentTime:(double)arg3 parameters:(id)arg4 ;
-(void)_presentActionSheet:(id)arg1 viaButton:(id)arg2 ;
-(void)setAllPlayersDidFinishPlayback:(BOOL)arg1 ;
-(void)_setupWindowOverlayView;
-(void)_hideStatusBar;
-(BOOL)_findAndResignFirstResponder:(id)arg1 ;
-(void)_showStatusBar;
-(void)_disposeWindowOverlayViewWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDidPlayAd:(BOOL)arg1 ;
-(BOOL)didSeekToInitialContentStartTime;
-(void)setDidSeekToInitialContentStartTime:(BOOL)arg1 ;
-(void)_allVideosPlaybackDidFinish;
-(void)_forceStartPlayback;
-(void)setWindowOverlayView:(TFNBlurrableImageView *)arg1 ;
-(TFNBlurrableImageView *)windowOverlayView;
-(void)setDisposed:(BOOL)arg1 ;
-(BOOL)didBeginGeneratingDeviceOrientationNotifications;
-(id)_orientationNumberValue;
-(BOOL)shouldSendTapEventOnPlaybackStartWithAmplifyAVPlayer:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 actionHandler:(id)arg2 status:(id)arg3 configuration:(id)arg4 disposeBlock:(/*^block*/id)arg5 ;
-(void)initiatePlayback;
-(BOOL)hasDocked;
-(BOOL)gestureHandlerEnabled;
-(TFNTwitterAmplifyPlayerView *)playerView;
-(void)setMuted:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TFNTwitterAmplifyPlayerDelegate>)arg1 ;
-(id<TFNTwitterAmplifyPlayerDelegate>)delegate;
-(UIView *)view;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(TFNDataViewController *)presentingViewController;
-(long long)type;
-(void)setPresentingViewController:(TFNDataViewController *)arg1 ;
-(void)setConfiguration:(TFNTwitterMediaConfiguration *)arg1 ;
-(void)resume;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
-(void)pause;
-(TFNTwitterStatus *)status;
-(CGSize)presentationSize;
-(TFNTwitterMediaConfiguration *)configuration;
-(TFNTwitterAccount *)account;
-(BOOL)muted;
-(BOOL)playing;
-(void)seekToTime:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(id<TFNTwitterAmplifyPlayerActionHandler>)actionHandler;
@end
