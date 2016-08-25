//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BCOVPlaybackControllerDelegate.h"
#import "SCDiscoverLongformVideoControlsDelegate.h"
#import "SCDiscoverLongformVideoStateDelegate.h"
#import "SCDiscoverVideoCatalogServiceListener.h"
#import "SCTimeProfilable.h"

@class AVPlayerItem, AVPlayerLayer, FBKVOController, NSArray, NSObject<BCOVPlaybackController>, NSString, NSTimer, SCChunkRemoteVideoItem, SCDiscoverLongformVideoControlsViewController, SCDiscoverLongformVideoState, SCDiscoverVideoResourceLoaderDelegate, SCLoadingIndicatorView, UIColor, UIView;

@interface SCDiscoverLongformVideoViewController : UIViewController <BCOVPlaybackControllerDelegate, SCDiscoverLongformVideoControlsDelegate, SCDiscoverLongformVideoStateDelegate, SCDiscoverVideoCatalogServiceListener, SCTimeProfilable>
{
    _Bool _isInline;
    _Bool _isAd;
    _Bool _shouldAutoPlayWhenReady;
    AVPlayerLayer *_playerLayer;
    id <SCDiscoverLongformVideoControllerDelegate> _delegate;
    SCChunkRemoteVideoItem *_remoteVideoItem;
    NSObject<BCOVPlaybackController> *_bcovController;
    NSArray *_bcovVideos;
    UIView *_playerView;
    NSTimer *_controlsFadeTimer;
    SCDiscoverLongformVideoControlsViewController *_controlsViewController;
    SCLoadingIndicatorView *_activityIndicator;
    NSString *_editionID;
    UIColor *_primaryColor;
    NSString *_publisherName;
    NSString *_sectionID;
    SCDiscoverLongformVideoState *_state;
    SCDiscoverVideoResourceLoaderDelegate *_resourceLoaderDelegate;
    FBKVOController *_observeController;
    AVPlayerItem *_playerItem;
    NSString *_videoSessionID;
    long long _virtualOrientation;
}

+ (id)profiledSelectorNames;
@property(nonatomic) long long virtualOrientation; // @synthesize virtualOrientation=_virtualOrientation;
@property(copy, nonatomic) NSString *videoSessionID; // @synthesize videoSessionID=_videoSessionID;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
@property(retain, nonatomic) SCDiscoverVideoResourceLoaderDelegate *resourceLoaderDelegate; // @synthesize resourceLoaderDelegate=_resourceLoaderDelegate;
@property(nonatomic) _Bool shouldAutoPlayWhenReady; // @synthesize shouldAutoPlayWhenReady=_shouldAutoPlayWhenReady;
@property(retain, nonatomic) SCDiscoverLongformVideoState *state; // @synthesize state=_state;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(copy, nonatomic) NSString *editionID; // @synthesize editionID=_editionID;
@property(retain, nonatomic) SCLoadingIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) SCDiscoverLongformVideoControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(retain, nonatomic) NSTimer *controlsFadeTimer; // @synthesize controlsFadeTimer=_controlsFadeTimer;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSArray *bcovVideos; // @synthesize bcovVideos=_bcovVideos;
@property(retain, nonatomic) NSObject<BCOVPlaybackController> *bcovController; // @synthesize bcovController=_bcovController;
@property(nonatomic) _Bool isInline; // @synthesize isInline=_isInline;
@property(retain, nonatomic) SCChunkRemoteVideoItem *remoteVideoItem; // @synthesize remoteVideoItem=_remoteVideoItem;
@property(nonatomic) __weak id <SCDiscoverLongformVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void).cxx_destruct;
- (double)totalVideoDuration;
- (long long)numberOfBytesTransferredToBCOVPlaybackController;
- (void)logDidFinishBufferingVideoWithSuccess:(_Bool)arg1 abandoned:(_Bool)arg2;
- (void)logDidStartBufferingVideo;
- (void)logDidFinishWaitingToPlayWithSuccess:(_Bool)arg1 abandoned:(_Bool)arg2;
- (struct CGSize)videoSize;
- (void)logDidStartWaitingToPlay;
- (void)showActivityIndicator:(_Bool)arg1;
- (void)longformVideoControlsDidPressExit;
- (void)longformVideoControlsDidPressPause;
- (void)longformVideoControlsDidPressPlay:(_Bool)arg1;
- (void)longformVideoControlsDidPressFullscreen:(_Bool)arg1;
- (void)longformVideoControlsDidToggleVolume:(_Bool)arg1;
- (void)playerItemLikelyToKeepUp:(id)arg1;
- (void)playerItemBufferBecameEmpty:(id)arg1;
- (void)playbackController:(id)arg1 didAdvanceToPlaybackSession:(id)arg2;
- (void)playbackController:(id)arg1 playbackSession:(id)arg2 didProgressTo:(double)arg3;
- (void)playbackController:(id)arg1 playbackSession:(id)arg2 didReceiveLifecycleEvent:(id)arg3;
- (void)terminateVideo;
- (void)playVideo:(_Bool)arg1;
- (void)startBufferingVideo;
- (void)state:(id)arg1 didChangeTag:(long long)arg2;
- (void)videoCatalogService:(id)arg1 didFetchCatalogWithSuccess:(_Bool)arg2;
- (void)setBcovVideosFromCatalog:(id)arg1;
- (void)fetchVideoPlaylist;
- (void)configureVideoPlaylist;
- (void)invalidateControlsFadeTimerAndShowControls;
- (void)setupControlsFadeTimer;
- (void)fadeOutControlsEvenWhileLoading;
- (void)fadeOutControls;
- (void)fadeInControls;
- (void)didTap;
- (void)setFullscreen:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)rotateVideoBasedOnOrientation;
- (void)viewDidLayoutSubviews;
- (void)setupTapGesture;
- (void)setupSpinner;
- (void)setupControlsView;
- (void)setupPlayerView;
- (void)loadView;
- (void)playerDidFullyDisappear;
- (void)playerDidFullyAppear;
- (void)fullStackDidFullyDisappear;
- (void)fullStackDidFullyAppear;
- (void)didReceiveMemoryWarning;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)dealloc;
- (id)initWithRemoteVideoItem:(id)arg1 channelProperties:(id)arg2 isInline:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
