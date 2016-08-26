/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNFormHeaderViewDelegate;
@class UITapGestureRecognizer, NSString;

@interface MNFormHeaderView : UIView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _hideKeyboardRecognizer;
	unsigned long long _state;
	id<MNFormHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<MNFormHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionToState:(unsigned long long)arg1 animateWithDuration:(double)arg2 animationOptions:(unsigned long long)arg3 ;
-(void)setState:(unsigned long long)arg1 animateWithDuration:(double)arg2 andAnimationOptions:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNFormHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFormHeaderViewDelegate>)delegate;
-(unsigned long long)state;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)hideKeyboard;
@end
