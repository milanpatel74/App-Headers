/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface FBFloatingViewContainingViewController : UIViewController {

	/*^block*/id _viewFrameBlock;
	BOOL _shouldInvokeDismissBlockBeforeRemovingFromParentViewController;
	BOOL _isBeingRemovedFromParent;
	UIViewController* _presentedFloatingViewController;
	/*^block*/id _onPresentBlock;
	/*^block*/id _onDismissBlock;

}

@property (nonatomic,readonly) UIViewController * presentedFloatingViewController;                             //@synthesize presentedFloatingViewController=_presentedFloatingViewController - In the implementation block
@property (nonatomic,copy) id onPresentBlock;                                                                  //@synthesize onPresentBlock=_onPresentBlock - In the implementation block
@property (nonatomic,copy) id onDismissBlock;                                                                  //@synthesize onDismissBlock=_onDismissBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldInvokeDismissBlockBeforeRemovingFromParentViewController;              //@synthesize shouldInvokeDismissBlockBeforeRemovingFromParentViewController=_shouldInvokeDismissBlockBeforeRemovingFromParentViewController - In the implementation block
@property (nonatomic,readonly) BOOL isBeingRemovedFromParent;                                                  //@synthesize isBeingRemovedFromParent=_isBeingRemovedFromParent - In the implementation block
+(id)floatingViewContainingViewControllerForViewController:(id)arg1 ;
-(id)analyticsPresentedViewController;
-(void)setShouldInvokeDismissBlockBeforeRemovingFromParentViewController:(BOOL)arg1 ;
-(UIViewController *)presentedFloatingViewController;
-(BOOL)shouldInvokeDismissBlockBeforeRemovingFromParentViewController;
-(void)_invokeDismissBlock;
-(void)_invokePresentBlock;
-(id)onPresentBlock;
-(id)onDismissBlock;
-(id)initWithFloatingViewController:(id)arg1 viewFrameBlock:(/*^block*/id)arg2 ;
-(void)setOnPresentBlock:(id)arg1 ;
-(void)setOnDismissBlock:(id)arg1 ;
-(BOOL)isBeingRemovedFromParent;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end
