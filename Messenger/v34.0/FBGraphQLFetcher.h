/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLFetcher.h>

@protocol FBGraphQLFetcher <NSObject>
@required
-(id)fetchDataForUnit:(id)arg1 configurationCallback:(/*^block*/id)arg2 callbackQueue:(id)arg3 cachedResponseCallback:(/*^block*/id)arg4 networkResponseCallback:(/*^block*/id)arg5 errorCallback:(/*^block*/id)arg6;
-(id)fetchDataForUnits:(id)arg1 configurationCallback:(/*^block*/id)arg2 callbackQueue:(id)arg3 cachedResponseCallback:(/*^block*/id)arg4 networkResponseCallback:(/*^block*/id)arg5 errorCallback:(/*^block*/id)arg6;
-(void)maybePrefetch:(id)arg1 prefetchPriority:(unsigned long long)arg2 configurationCallback:(/*^block*/id)arg3;
-(void)maybePrefetch:(id)arg1 configurationCallback:(/*^block*/id)arg2;
-(void)maybePrefetchUnits:(id)arg1 prefetchPriority:(unsigned long long)arg2 configurationCallback:(/*^block*/id)arg3;

@end


@protocol FBGraphQLService, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable, NSMutableArray, FBAnalytics, NSString;

@interface FBGraphQLFetcher : NSObject <FBGraphQLFetcher> {

	id<FBGraphQLService> _graphQLService;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _dispatchPendingRequestsTimer;
	NSMapTable* _pendingRequests;
	NSMutableArray* _prefetchTokens;
	unordered_map<FBGraphQLFetchConfiguration *, FBAnalyticsPrefetcherLogger *, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::__1::allocator<std::__1::pair<FBGraphQLFetchConfiguration *const, FBAnalyticsPrefetcherLogger *> > >* _prefetchAnalytics;
	FBAnalytics* _analytics;
	/*^block*/id _prefetchLoggerProvider;
	FBGraphQLFetchRequestManager* _requestManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dispatchPendingRequests;
-(id)_getPrefetchAnalytics:(id)arg1 ;
-(id)_dispatchBatch:(id)arg1 prefetchAnalytics:(id)arg2 config:(id)arg3 isPrefetch:(BOOL)arg4 fetchToken:(id)arg5 networkResponseCallback:(/*^block*/id)arg6 errorCallback:(/*^block*/id)arg7 batchCompletionCallback:(/*^block*/id)arg8 ;
-(id)_explodeResponse:(id)arg1 ;
-(id)_sendQueries:(id)arg1 isPrefetch:(BOOL)arg2 callbackQueue:(id)arg3 successCallback:(/*^block*/id)arg4 failureCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6 ;
-(id)_afterCacheLookup:(id)arg1 isPrefetch:(BOOL)arg2 cacheEntries:(id)arg3 config:(id)arg4 prefetchAnalytics:(id)arg5 fetchToken:(id)arg6 callbackQueue:(id)arg7 cachedResponseCallback:(/*^block*/id)arg8 networkResponseCallback:(/*^block*/id)arg9 errorCallback:(/*^block*/id)arg10 ;
-(void)_needNetworkRequestForFetchUnits:(id)arg1 isPrefetch:(BOOL)arg2 configuration:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)_maybePrefetch:(id)arg1 prefetchPriority:(unsigned long long)arg2 configurationBuilder:(id)arg3 ;
-(id)_addPrefetchRequestsForUnits:(id)arg1 config:(id)arg2 token:(id)arg3 ;
-(void)_dispatchBatch:(id)arg1 prefetchAnalytics:(id)arg2 config:(id)arg3 fetchToken:(id)arg4 ;
-(id)fetchDataForUnit:(id)arg1 configurationCallback:(/*^block*/id)arg2 callbackQueue:(id)arg3 cachedResponseCallback:(/*^block*/id)arg4 networkResponseCallback:(/*^block*/id)arg5 errorCallback:(/*^block*/id)arg6 ;
-(id)fetchDataForUnits:(id)arg1 configurationCallback:(/*^block*/id)arg2 callbackQueue:(id)arg3 cachedResponseCallback:(/*^block*/id)arg4 networkResponseCallback:(/*^block*/id)arg5 errorCallback:(/*^block*/id)arg6 ;
-(void)maybePrefetch:(id)arg1 prefetchPriority:(unsigned long long)arg2 configurationCallback:(/*^block*/id)arg3 ;
-(void)maybePrefetch:(id)arg1 configurationCallback:(/*^block*/id)arg2 ;
-(void)maybePrefetchUnits:(id)arg1 prefetchPriority:(unsigned long long)arg2 configurationCallback:(/*^block*/id)arg3 ;
-(id)initWithGraphQLService:(id)arg1 analytics:(id)arg2 prefetchLoggerProvider:(/*^block*/id)arg3 ;
-(void)dealloc;
@end
