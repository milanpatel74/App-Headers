/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNHandlerSecureThreadRequest, NSMutableDictionary, NSMutableSet, NSObject, MNBatchSecureThreadResponse;

@interface MNSecureThreadRequestResultAccumulator : NSObject {

	MNHandlerSecureThreadRequest* _request;
	NSMutableDictionary* _responsesForFoundThreads;
	NSMutableSet* _missingThreads;
	BOOL _hasBeenGivenFinalUpdate;
	BOOL _foundError;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) MNBatchSecureThreadResponse * currentResponse; 
-(BOOL)isWaitingForSubResponses;
-(void)_mergeHandlerResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 queue:(id)arg2 ;
-(BOOL)hasFoundErrorInResponse;
-(void)updateWithSecureThreadResponse:(id)arg1 isFinalUpdate:(BOOL)arg2 ;
-(MNBatchSecureThreadResponse *)currentResponse;
@end

