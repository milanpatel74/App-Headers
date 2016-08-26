/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBShakeWindowEventListener.h>

@class NSTimer, UIView, UILabel, UIImageView, UIButton, FBBugReportTouchesView, NSString;

@interface FBBugReportVideoRecorderView : UIView <FBShakeWindowEventListener> {

	NSTimer* _timeoutWindowTouchTimer;
	float _containerViewTouchesBeganY;
	float _containerViewCurrentY;
	float _containerViewPreviousY;
	UIView* _bodyBackground;
	UIView* _progressBarBackground;
	UIView* _progressBar;
	UILabel* _recordingLabel;
	UIImageView* _stopButtonImageView;
	float _secondsLeft;
	UIButton* _stopButton;
	FBBugReportTouchesView* _touchHostingView;
	UIView* _containerView;

}

@property (nonatomic,retain) UIButton * stopButton;                                  //@synthesize stopButton=_stopButton - In the implementation block
@property (nonatomic,retain) FBBugReportTouchesView * touchHostingView;              //@synthesize touchHostingView=_touchHostingView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                 //@synthesize containerView=_containerView - In the implementation block
@property (assign) float secondsLeft;                                                //@synthesize secondsLeft=_secondsLeft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSecondsLeft:(float)arg1 ;
-(FBBugReportTouchesView *)touchHostingView;
-(void)shakeWindow:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)setTouchHostingView:(FBBugReportTouchesView *)arg1 ;
-(float)secondsLeft;
-(id)init;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setStopButton:(UIButton *)arg1 ;
-(UIButton *)stopButton;
@end
