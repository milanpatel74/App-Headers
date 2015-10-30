/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/FABDownloadAndSaveSettingsOperationDelegate.h>
#import <Slack/FABOnboardingOperationDelegate.h>

@class FABSettings, FABApplicationIdentiferModel, FABOnboardingOperation, NSFileManager, NSDictionary, NSString;

@interface FABSettingsOnboardingManager : NSObject <FABDownloadAndSaveSettingsOperationDelegate, FABOnboardingOperationDelegate> {

	BOOL _hasAttemptedAppConfigure;
	FABSettings* _settingsModel;
	FABApplicationIdentiferModel* _appIdentifierModel;
	FABOnboardingOperation* _onboardingOperation;
	NSFileManager* _fileManager;
	NSDictionary* _configuration;
	NSDictionary* _defaultConfiguration;
	NSString* _APIKey;
	NSDictionary* _kitVersions;
	NSString* _advertisingToken;

}

@property (nonatomic,retain) FABSettings * settingsModel;                                    //@synthesize settingsModel=_settingsModel - In the implementation block
@property (nonatomic,retain) FABApplicationIdentiferModel * appIdentifierModel;              //@synthesize appIdentifierModel=_appIdentifierModel - In the implementation block
@property (nonatomic,retain) FABOnboardingOperation * onboardingOperation;                   //@synthesize onboardingOperation=_onboardingOperation - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                                    //@synthesize fileManager=_fileManager - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedAppConfigure;                                  //@synthesize hasAttemptedAppConfigure=_hasAttemptedAppConfigure - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultConfiguration;                            //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (nonatomic,copy) NSString * APIKey;                                                //@synthesize APIKey=_APIKey - In the implementation block
@property (nonatomic,copy) NSDictionary * kitVersions;                                       //@synthesize kitVersions=_kitVersions - In the implementation block
@property (nonatomic,readonly) NSString * advertisingToken;                                  //@synthesize advertisingToken=_advertisingToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsDirectoryPath;
-(void)setAPIKey:(NSString *)arg1 ;
-(void)setKitVersions:(NSDictionary *)arg1 ;
-(void)beginSettingsDownload;
-(id)settingsPath;
-(FABApplicationIdentiferModel *)appIdentifierModel;
-(FABOnboardingOperation *)onboardingOperation;
-(NSDictionary *)kitVersions;
-(void)setOnboardingOperation:(FABOnboardingOperation *)arg1 ;
-(FABSettings *)settingsModel;
-(BOOL)hasAttemptedAppConfigure;
-(void)postSettingsDownloadCompletedNotification;
-(void)setHasAttemptedAppConfigure:(BOOL)arg1 ;
-(void)beginOnboarding:(BOOL)arg1 endpointString:(id)arg2 ;
-(id)appIconHash;
-(void)onboardingOperation:(id)arg1 didCompleteAppUpdateWithError:(id)arg2 ;
-(void)onboardingOperation:(id)arg1 didCompleteAppCreationWithError:(id)arg2 ;
-(id)initWithApplicationIdentifierModel:(id)arg1 advertisingToken:(id)arg2 ;
-(void)beginSettingsAndOnboardingOperationsWithAPIKey:(id)arg1 kitVersions:(id)arg2 ;
-(void)setSettingsModel:(FABSettings *)arg1 ;
-(void)setAppIdentifierModel:(FABApplicationIdentiferModel *)arg1 ;
-(void)setDefaultConfiguration:(NSDictionary *)arg1 ;
-(NSString *)APIKey;
-(NSString *)advertisingToken;
-(id)settingsURL;
-(void)operation:(id)arg1 didDownloadAndSaveSettingsWithError:(id)arg2 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSDictionary *)defaultConfiguration;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)valueForConfigurationKey:(id)arg1 ;
@end
