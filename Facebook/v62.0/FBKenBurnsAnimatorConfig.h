/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBKenBurnsAnimatorConfig : NSObject {

	double _transitionDuration;
	double _displayDuration;
	double _enlargeRatio;

}

@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double displayDuration;                 //@synthesize displayDuration=_displayDuration - In the implementation block
@property (assign,nonatomic) double enlargeRatio;                    //@synthesize enlargeRatio=_enlargeRatio - In the implementation block
+(id)configWithTransitionDuration:(double)arg1 displayDuration:(double)arg2 enlargeRatio:(double)arg3 ;
-(double)displayDuration;
-(double)enlargeRatio;
-(void)setDisplayDuration:(double)arg1 ;
-(void)setEnlargeRatio:(double)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
@end
