//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "SKPChatViewControllerDelegate.h"
#import "SKPGroupProfileViewControllerDelegate.h"
#import "SKPParticipantsRosterViewControllerDelegate.h"
#import "SKPSelecting.h"
#import "SKPTimelineCallViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MKGradientView, NSArray, NSString, SKPChatViewController, SKPConversationViewControllerViewModel, SKPParticipantsRosterViewController, SKPSelection, SKPTimelineCallViewController, UIBarButtonItem, UISwipeGestureRecognizer, UIView;

@interface SKPConversationViewController : SKPViewController <UIGestureRecognizerDelegate, SKPChatViewControllerDelegate, SKPTimelineCallViewControllerDelegate, SKPParticipantsRosterViewControllerDelegate, SKPGroupProfileViewControllerDelegate, SKPSelecting>
{
    _Bool _isChangingState;
    _Bool _forceHiddenStatusBar;
    _Bool _isObservingViewModel;
    _Bool _isInvalidated;
    _Bool _isInCall;
    MKGradientView *_callViewControllerNavigationBarBackgroundProtectionView;
    UIView *_incallChatViewControllerNavigationBarBackgroundProtectionView;
    NSString *_conversationIdentity;
    NSArray *_previewItems;
    unsigned long long _state;
    unsigned long long _actualState;
    SKPChatViewController *_chatViewController;
    SKPTimelineCallViewController *_callViewController;
    SKPConversationViewControllerViewModel *_viewModel;
    unsigned long long _numberOfUnreadConversationsExceptSelf;
    UISwipeGestureRecognizer *_swipeRightGestureRecognizer;
    UISwipeGestureRecognizer *_swipeLeftGestureRecognizer;
    UIBarButtonItem *_showInCallChatItem;
    UIBarButtonItem *_showInCallChatItemWithBadge;
    UIBarButtonItem *_showCallItem;
    UIBarButtonItem *_hideInCallChatItem;
    UIBarButtonItem *_callWithVoiceItem;
    UIBarButtonItem *_callWithVideoItem;
    UIBarButtonItem *_switchToFrontCameraItem;
    UIBarButtonItem *_switchToBackCameraItem;
    UIBarButtonItem *_dialpadItem;
    UIBarButtonItem *_showTimelineItem;
    UIBarButtonItem *_showTimelineItemWithBadge;
    UIBarButtonItem *_hideTimelineItem;
    SKPParticipantsRosterViewController *_participantsViewController;
}

