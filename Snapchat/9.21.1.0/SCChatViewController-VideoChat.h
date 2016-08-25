//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChatViewController.h"

#import "SCVideoChatControllerV2Delegate.h"
#import "SCVideoChatViewControllerDelegate.h"

@class NSString;

@interface SCChatViewController (VideoChat) <SCVideoChatViewControllerDelegate, SCVideoChatControllerV2Delegate>
- (_Bool)isAddlivePresenceEnabled;
- (_Bool)isVideoChatLocked;
- (void)showHereChatHelpNotSupported;
- (void)showHereChatHelp;
- (void)showHereChatHelpIfNecessary;
- (double)deferredDisconnectTimeFromStudy;
- (id)getCameraHelperView;
- (void)hasReceivedVideoChatBefore;
- (void)resetPresenceTimers;
- (_Bool)shouldPlayRemoteVideoStream;
- (void)remoteVideoFeedEnd;
- (void)remoteVideoFeedStarted;
- (void)remoteStreamStoppedForMedia:(unsigned long long)arg1;
- (void)remoteStreamStartedForMedia:(unsigned long long)arg1;
- (void)remotePeerDisconnected;
- (void)remotePeerConnected;
- (void)localPreviewContainerReady:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presenceInitialized;
- (_Bool)isRecipientPresent;
- (void)promptCallInitialized;
- (id)remoteUsername;
- (void)triggerMediaAccessoryPress:(_Bool)arg1;
@property(nonatomic) _Bool fullscreenAccessoryImagesUsed;
@property(nonatomic) _Bool inputViewTransparent;
@property(nonatomic) _Bool snapAccessoryHidden;
@property(nonatomic) _Bool keyboardHidden;
@property(nonatomic) _Bool inputAccessoriesHidden;
- (void)resetMediaAccessories;
- (void)callPromptPanGesture:(id)arg1 dragToHide:(_Bool)arg2;
- (void)videoViewDidLongPressOrPanWithGestureRecognizer:(id)arg1;
- (void)updateTableContentInsetForPresenceWithHeight:(double)arg1;
- (void)userBeingActive:(_Bool)arg1;
- (void)releaseChatViewMaybe;
- (void)viewWillEnterBackground;
- (void)viewDidBecomeActive;
- (void)resetVideoChatViewFrame;
- (void)delayEnableIncomingStream;
- (struct CGRect)frameForLiveVideo;
- (_Bool)usesChatGatewayAuth;
- (void)passGestureRecognizerStateChangedToVideoChatVC;
- (void)stopSendingVideoStream;
- (void)startSendingVideoStream;
- (_Bool)receivingVideoStream;
- (_Bool)sendingVideoStream;
- (_Bool)sendingMedia;
- (_Bool)videoChatVisible;
- (void)removeLiveVideoChatView;
- (void)presentVideoChatViewController;
- (void)releaseVideoChat;
- (void)initVideoChatCommons;
- (void)initVideoChatWithHereAuth;
- (void)initVideoChatWithChatAuth;
- (void)tryToInitializeChatGatewayAuth;
- (_Bool)canStartVideoChatSession;
- (_Bool)shouldStartVideoChatSessionUsingPresence;
- (_Bool)shouldStartVideoChatSessionUsingChatGateway;
- (_Bool)shouldStartVideoChatSession;
- (void)resetPresenceIndicator;
- (void)handleSnapBtnGestureForVideoChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
