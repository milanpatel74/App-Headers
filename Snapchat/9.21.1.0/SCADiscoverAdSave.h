//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCADiscoverAdSave : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setTimeViewed:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapIndexPos:(long long)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setSizeByte:(long long)arg1;
- (void)setPublisherId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setEditionId:(id)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setCaption:(long long)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (id)asDictionary;
- (id)init;

@end

