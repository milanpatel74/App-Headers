/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsResetPasscodeViewControllerDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsConnectionStatusProviding;
@class FBPaymentsPINController, FBPaymentsPasscodeViewController, FBPaymentsEventListenerAnnouncer, NSString;

@interface FBPaymentsPasscodeWorkflowController : NSObject <FBPaymentsResetPasscodeViewControllerDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBPaymentsPINController* _paymentPinController;
	FBPaymentsPasscodeViewController* _passcodeViewController;
	long long _workflow;
	/*^block*/id _completion;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;

}

@property (nonatomic,retain) id<FBPaymentsConnectionStatusProviding> connectionStatusProvider;              //@synthesize connectionStatusProvider=_connectionStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)initWithPaymentPinController:(id)arg1 ;
-(void)setConnectionStatusProvider:(id<FBPaymentsConnectionStatusProviding>)arg1 ;
-(id)preparePasscodeViewControllerWithWorkflow:(long long)arg1 extra:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<FBPaymentsConnectionStatusProviding>)connectionStatusProvider;
-(id)_presentPasscodeViewControllerWithPresentingMode:(long long)arg1 graphRequestType:(long long)arg2 usesUserInputAsOldPasscode:(BOOL)arg3 supplementaryOldPasscode:(id)arg4 extra:(id)arg5 ;
-(void)_handleResetPaymentPin:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleVerifyPaymentPin:(BOOL)arg1 error:(id)arg2 oldPasscode:(id)arg3 ;
-(void)_handleCreatePaymentPin:(BOOL)arg1 newPasscode:(id)arg2 error:(id)arg3 ;
-(void)_handleUpdatePaymentPin:(BOOL)arg1 newPasscode:(id)arg2 error:(id)arg3 ;
-(void)_handleDeletePaymentPin:(BOOL)arg1 error:(id)arg2 ;
-(void)_dismissAndDispatchSuccess:(BOOL)arg1 passcode:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)_presentResetPasscodeViewController;
-(void)_handleGraphRequestCallback:(long long)arg1 oldPasscode:(id)arg2 newPasscode:(id)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(void)_performGraphRequestWithType:(long long)arg1 oldPasscode:(id)arg2 newPasscode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetPasscodeViewControllerDidResetPin:(id)arg1 ;
-(void)resetPasscodeViewControllerDidFailToResetPin:(id)arg1 error:(id)arg2 ;
-(void)_handleError:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
@end

