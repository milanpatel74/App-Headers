//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBlockerResolutionResultDelegate.h"
#import "SCCardLinkingDelegate.h"
#import "SCChatViewLifeCycleListener.h"
#import "SCPasscodeForConfirmBlockerDelegate.h"
#import "SCPaymentSwipeReceiverDelegate.h"
#import "SCPaymentSwipeSenderDelegate.h"
#import "SCPotentiallyEligibleFlowDelegate.h"

@class NSString, SCBlockerResolutionInstance, SCChat, SCChatViewModelForChat, SCPaymentSwipeReceiverViewController, SCPaymentSwipeSenderViewController, SCPotentiallyEligibleCashUserFlow, UIViewController;

@interface SCChatCashController : NSObject <SCBlockerResolutionResultDelegate, SCPasscodeForConfirmBlockerDelegate, SCPaymentSwipeSenderDelegate, SCPaymentSwipeReceiverDelegate, SCPotentiallyEligibleFlowDelegate, SCCardLinkingDelegate, SCChatViewLifeCycleListener>
{
    SCChatViewModelForChat *_chatViewModel;
    SCChat *_chat;
    UIViewController *_parentVC;
    id <SCChatCashControllerDelegate> _delegate;
    SCPaymentSwipeSenderViewController *_swipeSenderViewController;
    SCPaymentSwipeReceiverViewController *_swipeReceiverViewController;
    SCPotentiallyEligibleCashUserFlow *_potentiallyEligibleFlow;
    SCBlockerResolutionInstance *_blockerResolver;
    CDUnknownBlockType _captureCVVSuccessBlock;
    _Bool _canPresentSwipeToSend;
    _Bool _didAttemptTapToSaveDuringSession;
}

- (void).cxx_destruct;
- (void)viewWillResignActive;
- (void)viewWillEnterBackground;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)presentSwipesWithCount:(unsigned long long)arg1 wasPresent:(_Bool)arg2;
- (void)presentPaymentRainIfNecessary:(id)arg1;
- (void)presentPaymentRainIfNecessary;
- (void)didReceivePaymentSwipe:(id)arg1;
- (void)didFinishReceivingPaymentSwipes:(id)arg1;
- (void)blockerResolutionCancelled;
- (void)blockerResolutionFailedWithError:(id)arg1;
- (void)blockerResolutionSuccessful;
- (void)confirmResolutionCancelled;
- (void)confirmResolutionFailed;
- (void)confirmResolutionSucceeded;
- (void)captureCVVForPayment:(id)arg1;
- (_Bool)shouldCaptureCVVOnPaymentMessageSend;
- (id)setUpPaymentMessageWithText:(id)arg1 cashTagRanges:(id)arg2 amount:(unsigned long long)arg3 swipe:(_Bool)arg4;
- (void)_beginSendingPaymentMessageWithText:(id)arg1 cashTagRanges:(id)arg2 amount:(unsigned long long)arg3 swipe:(_Bool)arg4;
- (void)_promptConfirmationForPaymentWithText:(id)arg1 cashTagRanges:(id)arg2 amount:(unsigned long long)arg3 forSwipe:(_Bool)arg4;
- (id)_amountString;
- (void)didSwipe:(id)arg1;
- (void)didFinishSwipeToSend:(id)arg1 completed:(_Bool)arg2;
- (void)didFinishSwipeDown;
- (void)flowSuccessfullyCompleted;
- (void)cardLinkingCancelled;
- (void)cardLinkingSuccessful;
- (void)presentPaymentSwipeSenderViewController;
- (void)trySendingPaymentText:(id)arg1 cashtagRanges:(id)arg2 amount:(unsigned long long)arg3;
- (void)enableSwipeToSend;
- (_Bool)isEligibleSenderReceiverPair;
- (void)presentCardLinkingVCForCashTag;
- (void)startPotentiallyEligibleFlow;
- (void)resolveBlockersForPaymentMessage:(id)arg1;
- (_Bool)shouldResolveBlockersForPaymentMessage:(id)arg1;
- (id)_textColorForHeader;
- (void)_displayTapToSaveDropdownForSavedMessage:(_Bool)arg1;
- (void)onPaymentTapped:(id)arg1;
- (void)handleLongPressForCellWithPaymentMessage:(id)arg1;
- (void)setChatViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

