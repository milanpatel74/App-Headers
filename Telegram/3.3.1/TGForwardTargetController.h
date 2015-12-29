//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"
#import "TGNavigationControllerItem.h"
#import "TGViewControllerNavigationBarAppearance.h"
#import "UIAlertViewDelegate.h"

@class ASHandle, NSArray, NSDictionary, NSString, NSURL, TGDialogListController, TGForwardContactsController, TGTelegraphDialogListCompanion, UIAlertView, UISegmentedControl, UIView;

@interface TGForwardTargetController : TGViewController <UIAlertViewDelegate, ASWatcher, TGViewControllerNavigationBarAppearance, TGNavigationControllerItem>
{
    NSString *_confirmationCustomFormat;
    _Bool _targetMode;
    _Bool _privacyMode;
    _Bool _groupMode;
    _Bool _skipConfirmation;
    _Bool _blockMode;
    NSString *_controllerTitle;
    NSString *_confirmationDefaultPersonFormat;
    NSString *_confirmationDefaultGroupFormat;
    ASHandle *_actionHandle;
    ASHandle *_watcherHandle;
    UIView *_toolbarContainerView;
    UISegmentedControl *_segmentedControl;
    TGDialogListController *_dialogListController;
    TGTelegraphDialogListCompanion *_dialogListCompanion;
    TGForwardContactsController *_contactsController;
    TGViewController *_currentViewController;
    id _selectedTarget;
    NSArray *_forwardMessages;
    NSDictionary *_shareLink;
    NSArray *_sendMessages;
    NSURL *_documentFileUrl;
    NSArray *_documentFileDescs;
    UIAlertView *_currentAlert;
}

@property(retain, nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) NSArray *documentFileDescs; // @synthesize documentFileDescs=_documentFileDescs;
@property(retain, nonatomic) NSURL *documentFileUrl; // @synthesize documentFileUrl=_documentFileUrl;
@property(retain, nonatomic) NSArray *sendMessages; // @synthesize sendMessages=_sendMessages;
@property(retain, nonatomic) NSDictionary *shareLink; // @synthesize shareLink=_shareLink;
@property(retain, nonatomic) NSArray *forwardMessages; // @synthesize forwardMessages=_forwardMessages;
@property(retain, nonatomic) id selectedTarget; // @synthesize selectedTarget=_selectedTarget;
@property(retain, nonatomic) TGViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) TGForwardContactsController *contactsController; // @synthesize contactsController=_contactsController;
@property(retain, nonatomic) TGTelegraphDialogListCompanion *dialogListCompanion; // @synthesize dialogListCompanion=_dialogListCompanion;
@property(retain, nonatomic) TGDialogListController *dialogListController; // @synthesize dialogListController=_dialogListController;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *toolbarContainerView; // @synthesize toolbarContainerView=_toolbarContainerView;
@property(nonatomic) _Bool blockMode; // @synthesize blockMode=_blockMode;
@property(nonatomic) _Bool skipConfirmation; // @synthesize skipConfirmation=_skipConfirmation;
@property(retain, nonatomic) ASHandle *watcherHandle; // @synthesize watcherHandle=_watcherHandle;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
@property(retain, nonatomic) NSString *confirmationDefaultGroupFormat; // @synthesize confirmationDefaultGroupFormat=_confirmationDefaultGroupFormat;
@property(retain, nonatomic) NSString *confirmationDefaultPersonFormat; // @synthesize confirmationDefaultPersonFormat=_confirmationDefaultPersonFormat;
@property(retain, nonatomic) NSString *controllerTitle; // @synthesize controllerTitle=_controllerTitle;
- (void).cxx_destruct;
- (void)confirmAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)segmentedControlChanged;
- (long long)preferredStatusBarStyle;
- (void)dismissSelf;
- (void)doneButtonPressed;
- (void)donePressed;
- (void)doUnloadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)shouldBeRemovedFromNavigationAfterHiding;
- (_Bool)navigationBarShouldBeHidden;
- (long long)requiredNavigationBarStyle;
- (void)dealloc;
- (id)initWithDocumentFiles:(id)arg1;
- (id)stringForMultipleFilesConfirmation:(unsigned long long)arg1;
- (id)initWithDocumentFile:(id)arg1 size:(int)arg2;
- (id)initWithSelectGroup;
- (id)initWithSelectTarget;
- (id)initWithSelectPrivacyTarget:(id)arg1 placeholder:(id)arg2;
- (id)initWithSelectBlockTarget;
- (id)initWithForwardMessages:(id)arg1 sendMessages:(id)arg2 shareLink:(id)arg3 showSecretChats:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

