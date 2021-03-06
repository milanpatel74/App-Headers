/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCORTaskExecutor, SCORConfiguration, SCORCore;

@interface SCORAnalytics : NSObject {

	SCORTaskExecutor* _taskExecutor;
	SCORConfiguration* _configuration;
	SCORCore* _core;

}

@property (readonly) SCORTaskExecutor * taskExecutor;                //@synthesize taskExecutor=_taskExecutor - In the implementation block
@property (readonly) SCORConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) SCORCore * core;                                //@synthesize core=_core - In the implementation block
+(void)updateUsageProperties;
+(id)trackingProperties;
+(id)vceVersion;
+(id)sharedVCEInstance;
+(void)notifyViewEvent;
+(void)notifyViewEventWithEventInfo:(id)arg1 ;
+(void)notifyViewEventWithLabels:(id)arg1 ;
+(void)notifyHiddenEvent;
+(void)notifyHiddenEventWithEventInfo:(id)arg1 ;
+(void)notifyHiddenEventWithLabels:(id)arg1 ;
+(void)aggregateWithLabels:(id)arg1 ;
+(void)aggregateWithEventInfo:(id)arg1 ;
+(void)notifyUserInteraction;
+(void)notifyUxActive;
+(void)notifyUxInactive;
+(void)notifyEnterForeground;
+(void)notifyExitForeground;
+(void)crossPublisherIdWithBlock:(/*^block*/id)arg1 ;
+(long long)logLevel;
+(void)setLogLevel:(long long)arg1 ;
+(void)start;
+(id)configuration;
+(id)version;
+(void)flushOfflineCache;
+(id)instance;
-(SCORTaskExecutor *)taskExecutor;
-(SCORCore *)core;
-(id)init;
-(unsigned long long)hash;
-(SCORConfiguration *)configuration;
@end

