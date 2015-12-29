//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "TGNavigationControllerItem.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class ASHandle, NSString, NSTimer, SMetaDisposable, TGModernButton, TGProgressWindow, TGTextField, UIAlertView, UILabel, UIView;

@interface TGLoginCodeController : TGViewController <UITextFieldDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate, UINavigationControllerDelegate, ASWatcher, TGNavigationControllerItem>
{
    _Bool _dismissing;
    _Bool _alreadyCountedDown;
    UIView *_grayBackground;
    UIView *_separatorView;
    UILabel *_titleLabel;
    UIView *_fieldSeparatorView;
    _Bool _didDisappear;
    SMetaDisposable *_twoStepConfigDisposable;
    UILabel *_termsOfServiceLabel;
    _Bool _inProgress;
    _Bool _messageSentToTelegram;
    int _currentActionIndex;
    ASHandle *_actionHandle;
    NSString *_phoneNumber;
    NSString *_phoneCodeHash;
    NSString *_phoneCode;
    double _phoneTimeout;
    UILabel *_noticeLabel;
    TGTextField *_codeField;
    UILabel *_timeoutLabel;
    UILabel *_requestingCallLabel;
    UILabel *_callSentLabel;
    TGModernButton *_didNotReceiveCodeButton;
    NSTimer *_countdownTimer;
    double _countdownStart;
    UIAlertView *_currentAlert;
    TGProgressWindow *_progressWindow;
    struct CGRect _baseInputBackgroundViewFrame;
    struct CGRect _baseCodeFieldFrame;
}

@property(nonatomic) _Bool messageSentToTelegram; // @synthesize messageSentToTelegram=_messageSentToTelegram;
@property(retain, nonatomic) TGProgressWindow *progressWindow; // @synthesize progressWindow=_progressWindow;
@property(retain, nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(nonatomic) double countdownStart; // @synthesize countdownStart=_countdownStart;
@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) int currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(retain, nonatomic) TGModernButton *didNotReceiveCodeButton; // @synthesize didNotReceiveCodeButton=_didNotReceiveCodeButton;
@property(retain, nonatomic) UILabel *callSentLabel; // @synthesize callSentLabel=_callSentLabel;
@property(retain, nonatomic) UILabel *requestingCallLabel; // @synthesize requestingCallLabel=_requestingCallLabel;
@property(retain, nonatomic) UILabel *timeoutLabel; // @synthesize timeoutLabel=_timeoutLabel;
@property(nonatomic) struct CGRect baseCodeFieldFrame; // @synthesize baseCodeFieldFrame=_baseCodeFieldFrame;
@property(nonatomic) struct CGRect baseInputBackgroundViewFrame; // @synthesize baseInputBackgroundViewFrame=_baseInputBackgroundViewFrame;
@property(retain, nonatomic) TGTextField *codeField; // @synthesize codeField=_codeField;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(nonatomic) double phoneTimeout; // @synthesize phoneTimeout=_phoneTimeout;
@property(retain, nonatomic) NSString *phoneCode; // @synthesize phoneCode=_phoneCode;
@property(retain, nonatomic) NSString *phoneCodeHash; // @synthesize phoneCodeHash=_phoneCodeHash;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)termsOfServiceTapGesture:(id)arg1;
- (void)didNotReceiveCodeButtonPressed;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)pushControllerRemovingSelf:(id)arg1;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)nextButtonPressed;
- (void)applyCode:(id)arg1;
- (void)shakeView:(id)arg1 originalX:(double)arg2;
- (void)inputBackgroundTapped:(id)arg1;
- (void)backgroundTapped:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateInterface:(long long)arg1;
- (void)controllerInsetUpdated:(struct UIEdgeInsets)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateCountdown;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)doUnloadView;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)callSentTapGesture:(id)arg1;
- (void)loadView;
- (void)makeLabelWithFormattedText:(id)arg1 text:(id)arg2;
- (_Bool)shouldBeRemovedFromNavigationAfterHiding;
- (void)dealloc;
- (id)initWithShowKeyboard:(_Bool)arg1 phoneNumber:(id)arg2 phoneCodeHash:(id)arg3 phoneTimeout:(double)arg4 messageSentToTelegram:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

