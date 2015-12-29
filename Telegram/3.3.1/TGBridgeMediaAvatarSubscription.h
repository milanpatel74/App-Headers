//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeSubscription.h"

@class NSString;

@interface TGBridgeMediaAvatarSubscription : TGBridgeSubscription
{
    NSString *_url;
    unsigned long long _type;
}

+ (id)subscriptionName;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)_unserializeParametersWithCoder:(id)arg1;
- (void)_serializeParametersWithCoder:(id)arg1;
- (_Bool)renewable;
- (id)initWithUrl:(id)arg1 type:(unsigned long long)arg2;

@end

