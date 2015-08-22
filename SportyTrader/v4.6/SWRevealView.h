/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class SWRevealViewController, UIView;

@interface SWRevealView : UIView {

	SWRevealViewController* _c;
	BOOL _disableLayout;
	UIView* _rearView;
	UIView* _rightView;
	UIView* _frontView;

}

@property (nonatomic,readonly) UIView * rearView;               //@synthesize rearView=_rearView - In the implementation block
@property (nonatomic,readonly) UIView * rightView;              //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,readonly) UIView * frontView;              //@synthesize frontView=_frontView - In the implementation block
@property (assign,nonatomic) BOOL disableLayout;                //@synthesize disableLayout=_disableLayout - In the implementation block
-(double)frontLocationForPosition:(int)arg1 ;
-(void)_layoutRearViewsForLocation:(double)arg1 ;
-(CGRect)hierarchycalFrameAdjustment:(CGRect)arg1 ;
-(void)_prepareForNewPosition:(int)arg1 ;
-(double)_adjustedDragLocationForLocation:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(void)prepareRearViewForPosition:(int)arg1 ;
-(void)prepareRightViewForPosition:(int)arg1 ;
-(void)dragFrontViewToXLocation:(double)arg1 ;
-(UIView *)rearView;
-(BOOL)disableLayout;
-(void)setDisableLayout:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIView *)rightView;
-(UIView *)frontView;
@end
