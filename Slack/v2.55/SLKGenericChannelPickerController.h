/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Slack/DZNEmptyDataSetSource.h>
#import <Slack/DZNEmptyDataSetDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Slack/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, UISearchBar, NSPredicate, NSString;

@interface SLKGenericChannelPickerController : UITableViewController <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, UISearchBarDelegate, NSFetchedResultsControllerDelegate> {

	BOOL _searching;
	BOOL _reloadFetchedResultsController;
	NSFetchedResultsController* _fetchedResultsController;
	UISearchBar* _searchBar;
	unsigned long long _channelType;
	NSPredicate* _fetchPredicate;
	double _keyboardHeight;

}

@property (nonatomic,readonly) unsigned long long channelType;                                   //@synthesize channelType=_channelType - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * fetchedResultsController;              //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                            //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;                                  //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic) BOOL reloadFetchedResultsController;                                //@synthesize reloadFetchedResultsController=_reloadFetchedResultsController - In the implementation block
@property (nonatomic,retain) NSPredicate * fetchPredicate;                                       //@synthesize fetchPredicate=_fetchPredicate - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                              //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)genericPredicateForChannelType:(unsigned long long)arg1 ;
+(void)startNewGenericChannel:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
+(void)startNewGenericChannel:(unsigned long long)arg1 andInviteUsers:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)genericPredicateForChannelType:(unsigned long long)arg1 withName:(id)arg2 ;
+(id)alertTitleForChannelType:(unsigned long long)arg1 ;
+(id)alertMessageForChannelType:(unsigned long long)arg1 ;
+(id)alertPlaceholderForChannelType:(unsigned long long)arg1 ;
+(void)createGenericChannel:(unsigned long long)arg1 withName:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cleanUpName:(id)arg1 ;
+(void)createChannel:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)createGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)descriptionForEmptyDataSet:(id)arg1 ;
-(id)imageForEmptyDataSet:(id)arg1 ;
-(id)backgroundColorForEmptyDataSet:(id)arg1 ;
-(double)verticalOffsetForEmptyDataSet:(id)arg1 ;
-(BOOL)emptyDataSetShouldDisplay:(id)arg1 ;
-(BOOL)emptyDataSetShouldAllowTouch:(id)arg1 ;
-(BOOL)emptyDataSetShouldAllowScroll:(id)arg1 ;
-(NSPredicate *)fetchPredicate;
-(NSFetchedResultsController *)fetchedResultsController;
-(id)fetchObjectIndexPath:(id)arg1 ;
-(void)setFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(void)setFetchPredicate:(NSPredicate *)arg1 ;
-(void)configureNavigationBar;
-(unsigned long long)channelType;
-(void)updateViewConstraintsWithKeyboardNotification:(id)arg1 ;
-(id)genericChannelAtIndexPath:(id)arg1 ;
-(id)initWithGenericChannelType:(unsigned long long)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)userAtIndexPath:(id)arg1 ;
-(void)openViewControllerWithGenericObject:(id)arg1 ;
-(void)openViewController:(id)arg1 ;
-(id)fetchSortDescriptors;
-(void)didPressCreateButton:(id)arg1 ;
-(void)setReloadFetchedResultsController:(BOOL)arg1 ;
-(void)didPressCancelButton:(id)arg1 ;
-(Class)fetchClass;
-(BOOL)reloadFetchedResultsController;
-(void)showInvitationForConvoAnimated:(BOOL)arg1 ;
-(void)shouldCreateGenericChannelAndOpen;
-(void)openViewControllerWithGenericChannel:(id)arg1 ;
-(double)appropriateCellHeight;
-(unsigned long long)fetchedResultsCount;
-(void)configureChannelCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)configureGroupCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)configureUserCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)appropriateChannelTypeName;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(id)channelAtIndexPath:(id)arg1 ;
-(id)groupAtIndexPath:(id)arg1 ;
-(void)openViewControllerWithName:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(BOOL)isSearching;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(id)title;
-(BOOL)shouldAutorotate;
-(long long)modalPresentationStyle;
-(id)leftBarButtonItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setSearching:(BOOL)arg1 ;
-(void)scrollToTop;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

