/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBUserSession, MNMessagingRegionHeaderHelper, FBSimpleNetworkerRequest, FBMMQTTMarkInboxSeenSender, FBMobileConfigContextManager, NSString;

@interface FBMInboxSeenMarker : NSObject <FBClassProvidable> {

	FBUserSession* _userSession;
	id<MNAuthenticationManager> _authManager;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBSimpleNetworkerRequest* _networkerRequest;
	FBMMQTTMarkInboxSeenSender* _mqttSender;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 messagingRegionHeaderHelper:(id)arg3 mqttSender:(id)arg4 configManager:(id)arg5 ;
-(BOOL)_canSendOverMqtt;
-(void)_sendOverMqtt;
-(void)_sendOverHttp;
-(void)cancel;
-(void)start;
@end
