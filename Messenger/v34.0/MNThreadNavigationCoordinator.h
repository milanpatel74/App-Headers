/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNNavigationListener.h>
#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNMessagesAppearanceEventListener.h>

@protocol MNAuthenticationManager, FBProvider;
@class MNNavigationCoordinator, FBExperimentManager, MNMessagesViewController, MNMessagesViewPresenter, MNLoadingViewController, MNThreadLoadPerfLogger, FBIdleDetector, MNMessagesViewControllerNavigationListenerAnnouncer, NSString;

@interface MNThreadNavigationCoordinator : NSObject <MNNavigationListener, FBSessionClassProvidable, MNMessagesAppearanceEventListener> {

	MNNavigationCoordinator* _navigationCoordinator;
	id<MNAuthenticationManager> _authManager;
	FBExperimentManager* _experimentManager;
	id<FBProvider> _messagesViewControllerProvider;
	MNMessagesViewController* _messagesViewController;
	MNMessagesViewPresenter* _messagesViewPresenter;
	MNLoadingViewController* _messagesLoadingViewController;
	id<FBProvider> _loadingViewControllerProvider;
	id<FBProvider> _messagesViewByUserNamePresentationStrategyProvider;
	id<FBProvider> _messagesViewByDescriptorPresentationStrategyProvider;
	id<FBProvider> _messagesViewNavigationHandlerProvider;
	MNThreadLoadPerfLogger* _threadLoadPerfLogger;
	FBIdleDetector* _idleDetector;
	MNMessagesViewControllerNavigationListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesWillDisappearWithThreadViewModel:(id)arg1 ;
-(void)messagesDidDisappearWithThreadViewModel:(id)arg1 ;
-(void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)didSelectNewSingleContactThreadWithLocalDescriptor:(id)arg1 ;
-(void)didSelectNewThreadWithLocalDescriptor:(id)arg1 ;
-(void)navigateToThreadWithDescriptor:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 pushDestination:(long long)arg4 animated:(BOOL)arg5 ;
-(void)navigateToThreadWithLocalDescriptor:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 replyContent:(id)arg4 autoSendReplyContent:(BOOL)arg5 pushDestination:(long long)arg6 scrollToFailure:(BOOL)arg7 animated:(BOOL)arg8 loggingEventDescriptor:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)navigateToThreadWithDescriptor:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 replyContent:(id)arg4 autoSendReplyContent:(BOOL)arg5 pushDestination:(long long)arg6 animated:(BOOL)arg7 ;
-(void)navigateToThreadWithRecipientFbName:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 pushDestination:(long long)arg4 animated:(BOOL)arg5 ;
-(void)navigateToThreadWithLocalDescriptor:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 pushDestination:(long long)arg4 animated:(BOOL)arg5 loggingEventDescriptor:(id)arg6 ;
-(BOOL)isViewingThread:(id)arg1 ;
-(void)navigateToThreadWithLocalDescriptor:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 pushDestination:(long long)arg4 animated:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)initWithNavigationCoordinator:(id)arg1 messagesViewControllerProvider:(id)arg2 messagesViewNavigationHandlerProvider:(id)arg3 messagesViewPresenter:(id)arg4 loadingViewControllerProvider:(id)arg5 messagesViewByDescriptorPresentationStrategyProvider:(id)arg6 messagesViewByUserNamePresentationStrategyProvider:(id)arg7 idleDetector:(id)arg8 threadLoadPerfLogger:(id)arg9 authManager:(id)arg10 experimentManager:(id)arg11 ;
-(void)_initMessagesViewControllerIfNeeded;
-(void)navigateToThreadWithLocalDescriptor:(id)arg1 conversationInitiator:(id)arg2 withInitialComposerExtensionIdentifier:(id)arg3 pushDestination:(long long)arg4 animated:(BOOL)arg5 ;
-(void)_runMessagesViewPresentationStrategy:(id)arg1 pushDestination:(long long)arg2 animated:(BOOL)arg3 presentationSource:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_runMessagesViewPresentationStrategy:(id)arg1 pushDestination:(long long)arg2 scrollToFailure:(BOOL)arg3 animated:(BOOL)arg4 presentationSource:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_beginMessagesViewThreadNavigation;
-(void)_initLoadingViewControllerIfNeeded;
-(BOOL)_switchToInboxForPushDestinationIfNeeded:(long long)arg1 ;
-(id)_navigationControllerForPushDestination:(long long)arg1 ;
-(BOOL)_shouldDismissModelViewForPushDestination:(long long)arg1 ;
-(void)_finishThreadNavigationIn:(id)arg1 didSwitchToInboxTab:(BOOL)arg2 shouldDismissModelView:(BOOL)arg3 alreadyPresentedLoading:(BOOL)arg4 tryAnimate:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_prepareUIForThreadNavigationIn:(id)arg1 didSwitchToInboxTab:(BOOL)arg2 shouldDismissModelView:(BOOL)arg3 tryAnimate:(BOOL)arg4 canAnimatePush:(out BOOL*)arg5 ;
-(void)_showLoadingViewControllerIn:(id)arg1 shouldDismissModelView:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_hideLoadingViewControllerIfNecessary;
-(void)_setUpNavigationStackForThreadNavigationIn:(id)arg1 didPerformNavigation:(out BOOL*)arg2 ;
-(void)_finishPushingLoadingOrMessagesViewControllerWithShouldDismissModelView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isMessagesLoadingViewControllerDisplayed;
-(void)_cancelPresentAndTearDownMessagesViewControllerIfNeeded;
-(BOOL)_isMessagesViewControllerDisplayed;
-(void)addMessagesViewControllerNavigationListener:(id)arg1 ;
-(void)removeMessagesViewControllerNavigationListener:(id)arg1 ;
-(void)dealloc;
-(void)tearDown;
-(void)setup;
@end
