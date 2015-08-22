/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBCancelable.h>
#import <Messenger/FBMDetachable.h>

@protocol MNAuthenticationManager, FBMBatchThreadCreatorListening;
@class FBUserSession, FBMessageAttachmentPreparer, FBMDetchedNetworkRequestsQueue, FBMFetchedThreadKeySet, MNSimpleSingleThreadFetcher, FBMSendEventLogger, MNMessagingRegionHeaderHelper, FBMMutableMessage, NSDictionary, FBGraphBatchParticipatingRequest, FBSimpleNetworkerRequest, NSString;

@interface FBMBatchThreadCreator : NSObject <FBNetworkerRequestDelegate, FBClassProvidable, FBCancelable, FBMDetachable> {

	id<MNAuthenticationManager> _authManager;
	FBUserSession* _session;
	FBMessageAttachmentPreparer* _messageAttachmentPreparer;
	FBMDetchedNetworkRequestsQueue* _detachQueue;
	FBMFetchedThreadKeySet* _fetchedThreadKeySet;
	MNSimpleSingleThreadFetcher* _simpleThreadFetcher;
	FBMSendEventLogger* _sendEventLogger;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBMMutableMessage* _message;
	NSDictionary* _membersToAdd;
	id<FBMBatchThreadCreatorListening> _listener;
	FBGraphBatchParticipatingRequest* _createThreadRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	BOOL _requestFinished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithAuthManager:(id)arg1 session:(id)arg2 messageAttachmentPreparer:(id)arg3 detachedQueue:(id)arg4 fetchedThreadKeySet:(id)arg5 simpleThreadFetcher:(id)arg6 sendEventLogger:(id)arg7 messagingRegionHeaderHelper:(id)arg8 ;
-(void)_buildAndSendRequest;
-(void)_fireOffThreadStoreFetchForThreadWithFbId:(id)arg1 andOtherMemberUids:(id)arg2 ;
-(void)_handleResponseIsValidWithThread:(id)arg1 ;
-(void)configureAndCreateThreadWithMessage:(id)arg1 membersToAdd:(id)arg2 listener:(id)arg3 ;
-(void)_cleanUpDetachedState;
-(void)_didFailWithError:(id)arg1 ;
-(void)cancel;
-(void)detach;
@end
