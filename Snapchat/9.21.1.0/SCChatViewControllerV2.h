//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCBaseMediaFullScreenDelegate.h"
#import "SCBaseMediaThumbnailDelegate.h"
#import "SCChatCashControllerDelegate.h"
#import "SCChatDrawerSender.h"
#import "SCChatInputControllerDelegate.h"
#import "SCChatTableViewCellActionDelegate.h"
#import "SCChatTableViewCellGestureDelegate.h"
#import "SCChatTextLinkControllerDelegate.h"
#import "SCChatUserProfileDataSource.h"
#import "SCChatUserProfileNavigationDelegate.h"
#import "SCChatUserProfileViewControllerDelegate.h"
#import "SCChatVCTemporaryProtocol.h"
#import "SCHeaderDelegate.h"
#import "SCMainScrollViewDelegate.h"
#import "SCPullToDismissControllerGestureDelegate.h"
#import "SCSnapPlayContainer.h"
#import "SCSnapPlayDelegate.h"
#import "SCTimeProfilable.h"
#import "SCVideoChatClientControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "SwipeView.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDictionary, NSMutableSet, NSString, SCActionSheetCoordinator, SCBaseMediaFullScreenView, SCChat, SCChatCashController, SCChatInputController, SCChatLocationUpdater, SCChatMessageReleaser, SCChatMessageUpdater, SCChatSnapController, SCChatTableView, SCChatTableViewDataSourceV2, SCChatTableViewDelegate, SCChatTextLinkController, SCChatUserProfileViewController, SCChatViewHeader, SCChatViewLifeCycleListenerAnnouncer, SCChatViewLogger, SCChatViewModelForChat, SCCustomVolumeController, SCDiscoverDSnapExpirationValidator, SCManagedCapturerState, SCPullToDismissController, SCUserSession, SCVideoChatClientController, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface SCChatViewControllerV2 : UIViewController <SCBaseMediaFullScreenDelegate, SCBaseMediaThumbnailDelegate, SCChatCashControllerDelegate, SCChatInputControllerDelegate, SCChatTableViewCellActionDelegate, SCChatTableViewCellGestureDelegate, SCChatTextLinkControllerDelegate, SCChatUserProfileDataSource, SCChatUserProfileNavigationDelegate, SCChatUserProfileViewControllerDelegate, SCHeaderDelegate, SCPullToDismissControllerGestureDelegate, SCSnapPlayContainer, SCSnapPlayDelegate, SCTimeProfilable, SCVideoChatClientControllerDelegate, SKStoreProductViewControllerDelegate, UIGestureRecognizerDelegate, SCChatDrawerSender, SwipeView, SCChatVCTemporaryProtocol, SCMainScrollViewDelegate>
{
    SCActionSheetCoordinator *_actionSheetCoordinator;
    SCChatSnapController *_chatSnapController;
    NSMutableSet *_clearChatTimers;
    double _lastYOffset;
    SCManagedCapturerState *_managedCapturerState;
    NSString *_managedCapturerToken;
    _Bool _isRegularSession;
    _Bool _isRTL;
    _Bool _togglingCamera;
    SCUserSession *_userSession;
    SCChatViewLifeCycleListenerAnnouncer *_lifeCycleAnnouncer;
    SCVideoChatClientController *_videoChatClient;
    SCChatMessageReleaser *_messageReleaser;
    SCChatMessageUpdater *_messageUpdater;
    SCChatViewLogger *_lifeCycleLogger;
    SCChatCashController *_cashController;
    SCChatTextLinkController *_textLinkController;
    SCChat *_chat;
    SCChatViewModelForChat *_chatViewModel;
    id <SCChatAndFeedViewControllerDelegate> _delegate;
    id <NavigationDelegate> _navigationDelegate;
    id <SwipeViewParentDelegate> _parentDelegate;
    id <ReplyDelegate> _replyDelegate;
    NSDictionary *_sourcePushNotificationDictionary;
    id <StatusBarDelegate> _statusBarDelegate;
    SCBaseMediaFullScreenView *_baseMediaFullScreenView;
    UIView *_chatUserProfileBorder;
    UIPanGestureRecognizer *_chatUserProfilePanGestureRecognizer;
    UITapGestureRecognizer *_chatUserProfileTapGestureRecognizer;
    SCChatUserProfileViewController *_chatUserProfileVC;
    SCChatInputController *_chatInputController;
    UIView *_containerView;
    SCCustomVolumeController *_customVolumeController;
    SCDiscoverDSnapExpirationValidator *_dSnapExpirationValidator;
    SCChatLocationUpdater *_locationUpdater;
    SCChatViewHeader *_header;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    SCPullToDismissController *_pullToDismissController;
    double _snapViewingChatOffset;
    UIView *_tableContainerView;
    SCChatTableViewDataSourceV2 *_tableDataSource;
    SCChatTableViewDelegate *_tableDelegate;
    SCChatTableView *_tableView;
    UITapGestureRecognizer *_tapToSkipGestureRecognizer;
}

