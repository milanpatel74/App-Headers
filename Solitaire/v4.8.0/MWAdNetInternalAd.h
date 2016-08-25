/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewController.h>
#import <SolitaireFree/SKToolkitDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIView, UIImageView, UIImage, NSString, MWAdNetController, UIViewController, UIButton, SKToolkit;

@interface MWAdNetInternalAd : UIViewController <SKToolkitDelegate, UIAlertViewDelegate> {

	UIView* containerView;
	UIImageView* adView;
	UIImage* imageMobilityWare;
	NSString* urlMobilityWare;
	NSString* urlKochava;
	int adNbr;
	MWAdNetController* controller;
	unsigned char loaded;
	UIViewController* main;
	unsigned char iPad;
	unsigned char showing;
	UIButton* dismissButton;
	unsigned char greystripe;
	UIView* mainView;
	SKToolkit* skToolkit;
	unsigned char restoreNavBar;
	unsigned char dismissed;
	unsigned char callbackNeeded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)trackKochavaURL:(id)arg1 ;
-(CGSize)getScreenSize;
-(CGRect)getScreenBounds;
-(unsigned char)iOS7;
-(void)loadOptions;
-(void)initMobilityWareAds;
-(void)dismissAction:(id)arg1 ;
-(unsigned char)loadAdImage;
-(void)positionControls;
-(void)launchMWFacebook;
-(void)handleScreenResize:(CGSize)arg1 ;
-(void)storeDismiss;
-(void)skToolkitAppStoreDismissed;
-(void)skToolkitQueryingAppStore;
-(void)skToolkitWillDisplayAppStore;
-(void)skToolkitFailedToDisplayWithError;
-(id)initWithAd:(id)arg1 main:(id)arg2 ;
-(unsigned char)displayAd;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)prime;
-(void)saveOptions;
@end
