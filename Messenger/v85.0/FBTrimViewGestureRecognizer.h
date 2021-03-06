/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class FBTimer;

@interface FBTrimViewGestureRecognizer : UIGestureRecognizer {

	BOOL _touchStartPointDefined;
	CGPoint _touchStartPoint;
	FBTimer* _longPressTimer;
	double _lastMovedTime;
	BOOL _didLongPressOccur;
	double _minimumPressDuration;

}

@property (assign,nonatomic) double minimumPressDuration;              //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (nonatomic,readonly) BOOL didLongPressOccur;                 //@synthesize didLongPressOccur=_didLongPressOccur - In the implementation block
-(BOOL)didLongPressOccur;
-(void)_longPressTimerCallback;
-(id)_coordinateView;
-(void)_didRecognizeLongPress;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
@end

