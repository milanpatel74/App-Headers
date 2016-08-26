/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExperimentCache.h>
#import <Facebook/FBExperimentDebugInfoProvider.h>
#import <Facebook/FBScenePathHolding.h>

@protocol FBExperimentManagerPolicy;
@class NSDictionary, NSSet, FBExperimentCatalog, FBExperimentLogger, FBExperimentCrashManager, FBExperimentPersistentStore, NSMutableDictionary, NSMutableSet, FBMobileConfigContextManager, FBScenePath, NSString;

@interface FBExperimentManager : NSObject <FBExperimentCache, FBExperimentDebugInfoProvider, FBScenePathHolding> {

	FBExperimentCatalog* _experimentCatalog;
	FBExperimentLogger* _experimentLogger;
	FBExperimentCrashManager* _experimentCrashManager;
	FBExperimentPersistentStore* _persistentStore;
	BOOL _catalogLocked;
	double _startSyncExperimentsTimestamp;
	double _lastUpdateTime;
	ReadWriteLock _frozenExperimentsLock;
	NSMutableDictionary* _frozenExperiments;
	NSMutableSet* _frozenExperimentNamesWithoutConfig;
	NSMutableDictionary* _contextClasses;
	NSMutableDictionary* _contexts;
	BOOL _includeAllGroupsAndParameters;
	double _startTime;
	id<FBExperimentManagerPolicy> _policy;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	NSDictionary* _stashedOverrides;
	BOOL _automatedTestingOverridesSet;
	ReadWriteLock _contextLock;
	FBScenePath* _scenePath;
	NSMutableSet* _gatekeeperAccessed;
	int _requestedKeepAliveCount;

}

@property (assign,nonatomic) int requestedKeepAliveCount;                                       //@synthesize requestedKeepAliveCount=_requestedKeepAliveCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * activatedExperimentsWithConfig; 
@property (nonatomic,copy,readonly) NSSet * activatedExperimentNamesWithoutConfig; 
+(id)loggedOutQEManager;
+(BOOL)isGKEnabled:(id)arg1 forSession:(id)arg2 withDefaultValue:(BOOL)arg3 ;
+(id)QEManagerWithSession:(id)arg1 ;
+(id)loggedOutQEManagerWithJSONOverrides:(id)arg1 error:(id*)arg2 ;
+(id)QEManagerWithSession:(id)arg1 jsonOverrides:(id)arg2 error:(id*)arg3 ;
+(id)appShipDate;
+(id)_getSupportedConfigurationsFromPolicy:(id)arg1 ;
+(id)_applyJSONOverrides:(id)arg1 toCurrentOverrides:(id)arg2 withExperimentNames:(id)arg3 ;
-(id)sortedExperimentNames;
-(id)sortedDescriptiveExperimentNames;
-(BOOL)isGKEnabled:(id)arg1 ;
-(id)autoExposedExperimentContextWithClass:(Class)arg1 ;
-(void)updateExperimentGroupsIfStale:(/*^block*/id)arg1 ;
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 extraData:(id)arg4 ;
-(id)experimentContextWithClass:(Class)arg1 ;
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 ;
-(id)effectiveGroupForExperimentWithName:(id)arg1 ;
-(unsigned long long)gkValue:(id)arg1 ;
-(id)allExperimentsInCatalogAsShortDescription;
-(void)syncExperimentsOnStartup:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)updateExperimentGroups:(/*^block*/id)arg1 ;
-(id)frozenExperimentGroupForName:(id)arg1 ;
-(BOOL)hasOverrideForExperimentWithName:(id)arg1 ;
-(id)groupForExperimentWithName:(id)arg1 ;
-(void)removeOverrideForExperimentWithName:(id)arg1 ;
-(void)registerOverrideWithName:(id)arg1 forExperimentWithName:(id)arg2 ;
-(Class)contextClassForExperimentWithName:(id)arg1 ;
-(BOOL)isExperimentFrozen:(id)arg1 ;
-(void)setAllowForceConfigRefreshInDebugBuilds:(BOOL)arg1 ;
-(void)clearExperiments;
-(BOOL)containsFrozenExperimentsInList:(id)arg1 ;
-(BOOL)containsFrozenOverridenExperiments;
-(id)allExperimentOverrides;
-(void)removeAllExperimentOverrides;
-(void)registerOverrides:(id)arg1 ;
-(id)initWithPolicy:(id)arg1 experimentDiskFetcher:(id)arg2 jsonOverrides:(id)arg3 mobileConfigContextManager:(id)arg4 ;
-(void)registerContextClass:(Class)arg1 ;
-(void)_logGatekeeperAccessForKey:(id)arg1 value:(BOOL)arg2 ;
-(void)_validateExperiments;
-(BOOL)_isExperimentNameFrozen_unlocked:(id)arg1 ;
-(void)replaceExperimentsWithNames:(id)arg1 withExperiments:(id)arg2 preservingOverrides:(BOOL)arg3 ;
-(void)_fetchExperimentsAndPerformAction:(/*^block*/id)arg1 withAllGroupsAndParameters:(BOOL)arg2 ;
-(void)_replaceExperimentsWithNames:(id)arg1 withExperiments:(id)arg2 withCallbackOnSuccess:(/*^block*/id)arg3 ;
-(void)requestColdStartForExperimentWithName:(id)arg1 ;
-(void)_requestColdStartForFrozenExperimenthNames:(id)arg1 ;
-(void)saveExperiments;
-(id)_experimentNamesThatChangeWhenReplacingNames:(id)arg1 withExperiments:(id)arg2 ;
-(id)_parametersForExperimentWithName:(id)arg1 allowInactive:(BOOL)arg2 ;
-(void)freezeExperiment:(id)arg1 ;
-(id)_parametersForExperimentWithName:(id)arg1 ;
-(id)_constructContextWithClass:(Class)arg1 parameters:(id)arg2 parameterConfigurations:(id)arg3 ;
-(BOOL)_shouldNotifyExperimentObserver;
-(void)_requestColdStartForFrozenExperimentWithName:(id)arg1 ;
-(void)syncExperimentGroups:(/*^block*/id)arg1 ;
-(void)_performActionIfExperimentCatalogUnlocked:(/*^block*/id)arg1 ;
-(id)activatedGroupForExperimentName:(id)arg1 ;
-(NSDictionary *)activatedExperimentsWithConfig;
-(NSSet *)activatedExperimentNamesWithoutConfig;
-(void)updateExperimentGroups:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(id)parametersIdentifierForExperimentWithName:(id)arg1 ;
-(void)beginPreventingApplicationRefreshOnBackground;
-(void)endPreventingApplicationRefreshOnBackground;
-(BOOL)shouldLogExperimentActionsWithName:(id)arg1 ;
-(int)requestedKeepAliveCount;
-(void)setRequestedKeepAliveCount:(int)arg1 ;
-(id)tunneledExperimentContextWithClass:(Class)arg1 ;
-(id)catalog;
@end
