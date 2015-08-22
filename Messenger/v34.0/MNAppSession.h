/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNUserSetUpFlowControllerDelegate.h>
#import <Messenger/MNLoggedInUserWelcomeViewControllerDelegate.h>
#import <Messenger/MNLoginViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/MNRegistrationFlowControllerDelegate.h>
#import <Messenger/MNSessionStateMachineTransitionHandlerDelegate.h>
#import <Messenger/FBMUserFetcherDelegate.h>
#import <Messenger/MNAuthenticationOptionsViewControllerDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMConfigurable.h>

@protocol FBProvider, FBMAppProperties, MNServiceControlling, MNAuthenticationManager;
@class MNLigerAdapter, FBLazyCreator, UIWindow, UIApplication, MNPreLoginContainerViewController, MNUserSetUpFlowViewControllerProvider, MNUserSetUpFlowController, UINavigationController, MNLoginViewController, MNLoadingViewController, FBMUserFetcher, MNLoggedInUserWelcomeViewController, MNRegistrationFlowController, MNAuthenticationOptionsViewController, FBAPISessionStore, FBIdleDetector, FBUserSession, NSDictionary, OrcaPushRegistrar, FBMPushKitRegistrar, MNOnlineStatusManager, MNUserSettings, MNThreadSelectionStateCoordinator, MNConnectionStatusToastController, MNDiagnosticsBugReporter, FBLocaleMap, FBExceptionHandler, MNAuthenticationCompletionListenerAnnouncer, MNSessionStateMachine, MNSessionStateMachineTransitionHandler, NSString;

@interface MNAppSession : NSObject <MNUserSetUpFlowControllerDelegate, MNLoggedInUserWelcomeViewControllerDelegate, MNLoginViewControllerDelegate, UINavigationControllerDelegate, MNRegistrationFlowControllerDelegate, MNSessionStateMachineTransitionHandlerDelegate, FBMUserFetcherDelegate, MNAuthenticationOptionsViewControllerDelegate, FBSessionClassProvidable, FBMConfigurable> {

	BOOL _loginUIWasShown;
	BOOL _loggedInWelcomeUIWasShown;
	BOOL _isLoggedIn;
	BOOL _userTapped;
	MNLigerAdapter* _ligerAdapter;
	FBLazyCreator* _navigationCoordinatorCreator;
	FBLazyCreator* _messageVCCoordinatorCreator;
	UIWindow* _window;
	UIApplication* _application;
	MNPreLoginContainerViewController* _preLoginContainerViewController;
	id<FBProvider> _userSetUpFlowControllerProvider;
	id<FBProvider> _userSetUpStatePersisterProvider;
	MNUserSetUpFlowViewControllerProvider* _userSetUpFlowViewControllerProvider;
	MNUserSetUpFlowController* _userSetUpFlowController;
	UINavigationController* _loginAndUserSetUpNavigationController;
	id<FBProvider> _loginViewControllerProvider;
	MNLoginViewController* _loginViewController;
	id<FBProvider> _loadingViewControllerProvider;
	MNLoadingViewController* _loadingViewController;
	id<FBProvider> _userFetcherProvider;
	FBMUserFetcher* _userFetcher;
	id<FBProvider> _loggedInUserWelcomeViewControllerProvider;
	MNLoggedInUserWelcomeViewController* _loggedInUserWelcomeViewController;
	id<FBProvider> _registrationFlowControllerProvider;
	MNRegistrationFlowController* _registrationFlowController;
	id<FBProvider> _authenticationOptionsViewControllerProvider;
	MNAuthenticationOptionsViewController* _authenticationOptionsViewController;
	id<FBMAppProperties> _appProperties;
	FBAPISessionStore* _apiSessionStore;
	id<FBProvider> _facebookProvider;
	id<FBProvider> _experimentManagerProvider;
	id<FBProvider> _mobileConfigFactoryProvider;
	FBIdleDetector* _foregroundIdleDetector;
	id<FBProvider> _crashUploaderProvider;
	id<FBProvider> _pendingRequestsNumberDownloader;
	id<FBProvider> _serviceControllerProvider;
	id<MNServiceControlling> _serviceController;
	id<FBProvider> _storeOpenerProvider;
	id<FBProvider> _syncStoreProvider;
	id<FBProvider> _messagingStoreProvider;
	id<FBProvider> _messagingStoreRestoreListenerProvider;
	id<FBProvider> _stateRestorationStrategyProvider;
	id _foregroundObserver;
	id _backgroundObserver;
	id _didBecomeActiveObserver;
	FBUserSession* _session;
	id<FBProvider> _urlHandlerProvider;
	id<FBProvider> _appNotificationHandlerProvider;
	NSDictionary* _launchOptions;
	OrcaPushRegistrar* _pushRegistrar;
	FBMPushKitRegistrar* _pushkitRegistrar;
	MNOnlineStatusManager* _onlineStatusManager;
	MNUserSettings* _userSettings;
	FBLazyCreator* _initializationAnnouncerCreator;
	FBLazyCreator* _setupAnnouncerCreator;
	id<FBProvider> _threadSelectionStateCoordinatorProvider;
	MNThreadSelectionStateCoordinator* _threadSelectionStateCoordinator;
	MNConnectionStatusToastController* _connectionStatusToastController;
	MNDiagnosticsBugReporter* _diagnosticsBugReporter;
	FBLocaleMap* _localeMap;
	id<MNAuthenticationManager> _authenticationManager;
	FBExceptionHandler* _exceptionHandler;
	MNAuthenticationCompletionListenerAnnouncer* _authenticationCompletionAnnouncer;
	MNSessionStateMachine* _sessionStartStateMachine;
	MNSessionStateMachineTransitionHandler* _sessionStartStateMachineTransitionHandler;

}

