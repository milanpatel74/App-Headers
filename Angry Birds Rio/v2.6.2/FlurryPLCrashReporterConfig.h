/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FlurryPLCrashReporterConfig : NSObject {

	unsigned long long _signalHandlerType;
	unsigned long long _symbolicationStrategy;

}

@property (nonatomic,readonly) unsigned long long signalHandlerType;                  //@synthesize signalHandlerType=_signalHandlerType - In the implementation block
@property (nonatomic,readonly) unsigned long long symbolicationStrategy;              //@synthesize symbolicationStrategy=_symbolicationStrategy - In the implementation block
+(id)defaultConfiguration;
-(id)initWithSignalHandlerType:(unsigned long long)arg1 symbolicationStrategy:(unsigned long long)arg2 ;
-(unsigned long long)symbolicationStrategy;
-(unsigned long long)signalHandlerType;
-(id)init;
@end
