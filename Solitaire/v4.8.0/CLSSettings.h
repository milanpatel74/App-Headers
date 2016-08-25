/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CLSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,copy,readonly) NSString * reportsEndpoint; 
@property (nonatomic,copy,readonly) NSString * betaEndpoint; 
@property (nonatomic,copy,readonly) NSNumber * betaSuspendDuration; 
@property (nonatomic,readonly) BOOL shouldPackageReports; 
@property (nonatomic,readonly) BOOL shouldSubmitReports; 
@property (nonatomic,readonly) BOOL canProcessUrgentReports; 
@property (nonatomic,readonly) BOOL errorReportingEnabled; 
@property (nonatomic,readonly) BOOL customExceptionsEnabled; 
@property (nonatomic,readonly) BOOL crashReportingEnabled; 
@property (nonatomic,readonly) BOOL userPromptEnabled; 
@property (nonatomic,readonly) unsigned errorLogBufferSize; 
@property (nonatomic,readonly) unsigned logBufferSize; 
@property (nonatomic,readonly) unsigned maxCustomExceptions; 
@property (nonatomic,readonly) unsigned maxCustomKeys; 
@property (nonatomic,copy,readonly) NSString * interactivePromptTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptMessage; 
@property (nonatomic,copy,readonly) NSString * interactivePromptCancelTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptAlwaysSendTitle; 
@property (nonatomic,readonly) NSDictionary * settingsDictionary;                             //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
-(NSDictionary *)settingsDictionary;
-(BOOL)errorReportingEnabled;
-(unsigned)logBufferSize;
-(unsigned)maxCustomKeys;
-(id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3 ;
-(NSString *)betaEndpoint;
-(NSNumber *)betaSuspendDuration;
-(NSString *)reportsEndpoint;
-(BOOL)shouldPackageReports;
-(BOOL)shouldSubmitReports;
-(BOOL)canProcessUrgentReports;
-(BOOL)customExceptionsEnabled;
-(BOOL)crashReportingEnabled;
-(BOOL)userPromptEnabled;
-(unsigned)errorLogBufferSize;
-(unsigned)maxCustomExceptions;
-(NSString *)interactivePromptTitle;
-(NSString *)interactivePromptMessage;
-(NSString *)interactivePromptCancelTitle;
-(NSString *)interactivePromptSendTitle;
-(NSString *)interactivePromptAlwaysSendTitle;
-(id)initWithDictionary:(id)arg1 ;
-(id)configuration;
-(id)defaultConfiguration;
-(id)valueForConfigurationKey:(id)arg1 ;
@end
