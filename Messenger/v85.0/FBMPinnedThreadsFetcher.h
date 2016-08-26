/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBServiceTransactionMutating, FBMPinnedThreadsFetcherDelegate;
@class FBUserSession, MNMessagingRegionHeaderHelper, NSString;

@interface FBMPinnedThreadsFetcher : NSObject <FBNetworkerRequestDelegate, FBClassProvidable> {

	FBUserSession* _userSession;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<FBServiceTransactionMutating> _graphQLFetchRequest;
	id<FBMPinnedThreadsFetcherDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureAndRunWithUpdateTime:(long long)arg1 delegate:(id)arg2 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 ;
-(void)_startGraphQLFetchWithUpdateTime:(long long)arg1 ;
-(void)_notifyNetworkMonitor;
-(void)_handleGraphQLFetchSuccessWithResponse:(id)arg1 ;
-(void)_handleSuccessfulFetchOfPinnedGroupInfos:(id)arg1 withUpdateTime:(long long)arg2 ;
-(void)cancel;
-(void)_didFailWithError:(id)arg1 ;
@end