+ (_Bool)shouldBeLiveCallAware;
+ (id)viewModelKeyPaths;
@property(nonatomic) __weak SKPParticipantsRosterViewController *participantsViewController; // @synthesize participantsViewController=_participantsViewController;
@property(retain, nonatomic) UIBarButtonItem *hideTimelineItem; // @synthesize hideTimelineItem=_hideTimelineItem;
@property(retain, nonatomic) UIBarButtonItem *showTimelineItemWithBadge; // @synthesize showTimelineItemWithBadge=_showTimelineItemWithBadge;
@property(retain, nonatomic) UIBarButtonItem *showTimelineItem; // @synthesize showTimelineItem=_showTimelineItem;
@property(retain, nonatomic) UIBarButtonItem *dialpadItem; // @synthesize dialpadItem=_dialpadItem;
@property(retain, nonatomic) UIBarButtonItem *switchToBackCameraItem; // @synthesize switchToBackCameraItem=_switchToBackCameraItem;
@property(retain, nonatomic) UIBarButtonItem *switchToFrontCameraItem; // @synthesize switchToFrontCameraItem=_switchToFrontCameraItem;
@property(retain, nonatomic) UIBarButtonItem *callWithVideoItem; // @synthesize callWithVideoItem=_callWithVideoItem;
@property(retain, nonatomic) UIBarButtonItem *callWithVoiceItem; // @synthesize callWithVoiceItem=_callWithVoiceItem;
@property(retain, nonatomic) UIBarButtonItem *hideInCallChatItem; // @synthesize hideInCallChatItem=_hideInCallChatItem;
@property(retain, nonatomic) UIBarButtonItem *showCallItem; // @synthesize showCallItem=_showCallItem;
@property(retain, nonatomic) UIBarButtonItem *showInCallChatItemWithBadge; // @synthesize showInCallChatItemWithBadge=_showInCallChatItemWithBadge;
@property(retain, nonatomic) UIBarButtonItem *showInCallChatItem; // @synthesize showInCallChatItem=_showInCallChatItem;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeLeftGestureRecognizer; // @synthesize swipeLeftGestureRecognizer=_swipeLeftGestureRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRightGestureRecognizer; // @synthesize swipeRightGestureRecognizer=_swipeRightGestureRecognizer;
@property(nonatomic) unsigned long long numberOfUnreadConversationsExceptSelf; // @synthesize numberOfUnreadConversationsExceptSelf=_numberOfUnreadConversationsExceptSelf;
@property(readonly, nonatomic) _Bool isInCall; // @synthesize isInCall=_isInCall;
@property(nonatomic) _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(nonatomic) _Bool isObservingViewModel; // @synthesize isObservingViewModel=_isObservingViewModel;
@property(retain, nonatomic) SKPConversationViewControllerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SKPTimelineCallViewController *callViewController; // @synthesize callViewController=_callViewController;
@property(readonly, nonatomic) SKPChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(nonatomic) _Bool forceHiddenStatusBar; // @synthesize forceHiddenStatusBar=_forceHiddenStatusBar;
@property(nonatomic) unsigned long long actualState; // @synthesize actualState=_actualState;
@property(nonatomic) _Bool isChangingState; // @synthesize isChangingState=_isChangingState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;
@property(readonly, copy, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)groupProfileViewController:(id)arg1 didSelectParticipant:(id)arg2;
- (void)participantsRosterViewController:(id)arg1 didSelectVideoOfParticipant:(id)arg2;
- (void)participantsRosterViewController:(id)arg1 didSelectParticipant:(id)arg2;
- (void)participantsRosterViewControllerDidCancel:(id)arg1;
- (void)timelineCallViewControllerDidChangeBackground:(id)arg1;
- (void)timelineCallViewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1;
- (void)timelineCallViewControllerDidUpdateActions:(id)arg1;
- (void)chatViewControllerDidUpdateOverflowActions:(id)arg1;
- (void)chatViewControllerDidUpdateActions:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)updateUnreadBadgeCount;
- (void)updateNavigationBarTitleAccessibility;
- (double)alphaForInCallChatViewControllerTopBackgroundProtectionViewForState:(unsigned long long)arg1;
- (double)alphaForCallViewControllerNavigationBarBackgroundProtectionViewForState:(unsigned long long)arg1;
- (void)updateParticipantsRosterAppearance;
- (void)updateCallingBannerAppearance;
- (void)updateNavigationBarAppearance:(_Bool)arg1;
- (CDUnknownBlockType)navigationBarTitleActionBlockForState:(unsigned long long)arg1;
- (_Bool)navigationBarTransparentForState:(unsigned long long)arg1 traitCollection:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayoutSubviews;
- (id)visibleViewControllersForState:(unsigned long long)arg1;
- (long long)splitViewControllerDisplayModeForState:(unsigned long long)arg1;
- (struct CGRect)rectForViewController:(id)arg1 state:(unsigned long long)arg2;
- (void)asynchronouslyLoadConversationWithIdentity:(id)arg1;
- (void)swipeLeftGestureRecognized:(id)arg1;
- (void)swipeRightGestureRecognized:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)skp_showParticipantList:(id)arg1;
- (void)skp_showContactProfile:(id)arg1;
- (void)skp_showGroupProfile:(id)arg1;
- (void)showInCallChatWithBadge:(id)arg1;
- (void)showInCallChat:(id)arg1;
- (void)hideInCallChat:(id)arg1;
- (void)showTimelineWithBadge:(id)arg1;
- (void)showTimeline:(id)arg1;
- (void)hideTimeline:(id)arg1;
- (_Bool)canShowDialpadButton;
- (_Bool)canShowCameraSwitchButton;
- (void)updateActions;
- (void)bindDropdownMenuOptions;
- (SEL)selectorForDropdownOptionIdentifier:(long long)arg1;
@property(retain, nonatomic) SKPSelection *selection;
- (_Bool)canMakeSelection:(id)arg1;
- (id)previewActionItems;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIView *incallChatViewControllerNavigationBarBackgroundProtectionView; // @synthesize incallChatViewControllerNavigationBarBackgroundProtectionView=_incallChatViewControllerNavigationBarBackgroundProtectionView;
@property(readonly, nonatomic) MKGradientView *callViewControllerNavigationBarBackgroundProtectionView; // @synthesize callViewControllerNavigationBarBackgroundProtectionView=_callViewControllerNavigationBarBackgroundProtectionView;
- (void)save;
- (void)dealloc;
- (void)invalidate;
- (id)initWithConversationIdentity:(id)arg1 selection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

