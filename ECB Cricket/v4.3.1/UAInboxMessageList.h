/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, UAInboxAPIClient, NSOperationQueue, NSDictionary;

@interface UAInboxMessageList : NSObject {

	NSArray* _messages;
	long long _unreadCount;
	UAInboxAPIClient* _client;
	unsigned long long _batchOperationCount;
	unsigned long long _retrieveOperationCount;
	NSOperationQueue* _queue;
	NSDictionary* _messageIDMap;
	NSDictionary* _messageURLMap;

}

@property (retain) NSArray * messages;                                     //@synthesize messages=_messages - In the implementation block
@property (assign) long long unreadCount;                                  //@synthesize unreadCount=_unreadCount - In the implementation block
@property (readonly) BOOL isRetrieving; 
@property (readonly) BOOL isBatchUpdating; 
@property (nonatomic,retain) UAInboxAPIClient * client;                    //@synthesize client=_client - In the implementation block
@property (assign) unsigned long long batchOperationCount;                 //@synthesize batchOperationCount=_batchOperationCount - In the implementation block
@property (assign) unsigned long long retrieveOperationCount;              //@synthesize retrieveOperationCount=_retrieveOperationCount - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * messageIDMap;                  //@synthesize messageIDMap=_messageIDMap - In the implementation block
@property (nonatomic,retain) NSDictionary * messageURLMap;                 //@synthesize messageURLMap=_messageURLMap - In the implementation block
-(id)messageForID:(id)arg1 ;
-(id)retrieveMessageListWithSuccessBlock:(/*^block*/id)arg1 withFailureBlock:(/*^block*/id)arg2 ;
-(id)markMessagesRead:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadSavedMessages;
-(void)setBatchOperationCount:(unsigned long long)arg1 ;
-(void)setRetrieveOperationCount:(unsigned long long)arg1 ;
-(void)setMessageIDMap:(NSDictionary *)arg1 ;
-(void)setMessageURLMap:(NSDictionary *)arg1 ;
-(unsigned long long)retrieveOperationCount;
-(void)sendMessageListWillUpdateNotification;
-(void)syncLocalMessageState;
-(void)sendMessageListUpdatedNotification;
-(void)refreshInboxWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)markMessagesDeleted:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)batchOperationCount;
-(void)setMessages:(NSArray *)arg1 ;
-(NSDictionary *)messageURLMap;
-(NSDictionary *)messageIDMap;
-(id)retrieveMessageListWithDelegate:(id)arg1 ;
-(id)performBatchUpdateCommand:(long long)arg1 withMessageIndexSet:(id)arg2 withSuccessBlock:(/*^block*/id)arg3 withFailureBlock:(/*^block*/id)arg4 ;
-(id)performBatchUpdateCommand:(long long)arg1 withMessageIndexSet:(id)arg2 withDelegate:(id)arg3 ;
-(id)messageForBodyURL:(id)arg1 ;
-(id)messageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isRetrieving;
-(BOOL)isBatchUpdating;
-(unsigned long long)messageCount;
-(id)init;
-(id)debugQuickLookObject;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(long long)unreadCount;
-(unsigned long long)indexOfMessage:(id)arg1 ;
-(void)setUnreadCount:(long long)arg1 ;
-(NSArray *)messages;
-(void)setClient:(UAInboxAPIClient *)arg1 ;
-(UAInboxAPIClient *)client;
@end
