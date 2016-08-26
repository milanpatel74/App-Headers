/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFeedAutoRefreshUsingStoryRankingTimeExperimentContext : FBExperimentContext {

	BOOL _enabled;
	double _delayAfterBackground;
	double _delayAfterHit;
	double _pollingTimer;
	double _pollingTimerLowerBound;

}

@property (nonatomic,readonly) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double delayAfterBackground;                //@synthesize delayAfterBackground=_delayAfterBackground - In the implementation block
@property (nonatomic,readonly) double delayAfterHit;                       //@synthesize delayAfterHit=_delayAfterHit - In the implementation block
@property (nonatomic,readonly) double pollingTimer;                        //@synthesize pollingTimer=_pollingTimer - In the implementation block
@property (nonatomic,readonly) double pollingTimerLowerBound;              //@synthesize pollingTimerLowerBound=_pollingTimerLowerBound - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)delayAfterBackground;
-(double)pollingTimer;
-(double)delayAfterHit;
-(double)pollingTimerLowerBound;
-(BOOL)enabled;
@end
