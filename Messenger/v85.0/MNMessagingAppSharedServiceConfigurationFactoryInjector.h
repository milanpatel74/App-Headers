/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBUserSession, UIApplication, NSString;

@interface MNMessagingAppSharedServiceConfigurationFactoryInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	UIApplication* _application;

}

@property (nonatomic,readonly) FBUserSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)secureThreadsServiceProvider;
-(id)accountRecoveryIdRegistrationServiceProvider;
-(id)calendarSyncServiceProvider;
-(id)watchDataServiceProvider;
-(id)watchLogFileServiceProvider;
-(id)applicationShortcutItemsConfigurerServiceProvider;
-(id)badgeCountServiceProvider;
-(id)loomServiceProvider;
-(id)loggedInCheckpointServiceProvider;
-(id)networkLinkConditionerEmpathyServiceProvider;
-(id)zeroRatingServiceProvider;
-(id)addressBookContactSyncServiceProvider;
-(id)apnsPushServiceProvider;
-(id)contactSyncServiceProvider;
-(id)emojiFontServiceProvider;
-(id)messageSendServiceProvider;
-(id)messagingQuickReplyStoreServiceProvider;
-(id)mqttConnectStateTrackerServiceProvider;
-(id)omnistoreServiceProvider;
-(id)omnistoreMobileConfigServiceProvider;
-(id)omnistoreNuxServiceProvider;
-(id)omnistoreUserPrefsServiceProvider;
-(id)presenceServiceProvider;
-(id)realTimeBannerServiceProvider;
-(id)syncedInboxServerBadgeCountTrackingServiceProvider;
-(id)syncProtocolServiceAdapterProvider;
-(id)threadSummaryUpdateServiceProvider;
-(id)threadUpdateServiceProvider;
-(id)montageStoreServiceProvider;
-(id)watchRequestHandlerServiceProvider;
-(id)loggedInUserRefreshServiceProvider;
-(id)nonEssentialServicesProvider;
-(id)messageLocalNotificationServiceProvider;
-(id)viewLifecycleManagerProvider;
-(id)photoViewNodeReusePoolProvider;
-(id)crashReportInfoUpdatingServiceProvider;
-(id)ephemeralMessagingSetupServiceProvider;
-(id)foregroundServiceWrapperProvider;
-(id)keyboardStateTrackerServiceProvider;
-(id)appTerminationServiceProvider;
-(id)montageViewModelSubscriptionServiceProvider;
-(id)pushRegistrationServiceProvider;
-(id)webKitCleanupServiceProvider;
-(id)deprecationServiceProvider;
-(id)credentialValidationServiceProvider;
-(id)spotlightUserIndexServiceProvider;
-(id)accountNotificationsFetchingServiceProvider;
-(id)accountSwitchingPolicyBridgeServiceProvider;
-(id)additionalContactsServiceProvider;
-(id)canonicalGroupFetcherServiceProvider;
-(id)compactDiskServiceProvider;
-(id)composerExtensionOrderFetcherServiceProvider;
-(id)mAISuggestionsServiceProvider;
-(id)montageRecentForwardedMessageStoreServiceProvider;
-(id)configManagerProvider;
-(id)exceptionHandlerProvider;
-(id)contactSyncStateLoggingServiceProvider;
-(id)messagesDiskRestorerServiceProvider;
-(id)frequentlyUsedEmojisStoreServiceProvider;
-(id)groupThreadsFetcherServiceProvider;
-(id)internalStarRatingServiceProvider;
-(id)keyboardCacheServiceProvider;
-(id)linkTimeLoggingServiceProvider;
-(id)mAIUserActionServiceProvider;
-(id)messagesNetworkPrefetcherServiceProvider;
-(id)messagingRegionFetcherServiceProvider;
-(id)nuxControllerServiceProvider;
-(id)pendingRequestsNumberDownloaderServiceProvider;
-(id)phoneReverificationPresenterServiceProvider;
-(id)pushNotificationToggledSurveyCoordinatorServiceProvider;
-(id)qplPerfLoggerGatekeeperServiceProvider;
-(id)recentMessagesTrackingServiceProvider;
-(id)searchNullStateViewModelSubscriptionServiceProvider;
-(id)starRatingServiceProvider;
-(id)voicemailAssetDownloaderServiceProvider;
-(id)webRTCCallTabBadgeUpdateServiceProvider;
-(id)wifiWatcherServiceProvider;
-(id)contactStoreIntegrityVerifierServiceProvider;
-(id)secureThreadAppNotificationServiceProvider;
-(id)messagingStorePruningServiceProvider;
-(id)mqttServiceProvider;
-(id)syncEngineServiceProvider;
-(id)threadSharedMediaModelCacheServiceProvider;
-(id)threadStoreServiceProvider;
-(id)voipCoordinatorServiceProvider;
-(id)webRTCServiceProvider;
-(id)updaterServiceProvider;
-(id)inboxViewModelSubscriptionServiceProviderWithIdentifier:(id)arg1 ;
-(id)phoneReverificationPresenterProvider;
-(UIApplication *)application;
-(FBUserSession *)session;
@end
