/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDeviceClock;
@class MNNetworkUsageTimeLogger, NSMutableArray;

@interface MNNetworkUsageTimeTracker : NSObject {

	MNNetworkUsageTimeLogger* _usageTimeLogger;
	id<FBDeviceClock> _deviceClock;
	double _fullPowerTimeSpent;
	double _standbyTimeSpent;
	long long _idleWakeupCount;
	double _fullPowerTimeSpentForAlert;
	long long _networkerRequestCount;
	long long _mqttRequestCount;
	double _trackerTimeStarted;
	NSMutableArray* _fullPowerIntervals;

}
-(void)didEnterForeground;
-(id)initWithDeviceClock:(id)arg1 usageTimeLogger:(id)arg2 ;
-(void)didSendMQTTPayload;
-(void)didEndNetworkActivityWithDuration:(double)arg1 requestName:(id)arg2 ;
-(void)_resetTracker;
-(void)_flushQueueForEventsUpToTime:(double)arg1 ;
-(double)_idleTimeSpent;
-(void)_didEndNetworkingWithDuration:(double)arg1 requestName:(id)arg2 requestType:(unsigned long long)arg3 ;
-(void)_removeLastTimeInterval;
-(void)_addTimeInterval:(id)arg1 ;
-(void)_removeFirstTimeInterval;
-(void)_triggerAlertIfNeeded;
-(void)didEnterBackground;
@end

