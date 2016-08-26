/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNForwardSending.h>

@protocol MNForwardSenderListening;
@class FBUserSession, NSString, FBGraphQLMutationHandle;

@interface MNRidePromoMessageSender : NSObject <MNForwardSending> {

	FBUserSession* _session;
	NSString* _providerName;
	NSString* _promoData;
	id<MNForwardSenderListening> _listener;
	FBGraphQLMutationHandle* _handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSendForwardContent:(id)arg1 withPreparedAttachmentInfo:(id)arg2 toRecipients:(id)arg3 sendConversionContext:(id)arg4 listener:(id)arg5 ;
-(id)beginPrepareAttachmentForPreupload:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithUserSession:(id)arg1 providerName:(id)arg2 promoData:(id)arg3 ;
-(void)_cancelCurrentMutation;
-(void)_handleGraphqlResponseWithPayload:(id)arg1 error:(id)arg2 recipients:(id)arg3 ;
-(void)configWithProviderName:(id)arg1 promoData:(id)arg2 ;
-(void)cancel;
@end
