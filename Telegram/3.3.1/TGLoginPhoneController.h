//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class ASHandle, NSString, TGBackspaceTextField, TGObserverProxy, TGProgressWindow, UIAlertView, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface TGLoginPhoneController : TGViewController <UITextFieldDelegate, MFMailComposeViewControllerDelegate, ASWatcher>
{
    UIView *_grayBackground;
    UIView *_separatorView;
    UILabel *_titleLabel;
    UILabel *_noticeLabel;
    UILabel *_termsOfServiceLabel;
    UIImageView *_inputBackgroundView;
    TGObserverProxy *_keyValueStoreChangeProxy;
    _Bool _editedText;
    _Bool _didDisappear;
    _Bool _inProgress;
    int _currentActionIndex;
    ASHandle *_actionHandle;
    NSString *_presetPhoneCountry;
    NSString *_presetPhoneNumber;
    TGProgressWindow *_progressWindow;
    UIButton *_countryButton;
    UITextField *_countryCodeField;
    TGBackspaceTextField *_phoneField;
    NSString *_phoneNumber;
    UIAlertView *_currentAlert;
    UIView *_shadeView;
    struct CGRect _basePhoneFieldFrame;
    struct CGRect _baseInputBackgroundViewFrame;
    struct CGRect _baseCountryCodeFieldFrame;
}

@property(retain, nonatomic) UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(retain, nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) int currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(nonatomic) struct CGRect baseCountryCodeFieldFrame; // @synthesize baseCountryCodeFieldFrame=_baseCountryCodeFieldFrame;
@property(nonatomic) struct CGRect baseInputBackgroundViewFrame; // @synthesize baseInputBackgroundViewFrame=_baseInputBackgroundViewFrame;
@property(nonatomic) struct CGRect basePhoneFieldFrame; // @synthesize basePhoneFieldFrame=_basePhoneFieldFrame;
@property(retain, nonatomic) TGBackspaceTextField *phoneField; // @synthesize phoneField=_phoneField;
@property(retain, nonatomic) UITextField *countryCodeField; // @synthesize countryCodeField=_countryCodeField;
@property(retain, nonatomic) UIButton *countryButton; // @synthesize countryButton=_countryButton;
@property(retain, nonatomic) TGProgressWindow *progressWindow; // @synthesize progressWindow=_progressWindow;
@property(retain, nonatomic) NSString *presetPhoneNumber; // @synthesize presetPhoneNumber=_presetPhoneNumber;
@property(retain, nonatomic) NSString *presetPhoneCountry; // @synthesize presetPhoneCountry=_presetPhoneCountry;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)termsOfServiceTapGesture:(id)arg1;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)countryButtonPressed:(id)arg1;
- (void)nextButtonPressed;
- (void)_commitNextButtonPressed;
- (void)shakeView:(id)arg1 originalX:(double)arg2;
- (void)inputBackgroundTapped:(id)arg1;
- (void)backgroundTapped:(id)arg1;
- (void)updateCountry;
- (void)updatePhoneTextForCountryFieldText:(id)arg1;
- (id)filterPhoneText:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidHitLastBackspace;
- (void)updateInterface:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)controllerInsetUpdated:(struct UIEdgeInsets)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)doUnloadView;
- (void)performClose;
- (void)keyValueStoreChanged:(id)arg1;
- (void)loadView;
- (void)_applyPresetNumber;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

