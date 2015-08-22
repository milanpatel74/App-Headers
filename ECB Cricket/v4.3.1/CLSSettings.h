/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class NSString, NSDictionary, NSURL;

@interface CLSSettings : NSObject {

	NSString* _cachePath;
	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) BOOL isOutdated; 
@property (nonatomic,readonly) unsigned long long logBufferSize; 
@property (nonatomic,readonly) unsigned maxCustomKeyValuePairs; 
@property (nonatomic,readonly) BOOL shouldSubmitSynchronously; 
@property (nonatomic,readonly) BOOL shouldCollectCrashReports; 
@property (nonatomic,readonly) BOOL shouldCollectOnPlatform; 
@property (nonatomic,readonly) BOOL shouldCollectProcesess; 
@property (nonatomic,copy,readonly) NSURL * reportsURL; 
@property (nonatomic,copy,readonly) NSURL * settingsURL; 
@property (nonatomic,copy,readonly) NSURL * appURL; 
@property (nonatomic,readonly) BOOL appNeedsOnboarding; 
@property (nonatomic,readonly) BOOL requiresUpdate; 
@property (nonatomic,readonly) BOOL shouldRequestPermissionToSubmit; 
@property (nonatomic,readonly) BOOL shouldIncludeInteractiveCancelOption; 
@property (nonatomic,readonly) BOOL shouldIncludeInteractiveAlwaysSendOption; 
@property (nonatomic,copy,readonly) NSString * interactivePromptTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptMessage; 
@property (nonatomic,copy,readonly) NSString * interactivePromptSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptAlwaysSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptCancelTitle; 
@property (nonatomic,copy,readonly) NSString * iconHash; 
@property (nonatomic,readonly) CGSize iconSize; 
@property (nonatomic,readonly) BOOL iconPrerendered; 
@property (nonatomic,readonly) BOOL shouldCollectAnalytics; 
@property (nonatomic,copy,readonly) NSURL * analyticsURL; 
@property (nonatomic,readonly) BOOL shouldTrackViewControllers; 
@property (nonatomic,readonly) BOOL shouldFlushAnalyticsOnBackground; 
@property (nonatomic,readonly) unsigned flushIntervalSecs; 
@property (nonatomic,readonly) unsigned maxFileCountPerSend; 
@property (nonatomic,readonly) unsigned long long maxByteSizePerFile; 
@property (nonatomic,readonly) unsigned maxPendingSendFileCount; 
@property (nonatomic,copy,readonly) NSURL * betaUpdateEndpoint; 
@property (nonatomic,readonly) unsigned betaUpdateSuspendDurationSecs; 
+(BOOL)userDesiresReportsAlwaysBeSent;
+(BOOL)writeSettings:(id)arg1 toPath:(id)arg2 ;
+(void)setUserDesiresReportsAlwaysBeSent:(BOOL)arg1 ;
-(BOOL)shouldCollectAnalytics;
-(NSURL *)analyticsURL;
-(BOOL)shouldTrackViewControllers;
-(BOOL)shouldFlushAnalyticsOnBackground;
-(unsigned long long)maxByteSizePerFile;
-(unsigned)flushIntervalSecs;
-(unsigned)maxPendingSendFileCount;
-(unsigned long long)logBufferSize;
-(unsigned)maxCustomKeyValuePairs;
-(id)initWithCachePath:(id)arg1 settingsDictionary:(id)arg2 ;
-(id)appDictionary;
-(id)settingsDictionary;
-(id)sessionDictionary;
-(BOOL)shouldCollectOnPlatform;
-(id)safeURLWithString:(id)arg1 ;
-(id)featuresDictionary;
-(id)iconDictionary;
-(id)analyticsDictionary;
-(id)betaDictionary;
-(id)initWithCachePath:(id)arg1 ;
-(BOOL)isOutdated;
-(BOOL)shouldSubmitSynchronously;
-(BOOL)shouldCollectCrashReports;
-(NSURL *)reportsURL;
-(NSURL *)appURL;
-(NSURL *)settingsURL;
-(BOOL)appNeedsOnboarding;
-(BOOL)requiresUpdate;
-(BOOL)shouldRequestPermissionToSubmit;
-(BOOL)shouldIncludeInteractiveCancelOption;
-(BOOL)shouldIncludeInteractiveAlwaysSendOption;
-(BOOL)shouldCollectProcesess;
-(NSString *)interactivePromptTitle;
-(NSString *)interactivePromptMessage;
-(NSString *)interactivePromptSendTitle;
-(NSString *)interactivePromptAlwaysSendTitle;
-(NSString *)interactivePromptCancelTitle;
-(BOOL)iconPrerendered;
-(unsigned)maxFileCountPerSend;
-(NSURL *)betaUpdateEndpoint;
-(unsigned)betaUpdateSuspendDurationSecs;
-(void)dealloc;
-(id)promptDictionary;
-(NSString *)iconHash;
-(CGSize)iconSize;
@end
