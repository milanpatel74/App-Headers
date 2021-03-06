/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMSSlideshowExperimentContext : FBExperimentContext {

	double _delayBetweenAnimations;
	double _delayBeforeFirstAnimation;
	double _animationDuration;

}

@property (assign,nonatomic) double delayBetweenAnimations;                 //@synthesize delayBetweenAnimations=_delayBetweenAnimations - In the implementation block
@property (assign,nonatomic) double delayBeforeFirstAnimation;              //@synthesize delayBeforeFirstAnimation=_delayBeforeFirstAnimation - In the implementation block
@property (assign,nonatomic) double animationDuration;                      //@synthesize animationDuration=_animationDuration - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)delayBeforeFirstAnimation;
-(double)delayBetweenAnimations;
-(void)setDelayBetweenAnimations:(double)arg1 ;
-(void)setDelayBeforeFirstAnimation:(double)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
@end

