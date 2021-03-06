/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface AFCustomFadeTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _askFromControllerToRefreshStatusBar;
	double _animationDuration;

}

@property (assign,nonatomic) double animationDuration;                              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL askFromControllerToRefreshStatusBar;              //@synthesize askFromControllerToRefreshStatusBar=_askFromControllerToRefreshStatusBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAskFromControllerToRefreshStatusBar:(BOOL)arg1 ;
-(BOOL)askFromControllerToRefreshStatusBar;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
@end

