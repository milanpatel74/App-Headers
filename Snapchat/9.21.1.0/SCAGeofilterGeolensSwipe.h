//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAGeofilterGeolensSwipe : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setViewTimeSec:(double)arg1;
- (void)setFilterIndexPos:(long long)arg1;
- (void)setFilterIndexCount:(long long)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterCount:(long long)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)asDictionary;
- (id)init;

@end

