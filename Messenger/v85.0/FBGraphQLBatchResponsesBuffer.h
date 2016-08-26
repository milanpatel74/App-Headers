/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLBatchRequest, NSMutableArray, NSMutableDictionary;

@interface FBGraphQLBatchResponsesBuffer : NSObject {

	FBGraphQLBatchRequest* _request;
	NSMutableArray* _arrayOfBuffers;
	unsigned long long _vendedResponsesCount;
	NSMutableDictionary* _countForQueriesReferenceParameters;

}
-(id)_responseBufferForQuery:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(void)setSkippedResults:(unsigned long long)arg1 erroredResults:(unsigned long long)arg2 ;
-(BOOL)hasVendedAllExpectedResponses;
-(id)vendNextResponse;
-(void)addResponse:(id)arg1 ;
@end
