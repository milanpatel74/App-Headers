/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBPaymentsPurchaseInfoViewControlling.h>

@class FBPaymentsCheckoutExtensionManager, FBPaymentsPurchaseInfoExtensionController, FBUserSession, NSArray, NSString;

@interface FBPaymentsPurchaseInfoTableViewController : UITableViewController <FBPaymentsPurchaseInfoViewControlling> {

	FBPaymentsCheckoutExtensionManager* _checkoutExtensionManager;
	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtnesionController;
	FBUserSession* _session;
	NSArray* _displayedExtensions;
	BOOL _hasExtensionsFinishedInitialLoading;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 extensionManager:(id)arg2 purchaseInfoExtensionController:(id)arg3 ;
-(void)reloadDataFromExtensions;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end
