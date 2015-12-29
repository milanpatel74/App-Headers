//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"

@class ASHandle, NSString, SMetaDisposable, TGLoginPasswordView, TGProgressWindow, TGTwoStepConfig, UIBarButtonItem;

@interface TGLoginPasswordController : TGViewController <ASWatcher>
{
    TGTwoStepConfig *_config;
    NSString *_phoneNumber;
    NSString *_phoneCode;
    NSString *_phoneCodeHash;
    TGLoginPasswordView *_view;
    UIBarButtonItem *_doneItem;
    NSString *_currentPassword;
    TGProgressWindow *_progressWindow;
    SMetaDisposable *_requestRecoveryDisposable;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)_completedDeletion;
- (void)_completedRestore:(int)arg1;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (_Bool)loginPhoneNumber:(id *)arg1 phoneCode:(id *)arg2 phoneCodeHash:(id *)arg3;
- (void)resetPressed;
- (void)forgotPressed;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)donePressed;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 phoneNumber:(id)arg2 phoneCode:(id)arg3 phoneCodeHash:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

