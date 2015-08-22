/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNThreadCreatorExtension.h>

@protocol FBMPaymentsBridge;
@class FBUserSession, FBMThreadStore, FBMessengerPaymentsPlugin, FBPaymentsPeerToPeerMoneySender, FBTimerDispatchSource, NSString;

@interface FBPaymentsThreadCreatorExtension : NSObject <MNThreadCreatorExtension> {

	FBUserSession* _session;
	id<FBMPaymentsBridge> _paymentsBridge;
	FBMThreadStore* _threadStore;
	FBMessengerPaymentsPlugin* _paymentsPlugin;
	FBPaymentsPeerToPeerMoneySender* _newThreadMoneySender;
	FBTimerDispatchSource* _threadFetchRetryTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldHandleMessage:(id)arg1 ;
-(BOOL)isErrorRetriable:(id)arg1 ;
-(void)createNewThreadWithMessage:(id)arg1 withInvitees:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)initWithSession:(id)arg1 paymentsBridge:(id)arg2 paymentsPlugin:(id)arg3 threadStore:(id)arg4 ;
-(id)_preparePaymentAttachment:(id)arg1 withRecipientId:(id)arg2 ;
-(void)_handleNewThreadFetchWithRecipientId:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 retryCount:(unsigned long long)arg4 ;
-(void)_handlePaymentSentFailureWithFailureBlock:(/*^block*/id)arg1 error:(id)arg2 analyticsUUID:(id)arg3 ;
@end
