/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/SBMomentsAppPromotionViewControllerDelegate.h>

@class FBUserSession, FBSegmentedContainerViewController, SBMomentsAppDataSource, SBMomentsAppInfo, FBKVOController, SBMomentsAppSegueView, NSString;

@interface SBMomentsAppSegueViewController : UIViewController <SBMomentsAppPromotionViewControllerDelegate> {

	FBUserSession* _session;
	FBSegmentedContainerViewController* _segmentedContainerVC;
	SBMomentsAppDataSource* _momentsAppDataSource;
	SBMomentsAppInfo* _momentsAppInfo;
	FBKVOController* _kvoController;
	BOOL _hasShownInterstitial;
	SBMomentsAppSegueView* _segueView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 segmentedContainerVC:(id)arg2 ;
-(void)_dataSourceChanged;
-(void)_configureViewFromProps;
-(void)_configureTitleFromProps:(id)arg1 ;
-(void)_ensureSegueView;
-(void)_didTapSegueAction:(id)arg1 ;
-(id)_viewStateForLogging;
-(void)momentsAppPromotionViewControllerDidFinish:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

