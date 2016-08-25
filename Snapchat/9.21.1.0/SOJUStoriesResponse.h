//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStoriesResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUServerInfoResponse;

@interface SOJUStoriesResponse : NSObject <SOJUStoriesResponse>
{
    NSArray *_myStories;
    NSArray *_myStoriesWithCollabs;
    NSArray *_friendStories;
    NSDictionary *_deletedFriendStories;
    NSArray *_myGroupStories;
    NSArray *_myVerifiedStories;
    NSDictionary *_matureContentText;
    NSNumber *_friendStoriesDelta;
    SOJUServerInfoResponse *_serverInfo;
}

@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(readonly, copy, nonatomic) NSNumber *friendStoriesDelta; // @synthesize friendStoriesDelta=_friendStoriesDelta;
@property(readonly, copy, nonatomic) NSDictionary *matureContentText; // @synthesize matureContentText=_matureContentText;
@property(readonly, copy, nonatomic) NSArray *myVerifiedStories; // @synthesize myVerifiedStories=_myVerifiedStories;
@property(readonly, copy, nonatomic) NSArray *myGroupStories; // @synthesize myGroupStories=_myGroupStories;
@property(readonly, copy, nonatomic) NSDictionary *deletedFriendStories; // @synthesize deletedFriendStories=_deletedFriendStories;
@property(readonly, copy, nonatomic) NSArray *friendStories; // @synthesize friendStories=_friendStories;
@property(readonly, copy, nonatomic) NSArray *myStoriesWithCollabs; // @synthesize myStoriesWithCollabs=_myStoriesWithCollabs;
@property(readonly, copy, nonatomic) NSArray *myStories; // @synthesize myStories=_myStories;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMyStories:(id)arg1 myStoriesWithCollabs:(id)arg2 friendStories:(id)arg3 deletedFriendStories:(id)arg4 myGroupStories:(id)arg5 myVerifiedStories:(id)arg6 matureContentText:(id)arg7 friendStoriesDelta:(id)arg8 serverInfo:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
