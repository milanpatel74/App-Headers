//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPITrouterConnection.h"
#import "SKPSocketIOConnectionDelegate.h"
#import "SKPWebServiceDelegate.h"

@class NSDate, NSError, NSString, NSTimer, NSURL, SKPDispatcher, SKPJSONWebService, SKPPushNotificationHandler, SKPPushNotificationRegistrar, SKPSocketIOConnection, SKPTrouterAllocation, SKPTrouterAuthentication, SKPTrouterLatencyInformation;

@interface SKPTrouterConnectionEx : NSObject <SKPITrouterConnection, SKPWebServiceDelegate, SKPSocketIOConnectionDelegate>
{
    _Bool reactToReachabilityChanges;
    long long _connectionState;
    SKPTrouterAllocation *_trouterAllocation;
    NSString *_connectionId;
    SKPTrouterAuthentication *_trouterAuth;
    SKPSocketIOConnection *_socketIOConnection;
    NSError *_error;
    NSDate *_errorDate;
    long long _recoveryAttempts;
    double _nextDelay;
    NSTimer *_connectionSetupHealthCheckTimer;
    id <SKPTrouterConnectionDelegate> _delegate;
    NSDate *_expirationDate;
    id <SKPITCPStreamFactory> _streamFactory;
    SKPDispatcher *_dispatcher;
    SKPPushNotificationRegistrar *_pushNotificationRegistrar;
    SKPPushNotificationHandler *_pushNotificationHandler;
    SKPJSONWebService *_webservice;
    NSURL *_baseTrouterURL;
    NSURL *_baseTrouterPolicyControllerURL;
    unsigned long long _setupTaskIdentifier;
    CDUnknownBlockType _onEstablishedBlock;
    SKPTrouterLatencyInformation *_latencyInformation;
}

@property(retain) SKPTrouterLatencyInformation *latencyInformation; // @synthesize latencyInformation=_latencyInformation;
@property(copy) CDUnknownBlockType onEstablishedBlock; // @synthesize onEstablishedBlock=_onEstablishedBlock;
@property unsigned long long setupTaskIdentifier; // @synthesize setupTaskIdentifier=_setupTaskIdentifier;
@property(retain, nonatomic) NSURL *baseTrouterPolicyControllerURL; // @synthesize baseTrouterPolicyControllerURL=_baseTrouterPolicyControllerURL;
@property(retain, nonatomic) NSURL *baseTrouterURL; // @synthesize baseTrouterURL=_baseTrouterURL;
@property(retain, nonatomic) SKPJSONWebService *webservice; // @synthesize webservice=_webservice;
@property(retain, nonatomic) SKPPushNotificationHandler *pushNotificationHandler; // @synthesize pushNotificationHandler=_pushNotificationHandler;
@property(retain, nonatomic) SKPPushNotificationRegistrar *pushNotificationRegistrar; // @synthesize pushNotificationRegistrar=_pushNotificationRegistrar;
@property(retain, nonatomic) SKPDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <SKPITCPStreamFactory> streamFactory; // @synthesize streamFactory=_streamFactory;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property __weak id <SKPTrouterConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *connectionSetupHealthCheckTimer; // @synthesize connectionSetupHealthCheckTimer=_connectionSetupHealthCheckTimer;
@property(nonatomic) double nextDelay; // @synthesize nextDelay=_nextDelay;
@property(nonatomic) long long recoveryAttempts; // @synthesize recoveryAttempts=_recoveryAttempts;
@property(retain, nonatomic) NSDate *errorDate; // @synthesize errorDate=_errorDate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SKPSocketIOConnection *socketIOConnection; // @synthesize socketIOConnection=_socketIOConnection;
@property(retain, nonatomic) SKPTrouterAuthentication *trouterAuth; // @synthesize trouterAuth=_trouterAuth;
@property(retain, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(retain, nonatomic) SKPTrouterAllocation *trouterAllocation; // @synthesize trouterAllocation=_trouterAllocation;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (void).cxx_destruct;
- (void)reachabilityChanged:(long long)arg1;
- (void)connectionDidReceiveHeartbeat:(id)arg1;
- (void)connection:(id)arg1 didReceiveText:(id)arg2 atTime:(id)arg3;
- (void)connection:(id)arg1 willOpenInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didConnect:(long long)arg2;
- (void)connection:(id)arg1 socketActivity:(long long)arg2;
- (void)connection:(id)arg1 didSocketIOConnect:(id)arg2;
- (void)webService:(id)arg1 didFailWithError:(id)arg2 forRequestWithTag:(unsigned long long)arg3;
- (void)webService:(id)arg1 didReceiveObject:(id)arg2 forRequestWithTag:(unsigned long long)arg3;
- (void)registerForTrouterNotifications;
- (id)cookieWithSkypeToken:(id)arg1;
- (long long)currentUnixTime;
- (id)domain;
- (id)connectionRequestWithError:(id *)arg1;
- (id)authenticationRequestWithConnectionID:(id)arg1 skypeToken:(id)arg2 error:(id *)arg3;
- (void)endSetupBackgroundTaskIfNeeded;
- (void)startSetupBackgroundTaskIfNeeded;
- (double)backoff:(double)arg1;
- (id)currentDate;
- (id)friendlyStateName:(long long)arg1;
- (id)friendlyStateName;
- (void)next;
- (void)scheduleNext;
- (void)scheduleNextWithDelay:(double)arg1;
- (void)resetErrorCondition;
- (void)cancelNext;
- (void)connectionSetupHealthCheck;
- (void)reconnectFromFailedStep;
- (void)recoverConnection;
- (void)failWithError:(id)arg1;
- (void)close;
- (void)send:(id)arg1;
- (void)sendPingWithTimeout:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)doFinalizeConnection;
- (void)doConnectTrouterInstance;
- (void)doAuthTrouterInstance;
- (void)doAllocateTrouterInstance;
- (void)forceFullReconnect;
- (void)start;
- (void)setupWithCompletion:(CDUnknownBlockType)arg1;
- (id)initAndInjectStreamFactory:(id)arg1 injectDispatcher:(id)arg2 injectPushNotificationRegistrar:(id)arg3 injectPushNotificationHandler:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
