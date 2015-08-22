/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol FBMAppProperties, MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class FBMThreadStore, FBMessagingStoreDatabaseOpenedDelayer, FBMThreadSet, FBMPushLogger, NSObject, NSMutableSet, NSString;

@interface MNPushMessageThreadPreparationHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	FBMThreadStore* _threadStore;
	FBMessagingStoreDatabaseOpenedDelayer* _databaseOpenedDelayer;
	id<FBMAppProperties> _appProperties;
	id<MNAuthenticationManager> _authManager;
	FBMThreadSet* _threadSet;
	FBMPushLogger* _pushLogger;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;
	NSMutableSet* _pendingThreadFetchRequestIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_handleFetchedThreadSummary:(id)arg1 forAPNSMessage:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_fetchThreadForMessageWithThreadKey:(id)arg1 threadSummaryFetchCompletionBlock:(/*^block*/id)arg2 ;
-(void)_fetchThreadAfterMessagingStoreOpenedIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(void)_handleFetchedThreadSummary:(id)arg1 forSyncMessage:(id)arg2 ;
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 threadSummary:(id)arg2 ;
-(void)_handleSucceededThreadFetchRequest:(id)arg1 thread:(id)arg2 threadKey:(id)arg3 fetchedFromNetwork:(BOOL)arg4 threadSummaryFetchCompletionBlock:(/*^block*/id)arg5 ;
-(void)_handleFailedThreadFetchRequest:(id)arg1 error:(id)arg2 threadKey:(id)arg3 threadSummaryFetchCompletionBlock:(/*^block*/id)arg4 ;
-(void)_finishThreadFetchRequest:(id)arg1 threadSummary:(id)arg2 fetchedFromNetwork:(BOOL)arg3 threadSummaryFetchCompletionBlock:(/*^block*/id)arg4 ;
-(id)initWithThreadStore:(id)arg1 databaseOpenedDelayer:(id)arg2 appProperties:(id)arg3 authManager:(id)arg4 threadSet:(id)arg5 pushLogger:(id)arg6 queue:(id)arg7 ;
@end
