//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGContentBubbleViewModel.h"

#import "TGAudioSliderViewDelegate.h"
#import "TGModernViewInlineMediaContextDelegate.h"

@class NSString, TGAudioSliderViewModel, TGModernButtonViewModel, TGModernViewInlineMediaContext;

@interface TGAudioMessageViewModel : TGContentBubbleViewModel <TGModernViewInlineMediaContextDelegate, TGAudioSliderViewDelegate>
{
    _Bool _progressVisible;
    _Bool _mediaIsAvailable;
    float _progress;
    int _duration;
    int _size;
    NSString *_fileType;
    struct CGPoint _boundOffset;
    TGModernButtonViewModel *_playButtonModel;
    int _playButtonType;
    TGAudioSliderViewModel *_sliderModel;
    double _headerHeight;
    _Bool _isPlayerActive;
    _Bool _isPaused;
    float _audioPosition;
    double _preciseDuration;
    double _audioPositionTimestamp;
    TGModernViewInlineMediaContext *_inlineMediaContext;
}

- (void).cxx_destruct;
- (void)messageDoubleTapGesture:(id)arg1;
- (int)gestureRecognizer:(id)arg1 shouldFailTap:(struct CGPoint)arg2;
- (void)audioSliderViewDidCancelPositionAdjustment:(id)arg1;
- (void)audioSliderViewDidEndPositionAdjustment:(id)arg1 atPosition:(double)arg2;
- (void)audioSliderViewDidBeginPositionAdjustment:(id)arg1;
- (void)inlineMediaPlaybackStateUpdated:(_Bool)arg1 playbackPosition:(float)arg2 timestamp:(double)arg3 preciseDuration:(double)arg4;
- (void)layoutForContainerSize:(struct CGSize)arg1;
- (struct CGSize)contentSizeForContainerSize:(struct CGSize)arg1 needsContentsUpdate:(_Bool *)arg2 hasDate:(_Bool)arg3 hasViews:(_Bool)arg4;
- (void)layoutContentForHeaderHeight:(double)arg1;
- (void)playButtonPressed;
- (void)unbindView:(id)arg1;
- (void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2;
- (void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(struct CGPoint)arg3;
- (void)updateInlineMediaContext;
- (void)updateProgress:(_Bool)arg1 progress:(float)arg2 viewStorage:(id)arg3 animated:(_Bool)arg4;
- (void)updateMediaAvailability:(_Bool)arg1 viewStorage:(id)arg2;
- (void)updateMessage:(id)arg1 viewStorage:(id)arg2 sizeUpdated:(_Bool *)arg3;
- (void)updateButtonText:(_Bool)arg1;
- (id)initWithMessage:(id)arg1 duration:(int)arg2 size:(int)arg3 fileType:(id)arg4 authorPeer:(id)arg5 context:(id)arg6;
- (id)cancelImage:(_Bool)arg1;
- (id)downloadImage:(_Bool)arg1;
- (id)pauseImage:(_Bool)arg1;
- (id)playImage:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

