/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMessageSendStateQuerying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface MNMessageSendStateStore : NSObject <MNMessageSendStateQuerying> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _messagesByOfflineThreadingId;
	NSMutableDictionary* _messageSendStatesByOfflineThreadingId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)messageWithOfflineThreadingId:(id)arg1 ;
-(id)messageSendStateInfoForMessageWithOfflineThreadingId:(id)arg1 ;
-(void)addMessage:(id)arg1 withSendStateInfo:(id)arg2 ;
-(void)removeMessageWithOfflineThreadingId:(id)arg1 ;
-(void)updateSendTimestamp:(unsigned long long)arg1 forMessageWithOfflineThreadingId:(id)arg2 ;
-(void)updateSendState:(unsigned long long)arg1 forMessageWithOfflineThreadingId:(id)arg2 ;
-(void)updateFailedState:(BOOL)arg1 nonRetriableErrorText:(id)arg2 forMessageWithOfflineThreadingId:(id)arg3 ;
-(id)initWithQueue:(id)arg1 ;
@end
