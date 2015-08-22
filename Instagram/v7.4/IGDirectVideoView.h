/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGImageProgressViewDelegate.h>

@protocol IGDirectVideoViewDelegate;
@class IGVideo, IGPhoto, IGVideoIndicatorView, UIView, IGImageProgressView, IGFeedVideoPlayer, NSString;

@interface IGDirectVideoView : UIView <IGFeedVideoPlayerDelegate, UIGestureRecognizerDelegate, IGImageProgressViewDelegate> {

	BOOL _loading;
	id<IGDirectVideoViewDelegate> _delegate;
	IGVideo* _video;
	IGPhoto* _photo;
	IGVideoIndicatorView* _indicatorView;
	UIView* _videoView;
	IGImageProgressView* _photoImageView;
	IGFeedVideoPlayer* _player;

}

@property (assign,nonatomic,__weak) id<IGDirectVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL posterFrameLoaded; 
@property (nonatomic,readonly) BOOL hasPlayer; 
@property (nonatomic,readonly) BOOL hasPlaybackError; 
@property (nonatomic,retain) IGVideo * video;                                            //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGPhoto * photo;                                            //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) IGVideoIndicatorView * indicatorView;                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                         //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) IGImageProgressView * photoImageView;                       //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * player;                                 //@synthesize player=_player - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                              //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideo:(id)arg1 withPhoto:(id)arg2 ;
-(void)playWithPlayer:(id)arg1 ;
-(void)relinquishPlayerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIndicatorView:(IGVideoIndicatorView *)arg1 ;
-(IGVideoIndicatorView *)indicatorView;
-(void)showVideoIndication:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showVideo:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)playVideoURL:(id)arg1 withPlayer:(id)arg2 ;
-(void)showIndicatorStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)posterFrameLoaded;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(BOOL)arg2 ;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(BOOL)arg2 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned long long)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setVideo:(id)arg1 withImage:(id)arg2 ;
-(BOOL)hasPlayer;
-(BOOL)hasPlaybackError;
-(BOOL)isVideoHasSound;
-(void)setVideoView:(UIView *)arg1 ;
-(IGPhoto *)photo;
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(UIView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGDirectVideoViewDelegate>)arg1 ;
-(id<IGDirectVideoViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isLoading;
-(void)setVideo:(IGVideo *)arg1 ;
-(void)setPhoto:(IGPhoto *)arg1 ;
-(IGVideo *)video;
-(void)setLoading:(BOOL)arg1 ;
-(void)setPlayer:(IGFeedVideoPlayer *)arg1 ;
-(IGFeedVideoPlayer *)player;
@end
