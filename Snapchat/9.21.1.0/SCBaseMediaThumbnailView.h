//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCTimeProfilable.h"

@class AVPlayer, FBKVOController, NSString, SCBaseMediaMessageViewModel, SCDiscoverBarView, SCPlayerView, UIActivityIndicatorView, UIImageView, UILabel;

@interface SCBaseMediaThumbnailView : UIView <SCTimeProfilable>
{
    _Bool _videoShouldBePlaying;
    SCBaseMediaMessageViewModel *_viewModel;
    SCDiscoverBarView *_discoverBar;
    SCPlayerView *_videoView;
    UIImageView *_imageView;
    UIImageView *_videoOverlayView;
    id <SCBaseMediaThumbnailDelegate> _delegate;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_blockingOverlayView;
    AVPlayer *_player;
    UILabel *_retryLabel;
    FBKVOController *_videoObserveController;
}

+ (id)retryLabelFont;
+ (id)grayChatColor;
+ (id)profiledSelectorNames;
+ (id)borderColor;
@property(retain, nonatomic) FBKVOController *videoObserveController; // @synthesize videoObserveController=_videoObserveController;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *blockingOverlayView; // @synthesize blockingOverlayView=_blockingOverlayView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak id <SCBaseMediaThumbnailDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool videoShouldBePlaying; // @synthesize videoShouldBePlaying=_videoShouldBePlaying;
@property(retain, nonatomic) UIImageView *videoOverlayView; // @synthesize videoOverlayView=_videoOverlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SCPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) SCDiscoverBarView *discoverBar; // @synthesize discoverBar=_discoverBar;
@property(retain, nonatomic) SCBaseMediaMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)discoverMessageToLog;
- (_Bool)contentPopulated;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)resetPlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)updateLoadingOverlay;
- (void)hideBlockingOverlay;
- (void)pauseVideo;
- (void)resetContents;
- (void)setUpPendingDisplay;
- (void)setUpCompleteDisplay;
- (void)setUpDisplay;
- (void)setUpVideo;
- (void)prepareVideoIfNecessary;
- (void)prepareDiscoverBarIfNecessary;
- (void)setMediaFromMessage:(id)arg1;
- (void)dealloc;
- (void)initGestures;
- (void)initBlockingOverlayView;
- (void)initImageView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

