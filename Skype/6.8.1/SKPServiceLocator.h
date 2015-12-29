//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPServiceLocatorInjecting.h"

@class BITHockeyManager, MKPlaceholderCache, NSBundle, NSDictionary, NSFileManager, NSLocale, NSNotificationCenter, NSProcessInfo, NSString, NSUserDefaults, PKPushRegistry, SDImageCache, SDWebImageManager, SKPAVTMXProvisioning, SKPAccessibilityHelper, SKPAccountManager, SKPActivityArbitrator, SKPAddressBook, SKPAppInteractiveNotificationManager, SKPAppStoreRatingsScheduler, SKPApplication, SKPApplicationShortcutItemsHandler, SKPAudioHost, SKPAudioSession, SKPAudioSessionManager, SKPBackgroundModeService, SKPBackgroundRestartsCounter, SKPBaseConfiguration, SKPCacheCoordinator, SKPCallService, SKPCapturePermissions, SKPChatPluginManager, SKPClock, SKPCloudEmoticonsManager, SKPConfiguration, SKPCookieManager, SKPDispatcher, SKPHandoffService, SKPHockeyAppManager, SKPIntentManager, SKPInterappCommunicationService, SKPLocalNotificationCenter, SKPLocationManager, SKPLocationProvider, SKPLogoutNotificationPoster, SKPMainViewController, SKPMessageAnnouncer, SKPMicrosoftAccountManager, SKPNFR, SKPNativeCallHelper, SKPObjectContext, SKPOnboardingProvisioning, SKPPNVService, SKPPartnerAccountLinkingManager, SKPPersonalExpressionProvisioning, SKPPreferences, SKPProvisioning, SKPProvisioningECSClient, SKPPushNotificationHandler, SKPPushNotificationLogger, SKPPushNotificationRegistrar, SKPRandom, SKPReachability, SKPSessionContext, SKPShareExtensionManager, SKPSkyLib, SKPSoundEffectsManager, SKPStatistics, SKPTokenService, SKPURLHandler, SKPURLSessionManager, SKPUnifiedLoginService, SKPViewControllerTransitionSynchronizer, SKPWalletService, SKPWatchKitExtensionRequestHandler, SKPaymentQueue, UIDevice, UILocalizedIndexedCollation, UIPasteboard, UIScreen;

