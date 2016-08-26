/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNChainRequestResultProcessing.h>

@protocol MNSecureThreadRequestListener, OS_dispatch_queue;
@class MNHandlerSecureThreadRequest, NSObject, MNSecureThreadRequestResultAccumulator, NSString;

@interface MNSecureThreadRequestResultProcessor : NSObject <MNChainRequestResultProcessing> {

	MNHandlerSecureThreadRequest* _request;
	id<MNSecureThreadRequestListener> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureThreadRequestResultAccumulator* _resultAccumulator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isWaitingForSubResponses;
-(BOOL)validatePreliminaryResponse;
-(BOOL)validateFinalResponse;
-(void)updateResponse:(id)arg1 completesSubResponse:(BOOL)arg2 ;
-(void)announceSuccess;
-(void)announceUpdatedResponseWithLongOperationDidBegin:(BOOL)arg1 ;
-(void)announceFailureWithError:(id)arg1 ;
-(id)initWithRequest:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
@end
