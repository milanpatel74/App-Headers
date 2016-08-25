/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface MOPUBNativeVideoImpressionAgent : NSObject {

	BOOL _requirementsSatisfied;
	double _requiredVisiblePercentage;
	double _requiredPlaybackDuration;
	double _visibilitySatisfiedPlaybackTime;
	UIView* _measuredVideoView;

}

@property (assign,nonatomic) double requiredVisiblePercentage;                    //@synthesize requiredVisiblePercentage=_requiredVisiblePercentage - In the implementation block
@property (assign,nonatomic) double requiredPlaybackDuration;                     //@synthesize requiredPlaybackDuration=_requiredPlaybackDuration - In the implementation block
@property (assign,nonatomic) double visibilitySatisfiedPlaybackTime;              //@synthesize visibilitySatisfiedPlaybackTime=_visibilitySatisfiedPlaybackTime - In the implementation block
@property (assign,nonatomic,__weak) UIView * measuredVideoView;                   //@synthesize measuredVideoView=_measuredVideoView - In the implementation block
@property (assign,nonatomic) BOOL requirementsSatisfied;                          //@synthesize requirementsSatisfied=_requirementsSatisfied - In the implementation block
-(BOOL)shouldTrackImpressionWithCurrentPlaybackTime:(double)arg1 ;
-(id)initWithVideoView:(id)arg1 requiredVisibilityPercentage:(double)arg2 requiredPlaybackDuration:(double)arg3 ;
-(BOOL)requirementsSatisfied;
-(UIView *)measuredVideoView;
-(double)requiredVisiblePercentage;
-(double)visibilitySatisfiedPlaybackTime;
-(void)setVisibilitySatisfiedPlaybackTime:(double)arg1 ;
-(double)requiredPlaybackDuration;
-(void)setRequirementsSatisfied:(BOOL)arg1 ;
-(void)setRequiredVisiblePercentage:(double)arg1 ;
-(void)setRequiredPlaybackDuration:(double)arg1 ;
-(void)setMeasuredVideoView:(UIView *)arg1 ;
@end
