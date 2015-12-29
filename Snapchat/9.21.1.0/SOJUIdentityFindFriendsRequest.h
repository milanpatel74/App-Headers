//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityFindFriendsRequest.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityFindFriendsRequest : NSObject <SOJUIdentityFindFriendsRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_numbers;
    NSString *_countryCode;
    NSArray *_contactsWithMetaData;
    NSNumber *_shouldRecommend;
}

@property(readonly, copy, nonatomic) NSNumber *shouldRecommend; // @synthesize shouldRecommend=_shouldRecommend;
@property(readonly, copy, nonatomic) NSArray *contactsWithMetaData; // @synthesize contactsWithMetaData=_contactsWithMetaData;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *numbers; // @synthesize numbers=_numbers;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 numbers:(id)arg4 countryCode:(id)arg5 contactsWithMetaData:(id)arg6 shouldRecommend:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

