/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol AdMarvelDelegate, AdMarvelFullScreenDelegate;
@class NSObject, UIView;

@interface AdMarvelFullScreenController : UIViewController {

	NSObject*<AdMarvelDelegate> adMarvelDelegate;
	NSObject*<AdMarvelFullScreenDelegate> adMarvelFullScreenDelegate;
	UIView* mainView;
	BOOL startingStatusBarHidden;
	BOOL disableRotations;
	int orientationToLock;
	BOOL maximizing;
	BOOL minimizing;
	BOOL closeAppWhenMaximized;
	UIView* _mainView;

}

@property (nonatomic,retain) UIView * mainView;              //@synthesize mainView=_mainView - In the implementation block
-(void)setAdMarvelDelegate:(id)arg1 ;
-(void)setMainView:(UIView *)arg1 ;
-(void)setAdMarvelFullScreenDelegate:(id)arg1 ;
-(UIView *)mainView;
-(void)minimizeAnimated:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 fullScreenDelegate:(id)arg2 ;
-(BOOL)getDisableRotation;
-(void)setDisableRotation:(BOOL)arg1 ;
-(void)setDisableRotation:(BOOL)arg1 withOrientationToLock:(int)arg2 ;
-(void)setFullScreenView:(id)arg1 ;
-(id)getFullScreenWebView;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)minimize;
-(BOOL)maximize;
@end
