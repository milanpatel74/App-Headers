//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAGeofilterStorySnapScreenshot : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setViewTimeSec:(double)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setEncFilterGeolensId:(id)arg1;
- (void)setEncFilterGeofilterId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)asDictionary;
- (id)init;

@end

