//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdSourcesConfig, SOJUAdTrackInfo, SOJUFeatureSettings, SOJUPromptMessage, SOJUResetDisabledTranscodingState;

@interface SOJUUpdatesResponseBuilder : NSObject
{
    NSArray *_friends;
    NSString *_friendsSyncToken;
    NSString *_friendsSyncType;
    NSArray *_addedFriends;
    NSArray *_bests;
    NSNumber *_logged;
    NSString *_username;
    NSString *_userId;
    NSNumber *_isVerifiedUser;
    NSString *_authToken;
    NSString *_deviceToken;
    NSString *_email;
    NSString *_mobile;
    NSString *_mobileVerificationKey;
    NSNumber *_enableVideoTranscodingAndroid;
    SOJUResetDisabledTranscodingState *_resetDisabledTranscodingState;
    NSNumber *_enableImageTranscoding;
    NSNumber *_transcodingProfileLevelConfigurationAndroid;
    NSNumber *_enableLensesAndroid;
    NSNumber *_gaussianBlurLevelAndroid;
    NSNumber *_enableSaveStoryToGallery;
    NSString *_birthday;
    NSNumber *_snapP;
    NSString *_storyPrivacy;
    NSNumber *_sent;
    NSNumber *_received;
    NSNumber *_score;
    NSNumber *_credits;
    NSArray *_snaps;
    NSArray *_recents;
    NSNumber *_lastUpdated;
    NSNumber *_addedFriendsTimestamp;
    NSNumber *_currentTimestamp;
    NSNumber *_lastReplayedSnapTimestamp;
    NSString *_snapchatPhoneNumber;
    NSNumber *_searchableByPhoneNumber;
    NSNumber *_shouldCallToVerifyNumber;
    NSNumber *_shouldTextToVerifyNumber;
    NSArray *_seenTooltips;
    NSDictionary *_clientProperties;
    NSArray *_clientPropertiesV2;
    SOJUFeatureSettings *_featureSettings;
    NSNumber *_numberOfBestFriends;
    NSDictionary *_studySettings;
    NSDictionary *_studySettingsV2;
    NSNumber *_isCashActive;
    NSString *_cashProvider;
    NSString *_cashCustomerId;
    NSString *_allowedToUseCash;
    NSString *_thirdPartyTrackingBaseUrl;
    NSString *_thirdPartyTrackingAppId;
    NSNumber *_lastAddressBookUpdatedDate;
    NSString *_qrPath;
    NSNumber *_requireRefreshingProfileMedia;
    NSNumber *_shouldShowSuggestionPrompt;
    NSString *_suggestionPromptLink;
    NSString *_suggestionPromptText;
    NSString *_suggestionPromptButtonText;
    NSNumber *_suggestionPromptDurationInMillis;
    NSNumber *_videoFiltersEnabled;
    NSNumber *_speedFiltersEnabledAndroid;
    NSArray *_ourStoryAuths;
    NSDictionary *_targeting;
    SOJUAdSourcesConfig *_adSources;
    SOJUAdTrackInfo *_adTrackInfo;
    NSArray *_industries;
    NSNumber *_rawThumbnailUploadEnabled;
    NSNumber *_isSmsTwoFaEnabled;
    NSNumber *_isOtpTwoFaEnabled;
    NSNumber *_isTwoFaEnabled;
    NSNumber *_twoFaVerifiedDeviceNum;
    NSArray *_twoFaVerifiedDevices;
    NSDictionary *_friendmojiMutableDict;
    NSDictionary *_friendmojiReadOnlyDict;
    NSArray *_verifiedSharedPublications;
    NSArray *_enabledIapCurrencies;
    NSArray *_enabledLensStoreCurrencies;
    NSNumber *_isGalleryInvited;
    NSNumber *_isGalleryEnabled;
    SOJUPromptMessage *_clientPrompt;
}

