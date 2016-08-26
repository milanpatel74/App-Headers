/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIPanGestureRecognizer, UIView;

@interface FBPanTargetOffsetCalculator : NSObject {

	CGPoint _oldVelocity;
	CGPoint _lastVelocity;
	CGPoint _oldLocation;
	CGPoint _lastDistance;
	BOOL _hasHistoricalData;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIView* _referenceView;
	double _decelerationRate;

}

@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * referenceView;                                     //@synthesize referenceView=_referenceView - In the implementation block
@property (assign,nonatomic) double decelerationRate;                                      //@synthesize decelerationRate=_decelerationRate - In the implementation block
-(void)updateRunningValues;
-(void)resetRunningCalculations;
-(CGPoint)weightedEscapeVelocity;
-(id)initWithPanGestureRecognizer:(id)arg1 referenceView:(id)arg2 ;
-(CGPoint)targetDistanceAfterDecelleration;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(double)decelerationRate;
-(void)setDecelerationRate:(double)arg1 ;
-(UIView *)referenceView;
@end