@interface SKPServiceLocator : NSObject <SKPServiceLocatorInjecting>
{
    SKPSkyLib *_skylib;
    SKPDispatcher *_dispatcher;
    SKPObjectContext *_defaultObjectContext;
    SKPSessionContext *_sessionContext;
    SKPAccountManager *_accountManager;
    NSNotificationCenter *_notificationCenter;
    SKPApplication *_application;
    NSUserDefaults *_standardUserDefaults;
    UIDevice *_device;
    SKPBaseConfiguration *_baseConfiguration;
    SKPPreferences *_preferences;
    SKPProvisioningECSClient *_provisioningECSClient;
    SKPProvisioning *_provisioning;
    SKPPersonalExpressionProvisioning *_personalExpressionProvisioning;
    SKPOnboardingProvisioning *_onboardingProvisioning;
    SKPAVTMXProvisioning *_avTMXProvisioning;
    SKPPushNotificationHandler *_pushNotificationHandler;
    SKPPushNotificationRegistrar *_pushNotificationRegistrar;
    SKPPushNotificationLogger *_pushNotificationLogger;
    SKPLocalNotificationCenter *_localNotificationCenter;
    SKPAppInteractiveNotificationManager *_interactiveNotificationManager;
    SKPAccessibilityHelper *_accessibility;
    SKPMessageAnnouncer *_messageAnnouncer;
    SKPShareExtensionManager *_shareExtensionManager;
    NSFileManager *_fileManager;
    SKPClock *_clock;
    NSLocale *_autoupdatingCurrentLocale;
    NSLocale *_americanEnglishLocale;
    id <SKPEmoticonList> _emoticonList;
    SKPReachability *_reachability;
    UIScreen *_mainScreen;
    NSBundle *_mainBundle;
    NSProcessInfo *_processInfo;
    PKPushRegistry *_pushRegistry;
    SKPaymentQueue *_paymentQueue;
    UIPasteboard *_pasteboard;
    SKPAudioSession *_sharedAudioSession;
    SKPCapturePermissions *_capturePermissions;
    SKPLocationManager *_locationManager;
    SKPAddressBook *_addressBook;
    SKPNFR *_nfr;
    SKPChatPluginManager *_chatPluginManager;
    SKPCallService *_callService;
    SKPAudioSessionManager *_audioSessionManager;
    SKPSoundEffectsManager *_soundEffectsManager;
    SKPActivityArbitrator *_activityArbitrator;
    SKPLocationProvider *_locationProvider;
    SKPAudioHost *_audioHost;
    SKPStatistics *_statistics;
    SKPHockeyAppManager *_hockeyAppManager;
    BITHockeyManager *_bitHockeyManager;
    SDWebImageManager *_webImageManager;
    SKPURLSessionManager *_urlSessionManager;
    SKPRandom *_random;
    SKPBackgroundRestartsCounter *_backgroundRestartsCounter;
    SKPWalletService *_walletService;
    SKPPartnerAccountLinkingManager *_partnerAccountLinkingManager;
    SKPMicrosoftAccountManager *_microsoftAccountManager;
    SKPLogoutNotificationPoster *_logoutNotificationPoster;
    SKPBackgroundModeService *_backgroundModeService;
    SKPCacheCoordinator *_cacheCoordinator;
    SKPTokenService *_tokenService;
    SKPURLHandler *_URLHandler;
    SKPViewControllerTransitionSynchronizer *_viewControllerTransitionSynchronizer;
    SKPUnifiedLoginService *_unifiedLoginService;
    SKPPNVService *_pnvService;
    SKPCloudEmoticonsManager *_cloudEmoticonsManager;
    SKPNativeCallHelper *_nativeCallHelper;
    SKPInterappCommunicationService *_iacService;
    SKPHandoffService *_handoffService;
    SKPWatchKitExtensionRequestHandler *_watchKitExtensionRequestHandler;
    SKPAppStoreRatingsScheduler *_appStoreRatingsScheduler;
    MKPlaceholderCache *_placeholderCache;
    SKPIntentManager *_intentManager;
    SKPCookieManager *_cookieManager;
    SKPApplicationShortcutItemsHandler *_shortcutItemsHandler;
    UILocalizedIndexedCollation *_localizedIndexedCollation;
}

