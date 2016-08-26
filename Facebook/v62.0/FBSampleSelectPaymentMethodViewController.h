/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBSelectPaymentMethodViewControllerDelegate.h>
#import <Facebook/FBPaymentsKitSelectPaymentMethodViewControllerDelegate.h>
#import <Facebook/FBPhoneCountryCodesPickerViewControllerDelegate.h>

@protocol FBPaymentsCreditCard, FBPaymentsPaypal;
@class FBUserSession, FBPaymentsKitSelectPaymentMethodViewConfiguration, FBPaymentsKitSelectedPaymentMethodView, FBPhoneCountryCodesPickerViewController, UILabel, NSString;

@interface FBSampleSelectPaymentMethodViewController : UIViewController <FBSelectPaymentMethodViewControllerDelegate, FBPaymentsKitSelectPaymentMethodViewControllerDelegate, FBPhoneCountryCodesPickerViewControllerDelegate> {

	FBUserSession* _session;
	id<FBPaymentsCreditCard> _selectedCreditCard;
	id<FBPaymentsPaypal> _selectedPaypal;
	FBPaymentsKitSelectPaymentMethodViewConfiguration* _configuration;
	BOOL _downloadingDataFromServer;
	FBPaymentsKitSelectedPaymentMethodView* _selectedPaymentMethod;
	FBPhoneCountryCodesPickerViewController* _countrySelector;
	FBPhoneCountryCodesPickerViewController* _countryCallingCodeSelector;
	UILabel* _selectedCountry;
	UILabel* _selectedCountryCallingCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paymentsKitSelectPaymentMethodViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 currentExistingPaymentMethods:(id)arg3 ;
-(void)selectPaymentMethod:(id)arg1 ;
-(void)getPaymentMethodInfo:(id)arg1 ;
-(void)selectCountry:(id)arg1 ;
-(void)selectCountryWithCallingCodes:(id)arg1 ;
-(void)presentCountrySelector:(id)arg1 ;
-(void)selectPaymentMethodViewController:(id)arg1 didSelectCreditCard:(id)arg2 ;
-(void)selectPaymentMethodViewController:(id)arg1 didSelectPaypal:(id)arg2 ;
-(void)selectPaymentMethodViewControllerCanceled:(id)arg1 ;
-(void)countryPicker:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(void)dismissCountryPicker:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
@end
