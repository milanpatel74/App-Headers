/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface MNBatchRequestSingleResponseMerger : NSObject {

	NSMutableDictionary* _queriesToMergeRequestSets;
	NSMutableDictionary* _requestIdToMergedRequestMap;
	NSMutableSet* _failedMergedRequestIds;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)handleBatchRequestId:(unsigned long long)arg1 queries:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)batchRequestId:(unsigned long long)arg1 finalResponses:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)batchRequestId:(unsigned long long)arg1 updatedResponses:(id)arg2 ;
-(void)batchRequestId:(unsigned long long)arg1 failedWithError:(id)arg2 ;
-(void)_applyResponsesForRequestId:(unsigned long long)arg1 completedQueries:(id)arg2 responses:(id)arg3 ;
-(void)_cleanUpMergedRequestWithRequestId:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end
