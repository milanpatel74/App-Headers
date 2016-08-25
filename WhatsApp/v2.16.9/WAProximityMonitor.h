/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAProximityMonitor : NSObject {

	int _refCount;
	BOOL _checkedForProximitySensor;
	BOOL _canMonitor;

}

@property (nonatomic,readonly) BOOL canMonitor;              //@synthesize canMonitor=_canMonitor - In the implementation block
+(id)sharedMonitor;
-(BOOL)canMonitor;
-(void)endMonitoring;
-(void)beginMonitoring;
@end
