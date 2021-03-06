/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectAction.h>

@protocol FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate, FBPaymentsNavigationDelegate;
@class NSString;

@interface FBPaymentsSelectPaymentMethodsPayOverCounterOptionSelectAction : NSObject <FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectAction> {

	id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                             //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handleSelectActionForPaymentMethodOption:(id)arg1 withBillingCountryCode:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate>)arg1 ;
-(id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

