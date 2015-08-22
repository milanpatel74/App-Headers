/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIApplicationDelegate.h>
#import <Messenger/OrcaLogoutHandler.h>

@protocol FBProvider, FBEventListener;
@class MNBugReportConduit, FBAnalyticsUserFBIDListener, FBServiceProvider, FBConsoleControlNetService, FBApplicationAnalyticsCoordinator, FBApplicationActivityMonitorCoordinator, MNWatchSessionWriter, FBProviderMap, MNAppSession, FBExceptionHandler, MNInitializationPerfLogger, UIWindow, FBSessionController, NSDictionary, NSString;

@interface MNAppDelegate : NSObject <UIApplicationDelegate, OrcaLogoutHandler> {

	MNBugReportConduit* _bugReportConduit;
	FBAnalyticsUserFBIDListener* _userFBIDListener;
	FBAConfig* _analyticsCoreConfig;
	FBServiceProvider* _serviceProvider;
	BOOL _backgroundInit;
	BOOL _canTapPushNotification;
	BOOL _didColdStart;
	BOOL _uiPresented;
	long long _logApplicationLaunchOnceToken;
	FBConsoleControlNetService* _consoleControlNetService;
	FBApplicationAnalyticsCoordinator* _analyticsCoordinator;
	FBApplicationActivityMonitorCoordinator* _activityMonitorCoordinator;
	MNWatchSessionWriter* _watchSessionWriter;
	FBProviderMap* _providerMap;
	MNAppSession* _appSession;
	FBExceptionHandler* _exceptionHandler;
	unsigned long long _startupBackgroundTask;
	MNInitializationPerfLogger* _initializationPerfLogger;
	UIWindow* _window;
	FBSessionController* _sessionController;
	id<FBProvider> _appNotificationHandlerProvider;
	id<FBProvider> _urlHandlerProvider;
	id<FBEventListener> _timeSpentListener;
	NSDictionary* _launchOptions;

}

@property (nonatomic,retain) FBProviderMap * providerMap;                                        //@synthesize providerMap=_providerMap - In the implementation block
@property (nonatomic,retain) MNAppSession * appSession;                                          //@synthesize appSession=_appSession - In the implementation block
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler;                              //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,retain) MNInitializationPerfLogger * initializationPerfLogger;              //@synthesize initializationPerfLogger=_initializationPerfLogger - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) unsigned long long startupBackgroundTask;                           //@synthesize startupBackgroundTask=_startupBackgroundTask - In the implementation block
@property (nonatomic,retain) FBSessionController * sessionController;                            //@synthesize sessionController=_sessionController - In the implementation block
@property (nonatomic,retain) id<FBProvider> appNotificationHandlerProvider;                      //@synthesize appNotificationHandlerProvider=_appNotificationHandlerProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> urlHandlerProvider;                                  //@synthesize urlHandlerProvider=_urlHandlerProvider - In the implementation block
@property (nonatomic,retain) id<FBEventListener> timeSpentListener;                              //@synthesize timeSpentListener=_timeSpentListener - In the implementation block
@property (nonatomic,copy) NSDictionary * launchOptions;                                         //@synthesize launchOptions=_launchOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keysConfiguration;
-(void)setSessionController:(FBSessionController *)arg1 ;
-(FBSessionController *)sessionController;
-(id)keysConfigurationProvider;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(void)logApplicationLaunchWithOptions:(id)arg1 ;
-(void)setProviderMap:(FBProviderMap *)arg1 ;
-(FBProviderMap *)providerMap;
-(void)setupFBMobileConfig;
-(void)startAppSessionWithLaunchOptions:(id)arg1 ;
-(void)dynamicTypeSizeChanged:(id)arg1 ;
-(void)setTimeSpentListener:(id<FBEventListener>)arg1 ;
-(void)_logDataUsageInApnsPayload:(id)arg1 ;
-(void)_application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_application:(id)arg1 didReceiveLocalNotification:(id)arg2 actionIdentifier:(id)arg3 ;
-(void)setAppSession:(MNAppSession *)arg1 ;
-(void)setAppNotificationHandlerProvider:(id<FBProvider>)arg1 ;
-(void)setUrlHandlerProvider:(id<FBProvider>)arg1 ;
-(void)onStartupBackgroundTaskFired:(id)arg1 ;
-(void)logOutManagerWillCompleteLogout:(id)arg1 ;
-(void)logOutManagerDidCompleteLogout:(id)arg1 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(MNAppSession *)appSession;
-(unsigned long long)startupBackgroundTask;
-(void)setStartupBackgroundTask:(unsigned long long)arg1 ;
-(MNInitializationPerfLogger *)initializationPerfLogger;
-(void)setInitializationPerfLogger:(MNInitializationPerfLogger *)arg1 ;
-(id<FBProvider>)appNotificationHandlerProvider;
-(id<FBProvider>)urlHandlerProvider;
-(id<FBEventListener>)timeSpentListener;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
-(FBExceptionHandler *)exceptionHandler;
-(NSDictionary *)launchOptions;
-(void)dealloc;
-(UIWindow *)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)keyboardInputChanged:(id)arg1 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
@end
