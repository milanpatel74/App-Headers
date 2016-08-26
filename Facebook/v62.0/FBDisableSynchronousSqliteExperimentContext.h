/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBDisableSynchronousSqliteExperimentContext : FBExperimentContext {

	BOOL _value;
	BOOL _startupReset;
	long long _trigger;
	long long _oldTrigger;

}

@property (nonatomic,readonly) BOOL value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long trigger;                 //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) long long oldTrigger;              //@synthesize oldTrigger=_oldTrigger - In the implementation block
@property (nonatomic,readonly) BOOL startupReset;                 //@synthesize startupReset=_startupReset - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)oldTrigger;
-(BOOL)startupReset;
-(BOOL)value;
-(long long)trigger;
@end
