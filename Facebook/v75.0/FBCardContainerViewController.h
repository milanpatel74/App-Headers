/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBModalContainerViewControllerDelegate.h>
#import <Facebook/FBModalContentViewController.h>
#import <Facebook/FBCardContentViewControllerDelegate.h>

@protocol FBCardContainerViewControllerDelegate;
@class UIViewController, UIView, UIScrollView, NSArray, FBUserSession, NSString;

@interface FBCardContainerViewController : UIViewController <FBModalContainerViewControllerDelegate, FBModalContentViewController, FBCardContentViewControllerDelegate> {

	UIViewController*<FBCardContainerViewControllerDelegate> _contentViewController;
	UIView* _backgroundView;
	CGRect _contentControllerInitialFrame;
	UIScrollView* _outerScrollView;
	UIScrollView* _innerScrollView;
	NSArray* _trackingCodes;
	double _scaleInCardView;
	FBUserSession* _session;
	unsigned long long _fullScreenModeChangedCount;
	BOOL _isContentControllerFullScreen;

}

@property (assign,nonatomic) BOOL isContentControllerFullScreen;                      //@synthesize isContentControllerFullScreen=_isContentControllerFullScreen - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissModalContainerViewController:(id)arg1 ;
-(void)closeButtonTapped;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)scrollViewForDismissingModalContainerViewController:(id)arg1 ;
-(BOOL)swipeGestureCanDismissModalContainerViewController:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)extrasWithTrackingCodes;
-(BOOL)isContentControllerFullScreen;
-(void)setIsContentControllerFullScreen:(BOOL)arg1 ;
-(void)relayout;
-(id)initWithContentController:(id)arg1 trackingCodes:(id)arg2 session:(id)arg3 ;
-(void)cardContentIsLoaded;
-(void)presentWithNavigationCoordinator:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end

