//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSMutableDictionary;

@interface SCAProfileMyFriendsPageExit : SCAUserTrackedEvent
{
    NSMutableDictionary *_state;
}

+ (id)create;
- (void).cxx_destruct;
- (void)setMyFriendRemoveInSearchCount:(long long)arg1;
- (void)setMyFriendRemoveCount:(long long)arg1;
- (void)setMyFriendReAddInSearchCount:(long long)arg1;
- (void)setMyFriendReAddCount:(long long)arg1;
- (void)setMyFriendNameEditInSearchCount:(long long)arg1;
- (void)setMyFriendNameEditCount:(long long)arg1;
- (void)setMyFriendCount:(long long)arg1;
- (void)setMyFriendBlockInSearchCount:(long long)arg1;
- (void)setMyFriendBlockCount:(long long)arg1;
- (void)setDestinationPage:(long long)arg1;
- (void)setDestination:(long long)arg1;
- (id)asDictionary;
- (id)init;

@end

