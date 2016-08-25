/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView;

@interface GADPushTransitionView : UIView {

	NSArray* _views;
	UIView* _clippingView;
	UIView* _currentView;
	unsigned long long _currentViewIndex;
	double _presentationDuration;
	double _animationDuration;
	long long _animationGroupIdentifier;

}

@property (nonatomic,readonly) long long animationGroupIdentifier;              //@synthesize animationGroupIdentifier=_animationGroupIdentifier - In the implementation block
-(void)setCurrentView:(id)arg1 ;
-(void)dispatchAnimation;
-(long long)animationGroupIdentifier;
-(void)setPresentationDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)animate;
-(void)commonInit;
-(void)setViews:(id)arg1 ;
@end
