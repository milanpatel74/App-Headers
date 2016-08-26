/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBQuickPromotionDebugLogger, FBUserSession, FBNuxCatalog, NSString, FBQuickPromotionFiltersHelper;

@interface FBQuickPromotionEligibilityChecker : NSObject {

	FBQuickPromotionDebugLogger* _qpDebugLogger;
	FBUserSession* _session;
	FBNuxCatalog* _nuxCatalog;
	NSString* _nuxID;
	FBQuickPromotionFiltersHelper* _filtersHelper;

}

@property (nonatomic,retain) FBQuickPromotionDebugLogger * qpDebugLogger;                //@synthesize qpDebugLogger=_qpDebugLogger - In the implementation block
@property (assign,nonatomic,__weak) FBUserSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) FBNuxCatalog * nuxCatalog;                           //@synthesize nuxCatalog=_nuxCatalog - In the implementation block
@property (nonatomic,copy) NSString * nuxID;                                             //@synthesize nuxID=_nuxID - In the implementation block
@property (nonatomic,retain) FBQuickPromotionFiltersHelper * filtersHelper;              //@synthesize filtersHelper=_filtersHelper - In the implementation block
+(id)stages;
+(id)getPromotionOverride:(id)arg1 session:(id)arg2 ;
+(void)unsetPromotionOverride:(id)arg1 session:(id)arg2 ;
+(void)setPromotionOverride:(id)arg1 value:(BOOL)arg2 session:(id)arg3 ;
+(id)stageInfo;
+(void)_setPromotionOverride:(id)arg1 value:(id)arg2 session:(id)arg3 ;
+(void)logWaterfallEligibility:(id)arg1 promotion:(id)arg2 ;
-(NSString *)nuxID;
-(FBNuxCatalog *)nuxCatalog;
-(id)initWithSession:(id)arg1 nuxCatalog:(id)arg2 nuxID:(id)arg3 ;
-(FBQuickPromotionFiltersHelper *)filtersHelper;
-(id)eligibilityWaterfallWithPromotion:(id)arg1 triggerID:(id)arg2 context:(id)arg3 debugInfo:(id*)arg4 ;
-(void)setNuxID:(NSString *)arg1 ;
-(FBQuickPromotionDebugLogger *)qpDebugLogger;
-(BOOL)_promotionIsEligible:(id)arg1 triggerID:(id)arg2 context:(id)arg3 debugInfo:(id*)arg4 ;
-(BOOL)_promotion:(id)arg1 respondsToTriggerID:(id)arg2 ;
-(BOOL)_isPromotionAlive:(id)arg1 ;
-(BOOL)_isPromotionActive:(id)arg1 ;
-(BOOL)_promotionHasReachedEventLimit:(id)arg1 debugInfo:(id*)arg2 ;
-(void)setQpDebugLogger:(FBQuickPromotionDebugLogger *)arg1 ;
-(void)setNuxCatalog:(FBNuxCatalog *)arg1 ;
-(void)setFiltersHelper:(FBQuickPromotionFiltersHelper *)arg1 ;
-(id)chooseBestEligibleWithPromotions:(id)arg1 triggerID:(id)arg2 context:(id)arg3 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