@property (nonatomic,retain) UIWindow * window;                                                                               //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIApplication * application;                                                                     //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) MNPreLoginContainerViewController * preLoginContainerViewController;                             //@synthesize preLoginContainerViewController=_preLoginContainerViewController - In the implementation block
@property (nonatomic,retain) id<FBProvider> userSetUpFlowControllerProvider;                                                  //@synthesize userSetUpFlowControllerProvider=_userSetUpFlowControllerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> userSetUpStatePersisterProvider;                                                  //@synthesize userSetUpStatePersisterProvider=_userSetUpStatePersisterProvider - In the implementation block
@property (nonatomic,retain) MNUserSetUpFlowViewControllerProvider * userSetUpFlowViewControllerProvider;                     //@synthesize userSetUpFlowViewControllerProvider=_userSetUpFlowViewControllerProvider - In the implementation block
@property (nonatomic,retain) MNUserSetUpFlowController * userSetUpFlowController;                                             //@synthesize userSetUpFlowController=_userSetUpFlowController - In the implementation block
@property (nonatomic,retain) UINavigationController * loginAndUserSetUpNavigationController;                                  //@synthesize loginAndUserSetUpNavigationController=_loginAndUserSetUpNavigationController - In the implementation block
@property (nonatomic,retain) id<FBProvider> loginViewControllerProvider;                                                      //@synthesize loginViewControllerProvider=_loginViewControllerProvider - In the implementation block
@property (nonatomic,retain) MNLoginViewController * loginViewController;                                                     //@synthesize loginViewController=_loginViewController - In the implementation block
@property (nonatomic,retain) id<FBProvider> loadingViewControllerProvider;                                                    //@synthesize loadingViewControllerProvider=_loadingViewControllerProvider - In the implementation block
@property (nonatomic,retain) MNLoadingViewController * loadingViewController;                                                 //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (nonatomic,retain) id<FBProvider> userFetcherProvider;                                                              //@synthesize userFetcherProvider=_userFetcherProvider - In the implementation block
@property (nonatomic,retain) FBMUserFetcher * userFetcher;                                                                    //@synthesize userFetcher=_userFetcher - In the implementation block
@property (nonatomic,retain) id<FBProvider> loggedInUserWelcomeViewControllerProvider;                                        //@synthesize loggedInUserWelcomeViewControllerProvider=_loggedInUserWelcomeViewControllerProvider - In the implementation block
@property (nonatomic,retain) MNLoggedInUserWelcomeViewController * loggedInUserWelcomeViewController;                         //@synthesize loggedInUserWelcomeViewController=_loggedInUserWelcomeViewController - In the implementation block
@property (nonatomic,retain) id<FBProvider> registrationFlowControllerProvider;                                               //@synthesize registrationFlowControllerProvider=_registrationFlowControllerProvider - In the implementation block
@property (nonatomic,retain) MNRegistrationFlowController * registrationFlowController;                                       //@synthesize registrationFlowController=_registrationFlowController - In the implementation block
@property (nonatomic,retain) id<FBProvider> authenticationOptionsViewControllerProvider;                                      //@synthesize authenticationOptionsViewControllerProvider=_authenticationOptionsViewControllerProvider - In the implementation block
@property (nonatomic,retain) MNAuthenticationOptionsViewController * authenticationOptionsViewController;                     //@synthesize authenticationOptionsViewController=_authenticationOptionsViewController - In the implementation block
@property (nonatomic,retain) id<FBMAppProperties> appProperties;                                                              //@synthesize appProperties=_appProperties - In the implementation block
@property (nonatomic,retain) FBAPISessionStore * apiSessionStore;                                                             //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (nonatomic,retain) id<FBProvider> facebookProvider;                                                                 //@synthesize facebookProvider=_facebookProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> experimentManagerProvider;                                                        //@synthesize experimentManagerProvider=_experimentManagerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> mobileConfigFactoryProvider;                                                      //@synthesize mobileConfigFactoryProvider=_mobileConfigFactoryProvider - In the implementation block
@property (nonatomic,retain) FBIdleDetector * foregroundIdleDetector;                                                         //@synthesize foregroundIdleDetector=_foregroundIdleDetector - In the implementation block
@property (nonatomic,retain) id<FBProvider> crashUploaderProvider;                                                            //@synthesize crashUploaderProvider=_crashUploaderProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> pendingRequestsNumberDownloader;                                                  //@synthesize pendingRequestsNumberDownloader=_pendingRequestsNumberDownloader - In the implementation block
@property (nonatomic,retain) id<FBProvider> serviceControllerProvider;                                                        //@synthesize serviceControllerProvider=_serviceControllerProvider - In the implementation block
@property (nonatomic,retain) id<MNServiceControlling> serviceController;                                                      //@synthesize serviceController=_serviceController - In the implementation block
@property (nonatomic,retain) id<FBProvider> storeOpenerProvider;                                                              //@synthesize storeOpenerProvider=_storeOpenerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> syncStoreProvider;                                                                //@synthesize syncStoreProvider=_syncStoreProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> messagingStoreProvider;                                                           //@synthesize messagingStoreProvider=_messagingStoreProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> messagingStoreRestoreListenerProvider;                                            //@synthesize messagingStoreRestoreListenerProvider=_messagingStoreRestoreListenerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> stateRestorationStrategyProvider;                                                 //@synthesize stateRestorationStrategyProvider=_stateRestorationStrategyProvider - In the implementation block
@property (nonatomic,retain) id foregroundObserver;                                                                           //@synthesize foregroundObserver=_foregroundObserver - In the implementation block
@property (nonatomic,retain) id backgroundObserver;                                                                           //@synthesize backgroundObserver=_backgroundObserver - In the implementation block
@property (nonatomic,retain) id didBecomeActiveObserver;                                                                      //@synthesize didBecomeActiveObserver=_didBecomeActiveObserver - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<FBProvider> urlHandlerProvider;                                                               //@synthesize urlHandlerProvider=_urlHandlerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> appNotificationHandlerProvider;                                                   //@synthesize appNotificationHandlerProvider=_appNotificationHandlerProvider - In the implementation block
@property (nonatomic,copy) NSDictionary * launchOptions;                                                                      //@synthesize launchOptions=_launchOptions - In the implementation block
@property (nonatomic,retain) OrcaPushRegistrar * pushRegistrar;                                                               //@synthesize pushRegistrar=_pushRegistrar - In the implementation block
@property (nonatomic,retain) FBMPushKitRegistrar * pushkitRegistrar;                                                          //@synthesize pushkitRegistrar=_pushkitRegistrar - In the implementation block
@property (nonatomic,retain) MNOnlineStatusManager * onlineStatusManager;                                                     //@synthesize onlineStatusManager=_onlineStatusManager - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                                                   //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) FBLazyCreator * initializationAnnouncerCreator;                                                  //@synthesize initializationAnnouncerCreator=_initializationAnnouncerCreator - In the implementation block
@property (nonatomic,retain) FBLazyCreator * setupAnnouncerCreator;                                                           //@synthesize setupAnnouncerCreator=_setupAnnouncerCreator - In the implementation block
@property (nonatomic,retain) id<FBProvider> threadSelectionStateCoordinatorProvider;                                          //@synthesize threadSelectionStateCoordinatorProvider=_threadSelectionStateCoordinatorProvider - In the implementation block
@property (nonatomic,retain) MNThreadSelectionStateCoordinator * threadSelectionStateCoordinator;                             //@synthesize threadSelectionStateCoordinator=_threadSelectionStateCoordinator - In the implementation block
@property (nonatomic,retain) MNConnectionStatusToastController * connectionStatusToastController;                             //@synthesize connectionStatusToastController=_connectionStatusToastController - In the implementation block
@property (nonatomic,retain) MNDiagnosticsBugReporter * diagnosticsBugReporter;                                               //@synthesize diagnosticsBugReporter=_diagnosticsBugReporter - In the implementation block
@property (nonatomic,retain) FBLocaleMap * localeMap;                                                                         //@synthesize localeMap=_localeMap - In the implementation block
@property (nonatomic,retain) id<MNAuthenticationManager> authenticationManager;                                               //@synthesize authenticationManager=_authenticationManager - In the implementation block
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler;                                                           //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,retain) MNAuthenticationCompletionListenerAnnouncer * authenticationCompletionAnnouncer;                 //@synthesize authenticationCompletionAnnouncer=_authenticationCompletionAnnouncer - In the implementation block
@property (nonatomic,retain) MNSessionStateMachine * sessionStartStateMachine;                                                //@synthesize sessionStartStateMachine=_sessionStartStateMachine - In the implementation block
@property (nonatomic,retain) MNSessionStateMachineTransitionHandler * sessionStartStateMachineTransitionHandler;              //@synthesize sessionStartStateMachineTransitionHandler=_sessionStartStateMachineTransitionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBAPISessionStore *)apiSessionStore;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNAuthenticationManager>)authenticationManager;
-(void)setAuthenticationManager:(id<MNAuthenticationManager>)arg1 ;
-(void)setApiSessionStore:(FBAPISessionStore *)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)_onApplicationBackground;
-(void)fetcher:(id)arg1 didFetchUser:(id)arg2 ;
-(void)fetcher:(id)arg1 couldNotFetchUser:(id)arg2 ;
-(id<FBMAppProperties>)appProperties;
-(void)setAppProperties:(id<FBMAppProperties>)arg1 ;
-(MNOnlineStatusManager *)onlineStatusManager;
-(void)setOnlineStatusManager:(MNOnlineStatusManager *)arg1 ;
-(id<FBProvider>)messagingStoreProvider;
-(void)setMessagingStoreProvider:(id<FBProvider>)arg1 ;
-(OrcaPushRegistrar *)pushRegistrar;
-(void)setPushRegistrar:(OrcaPushRegistrar *)arg1 ;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(void)configureWithWindow:(id)arg1 ;
-(void)beginAppSession;
-(void)setAppNotificationHandlerProvider:(id<FBProvider>)arg1 ;
-(void)setUrlHandlerProvider:(id<FBProvider>)arg1 ;
-(void)presentLoggedInUILaunchedWithOptions:(id)arg1 ;
-(void)presentFetchingLoggedInUserUIWithOptions:(id)arg1 ;
-(void)presentLoggedOutUI;
-(void)presentLoadingIndicatorUI;
-(void)logAuthenticationOptionsExperimentFetchedEventWithExperimentContext:(id)arg1 ;
-(void)presentAuthenticationOptions;
-(void)willEndAppSession;
-(void)didEndAppSession;
-(id<FBProvider>)appNotificationHandlerProvider;
-(id<FBProvider>)urlHandlerProvider;
-(void)authenticationOptionsViewControllerDidPressLoginWithFacebookButton:(id)arg1 ;
-(void)authenticationOptionsViewControllerDidPressNotOnFacebookButton:(id)arg1 ;
-(void)_onApplicationForeground;
-(void)setForegroundIdleDetector:(FBIdleDetector *)arg1 ;
-(void)_onApplicationForegroundIdle;
-(FBIdleDetector *)foregroundIdleDetector;
-(void)loggedInUserWelcomeViewControllerDidTapContinue:(id)arg1 ;
-(void)loginViewController:(id)arg1 didFetchUser:(id)arg2 ;
-(void)loginViewControllerDidCompleteLogin:(id)arg1 ;
-(void)loginViewControllerDidTapRegisterButton:(id)arg1 ;
-(void)loginViewControllerDidTapSwitchAccountButton:(id)arg1 ;
-(MNLoadingViewController *)loadingViewController;
-(void)setLoadingViewController:(MNLoadingViewController *)arg1 ;
-(void)_removeLoginAndNUXNavigationController;
-(void)setForegroundObserver:(id)arg1 ;
-(void)setBackgroundObserver:(id)arg1 ;
-(void)_onApplicationDidBecomeActive;
-(void)setDidBecomeActiveObserver:(id)arg1 ;
-(void)_onSessionStoreDidUnlock:(id)arg1 ;
-(void)_onProtectedDataDidBecomeAvailable:(id)arg1 ;
-(void)_initPreLoginContainerViewControllerIfNeeded;
-(void)_presentLaunchImageUI;
-(id)_getLoginAndNUXNavigationController;
-(void)_presentAuthenticationOptionsWithLoginWithFacebookShouldAvoidSSO:(BOOL)arg1 ;
-(void)presentRegistrationUI;
-(void)presentLoggedOutUIWithExistingAccount:(id)arg1 ssoLoginAllowed:(BOOL)arg2 ;
-(void)_presentLoggedInUI;
-(void)setPreLoginContainerViewController:(MNPreLoginContainerViewController *)arg1 ;
-(void)setUserSetUpFlowController:(MNUserSetUpFlowController *)arg1 ;
-(void)_clearLoggedOutUI;
-(void)_clearLoggedInUserWelcomeUI;
-(id)foregroundObserver;
-(id)backgroundObserver;
-(id)didBecomeActiveObserver;
-(void)setFacebookProvider:(id<FBProvider>)arg1 ;
-(BOOL)_shouldPresentNuxFlow;
-(void)_presentLoggedInUserWelcomeScreen;
-(void)_presentNuxFlow;
-(void)_presentMainAppWithLoginUIHasShown;
-(void)_presentMainAppWithoutLoginUIHasShown;
-(void)setLoginViewController:(MNLoginViewController *)arg1 ;
-(void)setLoggedInUserWelcomeViewController:(MNLoggedInUserWelcomeViewController *)arg1 ;
-(void)_completePresentMainApp:(BOOL)arg1 ;
-(void)setLoginAndUserSetUpNavigationController:(UINavigationController *)arg1 ;
-(void)_completeLogin;
-(void)userSetUpFlowEnded:(BOOL)arg1 ;
-(void)registrationFlowController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 isPartial:(BOOL)arg3 ;
-(void)registrationFlowController:(id)arg1 didRequestLoginApprovalWithExistingAccount:(id)arg2 ;
-(void)registrationFlowControllerSwitchToFacebookLoginFlow:(id)arg1 ;
-(BOOL)isLoggedIn;
-(void)didStartBackgroundServices;
-(void)didFailToRestoreWithError:(id)arg1 ;
-(void)didCompleteRestore;
-(void)didStartForegroundServices;
-(void)presentLoggedInUI;
-(MNPreLoginContainerViewController *)preLoginContainerViewController;
-(id<FBProvider>)userSetUpFlowControllerProvider;
-(void)setUserSetUpFlowControllerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)userSetUpStatePersisterProvider;
-(void)setUserSetUpStatePersisterProvider:(id<FBProvider>)arg1 ;
-(MNUserSetUpFlowViewControllerProvider *)userSetUpFlowViewControllerProvider;
-(void)setUserSetUpFlowViewControllerProvider:(MNUserSetUpFlowViewControllerProvider *)arg1 ;
-(MNUserSetUpFlowController *)userSetUpFlowController;
-(UINavigationController *)loginAndUserSetUpNavigationController;
-(id<FBProvider>)loginViewControllerProvider;
-(void)setLoginViewControllerProvider:(id<FBProvider>)arg1 ;
-(MNLoginViewController *)loginViewController;
-(id<FBProvider>)loadingViewControllerProvider;
-(void)setLoadingViewControllerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)loggedInUserWelcomeViewControllerProvider;
-(void)setLoggedInUserWelcomeViewControllerProvider:(id<FBProvider>)arg1 ;
-(MNLoggedInUserWelcomeViewController *)loggedInUserWelcomeViewController;
-(id<FBProvider>)registrationFlowControllerProvider;
-(void)setRegistrationFlowControllerProvider:(id<FBProvider>)arg1 ;
-(MNRegistrationFlowController *)registrationFlowController;
-(void)setRegistrationFlowController:(MNRegistrationFlowController *)arg1 ;
-(id<FBProvider>)authenticationOptionsViewControllerProvider;
-(void)setAuthenticationOptionsViewControllerProvider:(id<FBProvider>)arg1 ;
-(MNAuthenticationOptionsViewController *)authenticationOptionsViewController;
-(void)setAuthenticationOptionsViewController:(MNAuthenticationOptionsViewController *)arg1 ;
-(id<FBProvider>)facebookProvider;
-(id<FBProvider>)experimentManagerProvider;
-(void)setExperimentManagerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)mobileConfigFactoryProvider;
-(void)setMobileConfigFactoryProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)crashUploaderProvider;
-(void)setCrashUploaderProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)pendingRequestsNumberDownloader;
-(void)setPendingRequestsNumberDownloader:(id<FBProvider>)arg1 ;
-(id<FBProvider>)serviceControllerProvider;
-(void)setServiceControllerProvider:(id<FBProvider>)arg1 ;
-(id<MNServiceControlling>)serviceController;
-(void)setServiceController:(id<MNServiceControlling>)arg1 ;
-(id<FBProvider>)storeOpenerProvider;
-(void)setStoreOpenerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)syncStoreProvider;
-(void)setSyncStoreProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)messagingStoreRestoreListenerProvider;
-(void)setMessagingStoreRestoreListenerProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)stateRestorationStrategyProvider;
-(void)setStateRestorationStrategyProvider:(id<FBProvider>)arg1 ;
-(FBMPushKitRegistrar *)pushkitRegistrar;
-(void)setPushkitRegistrar:(FBMPushKitRegistrar *)arg1 ;
-(FBLazyCreator *)initializationAnnouncerCreator;
-(void)setInitializationAnnouncerCreator:(FBLazyCreator *)arg1 ;
-(FBLazyCreator *)setupAnnouncerCreator;
-(void)setSetupAnnouncerCreator:(FBLazyCreator *)arg1 ;
-(id<FBProvider>)threadSelectionStateCoordinatorProvider;
-(void)setThreadSelectionStateCoordinatorProvider:(id<FBProvider>)arg1 ;
-(MNThreadSelectionStateCoordinator *)threadSelectionStateCoordinator;
-(void)setThreadSelectionStateCoordinator:(MNThreadSelectionStateCoordinator *)arg1 ;
-(MNConnectionStatusToastController *)connectionStatusToastController;
-(void)setConnectionStatusToastController:(MNConnectionStatusToastController *)arg1 ;
-(MNDiagnosticsBugReporter *)diagnosticsBugReporter;
-(void)setDiagnosticsBugReporter:(MNDiagnosticsBugReporter *)arg1 ;
-(MNAuthenticationCompletionListenerAnnouncer *)authenticationCompletionAnnouncer;
-(void)setAuthenticationCompletionAnnouncer:(MNAuthenticationCompletionListenerAnnouncer *)arg1 ;
-(MNSessionStateMachine *)sessionStartStateMachine;
-(void)setSessionStartStateMachine:(MNSessionStateMachine *)arg1 ;
-(MNSessionStateMachineTransitionHandler *)sessionStartStateMachineTransitionHandler;
-(void)setSessionStartStateMachineTransitionHandler:(MNSessionStateMachineTransitionHandler *)arg1 ;
-(void)setUserFetcher:(FBMUserFetcher *)arg1 ;
-(FBLocaleMap *)localeMap;
-(void)setLocaleMap:(FBLocaleMap *)arg1 ;
-(FBMUserFetcher *)userFetcher;
-(id<FBProvider>)userFetcherProvider;
-(void)setUserFetcherProvider:(id<FBProvider>)arg1 ;
-(BOOL)isConfigured;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
-(FBExceptionHandler *)exceptionHandler;
-(NSDictionary *)launchOptions;
-(void)setApplication:(UIApplication *)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(MNUserSettings *)userSettings;
-(UIApplication *)application;
@end
