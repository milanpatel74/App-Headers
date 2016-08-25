/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _OASAppCatalogDownloadedAppsProtocol;
@class NSMutableDictionary, OASThreadSafeWeakMultiDictionary;

@interface OASAppExpirationNotificationCenter : NSObject {

	NSMutableDictionary* _appsToTimers;
	OASThreadSafeWeakMultiDictionary* _appsToObservers;
	id<_OASAppCatalogDownloadedAppsProtocol> _catalog;

}

@property (nonatomic,retain) NSMutableDictionary * appsToTimers;                                   //@synthesize appsToTimers=_appsToTimers - In the implementation block
@property (nonatomic,retain) OASThreadSafeWeakMultiDictionary * appsToObservers;                   //@synthesize appsToObservers=_appsToObservers - In the implementation block
@property (assign,nonatomic,__weak) id<_OASAppCatalogDownloadedAppsProtocol> catalog;              //@synthesize catalog=_catalog - In the implementation block
-(void)setAppsToTimers:(NSMutableDictionary *)arg1 ;
-(void)setAppsToObservers:(OASThreadSafeWeakMultiDictionary *)arg1 ;
-(void)addOrUpdateTimersForApps:(id)arg1 ;
-(void)appCatalogDidSync:(id)arg1 ;
-(OASThreadSafeWeakMultiDictionary *)appsToObservers;
-(NSMutableDictionary *)appsToTimers;
-(void)removeTimersForApps:(id)arg1 ;
-(void)appDidExpire:(id)arg1 ;
-(id)initWithAppCatalog:(id)arg1 ;
-(void)addObserver:(id)arg1 forApp:(id)arg2 ;
-(void)removeObserver:(id)arg1 forApp:(id)arg2 ;
-(void)dealloc;
-(id<_OASAppCatalogDownloadedAppsProtocol>)catalog;
-(void)setCatalog:(id<_OASAppCatalogDownloadedAppsProtocol>)arg1 ;
@end
