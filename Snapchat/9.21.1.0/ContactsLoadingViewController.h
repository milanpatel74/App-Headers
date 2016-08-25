//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "Subview.h"

@class DancingGhostImageView, NSString, UIButton, UILabel, UIView;

@interface ContactsLoadingViewController : UIViewController <Subview>
{
    id <ContactsLoadingViewControllerDelegate> _delegate;
    UIButton *_allowAccessButton;
    UILabel *_allowAccessLabel;
    UIView *_backgrondGhostView;
    UILabel *_couldNotAccessContactsLabel;
    DancingGhostImageView *_dancingGhostImageView;
    UIButton *_loadingFailedButton;
    UILabel *_loadingFailedLabel;
    UILabel *_loadingLabel;
    UILabel *_noContactsLabel;
}

@property(retain, nonatomic) UILabel *noContactsLabel; // @synthesize noContactsLabel=_noContactsLabel;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UILabel *loadingFailedLabel; // @synthesize loadingFailedLabel=_loadingFailedLabel;
@property(retain, nonatomic) UIButton *loadingFailedButton; // @synthesize loadingFailedButton=_loadingFailedButton;
@property(retain, nonatomic) DancingGhostImageView *dancingGhostImageView; // @synthesize dancingGhostImageView=_dancingGhostImageView;
@property(retain, nonatomic) UILabel *couldNotAccessContactsLabel; // @synthesize couldNotAccessContactsLabel=_couldNotAccessContactsLabel;
@property(retain, nonatomic) UIView *backgrondGhostView; // @synthesize backgrondGhostView=_backgrondGhostView;
@property(retain, nonatomic) UILabel *allowAccessLabel; // @synthesize allowAccessLabel=_allowAccessLabel;
@property(retain, nonatomic) UIButton *allowAccessButton; // @synthesize allowAccessButton=_allowAccessButton;
@property(nonatomic) __weak id <ContactsLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNoContactsHidden:(_Bool)arg1;
- (void)setLoadingFailedHidden:(_Bool)arg1;
- (void)setLoadingHidden:(_Bool)arg1;
- (void)setAccessDeniedHidden:(_Bool)arg1;
- (void)setAllowAccessHidden:(_Bool)arg1;
- (void)hideAll;
- (void)showNoContacts;
- (void)showLoadingFailed;
- (void)showAccessDenied;
- (void)showAllowAccess;
- (void)showLoading;
- (void)loadingFailedButtonClicked;
- (void)allowAccessButtonClicked;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
