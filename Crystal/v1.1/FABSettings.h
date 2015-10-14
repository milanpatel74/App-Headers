/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString, NSFileManager;

@interface FABSettings : NSObject {

	BOOL _reportingEnabled;
	BOOL _errorReportingEnabled;
	NSDictionary* _settingsDictionary;
	NSNumber* _logBufferSize;
	NSNumber* _maxErrors;
	NSNumber* _maxCustomKeys;
	NSString* _settingsPath;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSDictionary * settingsDictionary;              //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,readonly) BOOL appNeedsOnboarding; 
@property (nonatomic,readonly) BOOL appUpdateRequired; 
@property (nonatomic,readonly) BOOL reportingEnabled;                        //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL errorReportingEnabled;                   //@synthesize errorReportingEnabled=_errorReportingEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * logBufferSize;                     //@synthesize logBufferSize=_logBufferSize - In the implementation block
@property (nonatomic,readonly) NSNumber * maxErrors;                         //@synthesize maxErrors=_maxErrors - In the implementation block
@property (nonatomic,readonly) NSNumber * maxCustomKeys;                     //@synthesize maxCustomKeys=_maxCustomKeys - In the implementation block
@property (nonatomic,retain) NSString * settingsPath;                        //@synthesize settingsPath=_settingsPath - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                    //@synthesize fileManager=_fileManager - In the implementation block
-(NSString *)settingsPath;
-(id)initWithSettingsPath:(id)arg1 fileManager:(id)arg2 ;
-(void)clearSettingsDictionary;
-(BOOL)appNeedsOnboarding;
-(BOOL)appUpdateRequired;
-(id)settingsURLForEndpoint:(id)arg1 appInstanceIdentifer:(id)arg2 appIconHash:(id)arg3 ;
-(id)appSettings;
-(id)appStatus;
-(void)setSettingsDictionary:(NSDictionary *)arg1 ;
-(id)appSource;
-(BOOL)reportingEnabled;
-(NSNumber *)maxErrors;
-(void)setSettingsPath:(NSString *)arg1 ;
-(id)appPlatform;
-(NSDictionary *)settingsDictionary;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(BOOL)errorReportingEnabled;
-(NSNumber *)logBufferSize;
-(NSNumber *)maxCustomKeys;
-(id)appBundleIdentifier;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
@end
