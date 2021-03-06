/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol UAChannelRegistrarDelegate;
@class UAChannelAPIClient, UAChannelRegistrationPayload;

@interface UAChannelRegistrar : NSObject {

	BOOL _isRegistrationInProgress;
	id<UAChannelRegistrarDelegate> _delegate;
	UAChannelAPIClient* _channelAPIClient;
	UAChannelRegistrationPayload* _lastSuccessPayload;

}

@property (assign,nonatomic,__weak) id<UAChannelRegistrarDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UAChannelAPIClient * channelAPIClient;                          //@synthesize channelAPIClient=_channelAPIClient - In the implementation block
@property (nonatomic,retain) UAChannelRegistrationPayload * lastSuccessPayload;              //@synthesize lastSuccessPayload=_lastSuccessPayload - In the implementation block
@property (assign) BOOL isRegistrationInProgress;                                            //@synthesize isRegistrationInProgress=_isRegistrationInProgress - In the implementation block
-(void)setChannelAPIClient:(UAChannelAPIClient *)arg1 ;
-(void)setIsRegistrationInProgress:(BOOL)arg1 ;
-(BOOL)isRegistrationInProgress;
-(UAChannelRegistrationPayload *)lastSuccessPayload;
-(void)createChannelWithPayload:(id)arg1 ;
-(void)updateChannel:(id)arg1 channelLocation:(id)arg2 withPayload:(id)arg3 ;
-(void)succeededWithPayload:(id)arg1 ;
-(UAChannelAPIClient *)channelAPIClient;
-(void)setLastSuccessPayload:(UAChannelRegistrationPayload *)arg1 ;
-(void)failedWithPayload:(id)arg1 ;
-(void)channelCreated:(id)arg1 channelLocation:(id)arg2 ;
-(void)registerWithChannelID:(id)arg1 channelLocation:(id)arg2 withPayload:(id)arg3 forcefully:(BOOL)arg4 ;
-(void)setDelegate:(id<UAChannelRegistrarDelegate>)arg1 ;
-(id)init;
-(id<UAChannelRegistrarDelegate>)delegate;
-(void)cancelAllRequests;
@end

