/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMQTTClientManager, FBUserSession, FBMQTTSendResponseListener;

@interface FBFacecastWithMQTTSender : NSObject {

	FBMQTTClientManager* _clientManager;
	FBUserSession* _session;
	FBMQTTSendResponseListener* _responseListener;
	BOOL _optimizedMqttSend;

}

@property (nonatomic,retain) FBMQTTClientManager * clientManager;              //@synthesize clientManager=_clientManager - In the implementation block
-(void)configureWithMQTTClientManager:(id)arg1 ;
-(void)_addMQTTPublisher:(long long)arg1 publisher:(id)arg2 message:(id)arg3 messageKey:(id)arg4 publishCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 publishTimeout:(double)arg7 waitIntervalForConnect:(double)arg8 ;
-(long long)getTimeoutErrorCode:(BOOL)arg1 connectedErrorCode:(long long)arg2 reachableDisconnectedErrorCode:(long long)arg3 unreachableDisconnectedErrorCode:(long long)arg4 ;
-(void)setClientManager:(FBMQTTClientManager *)arg1 ;
-(void)_addMQTTPublisher:(long long)arg1 topic:(id)arg2 payload:(id)arg3 messageKey:(id)arg4 publishCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 publishTimeout:(double)arg7 waitIntervalForConnect:(double)arg8 keepRetryUntilTimeout:(BOOL)arg9 ;
-(void)_addMQTTPublisher:(long long)arg1 topic:(id)arg2 jsonPayload:(id)arg3 messageKey:(id)arg4 publishCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 publishTimeout:(double)arg7 waitIntervalForConnect:(double)arg8 ;
-(id)initWithSession:(id)arg1 queue:(id)arg2 ;
-(id)getMQTTClientStatus;
-(void)sendWebRTCMessage:(id)arg1 fbTraceMeta:(id)arg2 messageId:(id)arg3 thriftData:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)sendRTCMultiwayMessage:(id)arg1 conferenceName:(id)arg2 transactionId:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)sendWebRTCMessage:(id)arg1 fbTraceMeta:(id)arg2 messageId:(id)arg3 jsonData:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)sendChatEvent:(id)arg1 ;
-(FBMQTTClientManager *)clientManager;
-(BOOL)isConfigured;
@end
