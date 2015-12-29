//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedCapturerListener.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SCBatteryLoggerTimerItem;

@interface SCBatteryLogger : NSObject <SCManagedCapturerListener>
{
    NSDictionary *_viewTimers;
    NSDictionary *_networkTimers;
    SCBatteryLoggerTimerItem *_cameraOnTimer;
    NSMutableDictionary *_allTimers;
    NSObject<OS_dispatch_source> *_batteryLevelTimer;
    NSObject<OS_dispatch_queue> *_batteryLoggerQueue;
    _Bool _isLoggingTrueDrop;
    float _batteryLevel;
    id <SCPerforming> _queuePerformer;
    long long _batteryState;
    NSMutableArray *_performanceEvents;
}

+ (id)shared;
@property(nonatomic) _Bool isLoggingTrueDrop; // @synthesize isLoggingTrueDrop=_isLoggingTrueDrop;
@property(retain, nonatomic) NSMutableArray *performanceEvents; // @synthesize performanceEvents=_performanceEvents;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void).cxx_destruct;
- (void)endTrackingViewItem:(id)arg1 timeStamp:(double)arg2;
- (void)startTrackingViewItem:(id)arg1 timeStamp:(double)arg2;
- (id)getViewItemFromPageViewName:(id)arg1;
- (void)managedCapturer:(id)arg1 didStopRunning:(id)arg2;
- (void)managedCapturer:(id)arg1 didStartRunning:(id)arg2;
- (void)networkConnectivityChanged:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)pause;
- (void)resume;
- (id)buildLoggingParamsWithStartBatteryLevel:(float)arg1 endBatteryLevel:(float)arg2 timeStamp:(double)arg3;
- (void)batteryLevelChanged;
- (void)batteryStateChanged;
- (id)_createBatteryLevelObservingTimer;
- (void)addPerformanceEvent:(id)arg1;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)startLoggingSessionIfNeeded;
- (_Bool)shouldLogThisSession;
- (id)createTimerItemWithName:(id)arg1;
- (void)dealloc;
- (void)_tearDownNetworkAndStateObservations;
- (void)_setUpNetworkAndStateObservations;
- (void)_tearDownBatteryObservations;
- (void)_setUpBatteryObservations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

