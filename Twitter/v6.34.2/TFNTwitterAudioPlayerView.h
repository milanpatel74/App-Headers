/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNDockableView.h>
#import <Twitter/TFNCanvasControllableElementView.h>

@protocol TFNTwitterAudioPlayerViewDelegate;
@class NSString, UIView, UILabel, TFNPaddedButton, UIButton, TFNDownload, UIActivityIndicatorView, UIColor, NSURL, CALayer, UISlider, TFNTwitterAudioTrack, UIImageView, UIImage;

@interface TFNTwitterAudioPlayerView : UIView <TFNDockableView, TFNCanvasControllableElementView> {

	id<TFNTwitterAudioPlayerViewDelegate> _delegate;
	NSString* _partner;
	UIView* _thumbnailContainerView;
	UIView* _toolBar;
	UIView* _toolBarBackgroundOverlay;
	UILabel* _countUpLabel;
	UILabel* _countDownLabel;
	TFNPaddedButton* _playPauseButton;
	UIButton* _replayButton;
	UILabel* _trackLabel;
	UILabel* _artistLabel;
	TFNPaddedButton* _partnerButton;
	TFNDownload* _partnerLogoDownload;
	UIActivityIndicatorView* _bufferingIndicator;
	UIView* _toolBarSeparator;
	UIView* _ctaBar;
	UIButton* _ctaButton;
	TFNDownload* _partnerLogoDockedDownload;
	unsigned long long _audioTheme;
	UIColor* _controlBackgroundColor;
	UIColor* _ctaColor;
	NSURL* _logoURL;
	NSURL* _dockedLogoURL;
	CALayer* _maskLayer;
	BOOL _controlsEnabled;
	BOOL _audioCardsSpringsEnabled;
	UISlider* _scrubSlider;
	TFNTwitterAudioTrack* _track;
	UIImageView* _partnerLogoDocked;
	long long _playPauseButtonState;
	UIImageView* _thumbnailImageView;

}

@property (nonatomic,readonly) UISlider * scrubSlider;                                                        //@synthesize scrubSlider=_scrubSlider - In the implementation block
@property (nonatomic,retain) TFNTwitterAudioTrack * track;                                                    //@synthesize track=_track - In the implementation block
@property (assign,getter=isAudioCardsSpringsEnabled,nonatomic) BOOL audioCardsSpringsEnabled;                 //@synthesize audioCardsSpringsEnabled=_audioCardsSpringsEnabled - In the implementation block
@property (nonatomic,readonly) double countLabelWidth; 
@property (nonatomic,readonly) UIImageView * partnerLogoDocked;                                               //@synthesize partnerLogoDocked=_partnerLogoDocked - In the implementation block
@property (assign,nonatomic) long long playPauseButtonState;                                                  //@synthesize playPauseButtonState=_playPauseButtonState - In the implementation block
@property (nonatomic,readonly) UIColor * textColorForPartnerTheme; 
@property (nonatomic,readonly) UIImageView * thumbnailImageView;                                              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPauseHighlightedImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPauseImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPlayHighlightedImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPlayImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonReplayHighlightedImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonReplayImageForPartnerTheme; 
@property (nonatomic,readonly) double toolBarSeparatorHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL controlsEnabled;                                                            //@synthesize controlsEnabled=_controlsEnabled - In the implementation block
@property (nonatomic,retain) UIView * containerView; 
+(CGSize)fullscreenSize;
+(double)_thumbnailSize;
-(void)_togglePlayback;
-(void)performDockAnimations;
-(void)performFullscreenAnimations;
-(BOOL)controlsEnabled;
-(void)setControlsEnabled:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 partner:(id)arg3 ;
-(void)setAudioCardsSpringsEnabled:(BOOL)arg1 ;
-(void)didReplay;
-(void)updateWithCurrentPlaybackTime:(double)arg1 withDuration:(double)arg2 ;
-(UISlider *)scrubSlider;
-(void)_invokeCTA;
-(void)didFinishPlayAllTracks;
-(void)stopBufferingIndicator;
-(void)startBufferingIndicator;
-(void)didDock;
-(void)willFullscreen;
-(void)didUndock;
-(void)performExpandAnimationsDuringPanDockToFullscreenWithScale:(double)arg1 ;
-(UIEdgeInsets)visibleContentInsets;
-(void)_setupContents;
-(void)_setupThumbnail;
-(void)_setupToolBar;
-(void)_setupCTABar;
-(void)_setupDockedViews;
-(void)_scrubbingDidBegin:(id)arg1 ;
-(void)_scrubbingDidChange:(id)arg1 ;
-(void)_scrubbingDidEnd:(id)arg1 ;
-(UIImage *)toolBarPlayButtonPauseImageForPartnerTheme;
-(void)setPlayPauseButtonState:(long long)arg1 ;
-(UIImage *)toolBarPlayButtonReplayImageForPartnerTheme;
-(UIImage *)toolBarPlayButtonReplayHighlightedImageForPartnerTheme;
-(void)_replayTracks;
-(UIColor *)textColorForPartnerTheme;
-(void)_partnerLogoDownloadDidChange;
-(double)countLabelWidth;
-(void)_partnerLogoDockedDownloadDidChange;
-(void)_layoutPartnerLogoDocked;
-(UIImage *)toolBarPlayButtonPauseHighlightedImageForPartnerTheme;
-(UIImage *)toolBarPlayButtonPlayImageForPartnerTheme;
-(UIImage *)toolBarPlayButtonPlayHighlightedImageForPartnerTheme;
-(void)_updateArtwork;
-(id)_ctaImageWithTitle:(id)arg1 alpha:(double)arg2 ;
-(void)_syncSliderWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2 ;
-(void)_syncCountLabelsWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2 ;
-(long long)playPauseButtonState;
-(void)_updateToInitialConditions;
-(UIImageView *)partnerLogoDocked;
-(BOOL)isAudioCardsSpringsEnabled;
-(void)_layoutToolBarElements;
-(double)toolBarSeparatorHeight;
-(void)tfx_partnerLogoWidthRatioParameterChanged;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(id)_countLabel;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(UIImageView *)thumbnailImageView;
-(void)setTrack:(TFNTwitterAudioTrack *)arg1 ;
-(TFNTwitterAudioTrack *)track;
@end
