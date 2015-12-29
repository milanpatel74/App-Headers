//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"
#import "SCAPIURLSessionActivityTrackerDelegate.h"
#import "SCStudySettingsListener.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession, NSURLSessionConfiguration, SCAPISessionTaskBookkeeper, SCAPIURLSessionActivityTracker, SCTimeoutIntervalEstimator;

@interface SCAPIURLSession : NSObject <SCAPIURLSessionActivityTrackerDelegate, SCStudySettingsListener, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_taskInfoQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    _Bool _shouldRecreateSessionForeground;
    _Bool _shouldUseAdaptiveTimeoutInterval;
    double _minTimeoutIntervalUnderAdaptiveTimeout;
    SCTimeoutIntervalEstimator *_timeoutIntervalForFirstByteReceived;
    SCAPISessionTaskBookkeeper *_bookkeeper;
    double _lastSessionCreationTimeStamp;
    double _sessionRecreateProhibitInterval;
    SCAPIURLSessionActivityTracker *_activityTracker;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (double)timeoutInterval;
- (void)logTaskStarted:(id)arg1;
- (void)startNetworkTimeoutIntervalMonitorIfNeeded;
- (double)adaptiveTimeoutInterval;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeInfoForTask:(id)arg1;
- (void)setInfo:(id)arg1 forTask:(id)arg2;
- (id)getInfoForTask:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 requestInfo:(id)arg2;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (id)createSession;
- (void)useNewSessionWithReason:(id)arg1;
- (void)studySettingsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

