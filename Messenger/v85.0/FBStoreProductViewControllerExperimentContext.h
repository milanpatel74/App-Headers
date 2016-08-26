/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBStoreProductViewControllerExperimentContext : FBExperimentContext {

	BOOL _inExperiment;
	int _numberOfAttempts;
	double _delayBetweenAttempts;
	double _timeoutAfterDelay;

}

@property (nonatomic,readonly) BOOL inExperiment;                      //@synthesize inExperiment=_inExperiment - In the implementation block
@property (assign,nonatomic) int numberOfAttempts;                     //@synthesize numberOfAttempts=_numberOfAttempts - In the implementation block
@property (assign,nonatomic) double delayBetweenAttempts;              //@synthesize delayBetweenAttempts=_delayBetweenAttempts - In the implementation block
@property (assign,nonatomic) double timeoutAfterDelay;                 //@synthesize timeoutAfterDelay=_timeoutAfterDelay - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(void)setNumberOfAttempts:(int)arg1 ;
-(void)setDelayBetweenAttempts:(double)arg1 ;
-(void)setTimeoutAfterDelay:(double)arg1 ;
-(BOOL)inExperiment;
-(int)numberOfAttempts;
-(double)delayBetweenAttempts;
-(double)timeoutAfterDelay;
@end
