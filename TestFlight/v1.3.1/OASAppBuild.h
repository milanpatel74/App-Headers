/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, OASVersionString, NSDate, NSString, NSURL, NSLocale, NSArray, OASAppBuildEmbeddedBuild;

@interface OASAppBuild : NSObject <NSCopying> {

	BOOL _gameControllerRequired;
	BOOL _compatible;
	BOOL _universal;
	NSNumber* _buildID;
	NSNumber* _appID;
	OASVersionString* _shortVersion;
	OASVersionString* _bundleVersion;
	NSNumber* _fileSize;
	NSNumber* _fileSizeUncompressed;
	NSDate* _releaseDate;
	NSString* _developerFeedbackEmail;
	NSURL* _developerWebsiteURL;
	NSURL* _privacyPolicyUrl;
	NSLocale* _locale;
	NSString* _buildDescription;
	NSString* _whatsNew;
	NSString* _compatibleDevices;
	NSString* _copyright;
	NSURL* _iconURL;
	NSURL* _iconLargeURL;
	NSURL* _iconLayeredURL;
	NSDate* _lastModified;
	NSDate* _expirationDate;
	long long _permission;
	NSString* _externalVersionID;
	long long _deviceFamily;
	NSString* _deviceFamilyDisplayName;
	NSURL* _deviceFamilyIconURL;
	long long _platform;
	NSString* _compatibilityStatement;
	NSString* _compatibilityInstructions;
	NSString* _compatibilityInstructions2;
	NSString* _eula;
	NSString* _privacyPolicy;
	NSArray* _embeddedBuilds;
	OASAppBuildEmbeddedBuild* _watchKitEmbeddedBuild;

}

