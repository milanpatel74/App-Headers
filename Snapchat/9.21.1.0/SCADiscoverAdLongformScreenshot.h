//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCADiscoverAdLongformScreenshot : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setVideoPartnerId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapIndexPos:(long long)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setPublisherId:(id)arg1;
- (void)setLongformType:(long long)arg1;
- (void)setEditionId:(id)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdIndexPos:(long long)arg1;
- (void)setAdIndexCount:(long long)arg1;
- (id)asDictionary;
- (id)init;

@end
