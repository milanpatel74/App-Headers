//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPITrouterPayloadHandler.h"

@class NSCountedSet, NSString, SKPIntentToken, SKPPushNotificationInterface;

@interface SKPCallSignalPayloadHandler : NSObject <SKPITrouterPayloadHandler>
{
    SKPPushNotificationInterface *_interface;
    SKPIntentToken *_pushNotificationIntent;
    NSCountedSet *_activeCallPushPayloads;
}

+ (void)postMissedCallNotificationWithCallerID:(id)arg1 conversationIdentity:(id)arg2 unescapedDisplayName:(id)arg3 conference:(_Bool)arg4;
@property(retain, nonatomic) NSCountedSet *activeCallPushPayloads; // @synthesize activeCallPushPayloads=_activeCallPushPayloads;
@property(retain, nonatomic) SKPIntentToken *pushNotificationIntent; // @synthesize pushNotificationIntent=_pushNotificationIntent;
@property(retain, nonatomic) SKPPushNotificationInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (void)postMissedCallNotificationWithCallGUID:(id)arg1;
- (void)handleCallEventStopRingingP2P:(id)arg1 event:(unsigned long long)arg2 callEndReason:(id)arg3;
- (void)handlePushCallWithTrouterPayload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)prepareResponseForRequestId:(id)arg1 responseCode:(int)arg2 headers:(id)arg3 body:(id)arg4 error:(id *)arg5;
- (id)trouterHeadersWithRequestHeaders:(id)arg1 andClientDuration:(double)arg2;
- (void)dispatchPayload:(id)arg1 connection:(id)arg2 json:(id)arg3 forPublicBaseURL:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (_Bool)validateTrouterCallSignalingTemplatePayload:(id)arg1;
- (_Bool)shouldHandlePayloadForPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
