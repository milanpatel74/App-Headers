//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCADirectSnapReplayAvailable : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setSource:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCamera:(long long)arg1;
- (id)asDictionary;
- (id)init;

@end

