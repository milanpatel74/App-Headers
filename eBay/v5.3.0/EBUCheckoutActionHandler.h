/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUShippingMethodCellProtocol.h>
#import <eBay/LocalStoreMapDelegate.h>
#import <eBay/EBUCourierPickerViewControllerDelegate.h>
#import <eBay/ShippingMethodPickerDelegate.h>
#import <eBay/EBUPROXDisclaimerDelegate.h>
#import <eBay/SimpleMessageEditorDelegate.h>
#import <eBay/EBUQuantityAdjustmentDelegate.h>

@class EBUCheckoutCartViewControllerBase, PKPayment, UIResponder, NSString;

@interface EBUCheckoutActionHandler : NSObject <EBUShippingMethodCellProtocol, LocalStoreMapDelegate, EBUCourierPickerViewControllerDelegate, ShippingMethodPickerDelegate, EBUPROXDisclaimerDelegate, SimpleMessageEditorDelegate, EBUQuantityAdjustmentDelegate> {

	EBUCheckoutCartViewControllerBase* _delegate;
	PKPayment* _applePayment;
	UIResponder* _currentFirstResponder;

}

@property (__weak) UIResponder * currentFirstResponder;                                        //@synthesize currentFirstResponder=_currentFirstResponder - In the implementation block
@property (assign,nonatomic,__weak) EBUCheckoutCartViewControllerBase * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) PKPayment * applePayment;                                                   //@synthesize applePayment=_applePayment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionHandlerWithDelegate:(id)arg1 ;
-(void)paymentTransactionEnded:(id)arg1 ;
-(void)handleCartError;
-(void)handlePlaceOrder:(id)arg1 ;
-(void)handleRetry:(id)arg1 ;
-(void)showPaymentMethod;
-(void)show3DSVerification;
-(void)launchWebViewWithURL:(id)arg1 ;
-(BOOL)isDelegateRefreshing;
-(void)startEditing:(id)arg1 ;
-(void)launchWebViewWithTrackableURL:(id)arg1 ;
-(void)localPickupPressed:(id)arg1 ;
-(void)pudoPressed:(id)arg1 ;
-(void)ebayNowPressed:(id)arg1 ;
-(void)bopisPressed:(id)arg1 ;
-(void)shippingPressed:(id)arg1 ;
-(void)showMessageEditor:(id)arg1 ;
-(void)selectIncentives:(id)arg1 ;
-(void)internalLaunchWebViewWithURL:(id)arg1 title:(id)arg2 ;
-(void)launchWebViewWithURL:(id)arg1 title:(id)arg2 ;
-(void)launchWebViewWithTrackableURL:(id)arg1 title:(id)arg2 ;
-(void)paymentMethodSelected:(id)arg1 ;
-(void)showContingency:(id)arg1 ;
-(void)simpleMessageEditor:(id)arg1 setMessage:(id)arg2 ;
-(void)validatePlaceOrderButton;
-(void)showPayPal:(id)arg1 ;
-(void)editExistingAddressWithRedPhone:(BOOL)arg1 ;
-(void)pushViewControllerWhileMatchingPreferredContentSize:(id)arg1 ;
-(void)handleBuyingError;
-(void)launchOrderPlacedControllerWithDataManager:(id)arg1 ;
-(void)showEbayPhoneErrorAndNavigateToPhoneNumberEditor:(id)arg1 ;
-(void)shippingMethodPicker:(id)arg1 success:(BOOL)arg2 ;
-(void)removeCheckoutItem:(id)arg1 ;
-(void)setCurrentFirstResponder:(UIResponder *)arg1 ;
-(void)userDidExitLocalStorePicker:(id)arg1 withLocation:(id)arg2 animated:(BOOL)arg3 ;
-(void)courierPickerViewControllerDidExit:(id)arg1 success:(BOOL)arg2 needPhoneNumber:(BOOL)arg3 ;
-(void)simpleMessageEditorCancelMessage:(id)arg1 ;
-(void)updateCheckoutItem:(id)arg1 quantity:(long long)arg2 ;
-(void)editExistingAddress:(id)arg1 ;
-(void)cancelCheckout:(id)arg1 ;
-(void)selectShippingAddress:(id)arg1 ;
-(void)savePaymentValueChanged:(id)arg1 ;
-(void)launchTurboExplainView;
-(void)showDeliveryInstructionsEditor:(id)arg1 ;
-(void)showConvenienceChargeExplanation:(id)arg1 ;
-(PKPayment *)applePayment;
-(void)setApplePayment:(PKPayment *)arg1 ;
-(void)setDelegate:(EBUCheckoutCartViewControllerBase *)arg1 ;
-(EBUCheckoutCartViewControllerBase *)delegate;
-(void)endEditing:(id)arg1 ;
-(id)delegateView;
-(UIResponder *)currentFirstResponder;
@end
