/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol InAppNotificationContainerViewDelegate, InAppNotificationContentView;
@class UIView, UIButton, UITapGestureRecognizer, NSTimer, NSString;

@interface InAppNotificationContainerView : UIView <UIGestureRecognizerDelegate> {

	UIView* _slidingView;
	UIButton* _closeButton;
	double _upY;
	double _downY;
	double _lastStatusBarHeight;
	BOOL _isShowing;
	UITapGestureRecognizer* _singleTap;
	id<InAppNotificationContainerViewDelegate> _delegate;
	UIView*<InAppNotificationContentView> _contentView;
	double _height;
	NSTimer* _timer;
	NSTimer* _statusBarPollTimer;

}

@property (assign,nonatomic) double height;                                                           //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSTimer * statusBarPollTimer;                                            //@synthesize statusBarPollTimer=_statusBarPollTimer - In the implementation block
@property (assign,nonatomic,__weak) id<InAppNotificationContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<InAppNotificationContentView> contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateTimers;
-(void)setAnchorPoint:(CGPoint)arg1 forView:(id)arg2 ;
-(void)closePressed:(id)arg1 ;
-(void)applyTransform;
-(void)scheduleDismissAfterDelay:(double)arg1 ;
-(void)slideOut;
-(void)checkStatusBarHeight;
-(void)setStatusBarPollTimer:(NSTimer *)arg1 ;
-(void)showInView:(id)arg1 dismissalDelayInSeconds:(double)arg2 ;
-(void)slideInView:(id)arg1 dismissalDelayInSeconds:(double)arg2 ;
-(NSTimer *)statusBarPollTimer;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<InAppNotificationContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<InAppNotificationContainerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIView*<InAppNotificationContentView>)contentView;
-(void)setContentView:(UIView*<InAppNotificationContentView>)arg1 ;
-(double)height;
-(void)showInView:(id)arg1 ;
-(void)handleSingleTap:(id)arg1 ;
-(void)fadeOut;
-(void)didRotate:(id)arg1 ;
-(void)updateFrame;
-(void)setHeight:(double)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)removeFromView;
@end
