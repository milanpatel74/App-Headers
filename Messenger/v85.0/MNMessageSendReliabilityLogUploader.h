/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClock;
@class NSMutableArray, FBAnalytics;

@interface MNMessageSendReliabilityLogUploader : NSObject {

	NSMutableArray* _logBuffer;
	id<FBClock> _clock;
	FBAnalytics* _analytics;

}
-(id)initWithClock:(id)arg1 analytics:(id)arg2 ;
-(void)_addLogEntry:(id)arg1 sendHistory:(id)arg2 withOutcome:(long long)arg3 ;
-(void)addLogEntry:(id)arg1 sendHistory:(id)arg2 outcome:(long long)arg3 forceUpload:(BOOL)arg4 ;
-(void)_uploadLog;
-(void)uploadAllLogs;
-(void)_uploadLogsIfNeeded;
@end
