/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WAVideoScrubberPrecisionRangeSliderDelegate;
@class UIView;

@interface WAVideoScrubberPrecisionRangeSlider : UIView {

	float _lowerValue;
	float _upperValue;
	float _scaleFactor;
	BOOL _draggingLeftHandle;
	BOOL _draggingRightHandle;
	CGPoint _touchStartPoint;
	CGPoint _lastTouchPoint;
	float _valueBeforeDragging;
	float _valueDuringDragging;
	float _maximumDifference;
	float _centerValue;
	id<WAVideoScrubberPrecisionRangeSliderDelegate> _delegate;
	double _videoDurationInSeconds;
	double _horizontalInset;
	double _minimumHandleSeparation;

}

@property (nonatomic,readonly) float lowerValue;                                                           //@synthesize lowerValue=_lowerValue - In the implementation block
@property (nonatomic,readonly) float upperValue;                                                           //@synthesize upperValue=_upperValue - In the implementation block
@property (assign,nonatomic) float maximumDifference;                                                      //@synthesize maximumDifference=_maximumDifference - In the implementation block
@property (nonatomic,readonly) BOOL draggingLeftHandle;                                                    //@synthesize draggingLeftHandle=_draggingLeftHandle - In the implementation block
@property (nonatomic,readonly) BOOL draggingRightHandle;                                                   //@synthesize draggingRightHandle=_draggingRightHandle - In the implementation block
@property (assign,nonatomic,__weak) id<WAVideoScrubberPrecisionRangeSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float scaleFactor;                                                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) double videoDurationInSeconds;                                                //@synthesize videoDurationInSeconds=_videoDurationInSeconds - In the implementation block
@property (assign,nonatomic) double horizontalInset;                                                       //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (assign,nonatomic) double minimumHandleSeparation;                                               //@synthesize minimumHandleSeparation=_minimumHandleSeparation - In the implementation block
@property (nonatomic,readonly) float centerValue;                                                          //@synthesize centerValue=_centerValue - In the implementation block
@property (nonatomic,readonly) UIView * leftHandleView; 
@property (nonatomic,readonly) UIView * rightHandleView; 
-(void)setHorizontalInset:(double)arg1 ;
-(void)setMinimumHandleSeparation:(double)arg1 ;
-(double)horizontalOffsetForValue:(float)arg1 ;
-(double)videoDurationInSeconds;
-(void)didChangeRange;
-(float)lowerValue;
-(float)upperValue;
-(void)didBeginDragging;
-(void)didEndDragging;
-(void)getFramesForLeftHandle:(CGRect*)arg1 atPosition:(double)arg2 rightHandle:(CGRect*)arg3 atPosition:(double)arg4 leftMostVisiblePosition:(double)arg5 rightMostVisiblePosition:(double)arg6 ;
-(float)minimumRangeWidth;
-(UIView *)leftHandleView;
-(UIView *)rightHandleView;
-(BOOL)shouldBeginDraggingWithTouch:(id)arg1 ;
-(void)setVideoDurationInSeconds:(double)arg1 ;
-(void)setLowerValue:(float)arg1 upperValue:(float)arg2 ;
-(void)setMaximumDifference:(float)arg1 ;
-(BOOL)draggingLeftHandle;
-(BOOL)draggingRightHandle;
-(void)changeScaleFactorTo:(float)arg1 centeredAt:(float)arg2 animationDuration:(double)arg3 ;
-(void)increaseScaleFactorAfterDelay;
-(double)minimumHandleSeparation;
-(float)maximumDifference;
-(void)cancelIncreaseScaleFactorAfterDelay;
-(void)finishDragging;
-(void)revertScaleFactorIfNeeded;
-(void)prepareToIncreaseScaleFactor;
-(void)increaseScaleFactor;
-(float)expandedScaleFactor;
-(void)internalChangeScaleFactorTo:(float)arg1 animated:(BOOL)arg2 ;
-(float)centerValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAVideoScrubberPrecisionRangeSliderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WAVideoScrubberPrecisionRangeSliderDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(float)scaleFactor;
-(double)horizontalInset;
@end
