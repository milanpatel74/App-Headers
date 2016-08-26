/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGravityLogger : NSObject
+(id)sharedLogger;
-(void)logEvent:(id)arg1 withExtras:(id)arg2 ;
-(id)_defaultExtras;
-(id)_walltime;
-(id)_uptime;
-(void)_logEvent:(id)arg1 withExtras:(id)arg2 forToken:(id)arg3 ;
-(id)_timeForToken:(id)arg1 ;
-(id)_extrasForBLEBeacon:(id)arg1 ;
-(void)logIBeaconEvent:(id)arg1 withIBeacons:(id)arg2 ;
-(void)logScanAbort:(unsigned long long)arg1 forToken:(id)arg2 ;
-(void)logScanStartForToken:(id)arg1 ;
-(void)logScanEndForToken:(id)arg1 ;
@end
