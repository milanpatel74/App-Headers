//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "SKPWelcomeExperienceChildControllerProtocol.h"

@class NSString, SKPPermissionsOnboardingView;

@interface SKPPermissionsOnboardingViewController : SKPViewController <SKPWelcomeExperienceChildControllerProtocol>
{
    _Bool _requestingPermissions;
    id <SKPWelcomeExperienceChildControllerDelegate> delegate;
}

@property(nonatomic, getter=isRequestingPermissions) _Bool requestingPermissions; // @synthesize requestingPermissions=_requestingPermissions;
@property(nonatomic) __weak id <SKPWelcomeExperienceChildControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showConfirmationAlertView;
- (void)startRequestingPermissions;
- (_Bool)shouldShowNotificationPermissionsRequest;
- (_Bool)shouldShowAddressBookPermissionsRequest;
- (_Bool)shouldShowCameraPermissionsRequest;
- (_Bool)shouldShowMicrophonePermissionsRequest;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) SKPPermissionsOnboardingView *permissionsOnboardingView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

