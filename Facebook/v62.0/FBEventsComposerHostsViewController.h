/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol UITableViewDataSource, FBEventsComposerHostsViewControllerDelegate;
@class NSIndexPath, UITableView, NSString;

@interface FBEventsComposerHostsViewController : UIViewController <UITableViewDelegate> {

	NSIndexPath* _pickedIndexPath;
	UITableView* _tableView;
	id<UITableViewDataSource> _dataSource;
	id<FBEventsComposerHostsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventsComposerHostsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectCancelButton:(id)arg1 ;
-(void)pickedIndexPath:(id)arg1 ;
-(id)pickedIndexPath;
-(void)setDelegate:(id<FBEventsComposerHostsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<FBEventsComposerHostsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)initWithDataSource:(id)arg1 ;
@end
