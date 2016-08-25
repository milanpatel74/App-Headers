/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UnityAdsZone;

@interface UnityAdsZoneManager : NSObject {

	NSMutableDictionary* __zones;
	UnityAdsZone* __defaultZone;
	UnityAdsZone* __currentZone;

}

@property (nonatomic,retain) NSMutableDictionary * _zones;              //@synthesize _zones=__zones - In the implementation block
@property (nonatomic,retain) UnityAdsZone * _defaultZone;               //@synthesize _defaultZone=__defaultZone - In the implementation block
@property (nonatomic,retain) UnityAdsZone * _currentZone;               //@synthesize _currentZone=__currentZone - In the implementation block
+(id)sharedInstance;
-(id)getCurrentZone;
-(void)clearZones;
-(int)addZones:(id)arg1 ;
-(id)getZone:(id)arg1 ;
-(BOOL)setCurrentZone:(id)arg1 ;
-(void)set_zones:(NSMutableDictionary *)arg1 ;
-(void)set_defaultZone:(UnityAdsZone *)arg1 ;
-(void)set_currentZone:(UnityAdsZone *)arg1 ;
-(NSMutableDictionary *)_zones;
-(UnityAdsZone *)_currentZone;
-(UnityAdsZone *)_defaultZone;
-(id)getZones;
-(BOOL)removeZone:(id)arg1 ;
-(id)init;
-(unsigned long long)zoneCount;
@end
