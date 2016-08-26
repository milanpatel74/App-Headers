/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol FBMAppProperties, FBMAppInitializedListening, FBMAppUserSetupListening, FBMMessagingStoreRestoreStateListening, MNAuthenticationManager, MNServiceControlling;
@class FBProviderMapData, UIApplication, MNNavigationCoordinator, MNThreadNavigationCoordinator, MNUserSetUpStatePersister, MNUserSetUpFlowViewControllerProvider, OrcaPushRegistrar, FBAPISessionStore, FBUserSession, MNAppNotificationHandler, MNUserSettings, MNApplicationShortcutItemHandler, FBExceptionHandler, MNAuthenticationCompletionListenerAnnouncer, MNLigerAdapter, FBMLoggedInUserFetcher, FBMLoggedInUserInfoManager, MNAppThemeConfiguration, MNUserSessionObservingCenter, MNIdleServiceDelayController, MNRecentLocalAssetsDetector, MNLocalAssetsQuickShareActionSheetPresenter, NSString;

@interface MNAppSessionInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	UIApplication* _application;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	MNUserSetUpFlowViewControllerProvider* _userSetUpFlowViewControllerProvider;
	id<FBMAppProperties> _appProperties;
	OrcaPushRegistrar* _pushRegistrar;
	FBAPISessionStore* _apiSessionStore;
	FBUserSession* _session;
	MNAppNotificationHandler* _appNotificationHandler;
	MNUserSettings* _userSettings;
	id<FBMAppInitializedListening> _initializationAnnouncer;
	id<FBMAppUserSetupListening> _setupAnnouncer;
	id<FBMMessagingStoreRestoreStateListening> _messagingStoreRestoreListener;
	MNApplicationShortcutItemHandler* _applicationShortcutItemHandler;
	id<MNAuthenticationManager> _authManager;
	FBExceptionHandler* _exceptionHandler;
	MNAuthenticationCompletionListenerAnnouncer* _authenticationCompletionAnnouncer;
	MNLigerAdapter* _ligerAdapter;
	FBMLoggedInUserFetcher* _loggedInUserFetcher;
	id<MNServiceControlling> _serviceController;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNUserSessionObservingCenter* _userSessionObservingCenter;
	MNIdleServiceDelayController* _idleServicesDelayController;
	MNRecentLocalAssetsDetector* _recentLocalAssetsDetector;
	MNLocalAssetsQuickShareActionSheetPresenter* _localAssetsPresenter;

}

