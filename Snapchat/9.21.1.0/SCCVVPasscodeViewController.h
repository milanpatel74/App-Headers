//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, SCCardPasscodeView, SCPayment;

@interface SCCVVPasscodeViewController : UIViewController <UITextFieldDelegate>
{
    _Bool _selfDismiss;
    _Bool _inTerminalErrorState;
    id <SCPasscodeForConfirmBlockerDelegate> _confirmBlockerDelegate;
    SCCardPasscodeView *_cardView;
    SCPayment *_payment;
}

@property(nonatomic) _Bool inTerminalErrorState; // @synthesize inTerminalErrorState=_inTerminalErrorState;
@property(nonatomic) _Bool selfDismiss; // @synthesize selfDismiss=_selfDismiss;
@property(retain, nonatomic) SCPayment *payment; // @synthesize payment=_payment;
@property(retain, nonatomic) SCCardPasscodeView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak id <SCPasscodeForConfirmBlockerDelegate> confirmBlockerDelegate; // @synthesize confirmBlockerDelegate=_confirmBlockerDelegate;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)xButtonPressed;
- (void)confirmCVVForSettings;
- (void)handleInvalidCVVError:(id)arg1;
- (void)confirmCVVForPayment;
- (void)saveCVVForPayment;
- (void)dismissViewIfSelfDismissing;
- (void)configureForSelfDismiss;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithPayment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
