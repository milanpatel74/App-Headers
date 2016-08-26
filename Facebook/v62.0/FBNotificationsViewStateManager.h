/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSyncManagerListener.h>
#import <Facebook/FBStreamListViewStateManagerDelegate.h>

@protocol FBNotificationsSyncManagerProtocol, FBNotificationsViewStateManagerDelegate;
@class FBPullToRefreshView, FBStreamListViewStateManager, NSString;

@interface FBNotificationsViewStateManager : NSObject <FBNotificationsSyncManagerListener, FBStreamListViewStateManagerDelegate> {

	id<FBNotificationsSyncManagerProtocol> _notificationsSyncManager;
	FBPullToRefreshView* _pullToRefreshView;
	FBStreamListViewStateManager* _viewStateManager;
	id<FBNotificationsViewStateManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNotificationsViewStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(void)notificationsSyncManagerFinishedInitializing:(id)arg1 ;
-(void)viewStateManagerDidTriggerReload:(id)arg1 ;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 notificationsSyncManager:(id)arg3 ;
-(void)setDelegate:(id<FBNotificationsViewStateManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNotificationsViewStateManagerDelegate>)delegate;
-(long long)state;
-(void)_updateViewState;
@end
