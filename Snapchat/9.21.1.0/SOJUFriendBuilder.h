//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUFriendBuilder : NSObject
{
    NSString *_name;
    NSString *_userId;
    NSNumber *_type;
    NSString *_display;
    NSNumber *_ts;
    NSNumber *_reverseTs;
    NSString *_direction;
    NSNumber *_canSeeCustomStories;
    NSNumber *_pendingSnapsCount;
    NSNumber *_expiration;
    NSNumber *_isSharedStory;
    NSNumber *_hasCustomDescription;
    NSString *_sharedStoryId;
    NSNumber *_localStory;
    NSNumber *_ignoredLink;
    NSNumber *_hiddenLink;
    NSString *_addSource;
    NSString *_addSourceType;
    NSString *_friendmojiString;
    NSNumber *_needsLove;
    NSNumber *_autoAdded;
    NSNumber *_sojuNewLink;
    NSNumber *_dontDecayThumbnail;
    NSString *_venue;
    NSArray *_friendmojiSymbols;
    NSNumber *_snapStreakCount;
}

+ (id)withJUFriend:(id)arg1;
- (void).cxx_destruct;
- (id)setSnapStreakCount:(id)arg1;
- (id)setFriendmojiSymbols:(id)arg1;
- (id)setVenue:(id)arg1;
- (id)setDontDecayThumbnail:(id)arg1;
- (id)setSojuNewLink:(id)arg1;
- (id)setAutoAdded:(id)arg1;
- (id)setNeedsLove:(id)arg1;
- (id)setFriendmojiString:(id)arg1;
- (id)setAddSourceType:(id)arg1;
- (id)setAddSource:(id)arg1;
- (id)setHiddenLink:(id)arg1;
- (id)setIgnoredLink:(id)arg1;
- (id)setLocalStory:(id)arg1;
- (id)setSharedStoryId:(id)arg1;
- (id)setHasCustomDescription:(id)arg1;
- (id)setIsSharedStory:(id)arg1;
- (id)setExpiration:(id)arg1;
- (id)setPendingSnapsCount:(id)arg1;
- (id)setCanSeeCustomStories:(id)arg1;
- (id)setDirection:(id)arg1;
- (id)setReverseTs:(id)arg1;
- (id)setTs:(id)arg1;
- (id)setDisplay:(id)arg1;
- (id)setType:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)setName:(id)arg1;
- (id)build;

@end

