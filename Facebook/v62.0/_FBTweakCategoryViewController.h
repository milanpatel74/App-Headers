/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/MFMailComposeViewControllerDelegate.h>

@protocol _FBTweakCategoryViewControllerDelegate;
@class UITableView, UIToolbar, NSArray, FBTweakStore, NSString;

@interface _FBTweakCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate> {

	UITableView* _tableView;
	UIToolbar* _toolbar;
	NSArray* _sortedCategories;
	FBTweakStore* _store;
	id<_FBTweakCategoryViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBTweakStore * store;                                                  //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) id<_FBTweakCategoryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStore:(id)arg1 ;
-(FBTweakStore *)store;
-(void)setDelegate:(id<_FBTweakCategoryViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_FBTweakCategoryViewControllerDelegate>)delegate;
-(void)_reset;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)_done;
@end
