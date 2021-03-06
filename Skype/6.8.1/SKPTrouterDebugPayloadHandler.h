//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPITrouterPayloadHandler.h"

@class NSMutableDictionary, NSString;

@interface SKPTrouterDebugPayloadHandler : NSObject <SKPITrouterPayloadHandler>
{
    _Bool _enableBatteryStats;
    _Bool _enablePublishStats;
    NSMutableDictionary *_stats;
    double _publishLastKnownStatsInterval;
}

+ (id)sharedInstance;
@property(nonatomic) double publishLastKnownStatsInterval; // @synthesize publishLastKnownStatsInterval=_publishLastKnownStatsInterval;
@property(nonatomic) _Bool enablePublishStats; // @synthesize enablePublishStats=_enablePublishStats;
@property(nonatomic) _Bool enableBatteryStats; // @synthesize enableBatteryStats=_enableBatteryStats;
@property(retain, nonatomic) NSMutableDictionary *stats; // @synthesize stats=_stats;
- (void).cxx_destruct;
- (id)prepareResponseWithJsonBody:(id)arg1 andRequestId:(id)arg2 andResponseCode:(int)arg3;
- (void)handleRegistrationsRequestWithConnection:(id)arg1 requestId:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)dispatchPayload:(id)arg1 connection:(id)arg2 json:(id)arg3 forPublicBaseURL:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)featureEnabledResponseForRequestId:(id)arg1;
- (_Bool)shouldHandlePayloadForPath:(id)arg1;
- (void)updateStat:(id)arg1 withValue:(id)arg2;
- (void)incStatValue:(id)arg1;
- (id)statsDictionary;
- (void)updateLastKnownStatsRemote;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

