/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventBuyTicketAsyncMutatorDelegate.h>
#import <Facebook/FBPaymentsCheckoutRequestHandling.h>

@protocol FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsNavigationDelegate;
@class FBEventBuyTicketAsyncMutator, FBEventBuyTicketExternalPartnerModel, FBUserSession, FBEventAnalyticTracker, NSString, FBPaymentsCheckoutFlowCollectedData;

@interface FBPaymentsEventTicketingCheckoutRequestHandler : NSObject <FBEventBuyTicketAsyncMutatorDelegate, FBPaymentsCheckoutRequestHandling> {

	FBEventBuyTicketAsyncMutator* _mutator;
	FBEventBuyTicketExternalPartnerModel* _model;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	id<FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate> _sendingDelegate;
	id<FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate> _processingDelegate;
	NSString* _paymentFlowId;
	FBPaymentsCheckoutFlowCollectedData* _collectedData;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)onTicketPurchaseFailedWithError:(id)arg1 ;
-(void)onTicketPurchaseFailed;
-(void)onTicketPurchaseSuccessful:(id)arg1 ;
-(void)onTicketPurchaseStatusUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 model:(id)arg2 tracker:(id)arg3 ;
-(void)processPaymentWithPaymentFlowId:(id)arg1 checkoutFlowCollectedData:(id)arg2 processingDelegate:(id)arg3 sendingDelegate:(id)arg4 ;
-(void)showConfirmationDialogForFirstPaymentWithViewControllerForPresenting:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(long long)requestLoadingStyleWithCheckoutFlowCollectedData:(id)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