@property (nonatomic,readonly) UIApplication * application;                                                                  //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                                  //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNUserSetUpStatePersister * userSetUpStatePersister;                                          //@synthesize userSetUpStatePersister=_userSetUpStatePersister - In the implementation block
@property (nonatomic,readonly) MNUserSetUpFlowViewControllerProvider * userSetUpFlowViewControllerProvider;                  //@synthesize userSetUpFlowViewControllerProvider=_userSetUpFlowViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<FBMAppProperties> appProperties;                                                           //@synthesize appProperties=_appProperties - In the implementation block
@property (nonatomic,readonly) OrcaPushRegistrar * pushRegistrar;                                                            //@synthesize pushRegistrar=_pushRegistrar - In the implementation block
@property (nonatomic,readonly) FBAPISessionStore * apiSessionStore;                                                          //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNAppNotificationHandler * appNotificationHandler;                                            //@synthesize appNotificationHandler=_appNotificationHandler - In the implementation block
@property (nonatomic,readonly) MNUserSettings * userSettings;                                                                //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,readonly) id<FBMAppInitializedListening> initializationAnnouncer;                                       //@synthesize initializationAnnouncer=_initializationAnnouncer - In the implementation block
@property (nonatomic,readonly) id<FBMAppUserSetupListening> setupAnnouncer;                                                  //@synthesize setupAnnouncer=_setupAnnouncer - In the implementation block
@property (nonatomic,readonly) id<FBMMessagingStoreRestoreStateListening> messagingStoreRestoreListener;                     //@synthesize messagingStoreRestoreListener=_messagingStoreRestoreListener - In the implementation block
@property (nonatomic,readonly) MNApplicationShortcutItemHandler * applicationShortcutItemHandler;                            //@synthesize applicationShortcutItemHandler=_applicationShortcutItemHandler - In the implementation block
@property (nonatomic,readonly) id<MNAuthenticationManager> authManager;                                                      //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,readonly) FBExceptionHandler * exceptionHandler;                                                        //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,readonly) MNAuthenticationCompletionListenerAnnouncer * authenticationCompletionAnnouncer;              //@synthesize authenticationCompletionAnnouncer=_authenticationCompletionAnnouncer - In the implementation block
@property (nonatomic,readonly) MNLigerAdapter * ligerAdapter;                                                                //@synthesize ligerAdapter=_ligerAdapter - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserFetcher * loggedInUserFetcher;                                                 //@synthesize loggedInUserFetcher=_loggedInUserFetcher - In the implementation block
@property (nonatomic,readonly) id<MNServiceControlling> serviceController;                                                   //@synthesize serviceController=_serviceController - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                                         //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,readonly) MNAppThemeConfiguration * appThemeConfiguration;                                              //@synthesize appThemeConfiguration=_appThemeConfiguration - In the implementation block
@property (nonatomic,readonly) MNUserSessionObservingCenter * userSessionObservingCenter;                                    //@synthesize userSessionObservingCenter=_userSessionObservingCenter - In the implementation block
@property (nonatomic,readonly) MNIdleServiceDelayController * idleServicesDelayController;                                   //@synthesize idleServicesDelayController=_idleServicesDelayController - In the implementation block
@property (nonatomic,readonly) MNRecentLocalAssetsDetector * recentLocalAssetsDetector;                                      //@synthesize recentLocalAssetsDetector=_recentLocalAssetsDetector - In the implementation block
@property (nonatomic,readonly) MNLocalAssetsQuickShareActionSheetPresenter * localAssetsPresenter;                           //@synthesize localAssetsPresenter=_localAssetsPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNAuthenticationManager>)authManager;
-(MNAppThemeConfiguration *)appThemeConfiguration;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(OrcaPushRegistrar *)pushRegistrar;
-(FBAPISessionStore *)apiSessionStore;
-(id<FBMAppInitializedListening>)initializationAnnouncer;
-(MNAppNotificationHandler *)appNotificationHandler;
-(id<FBMAppProperties>)appProperties;
-(MNApplicationShortcutItemHandler *)applicationShortcutItemHandler;
-(MNAuthenticationCompletionListenerAnnouncer *)authenticationCompletionAnnouncer;
-(id)experimentManagerProvider;
-(MNIdleServiceDelayController *)idleServicesDelayController;
-(MNLigerAdapter *)ligerAdapter;
-(MNLocalAssetsQuickShareActionSheetPresenter *)localAssetsPresenter;
-(id)messagingStoreProvider;
-(id<FBMMessagingStoreRestoreStateListening>)messagingStoreRestoreListener;
-(id)mobileConfigContextManagerProvider;
-(id)nonCachedLaunchImageViewController;
-(id)nonCachedLoadingViewController;
-(id)nonCachedLoggedInUserWelcomeViewController;
-(id)nonCachedLoginFlowController;
-(id)nonCachedThreadSelectionStateCoordinator;
-(id)nonCachedUserSetupFlowController;
-(MNRecentLocalAssetsDetector *)recentLocalAssetsDetector;
-(id<MNServiceControlling>)serviceController;
-(id<FBMAppUserSetupListening>)setupAnnouncer;
-(id)stateRestorationStrategyProvider;
-(id)storeOpenerProvider;
-(id)syncStoreProvider;
-(MNUserSessionObservingCenter *)userSessionObservingCenter;
-(MNUserSetUpFlowViewControllerProvider *)userSetUpFlowViewControllerProvider;
-(MNUserSetUpStatePersister *)userSetUpStatePersister;
-(FBMLoggedInUserFetcher *)loggedInUserFetcher;
-(FBExceptionHandler *)exceptionHandler;
-(UIApplication *)application;
-(FBUserSession *)session;
-(MNUserSettings *)userSettings;
@end
