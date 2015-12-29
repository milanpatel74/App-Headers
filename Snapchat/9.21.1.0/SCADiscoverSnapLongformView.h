//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCADiscoverSnapLongformView : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setVideoPartnerId:(id)arg1;
- (void)setTimeViewed:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapIndexPos:(long long)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setScanActionId:(id)arg1;
- (void)setPublisherId:(id)arg1;
- (void)setLongformType:(long long)arg1;
- (void)setInlineVideoViewCount:(long long)arg1;
- (void)setInlineVideoTimeViewed:(double)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setEditionId:(id)arg1;
- (void)setDsnapId:(id)arg1;
- (void)setDeepLinkId:(id)arg1;
- (id)asDictionary;
- (id)init;

@end

