/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>

@class FBUserPreferences, FBViewerContext, NSString, FBAPISessionStore, FBSimpleSearchService, FBSimpleSearchCacheService, NSArray, UIColor, FBProfilePivotsSearchConfig, FBBrowserPrefetchCoordinator, FBVideoPlayerManager, FBClientProxy, FBPhotoTagSuggestionManager, FBMemModelPhotoTaggingAssetStore, FBImagePrefetchController, VOIPConfigurationChecker, FBUDPPrimer, FBAPIPerfProfileOptions;

@interface FBUserSession : NSObject <FBInvalidating> {

	mutex _lock;
	RecursiveMutex _userPreferencesLock;
	FBUserPreferences* _userPreferences;
	unordered_map<NSString *, std::__1::shared_future<Value>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::__1::allocator<std::__1::pair<NSString *const, std::__1::shared_future<Value> > > >* _objects;
	atomic<bool> _atomicInvalidated;
	FBViewerContext* _loggedInUserContext;
	NSString* _appSecret;
	FBAPISessionStore* _apiSessionStore;

}

@property (nonatomic,readonly) BOOL searchTrendingEnableMediaModule; 
@property (nonatomic,readonly) unsigned long long searchTrendingMediaModuleStyle; 
@property (nonatomic,readonly) BOOL searchHashtagEnableMediaModule; 
@property (nonatomic,readonly) BOOL searchHashtagEnableMixedMedia; 
@property (nonatomic,readonly) unsigned long long searchHashtagMediaModuleStyle; 
@property (nonatomic,readonly) BOOL searchCelebSerpEnableRelatedKeywordSearches; 
@property (nonatomic,readonly) BOOL searchCelebSerpEnableRelatedEntities; 
@property (nonatomic,readonly) BOOL searchCelebSerpEnableFeaturePost; 
@property (nonatomic,readonly) BOOL searchCelebSerpEnableBioModule; 
@property (nonatomic,readonly) BOOL pulseShowWebViewEntryPoint; 
@property (nonatomic,readonly) BOOL pulseEnableRelatedLinksModuleInPostSearch; 
@property (nonatomic,readonly) BOOL pulseOpenUrlFromSearch; 
@property (nonatomic,readonly) BOOL pulseEnableGHack; 
@property (nonatomic,readonly) BOOL pulseEnableTopic; 
@property (nonatomic,readonly) BOOL searchTypeaheadInjectGrammarSuggestions; 
@property (nonatomic,readonly) FBSimpleSearchService * simpleSearchService; 
@property (nonatomic,readonly) BOOL useGlobalSuggestionCache; 
@property (nonatomic,readonly) FBSimpleSearchCacheService * simpleSearchCacheService; 
@property (nonatomic,readonly) unsigned long long searchMode; 
@property (nonatomic,readonly) BOOL graphSearchEnabled; 
@property (nonatomic,readonly) BOOL simpleSearchEnabled; 
@property (nonatomic,readonly) BOOL trendingNewsEnabled; 
@property (nonatomic,readonly) BOOL mediaSearch2015H1M3ImprovementsEnabled; 
@property (nonatomic,copy,readonly) NSString * searchFieldPlaceholderText; 
@property (nonatomic,readonly) BOOL typeaheadSuggestionCacheEnabled; 
@property (nonatomic,readonly) BOOL clientSerpCacheEnabled; 
@property (nonatomic,readonly) BOOL ppsUseBigSeeMoreButton; 
@property (nonatomic,readonly) BOOL ppsInsideFindAllNamedXInjectionExperiment; 
@property (nonatomic,readonly) BOOL ppsInsideFOFInjectionExperiment; 
@property (nonatomic,readonly) BOOL ppsInjectFindAllNamedX; 
@property (nonatomic,readonly) BOOL ppsForceInjectFindAllNamedX; 
@property (nonatomic,readonly) unsigned long long ppsFindAllNamedXInjectionPosition; 
@property (nonatomic,readonly) unsigned long long ppsFindAllNamedXNumberOfSuggestionsToExamine; 
@property (nonatomic,readonly) unsigned long long ppsFindAllNamedXMinQueryLength; 
@property (nonatomic,readonly) BOOL ppsFindAllNamedXInjectionShouldBeInGetMoreResultsSection; 
@property (nonatomic,readonly) BOOL ppsInjectFOF; 
@property (nonatomic,readonly) unsigned long long ppsFOFInjectionMinQueryLength; 
@property (nonatomic,readonly) BOOL ppsFOFInjectionShouldBeInGetMoreResultsSection; 
@property (nonatomic,copy,readonly) NSArray * graphSearchKeywordResultsFilterArray; 
@property (nonatomic,readonly) BOOL useSimpleSearchProviderForMentions; 
@property (nonatomic,readonly) BOOL newGroupMentionEnabled; 
@property (nonatomic,readonly) BOOL prefetchedPlacesMentionEnabled; 
@property (nonatomic,readonly) BOOL graphSearchResultsScrollAway; 
@property (nonatomic,readonly) BOOL debug_graphSearchColorLocalEcho; 
@property (nonatomic,copy,readonly) NSString * graphSearchBlendedTASuggestionOrder; 
@property (nonatomic,readonly) BOOL useNewSearchField; 
@property (nonatomic,readonly) BOOL useComponentsInTypeahead; 
@property (nonatomic,readonly) BOOL graphSearchShowChronoSort; 
@property (nonatomic,readonly) BOOL searchEnableMediaSerpSmartFilters; 
@property (nonatomic,readonly) BOOL searchEnableMixedMediaGrid; 
@property (nonatomic,readonly) BOOL searchEnableKeywordsMedia; 
@property (nonatomic,readonly) BOOL searchEnableMediaFriendsPublicSections; 
@property (nonatomic,readonly) BOOL searchEnableMediaAnimatedHeader; 
@property (nonatomic,readonly) BOOL graphSearchShowVideosTab; 
@property (nonatomic,readonly) BOOL graphSearchUseExpandableRecentSearches; 
@property (nonatomic,readonly) BOOL graphSearchBucketizeEntities; 
@property (nonatomic,readonly) BOOL graphSearchDisableSnowball; 
@property (nonatomic,readonly) BOOL graphSearchHideInlineAction; 
@property (nonatomic,readonly) BOOL graphSearchShowKeywordSubtext; 
@property (nonatomic,readonly) BOOL graphSearchPhotosShowChoroSortHeader; 
@property (nonatomic,readonly) BOOL graphSearchEnableSuggestedSearches; 
@property (nonatomic,readonly) BOOL graphSearchEnableCompactHorizontalRecentSearches; 
@property (nonatomic,readonly) BOOL graphSearchEnableTwoStepNullState; 
@property (nonatomic,readonly) BOOL graphSearchEnableTrendingAsSuggestion; 
@property (nonatomic,readonly) BOOL graphSearchHideRecentSearchesInFirstStepNullState; 
@property (nonatomic,readonly) BOOL graphSearchRestyledTrendingEditorial; 
@property (nonatomic,readonly) BOOL graphSearchEnablePublicPostsOnly; 
@property (nonatomic,readonly) BOOL graphSearchEnableNullStatePhotoPivots; 
@property (nonatomic,readonly) BOOL graphSearchRestyledSuggestionsEnabled; 
@property (nonatomic,readonly) UIColor * graphSearchKeywordSuggestionIconTintColor; 
@property (nonatomic,readonly) BOOL graphSearchRestyledSuggestionsShowIconOutlineCircle; 
@property (nonatomic,copy,readonly) NSString * graphSearchTARankingExperimentName; 
@property (nonatomic,readonly) BOOL searchBootstrapPrefixMatchLastTokenOnly; 
@property (nonatomic,copy,readonly) NSArray * simpleSearchPPSResultsTabOrder; 
@property (nonatomic,readonly) BOOL simpleSearchShowSearchBoxInResult; 
@property (nonatomic,readonly) BOOL simpleSearchShowTopSuggestionInSearchBox; 
@property (nonatomic,readonly) BOOL simpleSearchShowUnreadCountInNullState; 
@property (nonatomic,readonly) BOOL simpleSearchShowUnreadCountSnippets; 
@property (nonatomic,readonly) BOOL trendingNewsEnabledOnPad; 
@property (nonatomic,readonly) BOOL newsLiveFeedRenderAttachment; 
@property (nonatomic,readonly) BOOL scopedSearchEnabled; 
@property (nonatomic,readonly) unsigned long long scopedSearchStyle; 
@property (nonatomic,readonly) BOOL showScopedSearchContextBarEntryPointInGroup; 
@property (nonatomic,readonly) BOOL showRecentSearchesInScopedNullState; 
@property (nonatomic,readonly) unsigned long long graphSearchMaxCachedSuggestionsAllowed; 
@property (nonatomic,readonly) BOOL appShouldCenterAlignVerifiedBadgeInNullState; 
@property (nonatomic,readonly) BOOL appShouldUseFollowIconInsteadOfLikeIcon; 
@property (nonatomic,readonly) BOOL appShouldAllowUnfollowing; 
@property (nonatomic,readonly) BOOL appShouldAllowUserFollow; 
@property (nonatomic,readonly) BOOL appShouldAllowUserSendFriendRequest; 
@property (nonatomic,readonly) BOOL appShouldAllowSearchMessagingInlineAction; 
@property (nonatomic,readonly) BOOL profilePivotsEnabled; 
@property (nonatomic,copy,readonly) NSArray * profilePivotsModulesOrder; 
@property (nonatomic,readonly) FBProfilePivotsSearchConfig * profilePivotsConfig; 
@property (nonatomic,readonly) BOOL profilePivotsSearchFieldBadgeEnabled; 
@property (nonatomic,readonly) BOOL profilePivotsChangeSearchFieldText; 
@property (nonatomic,readonly) BOOL appSeeMoreResultsDisabled; 
@property (nonatomic,readonly) BOOL celebritySearchEnabled; 
@property (nonatomic,copy,readonly) NSString * celebrityTypeaheadStyle; 
@property (nonatomic,readonly) FBBrowserPrefetchCoordinator * browserPrefetchCoordinator; 
@property (nonatomic,readonly) FBVideoPlayerManager * videoPlayerManager; 
@property (nonatomic,readonly) FBClientProxy * clientProxy; 
@property (nonatomic,readonly) FBPhotoTagSuggestionManager * tagSuggestionManager; 
@property (nonatomic,readonly) FBMemModelPhotoTaggingAssetStore * memModelPhotoTaggingAssetStore; 
@property (nonatomic,readonly) FBImagePrefetchController * imagePrefetchController; 
@property (nonatomic,retain,readonly) VOIPConfigurationChecker * voipConfigurationChecker; 
@property (nonatomic,readonly) FBUDPPrimer * UDPPrimer; 
@property (nonatomic,readonly) FBAPIPerfProfileOptions * apiPerfProfileOptions; 
@property (nonatomic,retain) id<FBMediaUploadCache> mediaUploadCache; 
@property (copy,readonly) NSString * appSecret;                                                                //@synthesize appSecret=_appSecret - In the implementation block
@property (retain,readonly) FBAPISessionStore * apiSessionStore;                                               //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (retain) FBViewerContext * loggedInUserContext; 
@property (retain) FBUserPreferences * userPreferences; 
@property (nonatomic,readonly) BOOL didLogin; 
@property (copy,readonly) NSString * userFBID; 
@property (copy,readonly) NSString * defaultViewerFBID; 
@property (readonly) BOOL hasUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(unsigned long long)_resultTypeFromTabName:(id)arg1 ;
+(void)setOverrideProviderForStickerUserSettings:(/*^block*/id)arg1 forLayoutIdiom:(unsigned long long)arg2 ;
+(void)enableStartupRequestGatingWithWhitelist:(id)arg1 ;
-(FBTigonService*)tigonService;
-(void)injectImageStreamingServiceWithCDNCacheStatusQuery:(BOOL)arg1 shouldDisableImageDiskCache:(BOOL)arg2 adjustPartialCache:(BOOL)arg3 ;
-(id)savedDashboardStoreManager;
-(id)viewerResolver;
-(id)pageAccountsStore;
-(id)adminedPagesDataPersister;
-(id)adminedPagesPersisterAnnouncer;
-(id)adminedPagesFetcher;
-(id)infiniteHscrollPrefetchController;
-(id)autoScrollDatesCache;
-(id)scrollToPreviewDatesCache;
-(BOOL)searchTrendingEnableMediaModule;
-(unsigned long long)searchTrendingMediaModuleStyle;
-(BOOL)searchHashtagEnableMediaModule;
-(BOOL)searchHashtagEnableMixedMedia;
-(unsigned long long)searchHashtagMediaModuleStyle;
-(BOOL)searchCelebSerpEnableRelatedKeywordSearches;
-(BOOL)searchCelebSerpEnableRelatedEntities;
-(BOOL)searchCelebSerpEnableFeaturePost;
-(BOOL)searchCelebSerpEnableBioModule;
-(BOOL)graphSearchEnablePostSERPTabs;
-(BOOL)pulseShowWebViewEntryPoint;
-(BOOL)pulseEnableRelatedLinksModuleInPostSearch;
-(BOOL)pulseOpenUrlFromSearch;
-(BOOL)pulseEnableGHack;
-(BOOL)pulseEnableTopic;
-(id)intentHandlerRegistry;
-(BOOL)searchTypeaheadInjectGrammarSuggestions;
-(id)attachmentPickerProvider;
-(id)starRatingsMediator;
-(id)offlinePlacesController;
-(id)composerPrivacySettingFetcher;
-(FBSimpleSearchService *)simpleSearchService;
-(BOOL)useGlobalSuggestionCache;
-(FBSimpleSearchCacheService *)simpleSearchCacheService;
-(BOOL)searchPerfUseRecentSearchesInBootstrap;
-(BOOL)simpleSearchEnabled;
-(BOOL)newGroupMentionEnabled;
-(BOOL)prefetchedPlacesMentionEnabled;
-(BOOL)graphSearchEnabled;
-(BOOL)showRecentSearchesInScopedNullState;
-(BOOL)graphSearchEnablePublicPostsOnly;
-(unsigned long long)searchMode;
-(FBProfilePivotsSearchConfig *)profilePivotsConfig;
-(id)persistedDictionary;
-(id)searchConfig;
-(BOOL)overrideActive;
-(BOOL)graphSearchShowVideosTab;
-(BOOL)scopedSearchEnabled;
-(BOOL)graphSearchHideRecentSearchesInFirstStepNullState;
-(unsigned long long)scopedSearchStyle;
-(BOOL)profilePivotsEnabled;
-(void)setPersistedDictionary:(id)arg1 ;
-(void)logSimpleSearchTAFindAllNamedXInjectionExperimentExposure;
-(void)logSimpleSearchTAFOFInjectionExperimentExposure;
-(void)logSimpleSearchSERPSearchBoxExperimentExposure;
-(void)logCelebrityTypeaheadExperimentExposure;
-(BOOL)useSimpleSearchProviderForMentions;
-(BOOL)typeaheadSuggestionCacheEnabled;
-(BOOL)clientSerpCacheEnabled;
-(NSString *)searchFieldPlaceholderText;
-(BOOL)ppsInsideFindAllNamedXInjectionExperiment;
-(BOOL)ppsInsideFOFInjectionExperiment;
-(BOOL)ppsInjectFindAllNamedX;
-(BOOL)ppsForceInjectFindAllNamedX;
-(unsigned long long)ppsFindAllNamedXInjectionPosition;
-(unsigned long long)ppsFindAllNamedXNumberOfSuggestionsToExamine;
-(unsigned long long)ppsFindAllNamedXMinQueryLength;
-(BOOL)ppsFindAllNamedXInjectionShouldBeInGetMoreResultsSection;
-(BOOL)ppsInjectFOF;
-(unsigned long long)ppsFOFInjectionMinQueryLength;
-(BOOL)ppsFOFInjectionShouldBeInGetMoreResultsSection;
-(NSArray *)graphSearchKeywordResultsFilterArray;
-(BOOL)trendingNewsEnabled;
-(BOOL)mediaSearch2015H1M3ImprovementsEnabled;
-(BOOL)trendingNewsEnabledOnPad;
-(BOOL)newsLiveFeedRenderAttachment;
-(NSString *)graphSearchBlendedTASuggestionOrder;
-(BOOL)useNewSearchField;
-(BOOL)useComponentsInTypeahead;
-(BOOL)graphSearchShowChronoSort;
-(BOOL)searchEnableMediaSerpSmartFilters;
-(BOOL)searchEnableMixedMediaGrid;
-(BOOL)searchEnableKeywordsMedia;
-(BOOL)searchEnableMediaFriendsPublicSections;
-(BOOL)searchEnableMediaAnimatedHeader;
-(BOOL)graphSearchResultsScrollAway;
-(BOOL)graphSearchUseExpandableRecentSearches;
-(BOOL)graphSearchBucketizeEntities;
-(BOOL)graphSearchDisableSnowball;
-(BOOL)graphSearchHideInlineAction;
-(BOOL)graphSearchShowKeywordSubtext;
-(BOOL)graphSearchPhotosShowChoroSortHeader;
-(BOOL)graphSearchEnableSuggestedSearches;
-(BOOL)graphSearchEnableCompactHorizontalRecentSearches;
-(BOOL)graphSearchEnableTwoStepNullState;
-(BOOL)graphSearchEnableTrendingAsSuggestion;
-(BOOL)graphSearchRestyledTrendingEditorial;
-(BOOL)graphSearchEnableNullStatePhotoPivots;
-(BOOL)graphSearchRestyledSuggestionsEnabled;
-(UIColor *)graphSearchKeywordSuggestionIconTintColor;
-(BOOL)graphSearchRestyledSuggestionsShowIconOutlineCircle;
-(NSString *)graphSearchTARankingExperimentName;
-(BOOL)searchBootstrapPrefixMatchLastTokenOnly;
-(NSArray *)simpleSearchPPSResultsTabOrder;
-(BOOL)simpleSearchShowSearchBoxInResult;
-(BOOL)simpleSearchShowTopSuggestionInSearchBox;
-(BOOL)simpleSearchShowUnreadCountInNullState;
-(BOOL)simpleSearchShowUnreadCountSnippets;
-(void)logScopedSearchExperimentExposure;
-(BOOL)showScopedSearchContextBarEntryPointInGroup;
-(unsigned long long)graphSearchMaxCachedSuggestionsAllowed;
-(BOOL)appShouldCenterAlignVerifiedBadgeInNullState;
-(BOOL)appShouldUseFollowIconInsteadOfLikeIcon;
-(BOOL)appShouldAllowUnfollowing;
-(BOOL)appShouldAllowUserFollow;
-(BOOL)appShouldAllowUserSendFriendRequest;
-(BOOL)appSeeMoreResultsDisabled;
-(BOOL)appShouldAllowSearchMessagingInlineAction;
-(NSArray *)profilePivotsModulesOrder;
-(BOOL)profilePivotsSearchFieldBadgeEnabled;
-(BOOL)profilePivotsChangeSearchFieldText;
-(BOOL)celebritySearchEnabled;
-(NSString *)celebrityTypeaheadStyle;
-(BOOL)debug_graphSearchColorLocalEcho;
-(void)logGraphSearchNullStateExperimentExposure;
-(void)logGraphSearchTypeaheadExperimentExposure;
-(BOOL)ppsUseBigSeeMoreButton;
-(BOOL)isWorkUser;
-(id)lastActiveTimeReader;
-(void)_setShouldRestoreStateFromPreviousSession:(BOOL)arg1 ;
-(void)_setSecondsFromPreviousActiveToMostRecentColdStart:(double)arg1 ;
-(id)lastActiveTimeLoggerWithLastActiveTimeRestorationThreshold:(double)arg1 ;
-(BOOL)shouldRestoreStateFromPreviousSession;
-(id)secondsFromPreviousActiveToMostRecentColdStart;
-(id)fileSystemObjectCacheFactory;
-(id)mobileConfigFactory;
-(FBBrowserPrefetchCoordinator *)browserPrefetchCoordinator;
-(id)processPool;
-(id)mapSnapshotterController;
-(id)stickerUserSettingsForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerUpdateServiceForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerServiceControllerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerSearchPerformer;
-(id)stickerTrayConfigSyncCoordinatorForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerStoreManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerStoragePathManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerPurchaseManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerPackPromoterForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerPackDownloaderQueue;
-(id)stickerManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)paidStickerPackStore;
-(id)defaultStickerManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerResourceTypeConfigProvider;
-(id)stickerImageConverter;
-(id)_staticStickerCache;
-(id)_animatedStickerCache;
-(id)_stickerInMemoryCache;
-(id)stickerResourceManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)sharedImageMemoryCache;
-(id)magicStoryPhotoPickerProvider;
-(id)autoplaySettingsHelper;
-(id)autoplaySettingsServerHelper;
-(id)autoplaySettingsServerGraphQLHelper;
-(id)autoplaySettingsLocalHelper;
-(FBVideoPlayerManager *)videoPlayerManager;
-(id)videoDownloadDiskCache:(id)arg1 ;
-(FBClientProxy *)clientProxy;
-(id)zrApplicationState;
-(id)quickPromotionCoordinator;
-(id)nuxCoordinator;
-(void)setNuxCoordinator:(id)arg1 ;
-(id)nuxAppConfiguration;
-(id)nuxAppEventManager;
-(id)magicStoryCollectionIndex;
-(id)faceDetectionIndex;
-(FBPhotoTagSuggestionManager *)tagSuggestionManager;
-(FBMemModelPhotoTaggingAssetStore *)memModelPhotoTaggingAssetStore;
-(id)imageProcessingFaceDetectRequestFactory;
-(id)hscrollOffsetStorePersistentCache;
-(id)hscrollOffsetStoreForKey:(id)arg1 ;
-(id)experimentManager;
-(id)graphQLService;
-(id)graphQLMutator;
-(id)graphQLMemResponseController_DEPRECATED;
-(id)graphQLMemResponseCache;
-(id)graphQLFetcher;
-(id)consistentLookasideCache;
-(shared_ptr<facebook::mobile::graphstore::GraphStore>*)graphStore;
-(id)service;
-(id)imageStreamingService;
-(FBImagePrefetchController *)imagePrefetchController;
-(id)imageDownloader;
-(void)injectExtraImageFormatsForCachedImageFactory:(id)arg1 ;
-(void)injectImageDownloaderWithAdjustParitalCache:(BOOL)arg1 ;
-(VOIPConfigurationChecker *)voipConfigurationChecker;
-(id)scenePathAnnouncer;
-(id)scenePathRootContext;
-(FBUDPPrimer *)UDPPrimer;
-(void)delayStartupServices;
-(id)sessionStartupManager;
-(FBAPIPerfProfileOptions *)apiPerfProfileOptions;
-(id)notificationCenter;
-(id)requesterConfiguration;
-(id)networkDispatcher;
-(void)setMediaUploadCache:(id<FBMediaUploadCache>)arg1 ;
-(id<FBMediaUploadCache>)mediaUploadCache;
-(shared_ptr<facebook::mobile::xplat::compactdisk::StoreManagerFactory>*)storeManagerFactory;
-(shared_ptr<facebook::mobile::xplat::compactdisk::IosPrivacyGuard>*)privacyGuardForGroupIdentifier:(id)arg1 ;
-(shared_ptr<facebook::mobile::xplat::compactdisk::IosPrivacyGuard>*)privacyGuard;
-(id)diskCacheForIdentifier:(unsigned)arg1 pruneStrategyType:(/*^block*/id)arg2 ;
-(id)_storeManagerFactory;
-(id)diskStoreForIdentifier:(unsigned)arg1 ;
-(id)persistentKeyValueStoreForIdentifier:(unsigned)arg1 ;
-(id)diskCacheForIdentifier:(unsigned)arg1 ;
-(id)diskStoreForIdentifier:(unsigned)arg1 groupIdentifier:(id)arg2 ownerContext:(BOOL)arg3 ;
-(id)diskStore;
-(id)diskCache;
-(id)sessionPreferences;
-(id)viewerFactory;
-(id)defaultSerialPerformer_DEPRECATED;
-(id)accessTokenStore;
-(NSString *)userFBID;
-(NSString *)defaultViewerFBID;
-(BOOL)didLogin;
-(id)_valueForKey:(id)arg1 requiresUser:(BOOL)arg2 withInitializer:(/*^block*/id)arg3 ;
-(void)setUserPreferences:(FBUserPreferences *)arg1 ;
-(FBAPISessionStore *)apiSessionStore;
-(void)updateAccessToken:(id)arg1 ;
-(FBUserPreferences *)userPreferences;
-(id)initWithAppSecret:(id)arg1 apiSessionStore:(id)arg2 ;
-(FBViewerContext *)loggedInUserContext;
-(id)valueForKey:(id)arg1 withInitializer:(/*^block*/id)arg2 ;
-(id)DO_NOT_USE_OR_YOU_WILL_BE_FIREDvalueForKeyRequiresUser:(id)arg1 withInitializer:(/*^block*/id)arg2 ;
-(void)_onUserAuthenticated;
-(void)_onUserLoggedOut;
-(id)accessTokenManagerForFBID:(id)arg1 ;
-(id)preferencesForViewer:(id)arg1 ;
-(void)setLoggedInUserContext:(FBViewerContext *)arg1 ;
-(NSString *)appSecret;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)isValid;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)hasUser;
@end
