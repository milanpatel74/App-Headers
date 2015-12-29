//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUPingResult.h"

@class NSNumber, NSString;

@interface SOJUPingResult : NSObject <SOJUPingResult>
{
    NSNumber *_pingTotalLatency;
    NSNumber *_pingFirstBytesLatency;
    NSNumber *_pingResponseSize;
}

@property(readonly, copy, nonatomic) NSNumber *pingResponseSize; // @synthesize pingResponseSize=_pingResponseSize;
@property(readonly, copy, nonatomic) NSNumber *pingFirstBytesLatency; // @synthesize pingFirstBytesLatency=_pingFirstBytesLatency;
@property(readonly, copy, nonatomic) NSNumber *pingTotalLatency; // @synthesize pingTotalLatency=_pingTotalLatency;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPingTotalLatency:(id)arg1 pingFirstBytesLatency:(id)arg2 pingResponseSize:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

