/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPollingDelegate.h>
#import <Messenger/FBStreamLoadDelegate.h>
#import <Messenger/FBStreamAnnouncingInterface.h>

@protocol FBStreamScenePathProviding;
@class FBStreamConfiguration, FBStreamPagingInfo, NSMutableDictionary, FBUserSession, NSString, FBScenePath, NSError, FBStreamAnalytics;

@interface FBStream : NSObject <FBPollingDelegate, FBStreamLoadDelegate, FBStreamAnnouncingInterface> {

	FBStreamConfiguration* _configuration;
	BOOL _shouldRestartStreamingOnForeground;
	id<FBStreamScenePathProviding> _scenePathProvider;
	FBStreamPagingInfo* _cachedPagingInfo;
	NSMutableDictionary* _errors;
	NSMutableDictionary* _streamLoads;
	BOOL _canLoadTail;
	BOOL _canLoadHead;
	BOOL _loadingHead;
	BOOL _loadingTail;
	BOOL _lastStreamHeadLoadWasRetried;
	BOOL _streamAsNeckLoad;
	BOOL _enabled;
	FBUserSession* _session;
	NSString* _targetID;

}

@property (nonatomic,readonly) FBUserSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (assign,nonatomic) BOOL canLoadTail;                                     //@synthesize canLoadTail=_canLoadTail - In the implementation block
@property (assign,nonatomic) BOOL canLoadHead;                                     //@synthesize canLoadHead=_canLoadHead - In the implementation block
@property (nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL loadingInitial; 
@property (assign,nonatomic) BOOL loadingHead;                                     //@synthesize loadingHead=_loadingHead - In the implementation block
@property (assign,nonatomic) BOOL loadingTail;                                     //@synthesize loadingTail=_loadingTail - In the implementation block
@property (nonatomic,readonly) NSError * lastHeadLoadError; 
@property (nonatomic,readonly) NSError * lastTailLoadError; 
@property (nonatomic,readonly) BOOL lastStreamHeadLoadWasRetried;                  //@synthesize lastStreamHeadLoadWasRetried=_lastStreamHeadLoadWasRetried - In the implementation block
@property (assign,nonatomic) BOOL streamAsNeckLoad;                                //@synthesize streamAsNeckLoad=_streamAsNeckLoad - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetID;                           //@synthesize targetID=_targetID - In the implementation block
@property (readonly) FBStreamAnalytics * analytics; 
@property (assign,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double refreshInterval; 
@property (nonatomic,readonly) FBStreamConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHeadishLoadType:(unsigned long long)arg1 ;
+(void)enumerateLoadTypesUsingBlock:(/*^block*/id)arg1 ;
+(BOOL)isTailishLoadType:(unsigned long long)arg1 ;
-(FBScenePath *)scenePath;
-(FBStreamAnalytics *)analytics;
-(NSString *)targetID;
-(void)streamLoadDidFinishLoading:(id)arg1 ;
-(void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned long long)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 currentResponseChunkIndex:(unsigned long long)arg4 expectedResponseChunks:(unsigned long long)arg5 userInfo:(id)arg6 ;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 responseChunkResults:(id)arg4 expectedResponseChunks:(unsigned long long)arg5 userInfo:(id)arg6 ;
-(void)streamLoadWillRetry:(id)arg1 ;
-(void)pollingSourceDidFire:(id)arg1 ;
-(void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(BOOL)loadingInitial;
-(BOOL)loadingHead;
-(BOOL)canLoadHead;
-(BOOL)loadingTail;
-(BOOL)canLoadTail;
-(id)resetPagingInfo;
-(void)_cancelRequestsAndResetLoadState;
-(void)_loadHeadIfPollingTimerIsOverdueWithLoadPreparationBlock:(/*^block*/id)arg1 ;
-(BOOL)_streamLoadExistsForLoadType:(unsigned long long)arg1 ;
-(id)_lastErrorForLoadType:(unsigned long long)arg1 ;
-(id)_streamLoadForLoadType:(unsigned long long)arg1 ;
-(void)setCanLoadTail:(BOOL)arg1 ;
-(BOOL)streamAsNeckLoad;
-(BOOL)_automaticNeckLoadEnabled;
-(void)loadNeck;
-(void)_loadHeadWithRefreshMode:(unsigned long long)arg1 backgroundFetch:(BOOL)arg2 ;
-(BOOL)_nextPollingSourceFireDateIsInFuture;
-(void)_setLoadInfo:(id)arg1 streamLoadType:(unsigned long long)arg2 ;
-(id)_sortResults:(id)arg1 streamLoadType:(unsigned long long)arg2 ;
-(BOOL)_getHeadPaginationInfo:(id)arg1 ;
-(void)_setLastError:(id)arg1 forLoadType:(unsigned long long)arg2 ;
-(void)_setStreamLoad:(id)arg1 forLoadType:(unsigned long long)arg2 ;
-(void)setStreaming:(BOOL)arg1 ;
-(void)startStreamingWithImmediateHeadLoadPreparationBlock:(/*^block*/id)arg1 ;
-(void)loadHead:(BOOL)arg1 ;
-(BOOL)_canLoad:(unsigned long long)arg1 ;
-(void)_load:(unsigned long long)arg1 refreshMode:(unsigned long long)arg2 backgroundFetch:(BOOL)arg3 ;
-(void)_load:(unsigned long long)arg1 refreshMode:(unsigned long long)arg2 ;
-(id)_pagingInfo;
-(void)setCanLoadHead:(BOOL)arg1 ;
-(id)_streamLoadForLoadType:(unsigned long long)arg1 refreshMode:(unsigned long long)arg2 cursor:(id)arg3 backgroundFetch:(BOOL)arg4 ;
-(id)_streamLoadForLoadType:(unsigned long long)arg1 refreshMode:(unsigned long long)arg2 cursor:(id)arg3 backgroundFetch:(BOOL)arg4 networkDispatcher:(id)arg5 ;
-(id)_streamLoadForLoadType:(unsigned long long)arg1 refreshMode:(unsigned long long)arg2 cursor:(id)arg3 ;
-(void)startStreaming;
-(id)initWithStreamConfiguration:(id)arg1 ;
-(NSError *)lastHeadLoadError;
-(NSError *)lastTailLoadError;
-(void)_resetCachedPagingInfo:(id)arg1 ;
-(void)loadHead;
-(void)loadHeadWithRefreshMode:(unsigned long long)arg1 ;
-(void)loadTail;
-(void)setLoadingHead:(BOOL)arg1 ;
-(void)setLoadingTail:(BOOL)arg1 ;
-(BOOL)lastStreamHeadLoadWasRetried;
-(void)setStreamAsNeckLoad:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(FBStreamConfiguration *)configuration;
-(void)_load:(unsigned long long)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(FBUserSession *)session;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(BOOL)streaming;
-(void)stopStreaming;
-(BOOL)loading;
@end
