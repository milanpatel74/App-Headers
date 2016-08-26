/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, FBNotificationsComponentDataSourceWrapper, FBComponentCollectionViewFlowLayoutDelegate;

@interface FBNotificationsComponentsSuspensionHelper : NSObject {

	UIView* _view;
	FBNotificationsComponentDataSourceWrapper* _dataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;

}
-(void)_disconnectView;
-(BOOL)_dataSourceSuspended;
-(void)_suspendDataSource;
-(void)_connectView;
-(void)_resumeDataSource;
-(id)initWithView:(id)arg1 componentDataSource:(id)arg2 flowLayoutDelegate:(id)arg3 ;
-(void)suspendUpdatesWithReason:(unsigned long long)arg1 ;
-(void)resumeUpdates;
@end
