//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCCaptionState;

@interface SCPreviewSnapchatGallerySnapEditingStates : NSObject
{
    _Bool _didSetFiltersBeginState;
    _Bool _didSetFiltersEndState;
    NSString *_beginGeoFilterName;
    NSString *_endGeoFilterName;
    NSString *_beginSmartFilterName;
    NSString *_endSmartFilterName;
    NSString *_beginMediaFilterName;
    NSString *_endMediaFilterName;
    _Bool _drawingEdited;
    _Bool _didSetCaptionBeginState;
    _Bool _didSetCaptionEndState;
    SCCaptionState *_beginCaptionState;
    SCCaptionState *_endCaptionState;
    _Bool _didSetDurationBeginState;
    _Bool _didSetDurationEndState;
    double _beginDuration;
    double _endDuration;
    _Bool _didSetStickersBeginState;
    _Bool _didSetStickersEndState;
    NSArray *_beginStickersState;
    NSArray *_endStickersState;
}

- (void).cxx_destruct;
- (_Bool)_isStickersChanged;
- (_Bool)_isDurationChanged;
- (_Bool)_isCaptionChanged;
- (_Bool)_isFiltersChanged;
- (void)setStickersEndState:(id)arg1;
- (void)setStickersBeginState:(id)arg1;
- (void)setDurationEndState:(double)arg1;
- (void)setDurationBeginState:(double)arg1;
- (void)setCaptionEndStateWithCaptionManager:(id)arg1;
- (void)setCaptionBeginStateWithCaptionManager:(id)arg1;
- (void)setDrawingEdited;
- (void)setFiltersEndStateWithSwipeFilterView:(id)arg1;
- (void)setFiltersBeginStateWithSwipeFilterView:(id)arg1;
- (_Bool)isSnapEdited;

@end
