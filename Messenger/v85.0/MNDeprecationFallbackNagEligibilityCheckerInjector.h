/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol FBClock;
@class FBProviderMapData, FBMobileConfigContextManager, MNDeprecationFallbackPhaseFetcher, MNDeprecationPhaseNagImpressionStore, NSString;

@interface MNDeprecationFallbackNagEligibilityCheckerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	id<FBClock> _clock;
	FBMobileConfigContextManager* _configManager;
	MNDeprecationFallbackPhaseFetcher* _deprecationFallbackPhaseFetcher;
	MNDeprecationPhaseNagImpressionStore* _deprecationPhaseNagImpressionStore;

}

@property (nonatomic,readonly) id<FBClock> clock;                                                                      //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                           //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNDeprecationFallbackPhaseFetcher * deprecationFallbackPhaseFetcher;                    //@synthesize deprecationFallbackPhaseFetcher=_deprecationFallbackPhaseFetcher - In the implementation block
@property (nonatomic,readonly) MNDeprecationPhaseNagImpressionStore * deprecationPhaseNagImpressionStore;              //@synthesize deprecationPhaseNagImpressionStore=_deprecationPhaseNagImpressionStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNDeprecationFallbackPhaseFetcher *)deprecationFallbackPhaseFetcher;
-(MNDeprecationPhaseNagImpressionStore *)deprecationPhaseNagImpressionStore;
-(id<FBClock>)clock;
@end
