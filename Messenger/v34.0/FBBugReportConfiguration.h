/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray, NSURL, NSDate, NSDictionary;

@interface FBBugReportConfiguration : NSObject {

	BOOL _snowGlobeReportingFlow;
	BOOL _showMemorySentinelOptionOnShake;
	BOOL _enableGravityDemo;
	BOOL _activateMemorySentinel;
	BOOL _showScreenshotAttachmentNUXInReportView;
	BOOL _enableAbuseReportingOption;
	BOOL _enableFeedbackReportingOption;
	BOOL _allowOwlNux;
	BOOL _replaceDivebarWithNow;
	BOOL _onlyShowReportView;
	BOOL _hideThumbStickerOnThankYouView;
	BOOL _canAttachVideo;
	BOOL _canAttachScreenshot;
	BOOL _isEmployee;
	BOOL _skipChooseFeatureView;
	BOOL _useiOS7LandscapeWorkaround;
	BOOL _disallowAdditionalAttachmentsIfCameraRollPermissionsNotGranted;
	NSString* _sessionlessUploadAppID;
	NSString* _sessionlessUploadAccessToken;
	NSString* _sessionlessUploadConfigID;
	NSString* _defaultCategoryID;
	NSString* _overrideReportViewTitle;
	NSString* _overrideThankYouViewText;
	NSArray* _categoriesWithIcons;
	NSURL* _redirectSendFeedbackToURL;
	NSURL* _redirectReportAbuseToURL;
	NSDate* _buildTime;

}

