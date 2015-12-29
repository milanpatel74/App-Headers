//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAGeofilterDirectSnapSend : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setWithGallery:(_Bool)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setStoryPostCount:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setRecipientCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterIndexPos:(long long)arg1;
- (void)setFilterIndexCount:(long long)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCamera:(long long)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)asDictionary;
- (id)init;

@end

