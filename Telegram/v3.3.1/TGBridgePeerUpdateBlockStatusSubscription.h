//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeSubscription.h"

@interface TGBridgePeerUpdateBlockStatusSubscription : TGBridgeSubscription
{
    _Bool _blocked;
    long long _peerId;
}

+ (id)subscriptionName;
@property(readonly, nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void)_unserializeParametersWithCoder:(id)arg1;
- (void)_serializeParametersWithCoder:(id)arg1;
- (_Bool)renewable;
- (id)initWithPeerId:(long long)arg1 blocked:(_Bool)arg2;

@end
