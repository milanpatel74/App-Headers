/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageCell.h>

@class UIButton, UISlider, UIProgressView, NSTimer, UIImageView, UILabel, NSString;

@interface WAAudioMessageCell : WAMessageCell {

	UIButton* _buttonPlayPauseDownload;
	BOOL _playerWasPlaying;
	UISlider* _playerScrubber;
	float _sliderValueOnDragBegin;
	UIProgressView* _progressView;
	UISlider* _uploadScrubber;
	NSTimer* _uploadProgressUpdateTimer;
	long long _uploadProgressPosition;
	UIImageView* _micIndicator;
	UIImageView* _mediaThumbnail;
	UILabel* _labelAudioDuration;
	UIImageView* _broadcastImageView;
	BOOL _allowVoiceOverAnnouncement;
	NSString* _voiceOverPositionText;
	BOOL _allowVoiceOverAction;
	int _audioDuration;
	double _scrubberSkipValue;

}
+(BOOL)supportsDoubleTapGesture;
+(UIEdgeInsets)contentInsetsForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(double)maximumBubbleWidthForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(UIEdgeInsets)baseContentInsetsForCellData:(id)arg1 ;
+(id)cellReuseIdentifier;
+(CGSize)contentSizeForCellData:(id)arg1 maxWidth:(double)arg2 ;
+(BOOL)showsHighlightOnTouch;
+(void)initialize;
-(void)configureCellWithAnimation:(BOOL)arg1 ;
-(CGRect)replyContextViewFrameFromDefaultFrame:(CGRect)arg1 ;
-(id)accessibilityHintText;
-(void)setCellData:(id)arg1 delegate:(id)arg2 ;
-(void)updatePushToTalkControls;
-(void)cancelUploadOrDownload:(id)arg1 ;
-(id)accessibilityPositionString;
-(void)handleTapOnBubbleWithLocation:(CGPoint)arg1 ;
-(id)accessibilityValueText;
-(void)playerScrubberDraggingStarted:(id)arg1 ;
-(void)playerScrubberDraggingEnded:(id)arg1 ;
-(void)voiceOverStatusChanged:(id)arg1 ;
-(void)updateControlsForCurrentVoiceOverStatus;
-(void)updateDurationLabel;
-(id)chatThumbnail;
-(void)updatePlayedIndication;
-(void)uploadProgressUpdate:(id)arg1 ;
-(void)playOrPauseAudio:(id)arg1 ;
-(void)startDownloadingAudio:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)setProgress:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
@end

