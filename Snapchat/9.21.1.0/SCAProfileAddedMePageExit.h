//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAProfileAddedMePageExit : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setTotalRequestCount:(long long)arg1;
- (void)setRequestNameEditCount:(long long)arg1;
- (void)setRequestIgnoreCount:(long long)arg1;
- (void)setRequestBlockCount:(long long)arg1;
- (void)setRequestAcceptCount:(long long)arg1;
- (void)setNewRequestCount:(long long)arg1;
- (id)asDictionary;
- (id)init;

@end

