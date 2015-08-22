/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol ANInterstitialAdViewControllerDelegate;
@class UIView, UIButton, UIProgressView, UIColor, NSLayoutConstraint, ANMRAIDOrientationProperties, NSTimer, NSDate;

@interface ANInterstitialAdViewController : UIViewController {

	BOOL _useCustomClose;
	BOOL _viewed;
	BOOL _originalHiddenState;
	BOOL _dismissing;
	id<ANInterstitialAdViewControllerDelegate> _delegate;
	UIView* _contentView;
	UIButton* _closeButton;
	UIProgressView* _progressView;
	UIColor* _backgroundColor;
	long long _orientation;
	NSLayoutConstraint* _buttonTopToSuperviewConstraint;
	ANMRAIDOrientationProperties* _orientationProperties;
	NSTimer* _progressTimer;
	NSDate* _timerStartDate;

}

@property (assign,nonatomic,__weak) id<ANInterstitialAdViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * closeButton;                                           //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic,__weak) UIProgressView * progressView;                                    //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long orientation;                                                   //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * buttonTopToSuperviewConstraint;              //@synthesize buttonTopToSuperviewConstraint=_buttonTopToSuperviewConstraint - In the implementation block
@property (nonatomic,retain) ANMRAIDOrientationProperties * orientationProperties;                    //@synthesize orientationProperties=_orientationProperties - In the implementation block
@property (assign,nonatomic) BOOL useCustomClose;                                                     //@synthesize useCustomClose=_useCustomClose - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                                 //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) NSDate * timerStartDate;                                                 //@synthesize timerStartDate=_timerStartDate - In the implementation block
@property (assign,nonatomic) BOOL viewed;                                                             //@synthesize viewed=_viewed - In the implementation block
@property (assign,nonatomic) BOOL originalHiddenState;                                                //@synthesize originalHiddenState=_originalHiddenState - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                                     //@synthesize dismissing=_dismissing - In the implementation block
-(void)setUseCustomClose:(BOOL)arg1 ;
-(BOOL)useCustomClose;
-(void)closeAction:(id)arg1 ;
-(void)setOriginalHiddenState:(BOOL)arg1 ;
-(void)setupCloseButtonImageWithCustomClose:(BOOL)arg1 ;
-(BOOL)viewed;
-(void)startCountdownTimer;
-(void)stopCountdownTimer;
-(BOOL)originalHiddenState;
-(void)setTimerStartDate:(NSDate *)arg1 ;
-(void)progressTimerDidFire:(id)arg1 ;
-(NSDate *)timerStartDate;
-(NSLayoutConstraint *)buttonTopToSuperviewConstraint;
-(void)setButtonTopToSuperviewConstraint:(NSLayoutConstraint *)arg1 ;
-(ANMRAIDOrientationProperties *)orientationProperties;
-(void)setOrientationProperties:(ANMRAIDOrientationProperties *)arg1 ;
-(BOOL)isDismissing;
-(void)setDismissing:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<ANInterstitialAdViewControllerDelegate>)arg1 ;
-(id)init;
-(id<ANInterstitialAdViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(long long)orientation;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setViewed:(BOOL)arg1 ;
-(UIButton *)closeButton;
@end
