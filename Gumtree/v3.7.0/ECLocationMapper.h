/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, ECLocationManager;

@interface ECLocationMapper : NSObject {

	NSMutableArray* _mappings;
	ECLocationManager* _locationManager;

}

@property (nonatomic,retain) NSMutableArray * mappings;                               //@synthesize mappings=_mappings - In the implementation block
@property (assign,nonatomic,__weak) ECLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
-(void)findLocationForCLLocation:(id)arg1 queryMode:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)existingMappingForCLLocation:(id)arg1 ;
-(void)requestLocationForCLLocation:(id)arg1 queryMode:(unsigned long long)arg2 requestID:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)initWithLocationManager:(id)arg1 ;
-(id)init;
-(NSMutableArray *)mappings;
-(void)setMappings:(NSMutableArray *)arg1 ;
-(void)setLocationManager:(ECLocationManager *)arg1 ;
-(ECLocationManager *)locationManager;
@end

