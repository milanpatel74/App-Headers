/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNViewPreviewingHandling;
@class FBUserSession, UITableView, NSMutableArray, MNLoadingView, MNContentSubscriptionPublishersFetcher, MNContentSubscriptionPublisherCellController, NSString;

@interface MNContentSubscriptionPublisherSelectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, FBClassProvidable> {

	id<FBProvider> _intentHandlerProvider;
	id<FBProvider> _threadNavigationCoordinatorProvider;
	FBUserSession* _session;
	UITableView* _tableView;
	NSMutableArray* _contentSubscriptionPublishers;
	MNLoadingView* _loadingView;
	MNLoadingView* _pagingLoadingView;
	MNContentSubscriptionPublishersFetcher* _publishersFetcher;
	MNContentSubscriptionPublisherCellController* _publisherCellController;
	id<MNViewPreviewingHandling> _viewPreviewingHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_registerForPreviewing;
-(void)_openThreadWithPublisher:(id)arg1 ;
-(void)_fetchPublishers;
-(id)_publisherAtIndexSafe:(long long)arg1 ;
-(void)_navigateToManageMessagesForPublisher:(id)arg1 ;
-(BOOL)_scrollViewIsScrolledToBottomWithBuffer:(double)arg1 ;
-(void)_fetchNextSubTopicsForPaging;
-(void)_configurePublisherCell:(id)arg1 withViewModel:(id)arg2 ;
-(void)_showPagingLoadingView;
-(void)_hidePagingLoadingView;
-(void)_updatePublishersByAddingPublishersInSet:(id)arg1 ;
-(void)_updatePublishersByReplacingPublisherSet:(id)arg1 ;
-(void)_showFullScreenLoadingView;
-(void)_hideFullScreenLoadingView;
-(void)_openManageMessagesViewForPublisher:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

