/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>

@protocol FBAppInviteSettingsDelegate;
@class FBUserSession, UIImage, NSMutableDictionary;

@interface FBAppInviteSettingsTableViewController : FBTableViewController {

	FBUserSession* _session;
	UIImage* _manageBlockedList;
	UIImage* _friendNotifsIcon;
	NSMutableDictionary* _buttonsByIndexPath;
	unsigned long long _sectionCounts[2];
	id<FBAppInviteSettingsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAppInviteSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(BOOL)fb_showBackArrowButton;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)addButton:(id)arg1 toSection:(unsigned long long)arg2 ;
-(id)lookupCell:(id)arg1 ;
-(void)setDelegate:(id<FBAppInviteSettingsDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBAppInviteSettingsDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
