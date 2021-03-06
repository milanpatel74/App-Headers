/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBAuthenticatingEnterPasscodeViewDelegate.h>

@class FBAuthenticationEnterPasscodeView, FBDeviceBasedAccount, NSString;

@interface FBDBLSetPasscodeViewController : UIViewController <FBAuthenticatingEnterPasscodeViewDelegate> {

	FBAuthenticationEnterPasscodeView* _enterPasscodeView;
	FBDeviceBasedAccount* _deviceBasedAccount;
	unsigned long long _flowType;
	NSString* _providedPasscode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_getInstruction;
-(id)initWithDeviceBasedAccount:(id)arg1 flowType:(unsigned long long)arg2 providedPasscode:(id)arg3 ;
-(void)passcodeEntered:(id)arg1 attempt:(long long)arg2 ;
-(void)secondaryButtonTapped;
-(id)_getTitle;
-(void)_showNetworkErrorBar;
-(void)_networkRequestTimedOut:(id)arg1 ;
-(void)_showUnknownErrorBar;
-(void)_handleSetPasscodeSuccess:(id)arg1 ;
-(void)_handleSetPasscodeError:(id)arg1 cancelled:(BOOL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

