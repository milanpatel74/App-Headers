/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class FBUserSession, FBNuxCoordinator, NSArray;

@interface FBNuxQPPromotionListViewController : UITableViewController {

	FBUserSession* _session;
	FBNuxCoordinator* _nuxCoordinator;
	NSArray* _nuxPresenters;

}
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(id)_nuxPresentersFromConfigurationProfile:(id)arg1 ;
-(id)_promotionsForSection:(long long)arg1 ;
-(id)_promotionForIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)initWithSession:(id)arg1 ;
@end
