//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernViewModel.h"

@class NSArray, NSString, UIColor;

@interface TGMessageImageViewModel : TGModernViewModel
{
    int _timestampPosition;
    UIColor *_timestampColor;
    NSString *_timestampString;
    _Bool _displayCheckmarks;
    int _checkmarkValue;
    _Bool _displayViews;
    int _viewsValue;
    _Bool _displayTimestampProgress;
    NSString *_additionalDataString;
    double _completeDuration;
    _Bool _mediaVisible;
    _Bool _expectExtendedEdges;
    _Bool _timestampHidden;
    _Bool _isBroadcast;
    int _overlayType;
    NSString *_uri;
    double _overlayDiameter;
    UIColor *_overlayBackgroundColorHint;
    double _progress;
    NSArray *_detailStrings;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    struct UIEdgeInsets _detailStringsInsets;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) struct UIEdgeInsets detailStringsInsets; // @synthesize detailStringsInsets=_detailStringsInsets;
@property(retain, nonatomic) NSArray *detailStrings; // @synthesize detailStrings=_detailStrings;
@property(nonatomic) _Bool isBroadcast; // @synthesize isBroadcast=_isBroadcast;
@property(nonatomic) _Bool timestampHidden; // @synthesize timestampHidden=_timestampHidden;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int overlayType; // @synthesize overlayType=_overlayType;
@property(retain, nonatomic) UIColor *overlayBackgroundColorHint; // @synthesize overlayBackgroundColorHint=_overlayBackgroundColorHint;
@property(nonatomic) double overlayDiameter; // @synthesize overlayDiameter=_overlayDiameter;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) _Bool expectExtendedEdges; // @synthesize expectExtendedEdges=_expectExtendedEdges;
@property(nonatomic) _Bool mediaVisible; // @synthesize mediaVisible=_mediaVisible;
- (void).cxx_destruct;
- (void)reloadImage:(_Bool)arg1;
- (void)setDetailStrings:(id)arg1 detailStringsInsets:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setAdditionalDataString:(id)arg1 animated:(_Bool)arg2;
- (void)setAdditionalDataString:(id)arg1;
- (void)setDisplayTimestampProgress:(_Bool)arg1;
- (void)setTimestampPosition:(int)arg1;
- (void)setTimestampString:(id)arg1 displayCheckmarks:(_Bool)arg2 checkmarkValue:(int)arg3 displayViews:(_Bool)arg4 viewsValue:(int)arg5 animated:(_Bool)arg6;
- (void)setTimestampColor:(id)arg1;
- (void)setOverlayType:(int)arg1 animated:(_Bool)arg2;
- (void)setSecretProgress:(double)arg1 completeDuration:(double)arg2 animated:(_Bool)arg3;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)unbindView:(id)arg1;
- (void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2;
- (void)_updateViewStateIdentifier;
- (id)init;
- (id)initWithUri:(id)arg1;
- (Class)viewClass;

@end