+ (id)profiledSelectorNames;
@property(retain, nonatomic) UITapGestureRecognizer *tapToSkipGestureRecognizer; // @synthesize tapToSkipGestureRecognizer=_tapToSkipGestureRecognizer;
@property(retain, nonatomic) SCChatTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCChatTableViewDelegate *tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(retain, nonatomic) SCChatTableViewDataSourceV2 *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(nonatomic) double snapViewingChatOffset; // @synthesize snapViewingChatOffset=_snapViewingChatOffset;
@property(retain, nonatomic) SCPullToDismissController *pullToDismissController; // @synthesize pullToDismissController=_pullToDismissController;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SCChatViewHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCChatLocationUpdater *locationUpdater; // @synthesize locationUpdater=_locationUpdater;
@property(retain, nonatomic) SCDiscoverDSnapExpirationValidator *dSnapExpirationValidator; // @synthesize dSnapExpirationValidator=_dSnapExpirationValidator;
@property(retain, nonatomic) SCCustomVolumeController *customVolumeController; // @synthesize customVolumeController=_customVolumeController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCChatInputController *chatInputController; // @synthesize chatInputController=_chatInputController;
@property(retain, nonatomic) SCChatUserProfileViewController *chatUserProfileVC; // @synthesize chatUserProfileVC=_chatUserProfileVC;
@property(retain, nonatomic) UITapGestureRecognizer *chatUserProfileTapGestureRecognizer; // @synthesize chatUserProfileTapGestureRecognizer=_chatUserProfileTapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *chatUserProfilePanGestureRecognizer; // @synthesize chatUserProfilePanGestureRecognizer=_chatUserProfilePanGestureRecognizer;
@property(retain, nonatomic) UIView *chatUserProfileBorder; // @synthesize chatUserProfileBorder=_chatUserProfileBorder;
@property(retain, nonatomic) SCBaseMediaFullScreenView *baseMediaFullScreenView; // @synthesize baseMediaFullScreenView=_baseMediaFullScreenView;
@property(nonatomic) __weak id <StatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property(retain, nonatomic) NSDictionary *sourcePushNotificationDictionary; // @synthesize sourcePushNotificationDictionary=_sourcePushNotificationDictionary;
@property(nonatomic) __weak id <ReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
@property(nonatomic) __weak id <SwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SCChatAndFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCChatViewModelForChat *chatViewModel; // @synthesize chatViewModel=_chatViewModel;
@property(retain, nonatomic) SCChat *chat; // @synthesize chat=_chat;
- (void).cxx_destruct;
- (_Bool)mainScrollViewShouldDisableScroll:(id)arg1;
- (void)sendAudioNote:(id)arg1;
- (void)prepareMedia:(id)arg1 withMediaDrawerMedia:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sendMediaDrawerMedia:(id)arg1;
- (void)_followThroughOnSendSticker;
- (void)sendSticker:(id)arg1;
- (void)sendEmoji:(id)arg1;
- (void)removeLifeCycleListener:(id)arg1;
- (void)addLifeCycleListener:(id)arg1;
- (void)deviceLocked:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_messageViewModelForIndexPath:(id)arg1;
- (id)_messageViewModelForPoint:(struct CGPoint)arg1;
- (id)_messageViewModelForCell:(id)arg1;
- (id)_messageForViewModel:(id)arg1;
- (id)_messageForIndexPath:(id)arg1;
- (void)messageFailedToSend:(id)arg1;
- (void)_saveChatToGalleryWithRecipient:(id)arg1;
- (void)userDidTakeScreenshot;
- (void)sccpConnectionStatusChanged:(id)arg1;
- (void)_saveOrUnsaveMessage:(id)arg1 inStackedGroup:(_Bool)arg2;
- (void)_deleteFailedMessage:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didFinishSnapPlaying:(id)arg1;
- (void)didFailSetUpSnapPlaying:(id)arg1;
- (void)didSucceedSetUpSnapPlaying:(id)arg1;
- (long long)sourceViewType;
- (_Bool)isVisibleAndCanPlaySnap;
- (id)mediaView;
- (id)mediaContainerView;
- (_Bool)shouldTriggerPullToDismissWithSwipeDirection:(unsigned long long)arg1;
- (struct CGRect)_iconViewRectForIndexPath:(id)arg1;
- (struct CGRect)_iconViewRectForMessage:(id)arg1;
- (void)_willTriggerTapToViewAtPoint:(struct CGPoint)arg1;
- (void)_updatePullToDismissFinalCircleFrame;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSnapTapped:(id)arg1;
- (void)onPaymentTapped:(id)arg1;
- (void)attemptRetryBlockForMessage:(id)arg1;
- (void)onChatTapped:(id)arg1;
- (double)yOffsetForPaymentView;
- (void)didSendPayment;
- (void)didFinishSwipeToSend;
- (void)didFinishSwipeDown;
- (void)deleteFailedPaymentMessage:(id)arg1;
- (void)flowSuccessfullyCompleted;
- (void)cardLinkingSuccessful;
- (void)iTunesLinkOpenedWithLinkAttribute:(id)arg1;
- (void)textTableViewCellDidSelectCashLabelWithCell:(id)arg1;
- (void)textTableViewCell:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)textTableViewCell:(id)arg1 didSelectLinkWithAddress:(id)arg2;
- (void)textTableViewCell:(id)arg1 didSelectLinkWithURL:(id)arg2 linkAttribute:(id)arg3;
- (void)_followThroughOnSendText;
- (void)_sendAttributedInputText:(id)arg1;
- (void)releaseVideoChatMaybeWithCompletion:(CDUnknownBlockType)arg1;
- (id)getVideoChatController;
- (_Bool)isEligibleSenderReceiverPair;
- (void)presentCardLinkingVCForCashTag;
- (void)startPotentiallyEligibleFlow;
- (void)chatInputControllerPresentSwipeToSendViewController:(id)arg1;
- (void)chatInputController:(id)arg1 didTapSendPaymentText:(id)arg2 cashTagRanges:(id)arg3 amount:(unsigned long long)arg4;
- (double)_chatHeaderVerticalTranslationUpForContentHeight:(double)arg1;
- (void)chatInputController:(id)arg1 keyboardFrameWillChangeAnimated:(_Bool)arg2;
- (void)chatInputControllerTextDidChange:(id)arg1;
- (void)chatInputController:(id)arg1 didTapSendText:(id)arg2;
- (id)recipientForChatInputController:(id)arg1;
- (_Bool)chatUserProfileVisible;
- (void)chatUserProfileDisplayNameDidChange;
- (void)chatUserProfileDidDisappear;
- (void)chatUserProfileWillDisappear;
- (void)chatUserProfileDidAppear;
- (void)chatUserProfileWillAppear;
- (void)setChatUserProfileHidden:(_Bool)arg1;
- (void)setUpLayoutConstraintForDrawer:(id)arg1 visible:(_Bool)arg2;
- (void)openOrCloseDrawer:(id)arg1 visible:(_Bool)arg2 animated:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)moveDrawer:(id)arg1 atOffset:(double)arg2;
- (struct CGRect)chatUserProfileFrame;
- (void)goRightWithAnimation:(_Bool)arg1;
- (id)chatRecipientUsername;
- (void)_addCustomVolumeIgnoringNextVolumeChange:(_Bool)arg1 parentView:(id)arg2;
- (void)_removeCustomVolume;
- (void)handleTapOnBar:(id)arg1 withMessage:(id)arg2;
- (id)dSnapValidator;
- (void)fullScreenViewWasDismissed:(id)arg1;
- (void)fullScreenViewWillAppear:(id)arg1;
- (void)dismissFullScreenView;
- (void)_createFullScreenViewFromThumbnailView:(id)arg1;
- (void)didShowPendingDisplayForMedia:(id)arg1;
- (void)didShowCompleteDisplayForMedia:(id)arg1;
- (void)handleLongPressOnThumbnail:(id)arg1 withMessage:(id)arg2;
- (void)handleTapOnThumbnail:(id)arg1 withMessage:(id)arg2;
- (void)updateTableContentInsetForPresenceWithHeight:(double)arg1;
- (_Bool)isTheUserConsumingMedia;
- (_Bool)isTheUserConsumingSnap;
- (_Bool)shouldPlayRemoteVideoStream;
- (id)myUsername;
- (void)triggerMediaAccessoryPress:(_Bool)arg1;
@property(nonatomic) _Bool fullscreenAccessoryImagesUsed;
@property(nonatomic) _Bool inputViewTransparent;
@property(nonatomic) _Bool snapAccessoryHidden;
@property(nonatomic) _Bool keyboardHidden;
@property(nonatomic) _Bool inputAccessoriesHidden;
- (void)callPromptPanGesture:(id)arg1 dragToHide:(_Bool)arg2;
- (void)resetMediaAccessories;
- (id)getInputView;
- (id)getContainerView;
- (void)handleOffsetChangedForCells:(double)arg1;
- (void)longPressBeganForCellWithSnap:(id)arg1;
- (void)handleLongPressForCellWithBaseMessage:(id)arg1 inStackedGroup:(_Bool)arg2;
- (void)handleLongPress:(id)arg1 forMessageViewModel:(id)arg2;
- (void)handleLongPress:(id)arg1 forStackedViewModel:(id)arg2;
- (void)tapToSkip:(id)arg1;
- (void)tapToDismissChatUserProfile:(id)arg1;
- (void)swipeToDismissChatUserProfile:(id)arg1;
- (void)pan:(id)arg1;
- (void)longPress:(id)arg1;
- (id)getSnapPlayControllerInCurrentVC;
- (id)getSnapPlayControllerAndReplaceContainer;
- (void)viewDidPartiallyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)viewDidFullyAppear;
- (void)didReceiveMemoryWarning;
- (void)didLogout;
- (void)viewWillEnterBackground;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (_Bool)shouldPopToRootViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_initTextLinkController;
- (void)_initCashController;
- (void)_initLocationUpdater;
- (void)_initMessageUpdater;
- (void)_initMessageReleaser;
- (void)_initVideoChatClientController:(_Bool)arg1;
- (void)_initLeftShadow;
- (void)_initGestures;
- (void)_initInputView;
- (void)_initChatTable;
- (void)_initHeader;
- (void)_initLogger;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;
- (id)getPageName;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

