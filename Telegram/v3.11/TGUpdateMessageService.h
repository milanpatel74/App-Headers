/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/MTMessageService.h>

@class MTQueue, NSMutableArray, NSString;

@interface TGUpdateMessageService : NSObject <MTMessageService> {

	MTQueue* _queue;
	int _sessionToken;
	BOOL _holdUpdates;
	BOOL _scheduledMessageProcessing;
	NSMutableArray* _messagesToProcess;
	BOOL _isNetworkAvailable;
	BOOL _isConnected;
	BOOL _isUpdatingConnectionContext;
	BOOL _isPerformingServiceTasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePts:(int)arg1 ptsCount:(int)arg2 seq:(int)arg3 ;
-(void)addUpdates:(id)arg1 ;
-(void)mtProtoNetworkAvailabilityChanged:(id)arg1 isNetworkAvailable:(BOOL)arg2 ;
-(void)mtProtoConnectionStateChanged:(id)arg1 isConnected:(BOOL)arg2 ;
-(void)mtProtoConnectionContextUpdateStateChanged:(id)arg1 isUpdatingConnectionContext:(BOOL)arg2 ;
-(void)mtProtoServiceTasksStateChanged:(id)arg1 isPerformingServiceTasks:(BOOL)arg2 ;
-(void)updateHoldUpdates;
-(void)addMessageToQueueAndScheduleProcessing:(id)arg1 ;
-(void)reset:(BOOL)arg1 ;
-(void)processMessages:(id)arg1 ;
-(void)mtProtoWillAddService:(id)arg1 ;
-(void)mtProtoDidChangeSession:(id)arg1 ;
-(void)mtProtoServerDidChangeSession:(id)arg1 firstValidMessageId:(long long)arg2 otherValidMessageIds:(id)arg3 ;
-(void)mtProto:(id)arg1 receivedMessage:(id)arg2 ;
-(id)init;
@end
