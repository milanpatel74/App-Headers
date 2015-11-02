/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/NSFetchedResultsControllerDelegate.h>

@class WADatabaseStatsTableViewHeader, UIBarButtonItem, WACircularProgressView, UIView, UILabel, NSMutableIndexSet, NSFetchedResultsController, NSString;

@interface WADatabaseStatsTableViewController : WATableViewController <NSFetchedResultsControllerDelegate> {

	BOOL _isLoading;
	WADatabaseStatsTableViewHeader* _headerView;
	UIBarButtonItem* _refreshButton;
	UIBarButtonItem* _spinnerItem;
	WACircularProgressView* _progressCircle;
	UIView* _progressView;
	UILabel* _progressLabel;
	NSMutableIndexSet* _expandedCells;
	NSFetchedResultsController* _fetchedResultsController;
	long long _sortMethod;
	double _expandedHeight;
	double _collapsedHeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)wa_fontSizeDidChange;
-(void)receivedRefreshUpdate:(id)arg1 ;
-(void)finishedRefreshing:(id)arg1 ;
-(void)sortMethodDidChange:(id)arg1 ;
-(void)startRefreshRecurring:(BOOL)arg1 ;
-(id)fetchedResultsController;
-(void)setHeaderLabelText;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)unhideAllSeparators;
-(void)controllerWillChangeContent:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)refreshButtonTapped:(id)arg1 ;
@end

