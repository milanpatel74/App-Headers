/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>

@class UIView, UILabel, NSTimer;

@interface WATabBarController : UITabBarController {

	UIView* _statusBarBackgroundView;
	UILabel* _inCallStatusBarLabel;
	NSTimer* _inCallStatusBarUpdateTimer;
	BOOL _callStatusBarHidden;

}

@property (assign,nonatomic) BOOL callStatusBarHidden;                    //@synthesize callStatusBarHidden=_callStatusBarHidden - In the implementation block
@property (nonatomic,readonly) double inCallStatusBarHeight; 
+(void)initialize;
-(void)setCallStatusBarHidden:(BOOL)arg1 ;
-(void)setCallStatusBarSnapshotMode:(BOOL)arg1 ;
-(BOOL)callStatusBarHidden;
-(double)inCallStatusBarHeight;
-(void)backupErrorBadgeUpdated:(id)arg1 ;
-(void)updateSettingsCount:(id)arg1 ;
-(void)statusBarTapped:(id)arg1 ;
-(void)startAnimatingCallStatusBar;
-(void)adjustViewForCallStatusBar8;
-(void)adjustViewForCallStatusBar7;
-(id)wrapperView;
-(void)stopAnimatingCallStatusBar;
-(void)updateInCallStatusBarTimer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)setViewControllers:(id)arg1 ;
@end