@property (assign,nonatomic) BOOL snowGlobeReportingFlow;                                                      //@synthesize snowGlobeReportingFlow=_snowGlobeReportingFlow - In the implementation block
@property (assign,nonatomic) BOOL showMemorySentinelOptionOnShake;                                             //@synthesize showMemorySentinelOptionOnShake=_showMemorySentinelOptionOnShake - In the implementation block
@property (assign,nonatomic) BOOL enableGravityDemo;                                                           //@synthesize enableGravityDemo=_enableGravityDemo - In the implementation block
@property (assign,nonatomic) BOOL activateMemorySentinel;                                                      //@synthesize activateMemorySentinel=_activateMemorySentinel - In the implementation block
@property (assign,nonatomic) BOOL showScreenshotAttachmentNUXInReportView;                                     //@synthesize showScreenshotAttachmentNUXInReportView=_showScreenshotAttachmentNUXInReportView - In the implementation block
@property (assign,nonatomic) BOOL enableAbuseReportingOption;                                                  //@synthesize enableAbuseReportingOption=_enableAbuseReportingOption - In the implementation block
@property (assign,nonatomic) BOOL enableFeedbackReportingOption;                                               //@synthesize enableFeedbackReportingOption=_enableFeedbackReportingOption - In the implementation block
@property (assign,nonatomic) BOOL allowOwlNux;                                                                 //@synthesize allowOwlNux=_allowOwlNux - In the implementation block
@property (assign,nonatomic) BOOL replaceDivebarWithNow;                                                       //@synthesize replaceDivebarWithNow=_replaceDivebarWithNow - In the implementation block
@property (assign,nonatomic) BOOL onlyShowReportView;                                                          //@synthesize onlyShowReportView=_onlyShowReportView - In the implementation block
@property (nonatomic,copy) NSString * sessionlessUploadAppID;                                                  //@synthesize sessionlessUploadAppID=_sessionlessUploadAppID - In the implementation block
@property (nonatomic,copy) NSString * sessionlessUploadAccessToken;                                            //@synthesize sessionlessUploadAccessToken=_sessionlessUploadAccessToken - In the implementation block
@property (nonatomic,copy) NSString * sessionlessUploadConfigID;                                               //@synthesize sessionlessUploadConfigID=_sessionlessUploadConfigID - In the implementation block
@property (nonatomic,copy) NSString * defaultCategoryID;                                                       //@synthesize defaultCategoryID=_defaultCategoryID - In the implementation block
@property (nonatomic,copy) NSString * overrideReportViewTitle;                                                 //@synthesize overrideReportViewTitle=_overrideReportViewTitle - In the implementation block
@property (nonatomic,copy) NSString * overrideThankYouViewText;                                                //@synthesize overrideThankYouViewText=_overrideThankYouViewText - In the implementation block
@property (assign,nonatomic) BOOL hideThumbStickerOnThankYouView;                                              //@synthesize hideThumbStickerOnThankYouView=_hideThumbStickerOnThankYouView - In the implementation block
@property (nonatomic,copy) NSArray * categoriesWithIcons;                                                      //@synthesize categoriesWithIcons=_categoriesWithIcons - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * categoriesWithIconsMap; 
@property (assign,nonatomic) BOOL canAttachVideo;                                                              //@synthesize canAttachVideo=_canAttachVideo - In the implementation block
@property (assign,nonatomic) BOOL canAttachScreenshot;                                                         //@synthesize canAttachScreenshot=_canAttachScreenshot - In the implementation block
@property (assign,nonatomic) BOOL isEmployee;                                                                  //@synthesize isEmployee=_isEmployee - In the implementation block
@property (assign,nonatomic) BOOL skipChooseFeatureView;                                                       //@synthesize skipChooseFeatureView=_skipChooseFeatureView - In the implementation block
@property (nonatomic,copy) NSURL * redirectSendFeedbackToURL;                                                  //@synthesize redirectSendFeedbackToURL=_redirectSendFeedbackToURL - In the implementation block
@property (nonatomic,copy) NSURL * redirectReportAbuseToURL;                                                   //@synthesize redirectReportAbuseToURL=_redirectReportAbuseToURL - In the implementation block
@property (nonatomic,copy) NSDate * buildTime;                                                                 //@synthesize buildTime=_buildTime - In the implementation block
@property (assign,nonatomic) BOOL useiOS7LandscapeWorkaround;                                                  //@synthesize useiOS7LandscapeWorkaround=_useiOS7LandscapeWorkaround - In the implementation block
@property (assign,nonatomic) BOOL disallowAdditionalAttachmentsIfCameraRollPermissionsNotGranted;              //@synthesize disallowAdditionalAttachmentsIfCameraRollPermissionsNotGranted=_disallowAdditionalAttachmentsIfCameraRollPermissionsNotGranted - In the implementation block
+(id)applicationSpecificConfigWithSession:(id)arg1 ;
-(BOOL)isEmployee;
-(BOOL)disallowAdditionalAttachmentsIfCameraRollPermissionsNotGranted;
-(BOOL)useiOS7LandscapeWorkaround;
-(BOOL)canAttachVideo;
-(BOOL)canAttachScreenshot;
-(NSURL *)redirectReportAbuseToURL;
-(NSArray *)categoriesWithIcons;
-(BOOL)skipChooseFeatureView;
-(NSDate *)buildTime;
-(NSURL *)redirectSendFeedbackToURL;
-(BOOL)enableAbuseReportingOption;
-(BOOL)enableFeedbackReportingOption;
-(BOOL)showMemorySentinelOptionOnShake;
-(BOOL)enableGravityDemo;
-(NSString *)overrideReportViewTitle;
-(BOOL)onlyShowReportView;
-(NSString *)defaultCategoryID;
-(BOOL)hideThumbStickerOnThankYouView;
-(NSString *)overrideThankYouViewText;
-(BOOL)replaceDivebarWithNow;
-(void)setCategoriesWithIcons:(NSArray *)arg1 ;
-(void)setupCategoriesWithIcons:(BOOL)arg1 ;
-(NSDictionary *)categoriesWithIconsMap;
-(BOOL)snowGlobeReportingFlow;
-(void)setSnowGlobeReportingFlow:(BOOL)arg1 ;
-(void)setShowMemorySentinelOptionOnShake:(BOOL)arg1 ;
-(void)setEnableGravityDemo:(BOOL)arg1 ;
-(BOOL)activateMemorySentinel;
-(void)setActivateMemorySentinel:(BOOL)arg1 ;
-(BOOL)showScreenshotAttachmentNUXInReportView;
-(void)setShowScreenshotAttachmentNUXInReportView:(BOOL)arg1 ;
-(void)setEnableAbuseReportingOption:(BOOL)arg1 ;
-(void)setEnableFeedbackReportingOption:(BOOL)arg1 ;
-(BOOL)allowOwlNux;
-(void)setAllowOwlNux:(BOOL)arg1 ;
-(void)setReplaceDivebarWithNow:(BOOL)arg1 ;
-(void)setOnlyShowReportView:(BOOL)arg1 ;
-(void)setSessionlessUploadAppID:(NSString *)arg1 ;
-(void)setSessionlessUploadAccessToken:(NSString *)arg1 ;
-(void)setSessionlessUploadConfigID:(NSString *)arg1 ;
-(void)setDefaultCategoryID:(NSString *)arg1 ;
-(void)setOverrideReportViewTitle:(NSString *)arg1 ;
-(void)setOverrideThankYouViewText:(NSString *)arg1 ;
-(void)setHideThumbStickerOnThankYouView:(BOOL)arg1 ;
-(void)setCanAttachVideo:(BOOL)arg1 ;
-(void)setCanAttachScreenshot:(BOOL)arg1 ;
-(void)setIsEmployee:(BOOL)arg1 ;
-(void)setSkipChooseFeatureView:(BOOL)arg1 ;
-(void)setRedirectSendFeedbackToURL:(NSURL *)arg1 ;
-(void)setRedirectReportAbuseToURL:(NSURL *)arg1 ;
-(void)setBuildTime:(NSDate *)arg1 ;
-(void)setUseiOS7LandscapeWorkaround:(BOOL)arg1 ;
-(void)setDisallowAdditionalAttachmentsIfCameraRollPermissionsNotGranted:(BOOL)arg1 ;
-(NSString *)sessionlessUploadAccessToken;
-(NSString *)sessionlessUploadConfigID;
-(NSString *)sessionlessUploadAppID;
-(id)initWithSession:(id)arg1 ;
@end
