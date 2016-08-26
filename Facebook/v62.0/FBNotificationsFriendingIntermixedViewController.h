/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSectionHeaderHandler.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBInAppNotificationEligibilityProtocol.h>

@class FBUserSession, FBScenePath, FBNotificationsComponentDataSourceWrapper, NSArray, FBViewControllerAppearanceLifecycleListenerAnnouncer, FBIntermixedTabNotificationsLoggingHelper, FBIntermixedTabFriendRequestLoggingHelper, FBIntermixedTabPYMKLoggingHelper, UITableView, FBNotificationsFriendingIntermixedPullToRefreshManager, FBNotificationsFriendingIntermixedLoadingViewManager, FBNotificationsFriendingIntermixedNetworkErrorBannerManager, FBIntermixedTabFriendRequestPillManager, FBNotificationsFriendingTabSessionStateManager, FBNotificationsFriendingWorkingRangeManager, NSString;

@interface FBNotificationsFriendingIntermixedViewController : UIViewController <FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceSelectionEventListener, FBComponentScrollEventListener, FBInAppNotificationEligibilityProtocol> {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBNotificationsComponentDataSourceWrapper* _dataSource;
	NSArray* _adapters;
	FBViewControllerAppearanceLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	FBIntermixedTabNotificationsLoggingHelper* _notificationsLoggingHelper;
	FBIntermixedTabFriendRequestLoggingHelper* _friendRequestLoggingHelper;
	FBIntermixedTabPYMKLoggingHelper* _pymkLoggingHelper;
	UITableView* _tableView;
	FBNotificationsFriendingIntermixedPullToRefreshManager* _pullToRefreshManager;
	FBNotificationsFriendingIntermixedLoadingViewManager* _loadingViewManager;
	FBNotificationsFriendingIntermixedNetworkErrorBannerManager* _networkErrorBannerManager;
	FBIntermixedTabFriendRequestPillManager* _friendRequestPillManager;
	FBNotificationsFriendingTabSessionStateManager* _tabSessionStateManager;
	FBNotificationsFriendingWorkingRangeManager* _workingRangeManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataSource:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)dataSource:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNotificationsServiceConfiguration:(FBNotificationsServiceConfiguration)arg1 notificationsComponentsConfiguration:(FBNotificationsComponentsConfiguration)arg2 session:(id)arg3 ;
-(id)initWithNotificationsServiceConfiguration:(FBNotificationsServiceConfiguration)arg1 notificationsComponentsConfiguration:(FBNotificationsComponentsConfiguration)arg2 session:(id)arg3 analyticsModule:(id)arg4 viewAppearanceLifecycleAnnouncerFactory:(/*^block*/id)arg5 notificationsLoggingHelperFactory:(/*^block*/id)arg6 notificationsLoggingIndexPathResolverFactory:(/*^block*/id)arg7 notificationClickHandlerFactory:(/*^block*/id)arg8 notificationsComponentSelectionActionHandlerFactory:(/*^block*/id)arg9 notificationsComponentOptionRowActionHandlerFactory:(/*^block*/id)arg10 notificationsOptionSelectionHandlerFactory:(/*^block*/id)arg11 notificationsDrawerComponentActivityHandlerFactory:(/*^block*/id)arg12 notificationsDynamicExpansionChangeTriggerFactory:(/*^block*/id)arg13 notificationsTruncationLimitsProviderFactory:(/*^block*/id)arg14 notificationsChangeProviderFactory:(/*^block*/id)arg15 notificationsSeparatorStyleProviderFactory:(/*^block*/id)arg16 richNotificationsComponentProviderFactory:(/*^block*/id)arg17 notificationsReactionContextFactory:(/*^block*/id)arg18 componentContextFactory:(/*^block*/id)arg19 componentDataSourceFactory:(/*^block*/id)arg20 adaptersFactory:(/*^block*/id)arg21 intermixedTabNotificationsLoggingHelperFactory:(/*^block*/id)arg22 friendRequestLoggingHelperFactory:(/*^block*/id)arg23 pymkLoggingHelperFactory:(/*^block*/id)arg24 friendRequestPillManagerFactory:(/*^block*/id)arg25 workingRangeManagerFactory:(/*^block*/id)arg26 ;
-(void)_chainRespondingAdapters;
-(void)_chainAdaptersAsComponentsAppearanceListeners;
-(void)_unchainAdaptersAsComponentsAppearanceListeners;
-(BOOL)_isRespondingAdapter:(id)arg1 ;
-(id)_superNextResponder;
-(id)_adapterForSection:(long long)arg1 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(void)dealloc;
-(id)nextResponder;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
@end
