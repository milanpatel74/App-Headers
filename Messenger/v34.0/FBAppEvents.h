/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, FBSession, NSTimer, NSRegularExpression, NSMutableSet, NSMutableDictionary;

@interface FBAppEvents : NSObject {

	BOOL _haveOutstandingPersistedData;
	BOOL _explicitEventsLoggedYet;
	BOOL _appSupportsImplicitLogging;
	BOOL _shouldAccessAdvertisingID;
	BOOL _haveFetchedAppSettings;
	unsigned long long _flushBehavior;
	NSString* _loggingOverrideAppID;
	FBSession* _lastSessionLoggedTo;
	NSTimer* _flushTimer;
	NSTimer* _attributionIDRecheckTimer;
	unsigned long long _appSupportsAttributionStatus;
	NSRegularExpression* _eventNameRegex;
	NSMutableSet* _validatedIdentifiers;
	NSMutableDictionary* _appAuthSessions;
	NSMutableDictionary* _anonymousSessions;

}

@property (assign) unsigned long long flushBehavior;                              //@synthesize flushBehavior=_flushBehavior - In the implementation block
@property (copy) NSString * loggingOverrideAppID;                                 //@synthesize loggingOverrideAppID=_loggingOverrideAppID - In the implementation block
@property (assign) BOOL haveOutstandingPersistedData;                             //@synthesize haveOutstandingPersistedData=_haveOutstandingPersistedData - In the implementation block
@property (assign) BOOL explicitEventsLoggedYet;                                  //@synthesize explicitEventsLoggedYet=_explicitEventsLoggedYet - In the implementation block
@property (retain) FBSession * lastSessionLoggedTo;                               //@synthesize lastSessionLoggedTo=_lastSessionLoggedTo - In the implementation block
@property (retain) NSTimer * flushTimer;                                          //@synthesize flushTimer=_flushTimer - In the implementation block
@property (retain) NSTimer * attributionIDRecheckTimer;                           //@synthesize attributionIDRecheckTimer=_attributionIDRecheckTimer - In the implementation block
@property (assign) unsigned long long appSupportsAttributionStatus;               //@synthesize appSupportsAttributionStatus=_appSupportsAttributionStatus - In the implementation block
@property (assign) BOOL appSupportsImplicitLogging;                               //@synthesize appSupportsImplicitLogging=_appSupportsImplicitLogging - In the implementation block
@property (assign) BOOL shouldAccessAdvertisingID;                                //@synthesize shouldAccessAdvertisingID=_shouldAccessAdvertisingID - In the implementation block
@property (assign) BOOL haveFetchedAppSettings;                                   //@synthesize haveFetchedAppSettings=_haveFetchedAppSettings - In the implementation block
@property (copy) NSRegularExpression * eventNameRegex;                            //@synthesize eventNameRegex=_eventNameRegex - In the implementation block
@property (retain) NSMutableSet * validatedIdentifiers;                           //@synthesize validatedIdentifiers=_validatedIdentifiers - In the implementation block
@property (retain,readonly) NSMutableDictionary * appAuthSessions;                //@synthesize appAuthSessions=_appAuthSessions - In the implementation block
@property (retain,readonly) NSMutableDictionary * anonymousSessions;              //@synthesize anonymousSessions=_anonymousSessions - In the implementation block
+(void)logEvent:(id)arg1 ;
+(void)setSourceApplication:(id)arg1 isAppLink:(BOOL)arg2 ;
+(void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(void)ensureOnMainThread;
+(id)persistenceLibraryFilePath:(id)arg1 ;
+(void)setSourceApplication:(id)arg1 openURL:(id)arg2 ;
+(void)logEvent:(id)arg1 parameters:(id)arg2 ;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 ;
+(void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(unsigned long long)flushBehavior;
+(void)logAndNotify:(id)arg1 ;
+(void)setFlushBehavior:(unsigned long long)arg1 ;
+(id)loggingOverrideAppID;
+(void)setLoggingOverrideAppID:(id)arg1 ;
+(long long)unixTimeNow;
+(id)flushReasonToString:(unsigned long long)arg1 ;
+(id)unaffinitizedSessionFromToken:(id)arg1 appID:(id)arg2 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(BOOL)arg2 ;
+(id)retrievePersistedAppEventData;
+(void)clearPersistedAppEventData;
+(void)persistAppEventsData:(id)arg1 ;
+(id)persistenceDocumentFilePath:(id)arg1 ;
+(id)persistenceFilePath:(id)arg1 directory:(unsigned long long)arg2 ;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 ;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 session:(id)arg3 ;
+(BOOL)limitEventUsage;
+(void)setLimitEventUsage:(BOOL)arg1 ;
+(void)activateApp;
+(id)customAudienceThirdPartyIDRequest:(id)arg1 ;
+(id)getSourceApplication;
+(void)registerAutoResetSourceApplication;
+(void)flush;
+(id)singleton;
-(BOOL)shouldAccessAdvertisingID;
-(void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(BOOL)arg4 session:(id)arg5 ;
-(unsigned long long)flushBehavior;
-(void)instanceFlush:(unsigned long long)arg1 ;
-(void)setFlushBehavior:(unsigned long long)arg1 ;
-(NSString *)loggingOverrideAppID;
-(BOOL)explicitEventsLoggedYet;
-(void)setLoggingOverrideAppID:(NSString *)arg1 ;
-(void)setHaveOutstandingPersistedData:(BOOL)arg1 ;
-(void)setAppSupportsAttributionStatus:(unsigned long long)arg1 ;
-(void)flushTimerFired:(id)arg1 ;
-(void)setFlushTimer:(NSTimer *)arg1 ;
-(void)attributionIDRecheckTimerFired:(id)arg1 ;
-(void)setAttributionIDRecheckTimer:(NSTimer *)arg1 ;
-(void)applicationMovingFromActiveStateOrTerminating;
-(NSMutableSet *)validatedIdentifiers;
-(void)setValidatedIdentifiers:(NSMutableSet *)arg1 ;
-(BOOL)haveFetchedAppSettings;
-(BOOL)appSupportsImplicitLogging;
-(void)setExplicitEventsLoggedYet:(BOOL)arg1 ;
-(BOOL)validateIdentifier:(id)arg1 ;
-(id)sessionToSendRequestTo:(id)arg1 ;
-(FBSession *)lastSessionLoggedTo;
-(void)setLastSessionLoggedTo:(FBSession *)arg1 ;
-(void)flush:(unsigned long long)arg1 session:(id)arg2 ;
-(BOOL)haveOutstandingPersistedData;
-(BOOL)updateAppEventsStateWithPersistedData:(id)arg1 ;
-(void)flushOnMainQueue:(unsigned long long)arg1 session:(id)arg2 ;
-(unsigned long long)appSupportsAttributionStatus;
-(id)appIDToLogEventsWith:(id)arg1 ;
-(void)setAppSupportsImplicitLogging:(BOOL)arg1 ;
-(void)setShouldAccessAdvertisingID:(BOOL)arg1 ;
-(void)setHaveFetchedAppSettings:(BOOL)arg1 ;
-(void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 session:(id)arg3 ;
-(NSMutableDictionary *)appAuthSessions;
-(NSMutableDictionary *)anonymousSessions;
-(void)persistEventDataIfNotInFlight;
-(id)instanceCustomAudienceThirdPartyIDRequest:(id)arg1 ;
-(BOOL)doesSessionHaveUserToken:(id)arg1 ;
-(NSTimer *)flushTimer;
-(NSTimer *)attributionIDRecheckTimer;
-(NSRegularExpression *)eventNameRegex;
-(void)setEventNameRegex:(NSRegularExpression *)arg1 ;
-(BOOL)isValidIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive;
@end

