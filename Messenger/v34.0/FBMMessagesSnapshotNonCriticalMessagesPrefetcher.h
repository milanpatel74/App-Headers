/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMessagesSnapshotNonCriticalNetworkFetching.h>

@protocol MNAuthenticationManager, FBMMessagesSnapshotNetworkFetchingDelegate;
@class FBMLocalThreadMessagesQuerier, FBMThreadDescriptorFactory, FBAnalytics, FBMThreadSet, FBMThreadStore, FBMFetchedThreadKeySet, NSNotificationCenter, NSString;

@interface FBMMessagesSnapshotNonCriticalMessagesPrefetcher : NSObject <FBClassProvidable, FBMMessagesSnapshotNonCriticalNetworkFetching> {

	FBMLocalThreadMessagesQuerier* _threadMessagesQuerier;
	FBMThreadDescriptorFactory* _threadDescriptorFactory;
	FBAnalytics* _analytics;
	FBMThreadSet* _threadSet;
	FBMThreadStore* _threadStore;
	FBMFetchedThreadKeySet* _fetchedThreadKeySet;
	id<MNAuthenticationManager> _authenticationManager;
	NSNotificationCenter* _notificationCenter;
	id<FBMMessagesSnapshotNetworkFetchingDelegate> _delegate;
	long long _threadStoreRequestId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadMessageQuery:(id)arg1 threadDescriptorFactory:(id)arg2 analytics:(id)arg3 threadStore:(id)arg4 notificationCenter:(id)arg5 threadSet:(id)arg6 fetchedThreadKeySet:(id)arg7 authenticationManager:(id)arg8 ;
-(id)_buildRequestFiltersSetWithNumThreads:(long long)arg1 maxThreadsToScan:(long long)arg2 ;
-(void)_handleThreadStoreSuccess:(id)arg1 ;
-(void)_handleThreadStoreFailureWithError:(id)arg1 ;
-(void)performNetworkFetchWithDelegate:(id)arg1 ;
-(void)cancel;
@end