+ (void)setSharedServiceLocator:(id)arg1;
+ (id)sharedServiceLocator;
@property(retain, nonatomic) UILocalizedIndexedCollation *localizedIndexedCollation; // @synthesize localizedIndexedCollation=_localizedIndexedCollation;
@property(retain, nonatomic) SKPPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SKPApplicationShortcutItemsHandler *shortcutItemsHandler; // @synthesize shortcutItemsHandler=_shortcutItemsHandler;
@property(readonly, nonatomic) SKPCookieManager *cookieManager; // @synthesize cookieManager=_cookieManager;
@property(readonly, nonatomic) SKPIntentManager *intentManager; // @synthesize intentManager=_intentManager;
@property(readonly, nonatomic) SKPAppStoreRatingsScheduler *appStoreRatingsScheduler; // @synthesize appStoreRatingsScheduler=_appStoreRatingsScheduler;
@property(readonly, nonatomic) SKPWatchKitExtensionRequestHandler *watchKitExtensionRequestHandler; // @synthesize watchKitExtensionRequestHandler=_watchKitExtensionRequestHandler;
@property(readonly, nonatomic) SKPHandoffService *handoffService; // @synthesize handoffService=_handoffService;
@property(readonly, nonatomic) SKPInterappCommunicationService *iacService; // @synthesize iacService=_iacService;
@property(readonly, nonatomic) SKPPNVService *pnvService; // @synthesize pnvService=_pnvService;
@property(readonly, nonatomic) SKPUnifiedLoginService *unifiedLoginService; // @synthesize unifiedLoginService=_unifiedLoginService;
@property(readonly, nonatomic) SKPCloudEmoticonsManager *cloudEmoticonsManager; // @synthesize cloudEmoticonsManager=_cloudEmoticonsManager;
@property(readonly, nonatomic) SKPViewControllerTransitionSynchronizer *viewControllerTransitionSynchronizer; // @synthesize viewControllerTransitionSynchronizer=_viewControllerTransitionSynchronizer;
@property(readonly, nonatomic) SKPURLHandler *URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) SKPTokenService *tokenService; // @synthesize tokenService=_tokenService;
@property(readonly, nonatomic) SKPBackgroundModeService *backgroundModeService; // @synthesize backgroundModeService=_backgroundModeService;
@property(readonly, nonatomic) SKPRandom *random; // @synthesize random=_random;
@property(readonly, nonatomic) SKPURLSessionManager *urlSessionManager; // @synthesize urlSessionManager=_urlSessionManager;
@property(readonly, nonatomic) MKPlaceholderCache *placeholderCache; // @synthesize placeholderCache=_placeholderCache;
@property(readonly, nonatomic) SDImageCache *imageCache;
@property(readonly, nonatomic) SDWebImageManager *webImageManager; // @synthesize webImageManager=_webImageManager;
@property(readonly, nonatomic) BITHockeyManager *bitHockeyManager; // @synthesize bitHockeyManager=_bitHockeyManager;
@property(readonly, nonatomic) SKPHockeyAppManager *hockeyAppManager; // @synthesize hockeyAppManager=_hockeyAppManager;
@property(readonly, nonatomic) SKPLogoutNotificationPoster *logoutNotificationPoster; // @synthesize logoutNotificationPoster=_logoutNotificationPoster;
@property(readonly, nonatomic) SKPStatistics *statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) SKPMicrosoftAccountManager *microsoftAccountManager; // @synthesize microsoftAccountManager=_microsoftAccountManager;
@property(readonly, nonatomic) SKPPartnerAccountLinkingManager *partnerAccountLinkingManager; // @synthesize partnerAccountLinkingManager=_partnerAccountLinkingManager;
@property(readonly, nonatomic) SKPBackgroundRestartsCounter *backgroundRestartsCounter; // @synthesize backgroundRestartsCounter=_backgroundRestartsCounter;
@property(readonly, nonatomic) SKPLocationProvider *locationProvider; // @synthesize locationProvider=_locationProvider;
@property(readonly, nonatomic) SKPActivityArbitrator *activityArbitrator; // @synthesize activityArbitrator=_activityArbitrator;
@property(readonly, nonatomic) SKPSoundEffectsManager *soundEffectsManager; // @synthesize soundEffectsManager=_soundEffectsManager;
@property(readonly, nonatomic) SKPAudioHost *audioHost; // @synthesize audioHost=_audioHost;
@property(readonly, nonatomic) SKPAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) SKPCallService *callService; // @synthesize callService=_callService;
@property(readonly, nonatomic) SKPChatPluginManager *chatPluginManager; // @synthesize chatPluginManager=_chatPluginManager;
@property(readonly, nonatomic) SKPNFR *nfr; // @synthesize nfr=_nfr;
@property(readonly, nonatomic) SKPAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) SKPLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) SKPCapturePermissions *capturePermissions; // @synthesize capturePermissions=_capturePermissions;
@property(readonly, nonatomic) SKPReachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) id <SKPEmoticonList> emoticonList; // @synthesize emoticonList=_emoticonList;
- (void)onCurrentLocaleDidChange:(id)arg1;
@property(readonly, nonatomic) NSLocale *americanEnglishLocale; // @synthesize americanEnglishLocale=_americanEnglishLocale;
@property(readonly, nonatomic) NSLocale *autoupdatingCurrentLocale; // @synthesize autoupdatingCurrentLocale=_autoupdatingCurrentLocale;
@property(readonly, nonatomic) SKPAppInteractiveNotificationManager *interactiveNotificationManager; // @synthesize interactiveNotificationManager=_interactiveNotificationManager;
@property(readonly, nonatomic) SKPLocalNotificationCenter *localNotificationCenter; // @synthesize localNotificationCenter=_localNotificationCenter;
@property(readonly, nonatomic) SKPPushNotificationLogger *pushNotificationLogger; // @synthesize pushNotificationLogger=_pushNotificationLogger;
@property(readonly, nonatomic) SKPPushNotificationRegistrar *pushNotificationRegistrar; // @synthesize pushNotificationRegistrar=_pushNotificationRegistrar;
@property(readonly, nonatomic) SKPPushNotificationHandler *pushNotificationHandler; // @synthesize pushNotificationHandler=_pushNotificationHandler;
@property(readonly, nonatomic) SKPWalletService *walletService; // @synthesize walletService=_walletService;
@property(readonly, nonatomic) SKPAVTMXProvisioning *avTMXProvisioning; // @synthesize avTMXProvisioning=_avTMXProvisioning;
@property(readonly, nonatomic) SKPOnboardingProvisioning *onboardingProvisioning; // @synthesize onboardingProvisioning=_onboardingProvisioning;
@property(readonly, nonatomic) SKPPersonalExpressionProvisioning *personalExpressionProvisioning; // @synthesize personalExpressionProvisioning=_personalExpressionProvisioning;
@property(readonly, nonatomic) SKPProvisioning *provisioning; // @synthesize provisioning=_provisioning;
@property(readonly, nonatomic) SKPProvisioningECSClient *provisioningECSClient; // @synthesize provisioningECSClient=_provisioningECSClient;
@property(readonly, nonatomic) SKPConfiguration *configuration;
@property(readonly, nonatomic) SKPBaseConfiguration *baseConfiguration; // @synthesize baseConfiguration=_baseConfiguration;
@property(readonly, nonatomic) SKPShareExtensionManager *shareExtensionManager; // @synthesize shareExtensionManager=_shareExtensionManager;
@property(readonly, nonatomic) SKPMessageAnnouncer *messageAnnouncer; // @synthesize messageAnnouncer=_messageAnnouncer;
@property(readonly, nonatomic) SKPNativeCallHelper *nativeCallHelper; // @synthesize nativeCallHelper=_nativeCallHelper;
@property(readonly, nonatomic) SKPAccessibilityHelper *accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, nonatomic) SKPAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) SKPSessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(readonly, nonatomic) SKPObjectContext *defaultObjectContext; // @synthesize defaultObjectContext=_defaultObjectContext;
@property(readonly, nonatomic) SKPSkyLib *skylib; // @synthesize skylib=_skylib;
@property(readonly, nonatomic) SKPCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(readonly, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(readonly, nonatomic) SKPaymentQueue *paymentQueue; // @synthesize paymentQueue=_paymentQueue;
@property(readonly, nonatomic) PKPushRegistry *pushRegistry; // @synthesize pushRegistry=_pushRegistry;
@property(readonly, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
@property(readonly, nonatomic) NSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) NSDictionary *environment;
@property(readonly, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(readonly, nonatomic) SKPAudioSession *sharedAudioSession; // @synthesize sharedAudioSession=_sharedAudioSession;
@property(readonly, nonatomic) UIScreen *mainScreen; // @synthesize mainScreen=_mainScreen;
@property(readonly, nonatomic) UIDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) SKPMainViewController *mainViewController;
@property(readonly, nonatomic) SKPApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SKPDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) SKPClock *clock; // @synthesize clock=_clock;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

