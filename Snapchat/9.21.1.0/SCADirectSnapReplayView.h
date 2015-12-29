//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSMutableDictionary;

@interface SCADirectSnapReplayView : SCAUserNotTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setViewTimeSec:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapId:(id)arg1;
- (void)setReplayAmount:(double)arg1;
- (void)setPosterId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setInitialView:(_Bool)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterGeofence:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCamera:(long long)arg1;
- (void)setAckTimeSec:(double)arg1;
- (id)asDictionary;
- (id)init;

@end

