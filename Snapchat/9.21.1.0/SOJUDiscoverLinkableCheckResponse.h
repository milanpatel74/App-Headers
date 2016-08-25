//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverLinkableCheckResponse.h"

@class NSNumber, NSString, SOJUDiscoverChannelListResponse, SOJUDiscoverEditionChunkResponse;

@interface SOJUDiscoverLinkableCheckResponse : NSObject <SOJUDiscoverLinkableCheckResponse>
{
    NSString *_dsnapId;
    NSString *_hashValue;
    NSString *_reason;
    NSNumber *_publishTs;
    NSString *_linkableState;
    SOJUDiscoverChannelListResponse *_channelList;
    SOJUDiscoverEditionChunkResponse *_chunk;
    NSNumber *_adType;
}

@property(readonly, copy, nonatomic) NSNumber *adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) SOJUDiscoverEditionChunkResponse *chunk; // @synthesize chunk=_chunk;
@property(readonly, copy, nonatomic) SOJUDiscoverChannelListResponse *channelList; // @synthesize channelList=_channelList;
@property(readonly, copy, nonatomic) NSString *linkableState; // @synthesize linkableState=_linkableState;
@property(readonly, copy, nonatomic) NSNumber *publishTs; // @synthesize publishTs=_publishTs;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, copy, nonatomic) NSString *dsnapId; // @synthesize dsnapId=_dsnapId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDsnapId:(id)arg1 hashValue:(id)arg2 reason:(id)arg3 publishTs:(id)arg4 linkableState:(id)arg5 channelList:(id)arg6 chunk:(id)arg7 adType:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
