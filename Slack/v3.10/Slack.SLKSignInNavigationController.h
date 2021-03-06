/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface Slack.SLKSignInNavigationController : UINavigationController {

	 slk_delegate;
	 nextButtonItem;
	 rightLabelTrailingInset;
	 enabledNextButton;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack37SLKSignInNavigationControllerDelegate_> slk_delegate; 
@property (readonly,nonatomic) double rightLabelTrailingInset; 
@property (assign,nonatomic) BOOL enabledNextButton; 
-(void)addCloseButton;
-(void)back;
-(id<_TtP5Slack37SLKSignInNavigationControllerDelegate_>)slk_delegate;
-(void)setSlk_delegate:(id<_TtP5Slack37SLKSignInNavigationControllerDelegate_>)arg1 ;
-(double)rightLabelTrailingInset;
-(void)addCloseButtonWithColor:(id)arg1 ;
-(void)addBackButton;
-(void)addBackButton:(id)arg1 ;
-(void)addNextButton;
-(BOOL)enabledNextButton;
-(void)setEnabledNextButton:(BOOL)arg1 ;
-(void)next;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)close;
-(void)applicationDidEnterBackground;
@end

