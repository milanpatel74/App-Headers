//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

@class SKPPermissionsOnboardingLearnMoreView;

@interface SKPPermissionsOnboardingLearnMoreViewController : SKPViewController
{
    _Bool _showAddressBookPermissionExplanationText;
    SKPPermissionsOnboardingLearnMoreView *_learnMoreView;
}

@property(retain, nonatomic) SKPPermissionsOnboardingLearnMoreView *learnMoreView; // @synthesize learnMoreView=_learnMoreView;
@property(nonatomic) _Bool showAddressBookPermissionExplanationText; // @synthesize showAddressBookPermissionExplanationText=_showAddressBookPermissionExplanationText;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)init;

@end