+ (id)withJUUpdatesResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setClientPrompt:(id)arg1;
- (id)setIsGalleryEnabled:(id)arg1;
- (id)setIsGalleryInvited:(id)arg1;
- (id)setEnabledLensStoreCurrencies:(id)arg1;
- (id)setEnabledIapCurrencies:(id)arg1;
- (id)setVerifiedSharedPublications:(id)arg1;
- (id)setFriendmojiReadOnlyDict:(id)arg1;
- (id)setFriendmojiMutableDict:(id)arg1;
- (id)setTwoFaVerifiedDevices:(id)arg1;
- (id)setTwoFaVerifiedDeviceNum:(id)arg1;
- (id)setIsTwoFaEnabled:(id)arg1;
- (id)setIsOtpTwoFaEnabled:(id)arg1;
- (id)setIsSmsTwoFaEnabled:(id)arg1;
- (id)setRawThumbnailUploadEnabled:(id)arg1;
- (id)setIndustries:(id)arg1;
- (id)setAdTrackInfo:(id)arg1;
- (id)setAdSources:(id)arg1;
- (id)setTargeting:(id)arg1;
- (id)setOurStoryAuths:(id)arg1;
- (id)setSpeedFiltersEnabledAndroid:(id)arg1;
- (id)setVideoFiltersEnabled:(id)arg1;
- (id)setSuggestionPromptDurationInMillis:(id)arg1;
- (id)setSuggestionPromptButtonText:(id)arg1;
- (id)setSuggestionPromptText:(id)arg1;
- (id)setSuggestionPromptLink:(id)arg1;
- (id)setShouldShowSuggestionPrompt:(id)arg1;
- (id)setRequireRefreshingProfileMedia:(id)arg1;
- (id)setQrPath:(id)arg1;
- (id)setLastAddressBookUpdatedDate:(id)arg1;
- (id)setThirdPartyTrackingAppId:(id)arg1;
- (id)setThirdPartyTrackingBaseUrl:(id)arg1;
- (id)setAllowedToUseCash:(id)arg1;
- (id)setCashCustomerId:(id)arg1;
- (id)setCashProvider:(id)arg1;
- (id)setIsCashActive:(id)arg1;
- (id)setStudySettingsV2:(id)arg1;
- (id)setStudySettings:(id)arg1;
- (id)setNumberOfBestFriends:(id)arg1;
- (id)setFeatureSettings:(id)arg1;
- (id)setClientPropertiesV2:(id)arg1;
- (id)setClientProperties:(id)arg1;
- (id)setSeenTooltips:(id)arg1;
- (id)setShouldTextToVerifyNumber:(id)arg1;
- (id)setShouldCallToVerifyNumber:(id)arg1;
- (id)setSearchableByPhoneNumber:(id)arg1;
- (id)setSnapchatPhoneNumber:(id)arg1;
- (id)setLastReplayedSnapTimestamp:(id)arg1;
- (id)setCurrentTimestamp:(id)arg1;
- (id)setAddedFriendsTimestamp:(id)arg1;
- (id)setLastUpdated:(id)arg1;
- (id)setRecents:(id)arg1;
- (id)setSnaps:(id)arg1;
- (id)setCredits:(id)arg1;
- (id)setScore:(id)arg1;
- (id)setReceived:(id)arg1;
- (id)setSent:(id)arg1;
- (id)setStoryPrivacy:(id)arg1;
- (id)setSnapP:(id)arg1;
- (id)setBirthday:(id)arg1;
- (id)setEnableSaveStoryToGallery:(id)arg1;
- (id)setGaussianBlurLevelAndroid:(id)arg1;
- (id)setEnableLensesAndroid:(id)arg1;
- (id)setTranscodingProfileLevelConfigurationAndroid:(id)arg1;
- (id)setEnableImageTranscoding:(id)arg1;
- (id)setResetDisabledTranscodingState:(id)arg1;
- (id)setEnableVideoTranscodingAndroid:(id)arg1;
- (id)setMobileVerificationKey:(id)arg1;
- (id)setMobile:(id)arg1;
- (id)setEmail:(id)arg1;
- (id)setDeviceToken:(id)arg1;
- (id)setAuthToken:(id)arg1;
- (id)setIsVerifiedUser:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setLogged:(id)arg1;
- (id)setBests:(id)arg1;
- (id)setAddedFriends:(id)arg1;
- (id)setFriendsSyncType:(id)arg1;
- (id)setFriendsSyncToken:(id)arg1;
- (id)setFriends:(id)arg1;
- (id)build;

@end

