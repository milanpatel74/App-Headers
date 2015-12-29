//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUFriendSearchResultItemBuilder : NSObject
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSArray *_friendmojiCategories;
    NSDictionary *_friendmojiDictionary;
    NSNumber *_position;
    NSArray *_keywords;
}

+ (id)withJUFriendSearchResultItem:(id)arg1;
- (void).cxx_destruct;
- (id)setKeywords:(id)arg1;
- (id)setPosition:(id)arg1;
- (id)setFriendmojiDictionary:(id)arg1;
- (id)setFriendmojiCategories:(id)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)build;

@end

