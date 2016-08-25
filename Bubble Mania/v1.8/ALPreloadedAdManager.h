/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ALExtendedAdLoadDelegate.h>
#import <BubbleMania/ALAdLoadDelegate.h>

@class ALSdk, NSObject, NSDictionary, NSMutableDictionary, NSSet, ALLogManager, NSString;

@interface ALPreloadedAdManager : NSObject <ALExtendedAdLoadDelegate, ALAdLoadDelegate> {

	ALSdk* _sdk;
	NSObject* _preloadedAdsLock;
	NSDictionary* _preloadedAds;
	NSMutableDictionary* _additionalDelegates;
	NSSet* _completedInitialPreloads;

}

@property (nonatomic,retain) ALSdk * sdk;                                            //@synthesize sdk=_sdk - In the implementation block
@property (nonatomic,readonly) ALLogManager * logger; 
@property (nonatomic,retain) NSObject * preloadedAdsLock;                            //@synthesize preloadedAdsLock=_preloadedAdsLock - In the implementation block
@property (nonatomic,retain) NSDictionary * preloadedAds;                            //@synthesize preloadedAds=_preloadedAds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalDelegates;              //@synthesize additionalDelegates=_additionalDelegates - In the implementation block
@property (nonatomic,retain) NSSet * completedInitialPreloads;                       //@synthesize completedInitialPreloads=_completedInitialPreloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSdk:(id)arg1 ;
-(ALSdk *)sdk;
-(void)adService:(id)arg1 didFailToLoadAdOfSpec:(id)arg2 withError:(long long)arg3 ;
-(void)adService:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2 ;
-(BOOL)hasPreloadedAdOfSize:(id)arg1 type:(id)arg2 ;
-(void)setSdk:(ALSdk *)arg1 ;
-(BOOL)registerForInitialPreloadCallback:(id)arg1 forSize:(id)arg2 type:(id)arg3 ;
-(id)getPreloadedAdOfSize:(id)arg1 type:(id)arg2 ;
-(void)preloadNextAdOfSize:(id)arg1 type:(id)arg2 ;
-(void)fillPreloadQueueForSize:(id)arg1 type:(id)arg2 ;
-(NSObject *)preloadedAdsLock;
-(id)adQueueForType:(id)arg1 size:(id)arg2 ;
-(BOOL)hasFullPreloadQueueForSize:(id)arg1 type:(id)arg2 ;
-(NSMutableDictionary *)additionalDelegates;
-(NSSet *)completedInitialPreloads;
-(void)setCompletedInitialPreloads:(NSSet *)arg1 ;
-(BOOL)isInitialPreloadCompletedForSize:(id)arg1 type:(id)arg2 ;
-(void)registerForPreloadCallback:(id)arg1 forSize:(id)arg2 type:(id)arg3 ;
-(int)capacitySettingTypeForType:(id)arg1 size:(id)arg2 ;
-(NSDictionary *)preloadedAds;
-(void)setPreloadedAdsLock:(NSObject *)arg1 ;
-(id)createPreloadedAdsDictionary;
-(void)setPreloadedAds:(NSDictionary *)arg1 ;
-(void)setAdditionalDelegates:(NSMutableDictionary *)arg1 ;
-(ALLogManager *)logger;
@end
