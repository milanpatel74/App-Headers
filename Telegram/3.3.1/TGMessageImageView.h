//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGImageView.h"

#import "TGModernView.h"

@class NSString, TGInlineVideoView, TGMessageImageAdditionalDataView, TGMessageImageViewOverlayView, TGMessageImageViewTimestampView, TGModernButton, TGStaticBackdropAreaData, UIColor, UIImageView, UILabel;

@interface TGMessageImageView : TGImageView <TGModernView>
{
    TGModernButton *_buttonView;
    TGMessageImageViewOverlayView *_overlayView;
    TGMessageImageAdditionalDataView *_additionalDataView;
    TGStaticBackdropAreaData *_additionalDataBackdropArea;
    UIImageView *_detailStringsBackground;
    UILabel *_detailStringLabel1;
    UILabel *_detailStringLabel2;
    struct UIEdgeInsets _detailStringsEdgeInsets;
    int _timestampPosition;
    double _overlayDiameter;
    TGInlineVideoView *_inlineVideoView;
    int _overlayType;
    id <TGMessageImageViewDelegate> _delegate;
    double _progress;
    double _completeDuration;
    UIColor *_overlayBackgroundColorHint;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSString *_viewIdentifier;
    NSString *_viewStateIdentifier;
    TGMessageImageViewTimestampView *_timestampView;
}

@property(retain, nonatomic) TGMessageImageViewTimestampView *timestampView; // @synthesize timestampView=_timestampView;
@property(retain, nonatomic) NSString *viewStateIdentifier; // @synthesize viewStateIdentifier=_viewStateIdentifier;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) UIColor *overlayBackgroundColorHint; // @synthesize overlayBackgroundColorHint=_overlayBackgroundColorHint;
@property(nonatomic) double completeDuration; // @synthesize completeDuration=_completeDuration;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int overlayType; // @synthesize overlayType=_overlayType;
@property(nonatomic) __weak id <TGMessageImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVideoPathSignal:(id)arg1;
- (void)actionButtonPressed;
- (void)setDetailStrings:(id)arg1 detailStringsEdgeInsets:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setIsBroadcast:(_Bool)arg1;
- (void)setDisplayTimestampProgress:(_Bool)arg1;
- (void)setAdditionalDataString:(id)arg1 animated:(_Bool)arg2;
- (void)setTimestampString:(id)arg1 displayCheckmarks:(_Bool)arg2 checkmarkValue:(int)arg3 displayViews:(_Bool)arg4 viewsValue:(int)arg5 animated:(_Bool)arg6;
- (void)setTimestampPosition:(int)arg1;
- (void)setTimestampHidden:(_Bool)arg1;
- (void)setTimestampColor:(id)arg1;
- (void)setSecretProgress:(double)arg1 completeDuration:(double)arg2 animated:(_Bool)arg3;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setOverlayType:(int)arg1 animated:(_Bool)arg2;
- (void)setOverlayDiameter:(double)arg1;
- (void)performProgressUpdate:(double)arg1;
- (void)performTransitionToImage:(id)arg1 partial:(_Bool)arg2 duration:(double)arg3;
- (void)_updateTimestampViewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (id)highlightImageForDiameter:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willBecomeRecycled;
- (void)loadUri:(id)arg1 withOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

