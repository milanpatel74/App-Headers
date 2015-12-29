//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityFindFriendsContact.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityFindFriendsContact : NSObject <SOJUIdentityFindFriendsContact>
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
    NSNumber *_isNewContact;
    NSNumber *_isRecommended;
}

@property(readonly, copy, nonatomic) NSNumber *isRecommended; // @synthesize isRecommended=_isRecommended;
@property(readonly, copy, nonatomic) NSNumber *isNewContact; // @synthesize isNewContact=_isNewContact;
@property(readonly, copy, nonatomic) NSNumber *snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(readonly, copy, nonatomic) NSArray *friendmojiSymbols; // @synthesize friendmojiSymbols=_friendmojiSymbols;
@property(readonly, copy, nonatomic) NSString *venue; // @synthesize venue=_venue;
@property(readonly, copy, nonatomic) NSNumber *dontDecayThumbnail; // @synthesize dontDecayThumbnail=_dontDecayThumbnail;
@property(readonly, copy, nonatomic) NSNumber *sojuNewLink; // @synthesize sojuNewLink=_sojuNewLink;
@property(readonly, copy, nonatomic) NSNumber *autoAdded; // @synthesize autoAdded=_autoAdded;
@property(readonly, copy, nonatomic) NSNumber *needsLove; // @synthesize needsLove=_needsLove;
@property(readonly, copy, nonatomic) NSString *friendmojiString; // @synthesize friendmojiString=_friendmojiString;
@property(readonly, copy, nonatomic) NSString *addSourceType; // @synthesize addSourceType=_addSourceType;
@property(readonly, copy, nonatomic) NSString *addSource; // @synthesize addSource=_addSource;
@property(readonly, copy, nonatomic) NSNumber *hiddenLink; // @synthesize hiddenLink=_hiddenLink;
@property(readonly, copy, nonatomic) NSNumber *ignoredLink; // @synthesize ignoredLink=_ignoredLink;
@property(readonly, copy, nonatomic) NSNumber *localStory; // @synthesize localStory=_localStory;
@property(readonly, copy, nonatomic) NSString *sharedStoryId; // @synthesize sharedStoryId=_sharedStoryId;
@property(readonly, copy, nonatomic) NSNumber *hasCustomDescription; // @synthesize hasCustomDescription=_hasCustomDescription;
@property(readonly, copy, nonatomic) NSNumber *isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(readonly, copy, nonatomic) NSNumber *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSNumber *pendingSnapsCount; // @synthesize pendingSnapsCount=_pendingSnapsCount;
@property(readonly, copy, nonatomic) NSNumber *canSeeCustomStories; // @synthesize canSeeCustomStories=_canSeeCustomStories;
@property(readonly, copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) NSNumber *reverseTs; // @synthesize reverseTs=_reverseTs;
@property(readonly, copy, nonatomic) NSNumber *ts; // @synthesize ts=_ts;
@property(readonly, copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 userId:(id)arg2 type:(id)arg3 display:(id)arg4 ts:(id)arg5 reverseTs:(id)arg6 direction:(id)arg7 canSeeCustomStories:(id)arg8 pendingSnapsCount:(id)arg9 expiration:(id)arg10 isSharedStory:(id)arg11 hasCustomDescription:(id)arg12 sharedStoryId:(id)arg13 localStory:(id)arg14 ignoredLink:(id)arg15 hiddenLink:(id)arg16 addSource:(id)arg17 addSourceType:(id)arg18 friendmojiString:(id)arg19 needsLove:(id)arg20 autoAdded:(id)arg21 sojuNewLink:(id)arg22 dontDecayThumbnail:(id)arg23 venue:(id)arg24 friendmojiSymbols:(id)arg25 snapStreakCount:(id)arg26 isNewContact:(id)arg27 isRecommended:(id)arg28;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

