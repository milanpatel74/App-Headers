//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAAppApplicationLogin : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setSource:(long long)arg1;
- (void)setDeepLinkSource:(long long)arg1;
- (void)setDeepLinkId:(id)arg1;
- (id)asDictionary;
- (id)init;

@end

