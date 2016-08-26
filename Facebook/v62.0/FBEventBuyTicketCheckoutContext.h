/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventBuyTicketCheckoutActionResponder, FBIntentHandler, FBNavigationCoordinator;
@class FBPaymentsKitPaymentMethod, FBUserSession;

@interface FBEventBuyTicketCheckoutContext : NSObject {

	FBPaymentsKitPaymentMethod* _paymentMethod;
	id<FBEventBuyTicketCheckoutActionResponder> _actionResponder;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<FBNavigationCoordinator> _navigationCoordinator;

}

@property (nonatomic,readonly) FBPaymentsKitPaymentMethod * paymentMethod;                               //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,readonly) id<FBEventBuyTicketCheckoutActionResponder> actionResponder;              //@synthesize actionResponder=_actionResponder - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                        //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                        //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id)initWithPaymentMethod:(id)arg1 actionResponder:(id)arg2 session:(id)arg3 intentHandler:(id)arg4 navigationCoordinator:(id)arg5 ;
-(FBUserSession *)session;
-(FBPaymentsKitPaymentMethod *)paymentMethod;
-(id<FBEventBuyTicketCheckoutActionResponder>)actionResponder;
@end
