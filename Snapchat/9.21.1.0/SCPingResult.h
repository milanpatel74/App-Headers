//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPingResult : NSObject
{
    long long _firstBytesLatencyInMS;
    long long _totalLatencyInMS;
    long long _responseSize;
}

@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) long long totalLatencyInMS; // @synthesize totalLatencyInMS=_totalLatencyInMS;
@property(nonatomic) long long firstBytesLatencyInMS; // @synthesize firstBytesLatencyInMS=_firstBytesLatencyInMS;
- (id)toDict;
- (_Bool)isFullResult;
- (id)init;

@end

