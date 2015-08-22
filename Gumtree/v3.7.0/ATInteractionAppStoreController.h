/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class ATInteraction, UIViewController, NSString;

@interface ATInteractionAppStoreController : NSObject <SKStoreProductViewControllerDelegate, UIAlertViewDelegate> {

	ATInteraction* _interaction;
	UIViewController* _viewController;

}

@property (nonatomic,retain,readonly) ATInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInteraction:(id)arg1 ;
-(void)openAppStoreFromViewController:(id)arg1 ;
-(void)openAppStoreToRateApp;
-(ATInteraction *)interaction;
-(void)openAppStoreViaURL;
-(void)openAppStoreViaStoreKit;
-(void)openMacAppStore;
-(void)legacyOpenAppStoreToRateApp;
-(BOOL)shouldOpenAppStoreViaStoreKit;
-(id)legacyURLForRatingApp;
-(id)URLForRatingApp;
-(void)showUnableToOpenAppStoreDialog;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)appID;
@end
