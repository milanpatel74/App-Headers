/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPushUserSettings.h>
#import <Facebook/FBPushKitUserSettings.h>
#import <Facebook/FBStickerUserSettings.h>
#import <Facebook/FBUserSessionClassProvidable.h>

@protocol OS_dispatch_queue, MNAuthenticationManager;
@class NSNotificationCenter, NSMutableDictionary, NSObject, FBTimeThrottler, MNUserSettingsListenerAnnouncer, NSUserDefaults, NSString;

@interface MNUserSettings : NSObject <FBPushUserSettings, FBPushKitUserSettings, FBStickerUserSettings, FBUserSessionClassProvidable> {

	NSNotificationCenter* _notificationCenter;
	NSMutableDictionary* _userSettings;
	NSMutableDictionary* _userThreadSettings;
	NSObject*<OS_dispatch_queue> _saveQueue;
	FBTimeThrottler* _saveThrottler;
	BOOL _didLoadSettings;
	MNUserSettingsListenerAnnouncer* _userSettingsListenerAnnouncer;
	id<MNAuthenticationManager> _authManager;
	NSUserDefaults* _userDefaults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<MNAuthenticationManager> authManager;              //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                        //@synthesize userDefaults=_userDefaults - In the implementation block
-(void)setShowAvailableToChatUserOverride:(BOOL)arg1 ;
-(id)getShowAvailableToChatUserOverride;
-(id)latestRefreshDateForLoggedInUser;
-(void)saveLatestRefreshDateForLoggedInUser:(id)arg1 ;
-(BOOL)getEnableTigonDebugMonitor;
-(unsigned long long)getNetworkMonitorOverrideMode;
-(void)setNetworkMonitorOverrideMode:(unsigned long long)arg1 ;
-(BOOL)getEnableNetworkMonitor;
-(void)setVoIPDevToken:(id)arg1 ;
-(void)setShouldRegisterForPush:(BOOL)arg1 ;
-(BOOL)getShouldRegisterForPush;
-(void)setAPNSDevToken:(id)arg1 ;
-(void)_setMessageDraft:(id)arg1 forThreadIdentifier:(id)arg2 ;
-(id)_getMessageDraftForThreadIdentifier:(id)arg1 ;
-(id)settingsKeyForThreadFbid:(id)arg1 ;
-(unsigned long long)getNumContactsMegaphoneDismissals;
-(BOOL)getNumTimesVoiceComposerRecordStarted;
-(void)setMessageDraft:(id)arg1 forLocalThreadKey:(id)arg2 ;
-(id)getMessageDraftForLocalThreadKey:(id)arg1 ;
-(void)setEphemeralMessageLifetimeSetting:(long long)arg1 forLocalThreadKey:(id)arg2 ;
-(long long)getEphemeralMessageLifetimeSettingForLocalThreadKey:(id)arg1 ;
-(void)setNewThreadMessageDraft:(id)arg1 ;
-(id)getNewThreadMessageDraft;
-(void)setMessagingFavorites:(id)arg1 ;
-(id)getMessagingFavorites;
-(void)setLastTimeTopContactsWereFetched:(double)arg1 ;
-(double)getLastTimeTopContactsWereFetched;
-(void)setShareLocation:(BOOL)arg1 forThreadFbId:(id)arg2 ;
-(BOOL)getShareLocationForThreadFbId:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)setMuteNotificationType:(long long)arg1 ;
-(unsigned long long)getMuteNotificationType;
-(void)setNotificationSounds:(BOOL)arg1 ;
-(BOOL)getNotificationSounds;
-(void)setDidRegisterAccountRecoveryId;
-(BOOL)getDidRegisterAccountRecoveryId;
-(void)setNotificationImagePreview:(BOOL)arg1 ;
-(BOOL)getNotificationImagePreview;
-(void)setMutedThreadOnce:(BOOL)arg1 ;
-(BOOL)getMutedThreadOnce;
-(void)setPushScreenLastDismissTime:(id)arg1 ;
-(id)getPushScreenLastDismissTime;
-(void)setPushScreenNumShown:(int)arg1 ;
-(int)getPushScreenNumShown;
-(void)setLocationHintShown:(BOOL)arg1 ;
-(BOOL)getLocationHintShown;
-(void)increaseSmallLikeCounter;
-(long long)getSmallLikeCounter;
-(void)setHawtLikeUsed:(BOOL)arg1 ;
-(BOOL)getHawtLikeUsed;
-(void)setHawtLikeNuxShown:(BOOL)arg1 ;
-(BOOL)getHawtLikeNuxShown;
-(void)setLocationOffHintShown:(BOOL)arg1 ;
-(BOOL)getLocationOffHintShown;
-(void)setMuteHintShown:(int)arg1 ;
-(int)getMuteHintShown;
-(void)setSeenIntroNUX:(BOOL)arg1 ;
-(BOOL)getSeenIntroNUX;
-(void)setHideFavoritesNux:(BOOL)arg1 ;
-(BOOL)getHideFavoritesNux;
-(void)setSeenDiveBarNUX:(BOOL)arg1 ;
-(BOOL)getSeenDiveBarNUX;
-(void)setSeenGroupsTabNUX:(BOOL)arg1 ;
-(BOOL)getSeenGroupsTabNUX;
-(id)getAPNSDevToken;
-(void)removeAPNSDevToken;
-(void)setSeenAudioMessageNux:(BOOL)arg1 ;
-(BOOL)getSeenAudioMessageNux;
-(void)setSeenFreeCallNux:(BOOL)arg1 ;
-(BOOL)getSeenFreeCallNux;
-(void)setComposerMode:(unsigned long long)arg1 forThreadFbId:(id)arg2 ;
-(unsigned long long)getComposerModeForThreadFbId:(id)arg1 ;
-(void)setComposerExtensionIdentifier:(id)arg1 forThreadFbId:(id)arg2 ;
-(id)getComposerExtensionIdentifierForThreadFbId:(id)arg1 ;
-(void)setAcceptedAddMemberDisclaimer:(BOOL)arg1 ;
-(BOOL)getAcceptedAddMemberDisclaimer;
-(void)setHasOpenedStickerSearch:(BOOL)arg1 ;
-(BOOL)getHasOpenedStickerSearch;
-(void)setRecentStickerUsageCounter:(id)arg1 ;
-(id)getRecentStickerUsageCounter;
-(void)setZeroRatingDoNotAskAgainForExternalLinks:(BOOL)arg1 ;
-(BOOL)getZeroRatingDoNotAskAgainForExternalLinks;
-(void)setLastSelectedStickerPackTabFbId:(unsigned long long)arg1 ;
-(unsigned long long)getLastSelectedStickerPackTabFbId;
-(void)setStickerManagerStorageFilename:(id)arg1 ;
-(id)getStickerManagerStorageFilename;
-(void)setStickerStoreLastViewed:(double)arg1 ;
-(double)getStickerStoreLastViewed;
-(void)setLastTimeContactsMegaphoneWasRejected:(double)arg1 ;
-(double)getLastTimeContactsMegaphoneWasRejected;
-(void)incrementNumContactsMegaphoneDismissals;
-(void)setContactsSyncLockValueForAllDevices:(unsigned long long)arg1 ;
-(unsigned long long)getContactsSyncLockValueForAllDevices;
-(void)setIsContactImportingAllowedOnThisDevice:(BOOL)arg1 ;
-(BOOL)getIsContactImportingAllowedOnThisDevice;
-(void)setInboxLastUpdated:(double)arg1 ;
-(double)getInboxLastUpdated;
-(void)setPeopleTabSegment:(unsigned long long)arg1 ;
-(unsigned long long)getPeopleTabSegment;
-(void)setDoNotAlertForThreadDeletion:(BOOL)arg1 ;
-(BOOL)getDoNotAlertForThreadDeletion;
-(void)DEPRECATED_setSeenSaveToCameraRollOnCapturePrompt:(BOOL)arg1 ;
-(BOOL)DEPRECATED_getSeenSaveToCameraRollOnCapturePrompt;
-(void)DEPRECATED_setSaveToCameraRollOnCapture:(BOOL)arg1 ;
-(BOOL)DEPRECATED_getSaveToCameraRollOnCapture;
-(void)incrementNumTimesVoiceComposerRecordStarted;
-(void)setAutoDownloadVideos:(unsigned long long)arg1 ;
-(BOOL)getMontageLiveCameraEnabled;
-(void)setMontageLiveCameraEnabled:(BOOL)arg1 ;
-(unsigned long long)getAutoDownloadVideos;
-(void)setNumSelfieVideosTaken:(int)arg1 ;
-(int)getNumSelfieVideosTaken;
-(void)setNumSelfiePhotosTaken:(int)arg1 ;
-(int)getNumSelfiePhotosTaken;
-(void)setComposerCameraDeviceWithID:(id)arg1 ;
-(id)getComposerCameraDeviceID;
-(void)setCameraTrayCapturePosition:(long long)arg1 ;
-(long long)getCameraTrayCapturePosition;
-(void)setGroupsPromoNuxImpressionCount:(long long)arg1 ;
-(long long)getGroupsPromoNuxImpressionCount;
-(void)setHolidayPromoDismissed:(BOOL)arg1 ;
-(BOOL)getHolidayPromoDismissed;
-(void)setZeroRatingDismissedBannerHashes:(id)arg1 ;
-(id)getZeroRatingDismissedBannerHashes;
-(void)setPlatformLastReplyThreadKeyCache:(id)arg1 ;
-(id)platformLastReplyThreadKeyCache;
-(void)setDraftMessageReminderNotificationDate:(id)arg1 withLocalThreadKey:(id)arg2 ;
-(id)draftMessageReminderNotificationDateWithLocalThreadKey:(id)arg1 ;
-(void)setPhoneConfirmationBadgeDismissed:(BOOL)arg1 ;
-(BOOL)isPhoneConfirmationBadgeDismissed;
-(void)setPlatformAppScopedIdsCache:(id)arg1 ;
-(id)platformAppScopedIdsCache;
-(id)voIPDevToken;
-(void)setReplyWithAppScopedIdsAccepted:(BOOL)arg1 ;
-(BOOL)getReplyWithAppScopedIdsAccepted;
-(id)getLastTimeReplyWithAppScopedIdsSeen;
-(void)setLastTimeReplyWithAppScopedIdsSeen:(id)arg1 ;
-(void)setNumTimesAppScopedIdsPromptSeen:(long long)arg1 ;
-(long long)getNumTimesAppScopedIdsPromptSeen;
-(void)setShowPerformanceMonitor:(BOOL)arg1 ;
-(BOOL)getShowPerformanceMonitor;
-(void)setEnableTigonDebugMonitor:(BOOL)arg1 ;
-(void)setEnableNetworkMonitor:(BOOL)arg1 ;
-(void)setAnalyticsEnabled:(BOOL)arg1 ;
-(BOOL)getAnalyticsEnabled;
-(void)setPlatformAppsFirstOpenTimes:(id)arg1 ;
-(id)platformAppsFirstOpenTimes;
-(void)setHasDownloadedNumberOfPendingRequests:(BOOL)arg1 ;
-(BOOL)getHasDownloadedNumberOfPendingRequests;
-(void)setDidShowAlertForSettingEntryPointOfChatRequests:(BOOL)arg1 ;
-(BOOL)getDidShowAlertForSettingEntryPointOfChatRequests;
-(void)setDidShowAlertForMovingToInbox:(BOOL)arg1 ;
-(BOOL)getDidShowAlertForMovingToInbox;
-(void)setEmojiPredictionStyle:(id)arg1 ;
-(id)getEmojiPredictionStyle;
-(void)setSeenMicrophonePermissionsWarning:(BOOL)arg1 ;
-(BOOL)getSeenMicrophonePermissionsWarning;
-(void)setDidDismissMessageRequestsBanner:(BOOL)arg1 ;
-(BOOL)getDidDismissMessageRequestsBanner;
-(void)setHasPrefetchedGroupThreads:(BOOL)arg1 ;
-(BOOL)hasPrefetchedGroupThreads;
-(void)setAssetDateOfLatestQuickShareAsset:(id)arg1 ;
-(id)getAssetDateOfLatestQuickShareAsset;
-(void)setFlowersBorderInSettingsEnabled:(BOOL)arg1 ;
-(BOOL)isFlowersBorderInSettingsEnabled;
-(void)setDidShowAlertForInviteAddsNewMembersToApprovalQueue:(BOOL)arg1 ;
-(BOOL)didShowAlertForInviteAddsNewMembersToApprovalQueue;
-(void)setMessageRequestPeopleTabEntryPointVisited:(BOOL)arg1 ;
-(BOOL)getMessageRequestPeopleTabEntryPointVisited;
-(BOOL)getDidAcceptAddContactConfirmation;
-(void)setDidAcceptAddContactConfirmation:(BOOL)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 threadFbId:(id)arg3 ;
-(id)objectForKey:(id)arg1 threadFbId:(id)arg2 ;
-(id<MNAuthenticationManager>)authManager;
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(void)_executeSave;
-(id)initWithAuthManager:(id)arg1 userDefaults:(id)arg2 notificationCenter:(id)arg3 saveQueue:(id)arg4 ;
-(id)getCurrentUserSettings;
-(void)_performDelayedSaveSettings;
-(void)clearSettings;
-(void)loadSettings;
-(void)saveSettings;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
