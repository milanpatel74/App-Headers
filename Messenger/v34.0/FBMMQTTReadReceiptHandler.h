/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMQTTMessagingEventHandler.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol FBProvider, MNAuthenticationManager;
@class NSNotificationCenter, FBMThreadSet, FBMMessageReceiptUpdater, NSString;

@interface FBMMQTTReadReceiptHandler : NSObject <MNMQTTMessagingEventHandler, FBSessionClassProvidable> {

	NSNotificationCenter* _notificationCenter;
	id<FBProvider> _threadSetProvider;
	id<FBProvider> _messageReceiptUpdaterProvider;
	FBMThreadSet* _threadSet;
	FBMMessageReceiptUpdater* _messageReceiptUpdater;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didReceivePayload:(id)arg1 forEvent:(id)arg2 ;
-(id)threadSet;
-(id)messageReceiptUpdater;
-(id)initWithNotificationCenter:(id)arg1 threadSetProvider:(id)arg2 messageReceiptUpdaterProvider:(id)arg3 authManager:(id)arg4 ;
-(id)_threadFromThreadFbId:(id)arg1 participantId:(id)arg2 ;
@end
