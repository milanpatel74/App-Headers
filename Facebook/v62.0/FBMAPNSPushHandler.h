/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>
#import <Facebook/FBMConfigurable.h>

@protocol MNPushMessageHandling, MNMessageIdNormalizing, FBPushKitPushHandler, FBMAPNSPushEventHandling, MNAuthenticationManager, FBMPushBadgeCountUpdateReceivedListening;
@class FBMPushLogger, FBAnalytics, UIApplication, FBMNetworkProtocolController, FBMPushHandlerExtensionController, OrcaPushRegistrar, FBMMessageLocalNotificationScheduler, MNBadgeCountEventTracker, FBMAPNSMessageListenerAnnouncer, NSString;

@interface FBMAPNSPushHandler : NSObject <FBViewerContextClassProvidable, FBMConfigurable> {

	id<MNPushMessageHandling> _pushMessageHandler;
	id<MNMessageIdNormalizing> _messageIdNormalizer;
	id<FBPushKitPushHandler> _voipHandler;
	id<FBMAPNSPushEventHandling> _eventHandler;
	FBMPushLogger* _pushLogger;
	FBAnalytics* _analytics;
	UIApplication* _application;
	FBMNetworkProtocolController* _networkProtocolController;
	FBMPushHandlerExtensionController* _pushHandlerExtensionController;
	OrcaPushRegistrar* _orcaPushRegistrar;
	id<MNAuthenticationManager> _authManager;
	FBMMessageLocalNotificationScheduler* _messageLocalNotificationScheduler;
	MNBadgeCountEventTracker* _badgeCountEventTracker;
	id<FBMPushBadgeCountUpdateReceivedListening> _pushBadgeCountUpdateListener;
	FBMAPNSMessageListenerAnnouncer* _messageAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithPushMessageHandler:(id)arg1 messageIdNormalizer:(id)arg2 voipHandler:(id)arg3 pushLogger:(id)arg4 analytics:(id)arg5 application:(id)arg6 networkProtocolController:(id)arg7 pushHandlerExtensionController:(id)arg8 orcaPushRegistrar:(id)arg9 authManager:(id)arg10 messageLocalNotificationScheduler:(id)arg11 badgeCountEventTracker:(id)arg12 pushBadgeCountUpdateListener:(id)arg13 ;
-(int)_pushTypeFromAPNSPayload:(id)arg1 ;
-(void)_handleNewUserInstallPush:(id)arg1 launchedByUser:(BOOL)arg2 handledCompletionBlock:(/*^block*/id)arg3 ;
-(void)_handleMessengerPromotionPush:(id)arg1 withHandledCompletionBlock:(/*^block*/id)arg2 ;
-(void)_handleNewAPNSMessage:(id)arg1 originalPayload:(id)arg2 pushSource:(unsigned long long)arg3 actionIdentifier:(id)arg4 responseInfo:(id)arg5 launchedByUser:(BOOL)arg6 supportsPreview:(BOOL)arg7 isColdStart:(BOOL)arg8 handledCompletionBlock:(/*^block*/id)arg9 ;
-(void)_handleMessageCountAPNSPayload:(id)arg1 pushSource:(unsigned long long)arg2 handledCompletionBlock:(/*^block*/id)arg3 ;
-(void)_handleMessageRequestPushWithPayload:(id)arg1 handledCompletionBlock:(/*^block*/id)arg2 ;
-(void)_handleMessengerEventReminderPush:(id)arg1 actionIdentifier:(id)arg2 withHandledCompletionBlock:(/*^block*/id)arg3 ;
-(void)_handleGroupJoinRequestPushWithGroupJoinRequest:(id)arg1 launchedByUser:(BOOL)arg2 actionIdentifier:(id)arg3 handledCompletionBlock:(/*^block*/id)arg4 ;
-(void)_handlePayloadForAPNSBackup:(id)arg1 supportsMessagePreview:(BOOL)arg2 pushSource:(unsigned long long)arg3 ;
-(id)_newInstallUserIdFromAPNSPayLoad:(id)arg1 ;
-(void)_handleNewInstallUserNotification:(id)arg1 launchedByUser:(BOOL)arg2 handledCompletionBlock:(/*^block*/id)arg3 ;
-(void)_logReliabilityEventForMessageCountAPNSPayloadIfNeeded:(id)arg1 pushSource:(unsigned long long)arg2 ;
-(void)_performBadgeCountUpdate:(long long)arg1 ;
-(void)_handleBadgeCountFieldFromMessagePayload:(id)arg1 ;
-(void)configureWithEventHandler:(id)arg1 ;
-(void)handleAPNSWithPayLoad:(id)arg1 actionIdentifier:(id)arg2 responseInfo:(id)arg3 launchedByUser:(BOOL)arg4 supportsMessagePreview:(BOOL)arg5 isColdStart:(BOOL)arg6 handledCompletionBlock:(/*^block*/id)arg7 ;
-(void)handlePayloadFromViOSChannel:(id)arg1 supportsMessagePreview:(BOOL)arg2 ;
-(void)handlePayloadFromPushKit:(id)arg1 supportsMessagePreview:(BOOL)arg2 ;
-(void)addListenerForNewAPNSMesagges:(id)arg1 ;
-(void)removeListenerForNewAPNSMesagges:(id)arg1 ;
-(void)endSession;
-(BOOL)isConfigured;
@end
