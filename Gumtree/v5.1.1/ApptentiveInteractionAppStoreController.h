/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class ApptentiveInteraction, UIViewController, NSString;

@interface ApptentiveInteractionAppStoreController : NSObject <SKStoreProductViewControllerDelegate, UIAlertViewDelegate> {

	ApptentiveInteraction* _interaction;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) ApptentiveInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openAppStoreToRateApp;
-(void)openAppStoreViaURL;
-(void)openAppStoreViaStoreKit;
-(void)openMacAppStore;
-(void)legacyOpenAppStoreToRateApp;
-(BOOL)shouldOpenAppStoreViaStoreKit;
-(id)legacyURLForRatingApp;
-(id)URLForRatingApp;
-(void)showUnableToOpenAppStoreDialog;
-(id)initWithInteraction:(id)arg1 ;
-(void)openAppStoreFromViewController:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(ApptentiveInteraction *)interaction;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)appID;
@end
