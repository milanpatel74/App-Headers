/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageContainerSliceView.h>

@class _WAMessageAudioSlider, UISlider, UIProgressView, UIButton, UIImageView, WAChatCellData, _WAMessageAudioDurationView, NSTimer, WAMessageAudioSlice;

@interface WAMessageAudioSliceView : WAMessageContainerSliceView {

	_WAMessageAudioSlider* _playerScrubber;
	UISlider* _uploadDownloadSlider;
	UIProgressView* _progressView;
	UIButton* _playPauseButton;
	UIImageView* _thumbnailImageView;
	UIImageView* _micIndicatorImageView;
	WAChatCellData* _lastCellData;
	long long _audioDuration;
	BOOL _resumePlaybackAfterDragging;
	float _sliderValueOnDragBegin;
	_WAMessageAudioDurationView* _durationView;
	NSTimer* _uploadDownloadProgressUpdateTimer;
	long long _uploadDownloadProgressPosition;
	double _scrubberSkipValue;

}

@property (nonatomic,readonly) WAMessageAudioSlice * slice; 
+(BOOL)supportsPreviewing;
+(void)initialize;
+(BOOL)isUserInteractionEnabled;
-(void)reloadSliceAfterChange:(unsigned long long)arg1 ;
-(BOOL)isDoubleTapGestureEnabled;
-(void)reloadHighlightedState;
-(void)relayout;
-(void)reconfigureOnMessageChange;
-(void)playerScrubberDidStartDragging:(id)arg1 ;
-(void)playerScrubberDidEndDragging:(id)arg1 ;
-(void)updatePushToTalkControls;
-(void)updatePlayedIndicator;
-(void)updateDurationView;
-(void)cancelUploadOrDownload:(id)arg1 ;
-(void)installUploadDownloadSliderIfNeeded;
-(void)uploadDownloadProgressUpdate:(id)arg1 ;
-(void)playAudio:(id)arg1 ;
-(void)pauseAudio:(id)arg1 ;
-(void)installProgressViewIfNeeded;
-(id)accessibilityPositionString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)startDownload:(id)arg1 ;
@end
