/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <WhatsApp/NSFetchedResultsControllerDelegate.h>

@class UIRefreshControl, UIView, UIBarButtonItem, NSArray, UITableViewCell, NSFetchedResultsController, NSMutableArray, NSTimer, WADropDownAlertView, UITableView, UIImageView, UILabel, UIProgressView, NSString;

@interface FavoritesViewController : WATableViewController <UINavigationControllerDelegate, ABPeoplePickerNavigationControllerDelegate, NSFetchedResultsControllerDelegate> {

	UIRefreshControl* _refreshControl;
	UIView* _bgView;
	UIBarButtonItem* _barButtonAdd;
	UIBarButtonItem* _barButtonDeleteAll;
	NSArray* _searchResults;
	unsigned long long _numberOfGeneratedFavoritesToNotifyUser;
	UITableViewCell* _inviteCell;
	UITableViewCell* _favoritesCountCell;
	NSFetchedResultsController* _fetchedResultsController;
	NSMutableArray* _insertedFavorites;
	BOOL _ignoreChangeNotifications;
	BOOL _animateChanges;
	BOOL _needsInitialLayout;
	BOOL _refreshingFavoritesInProgress;
	NSTimer* _progressBarTimer;
	double _estimatedLoadTime;
	long long _addressBookContactCount;
	WADropDownAlertView* _retryLaterAlertView;
	UITableView* _tableViewFavorites;
	UITableView* _tableViewButtons;
	UIImageView* _imageNoFavorites;
	UIView* _viewNoFavorites;
	UIView* _progressViewContainer;
	UILabel* _progressViewLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,retain) UITableView * tableViewFavorites;                  //@synthesize tableViewFavorites=_tableViewFavorites - In the implementation block
@property (nonatomic,retain) UITableView * tableViewButtons;                    //@synthesize tableViewButtons=_tableViewButtons - In the implementation block
@property (nonatomic,retain) UIImageView * imageNoFavorites;                    //@synthesize imageNoFavorites=_imageNoFavorites - In the implementation block
@property (nonatomic,retain) UIView * viewNoFavorites;                          //@synthesize viewNoFavorites=_viewNoFavorites - In the implementation block
@property (nonatomic,retain) UIView * progressViewContainer;                    //@synthesize progressViewContainer=_progressViewContainer - In the implementation block
@property (assign,nonatomic,__weak) UILabel * progressViewLabel;                //@synthesize progressViewLabel=_progressViewLabel - In the implementation block
@property (assign,nonatomic,__weak) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) unsigned long long favoritesCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactsStorageWillReloadAddressBook:(id)arg1 ;
-(void)contactsStorageDidGenerateFavorites:(id)arg1 ;
-(void)contactsStorageDidFailToGenerateFavorites:(id)arg1 ;
-(void)syncManagerDidFinishSync:(id)arg1 ;
-(void)reloadFavoriteCountLabel;
-(UITableView *)tableViewFavorites;
-(UITableView *)tableViewButtons;
-(void)relayoutEmptyTableView;
-(UIView *)viewNoFavorites;
-(void)inviteContacts;
-(void)updateInterfaceAnimated:(BOOL)arg1 ;
-(void)refreshFavorites;
-(void)hideRefreshFailedError;
-(void)faultInAllFavorites;
-(void)saveTableScrollPosition;
-(void)cleanUpAfterLoadingFavorites;
-(void)notifyUserAfterGeneratingFavorites:(long long)arg1 ;
-(UIView *)progressViewContainer;
-(void)stopUpdatingProgressBarIfNeeded;
-(BOOL)isProgressViewHidden;
-(void)startUpdatingProgressBarIfNeeded;
-(void)updateProgressBar:(id)arg1 ;
-(void)updateProgressBar;
-(void)showRefreshFailedError;
-(void)refreshControlAction:(id)arg1 ;
-(void)addNewFavoriteAction:(id)arg1 ;
-(void)deleteAllAction:(id)arg1 ;
-(UILabel *)progressViewLabel;
-(void)loadInitialFavorites;
-(void)restoreTableScrollPosition;
-(void)showProgressViewIfNeeded;
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(void)continueAfterSelectingPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)prefetchContactAndStatusRelationshipsForPhones:(id)arg1 ;
-(void)configureCell:(id)arg1 withFavorite:(id)arg2 ;
-(void)searchWithCriteria:(id)arg1 ;
-(void)wa_applicationDidEnterBackground;
-(void)leaveSearchMode;
-(void)setTableViewFavorites:(UITableView *)arg1 ;
-(void)setTableViewButtons:(UITableView *)arg1 ;
-(UIImageView *)imageNoFavorites;
-(void)setImageNoFavorites:(UIImageView *)arg1 ;
-(void)setViewNoFavorites:(UIView *)arg1 ;
-(void)setProgressViewContainer:(UIView *)arg1 ;
-(void)setProgressViewLabel:(UILabel *)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)stopLoading;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(unsigned long long)favoritesCount;
@end

