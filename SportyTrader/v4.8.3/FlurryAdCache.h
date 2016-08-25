/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FlurryPreCachingDelegate.h>
#import <SportyTrader/FlurryAdRequestDelegate.h>

@class NSMutableDictionary, NSOperationQueue, NSCondition, NSMutableArray, NSString;

@interface FlurryAdCache : NSObject <FlurryPreCachingDelegate, FlurryAdRequestDelegate> {

	NSMutableDictionary* _adSpaceToAdUnitsMap;
	NSOperationQueue* _operationQueue;
	NSCondition* _loadAdCondition;
	int _loadAdPredicate;
	NSMutableDictionary* _pendingRequests;
	Class _cacheKeyFactory;
	NSMutableArray* _adManagerDelegates;

}

@property (nonatomic,retain) NSMutableDictionary * adSpaceToAdUnitsMap;              //@synthesize adSpaceToAdUnitsMap=_adSpaceToAdUnitsMap - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) Class cacheKeyFactory;                           //@synthesize cacheKeyFactory=_cacheKeyFactory - In the implementation block
@property (nonatomic,retain) NSCondition * loadAdCondition;                          //@synthesize loadAdCondition=_loadAdCondition - In the implementation block
@property (assign,nonatomic) int loadAdPredicate;                                    //@synthesize loadAdPredicate=_loadAdPredicate - In the implementation block
@property (nonatomic,retain) NSMutableArray * adManagerDelegates;                    //@synthesize adManagerDelegates=_adManagerDelegates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingRequests;                  //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)adCacheForAdViewType:(int)arg1 adTargeting:(id)arg2 ;
+(id)adCaches;
-(void)setCacheKeyFactory:(Class)arg1 ;
-(Class)cacheKeyFactory;
-(void)deRegisterAdManagerDelegate:(id)arg1 ;
-(id)adUnitForKey:(id)arg1 adViewType:(int)arg2 retrievalPolicy:(id)arg3 additionalParams:(id)arg4 error:(id*)arg5 ;
-(void)registerAdManagerDelegate:(id)arg1 ;
-(unsigned long long)validatedCacheCountForKey:(id)arg1 ;
-(void)fetchRealTimeAdForCacheKey:(id)arg1 adViewType:(int)arg2 timeout:(long long)arg3 additionalParams:(id)arg4 ;
-(void)addAdUnit:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)adUnitForGuid:(id)arg1 ;
-(void)removeAdUnitsForGroupID:(id)arg1 withSpace:(id)arg2 ;
-(void)removeAdUnitsForSpace:(id)arg1 ;
-(void)removeAdUnit:(id)arg1 ;
-(id)allCachedAdUnitsForKey:(id)arg1 ;
-(void)assetPreCachingDone:(id)arg1 ;
-(void)assetPreCachingFailed:(id)arg1 ;
-(void)assetPreCachingCancelled:(id)arg1 ;
-(void)requestDidFail:(id)arg1 error:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withParams:(id)arg2 ;
-(void)requestDidCancel;
-(void)setLoadAdPredicate:(int)arg1 ;
-(void)resumeOperationQueue;
-(id)cachedAdUnitForKey:(id)arg1 cacheRetrievalPolicy:(id)arg2 ;
-(BOOL)isNonExpiredRequestPendingForCacheKey:(id)arg1 ;
-(NSCondition *)loadAdCondition;
-(int)loadAdPredicate;
-(void)fetchAdUnitsFromServer:(id)arg1 ;
-(void)enqueueOperation:(SEL)arg1 withParams:(id)arg2 ;
-(id)validatedCachedAdUnitsForKey:(id)arg1 ;
-(id)fetchFromAdUnits:(id)arg1 usingFilter:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)adSpaceToAdUnitsMap;
-(void)addAdUnit:(id)arg1 forKey:(id)arg2 ;
-(NSMutableArray *)adManagerDelegates;
-(void)notifyCSRTBAdDidFailLoadToManager:(id)arg1 ;
-(void)notifyAdManager:(id)arg1 ;
-(void)notifyAdManagerRequestFailed:(id)arg1 ;
-(void)removeAndReportAdUnit:(id)arg1 ;
-(void)notifyRequestFailed:(id)arg1 error:(id)arg2 ;
-(BOOL)findAndReplace:(id)arg1 withNewAdUnit:(id)arg2 ;
-(void)notifyAdDidLoad:(id)arg1 ;
-(void)notifyCSRTBAdDidFailLoad:(id)arg1 ;
-(void)addAdUnits:(id)arg1 ;
-(void)unzipAssetPreCachingFile:(id)arg1 ;
-(BOOL)isTakeover:(id)arg1 ;
-(id)firstElementFromArray:(id)arg1 ;
-(void)setAdSpaceToAdUnitsMap:(NSMutableDictionary *)arg1 ;
-(void)setLoadAdCondition:(NSCondition *)arg1 ;
-(void)setAdManagerDelegates:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)clearCache;
-(NSMutableDictionary *)pendingRequests;
-(void)setPendingRequests:(NSMutableDictionary *)arg1 ;
@end