@property (nonatomic,retain) NSNumber * buildID;                                            //@synthesize buildID=_buildID - In the implementation block
@property (nonatomic,retain) NSNumber * appID;                                              //@synthesize appID=_appID - In the implementation block
@property (nonatomic,retain) OASVersionString * shortVersion;                               //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,retain) OASVersionString * bundleVersion;                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,retain) NSNumber * fileSize;                                           //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSNumber * fileSizeUncompressed;                               //@synthesize fileSizeUncompressed=_fileSizeUncompressed - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * developerFeedbackEmail;                             //@synthesize developerFeedbackEmail=_developerFeedbackEmail - In the implementation block
@property (nonatomic,retain) NSURL * developerWebsiteURL;                                   //@synthesize developerWebsiteURL=_developerWebsiteURL - In the implementation block
@property (nonatomic,retain) NSURL * privacyPolicyUrl;                                      //@synthesize privacyPolicyUrl=_privacyPolicyUrl - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * buildDescription;                                   //@synthesize buildDescription=_buildDescription - In the implementation block
@property (nonatomic,retain) NSString * whatsNew;                                           //@synthesize whatsNew=_whatsNew - In the implementation block
@property (nonatomic,retain) NSString * compatibleDevices;                                  //@synthesize compatibleDevices=_compatibleDevices - In the implementation block
@property (assign,nonatomic) BOOL gameControllerRequired;                                   //@synthesize gameControllerRequired=_gameControllerRequired - In the implementation block
@property (nonatomic,retain) NSString * copyright;                                          //@synthesize copyright=_copyright - In the implementation block
@property (assign,nonatomic) BOOL compatible;                                               //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                               //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) NSURL * iconLargeURL;                                          //@synthesize iconLargeURL=_iconLargeURL - In the implementation block
@property (nonatomic,retain) NSURL * iconLayeredURL;                                        //@synthesize iconLayeredURL=_iconLayeredURL - In the implementation block
@property (nonatomic,retain) NSDate * lastModified;                                         //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL universal;                                                //@synthesize universal=_universal - In the implementation block
@property (assign,nonatomic) long long permission;                                          //@synthesize permission=_permission - In the implementation block
@property (nonatomic,retain) NSString * externalVersionID;                                  //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (assign,nonatomic) long long deviceFamily;                                        //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (nonatomic,retain) NSString * deviceFamilyDisplayName;                            //@synthesize deviceFamilyDisplayName=_deviceFamilyDisplayName - In the implementation block
@property (nonatomic,retain) NSURL * deviceFamilyIconURL;                                   //@synthesize deviceFamilyIconURL=_deviceFamilyIconURL - In the implementation block
@property (assign,nonatomic) long long platform;                                            //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSString * compatibilityStatement;                             //@synthesize compatibilityStatement=_compatibilityStatement - In the implementation block
@property (nonatomic,retain) NSString * compatibilityInstructions;                          //@synthesize compatibilityInstructions=_compatibilityInstructions - In the implementation block
@property (nonatomic,retain) NSString * compatibilityInstructions2;                         //@synthesize compatibilityInstructions2=_compatibilityInstructions2 - In the implementation block
@property (nonatomic,retain) NSString * eula;                                               //@synthesize eula=_eula - In the implementation block
@property (nonatomic,retain) NSString * privacyPolicy;                                      //@synthesize privacyPolicy=_privacyPolicy - In the implementation block
@property (nonatomic,retain) NSArray * embeddedBuilds;                                      //@synthesize embeddedBuilds=_embeddedBuilds - In the implementation block
@property (nonatomic,retain) OASAppBuildEmbeddedBuild * watchKitEmbeddedBuild;              //@synthesize watchKitEmbeddedBuild=_watchKitEmbeddedBuild - In the implementation block
+(id)buildFromDictionary:(id)arg1 ;
-(OASVersionString *)shortVersion;
-(NSNumber *)buildID;
-(NSString *)externalVersionID;
-(void)setShortVersion:(OASVersionString *)arg1 ;
-(NSNumber *)fileSizeUncompressed;
-(NSString *)compatibleDevices;
-(BOOL)compatible;
-(NSString *)compatibilityStatement;
-(void)setBuildID:(NSNumber *)arg1 ;
-(void)setFileSizeUncompressed:(NSNumber *)arg1 ;
-(void)setDeveloperFeedbackEmail:(NSString *)arg1 ;
-(void)setDeveloperWebsiteURL:(NSURL *)arg1 ;
-(void)setPrivacyPolicyUrl:(NSURL *)arg1 ;
-(void)setBuildDescription:(NSString *)arg1 ;
-(void)setWhatsNew:(NSString *)arg1 ;
-(void)setCompatibleDevices:(NSString *)arg1 ;
-(void)setGameControllerRequired:(BOOL)arg1 ;
-(void)setCompatible:(BOOL)arg1 ;
-(void)setIconLargeURL:(NSURL *)arg1 ;
-(void)setIconLayeredURL:(NSURL *)arg1 ;
-(void)setExternalVersionID:(NSString *)arg1 ;
-(void)setDeviceFamily:(long long)arg1 ;
-(void)setDeviceFamilyDisplayName:(NSString *)arg1 ;
-(void)setDeviceFamilyIconURL:(NSURL *)arg1 ;
-(void)setCompatibilityStatement:(NSString *)arg1 ;
-(void)setCompatibilityInstructions:(NSString *)arg1 ;
-(void)setCompatibilityInstructions2:(NSString *)arg1 ;
-(void)setEula:(NSString *)arg1 ;
-(void)setWatchKitEmbeddedBuild:(OASAppBuildEmbeddedBuild *)arg1 ;
-(void)setEmbeddedBuilds:(NSArray *)arg1 ;
-(NSString *)developerFeedbackEmail;
-(NSURL *)developerWebsiteURL;
-(NSURL *)privacyPolicyUrl;
-(NSString *)buildDescription;
-(NSString *)whatsNew;
-(BOOL)gameControllerRequired;
-(NSURL *)iconLargeURL;
-(NSURL *)iconLayeredURL;
-(NSString *)deviceFamilyDisplayName;
-(NSURL *)deviceFamilyIconURL;
-(NSString *)compatibilityInstructions;
-(NSString *)compatibilityInstructions2;
-(NSString *)eula;
-(NSArray *)embeddedBuilds;
-(OASAppBuildEmbeddedBuild *)watchKitEmbeddedBuild;
-(void)setLastModified:(NSDate *)arg1 ;
-(NSDate *)releaseDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(long long)permission;
-(void)setPermission:(long long)arg1 ;
-(long long)deviceFamily;
-(void)setCopyright:(NSString *)arg1 ;
-(void)setPlatform:(long long)arg1 ;
-(OASVersionString *)bundleVersion;
-(void)setBundleVersion:(OASVersionString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setAppID:(NSNumber *)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(long long)platform;
-(NSString *)privacyPolicy;
-(void)setPrivacyPolicy:(NSString *)arg1 ;
-(NSDate *)lastModified;
-(NSString *)versionString;
-(void)setUniversal:(BOOL)arg1 ;
-(BOOL)universal;
-(NSURL *)iconURL;
-(NSString *)copyright;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSNumber *)appID;
@end
