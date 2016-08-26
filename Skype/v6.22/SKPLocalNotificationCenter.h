/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SKPLocalNotificationCenter : NSObject {

	BOOL _playCallNotificationSound;
	BOOL _launchingInBackground;
	BOOL _protectedSkyLibDataAvailable;
	BOOL _observingAccountManager;
	NSMutableDictionary* _registeredLocalNotificationsByUUID;
	NSMutableDictionary* _handledMissedCallNotificationsByGUID;

}

@property (nonatomic,readonly) NSMutableDictionary * registeredLocalNotificationsByUUID;                //@synthesize registeredLocalNotificationsByUUID=_registeredLocalNotificationsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * handledMissedCallNotificationsByGUID;              //@synthesize handledMissedCallNotificationsByGUID=_handledMissedCallNotificationsByGUID - In the implementation block
@property (assign,nonatomic) BOOL playCallNotificationSound;                                            //@synthesize playCallNotificationSound=_playCallNotificationSound - In the implementation block
@property (assign,nonatomic) BOOL launchingInBackground;                                                //@synthesize launchingInBackground=_launchingInBackground - In the implementation block
@property (assign,nonatomic) BOOL protectedSkyLibDataAvailable;                                         //@synthesize protectedSkyLibDataAvailable=_protectedSkyLibDataAvailable - In the implementation block
@property (assign,nonatomic) BOOL observingAccountManager;                                              //@synthesize observingAccountManager=_observingAccountManager - In the implementation block
-(void)applicationDidBecomeActiveNotification:(id)arg1 ;
-(id)postNotificationWithString:(id)arg1 ;
-(id)postCallNotificationForCall:(id)arg1 ;
-(id)postMissedCallNotificationWithConversationIdentity:(id)arg1 callGUID:(id)arg2 unescapedDisplayName:(id)arg3 displayName:(id)arg4 conference:(BOOL)arg5 ;
-(void)setObservingAccountManager:(BOOL)arg1 ;
-(BOOL)protectedSkyLibDataAvailable;
-(BOOL)launchingInBackground;
-(void)updateObservation;
-(void)setLaunchingInBackground:(BOOL)arg1 ;
-(void)setProtectedSkyLibDataAvailable:(BOOL)arg1 ;
-(BOOL)observingAccountManager;
-(void)cancelCallNotificationForCall:(id)arg1 ;
-(void)removeLocalNotification:(id)arg1 ;
-(void)cancelAllNotifications;
-(void)removeAllHandledMissedCallNotifications;
-(NSMutableDictionary *)registeredLocalNotificationsByUUID;
-(NSMutableDictionary *)handledMissedCallNotificationsByGUID;
-(BOOL)playCallNotificationSound;
-(id)callRingingNotificationWithCall:(id)arg1 ;
-(void)addLocalNotification:(id)arg1 ;
-(void)unregisterHandledMissedCallNotificationForCallGUID:(id)arg1 ;
-(id)missedCallNotificationWithConversationIdentity:(id)arg1 callGUID:(id)arg2 unescapedDisplayName:(id)arg3 displayName:(id)arg4 conference:(BOOL)arg5 ;
-(void)registerHandledMissedCallNotification:(id)arg1 withCallGUID:(id)arg2 ;
-(void)cancelAllMissedCallNotifications;
-(void)setPlayCallNotificationSound:(BOOL)arg1 ;
-(void)cancelLocalMissedCallNotification:(id)arg1 ;
-(void)setProtectedSkylibDataAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)cancelLocalNotification:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeAllNotifications;
@end
