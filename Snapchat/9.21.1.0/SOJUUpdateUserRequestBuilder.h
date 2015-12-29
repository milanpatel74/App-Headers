//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUUpdateUserRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSArray *_seenTooltips;
    NSDictionary *_clientProperties;
    NSArray *_clientPropertiesV2;
    NSNumber *_lastCheckedTrophiesTimestamp;
}

+ (id)withJUUpdateUserRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setLastCheckedTrophiesTimestamp:(id)arg1;
- (id)setClientPropertiesV2:(id)arg1;
- (id)setClientProperties:(id)arg1;
- (id)setSeenTooltips:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end

