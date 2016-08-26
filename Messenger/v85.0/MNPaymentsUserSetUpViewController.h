/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNPaymentsSetupViewControllerDelegate.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol MNUserSetUpStepCompletion;
@class FBMessengerPaymentsPlugin, MNPaymentsSetupViewController, NSString;

@interface MNPaymentsUserSetUpViewController : FBContainerViewController <MNPaymentsSetupViewControllerDelegate, MNUserSetUpStepViewController> {

	FBMessengerPaymentsPlugin* _paymentPlugin;
	MNPaymentsSetupViewController* _paymentsOnboardingViewController;
	id<MNUserSetUpStepCompletion> completionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(unsigned long long)preferredTransitionType;
-(id)initWithSession:(id)arg1 paymentsPlugin:(id)arg2 ;
-(void)_addPaymentsChildViewController:(id)arg1 ;
-(void)didCompletePaymentsSetup;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end
