//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAProfileUsernameSearchPerform : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setUsernameSearchCount:(long long)arg1;
- (void)setMyVerifiedFriendSearchCount:(long long)arg1;
- (void)setMyFriendSearchCount:(long long)arg1;
- (void)setKeystrokeCount:(long long)arg1;
- (void)setCharCount:(long long)arg1;
- (void)setAddressBookSearchCount:(long long)arg1;
- (void)setAddedMeSearchCount:(long long)arg1;
- (id)asDictionary;
- (id)init;

@end

