/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/FABKit.h>
#import <Crystal/CLSCrashReportingControllerDelegate.h>
#import <Crystal/CLSBetaControllerDelegate.h>
#import <Crystal/WKScriptMessageHandler.h>

@protocol CrashlyticsDelegate;
@class CLSCrashReportingController, CLSAnalyticsController, CLSBetaController, NSString;

@interface Crashlytics : NSObject <FABKit, CLSCrashReportingControllerDelegate, CLSBetaControllerDelegate, WKScriptMessageHandler> {

	id<CrashlyticsDelegate> _delegate;
	CLSCrashReportingController* _crashReportingController;
	CLSAnalyticsController* _analyticsController;
	CLSBetaController* _betaController;

}

@property (nonatomic,copy,readonly) NSString * APIKey; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (assign,nonatomic) BOOL debugMode; 
@property (assign,nonatomic) id<CrashlyticsDelegate> delegate; 
@property (nonatomic,readonly) CLSBetaController * betaController;              //@synthesize betaController=_betaController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)kitDisplayVersion;
+(id)startWithAPIKey:(id)arg1 delegate:(id)arg2 ;
+(id)startWithAPIKey:(id)arg1 ;
+(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
+(void)setIntValue:(int)arg1 forKey:(id)arg2 ;
+(void)setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setFloatValue:(float)arg1 forKey:(id)arg2 ;
+(void)setDevelopmentPlatformName:(id)arg1 ;
+(void)setDevelopmentPlatformVersion:(id)arg1 ;
+(void)logEvent:(id)arg1 attributes:(id)arg2 ;
+(id)kitBuildVersion;
+(void)initializeIfNeeded;
+(id)startWithAPIKey:(id)arg1 afterDelay:(double)arg2 ;
+(id)startWithAPIKey:(id)arg1 delegate:(id)arg2 afterDelay:(double)arg3 ;
+(id)sharedInstance;
+(id)bundleIdentifier;
+(void)logEvent:(id)arg1 ;
+(void)setUserEmail:(id)arg1 ;
+(void)setUserName:(id)arg1 ;
+(void)setUserIdentifier:(id)arg1 ;
-(id)initWithSuper;
-(void)warnDelegateAboutMethods;
-(NSString *)APIKey;
-(id)installID;
-(BOOL)isFirstInstall;
-(BOOL)isCrashlyticsStarted;
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIntValue:(int)arg1 forKey:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setFloatValue:(float)arg1 forKey:(id)arg2 ;
-(void)setDevelopmentPlatformName:(id)arg1 ;
-(void)setDevelopmentPlatformVersion:(id)arg1 ;
-(void)recordError:(id)arg1 withAdditionalUserInfo:(id)arg2 ;
-(BOOL)delegateRespondsToLegacyMethods;
-(BOOL)reportingControllerMustInformDelegateOfReports:(id)arg1 ;
-(void)logEvent:(id)arg1 attributes:(id)arg2 ;
-(BOOL)shouldInstallCrashCallback;
-(void)detectedCrash;
-(BOOL)reportingControllerCanUseBackgroundSessions:(id)arg1 ;
-(void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2 ;
-(BOOL)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2 ;
-(id)APIKeyForCrashReportingController:(id)arg1 ;
-(id)installIDForCrashReportingController:(id)arg1 ;
-(BOOL)isFirstInstallForCrashReportingController:(id)arg1 ;
-(id)settingsForCrashReportingController:(id)arg1 ;
-(id)APIKeyForBetaController:(id)arg1 ;
-(id)settingsForBetaController:(id)arg1 ;
-(id)kitInfo;
-(void)setKitInfo:(id)arg1 ;
-(id)settingsDictionary;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)debugMode;
-(void)crash;
-(void)throwException;
-(id)developmentPlatformName;
-(id)developmentPlatformVersion;
-(void)recordCustomExceptionName:(id)arg1 reason:(id)arg2 frameArray:(id)arg3 ;
-(void)monitorErrorsForUIWebView:(id)arg1 ;
-(BOOL)handleWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)monitorErrorsForWKWebViewConfiguration:(id)arg1 ;
-(id)analyticsController;
-(CLSBetaController *)betaController;
-(void)recordError:(id)arg1 ;
-(void)setDelegate:(id<CrashlyticsDelegate>)arg1 ;
-(id)init;
-(id<CrashlyticsDelegate>)delegate;
-(id)bundleIdentifier;
-(void)start;
-(NSString *)version;
-(void)logEvent:(id)arg1 ;
-(void)setUserEmail:(id)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)setUserName:(id)arg1 ;
-(void)setUserIdentifier:(id)arg1 ;
@end
