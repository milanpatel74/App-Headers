/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBComposerPostPostRainExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _enableForMinutiae;
	unsigned long long _maximumTimeToWait;
	NSString* _eligibleObjectIDs;
	unsigned long long _minimumParticles;
	unsigned long long _particleAmountVariance;
	double _minimumTimeToAnimate;
	double _maximumTimeToAnimate;

}

@property (nonatomic,readonly) BOOL enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL enableForMinutiae;                                 //@synthesize enableForMinutiae=_enableForMinutiae - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumTimeToWait;                   //@synthesize maximumTimeToWait=_maximumTimeToWait - In the implementation block
@property (nonatomic,copy,readonly) NSString * eligibleObjectIDs;                      //@synthesize eligibleObjectIDs=_eligibleObjectIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumParticles;                    //@synthesize minimumParticles=_minimumParticles - In the implementation block
@property (nonatomic,readonly) unsigned long long particleAmountVariance;              //@synthesize particleAmountVariance=_particleAmountVariance - In the implementation block
@property (nonatomic,readonly) double minimumTimeToAnimate;                            //@synthesize minimumTimeToAnimate=_minimumTimeToAnimate - In the implementation block
@property (nonatomic,readonly) double maximumTimeToAnimate;                            //@synthesize maximumTimeToAnimate=_maximumTimeToAnimate - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enableForMinutiae;
-(unsigned long long)maximumTimeToWait;
-(NSString *)eligibleObjectIDs;
-(unsigned long long)minimumParticles;
-(unsigned long long)particleAmountVariance;
-(double)minimumTimeToAnimate;
-(double)maximumTimeToAnimate;
-(BOOL)enabled;
@end

