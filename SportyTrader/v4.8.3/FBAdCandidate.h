/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface FBAdCandidate : NSObject {

	NSString* _adapterID;
	NSDictionary* _data;
	NSMutableDictionary* _trackersByType;
	NSMutableSet* _trackersFired;

}

@property (nonatomic,retain) NSString * adapterID;                              //@synthesize adapterID=_adapterID - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * trackersByType;              //@synthesize trackersByType=_trackersByType - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackersFired;                      //@synthesize trackersFired=_trackersFired - In the implementation block
+(long long)trackerTypeFromString:(id)arg1 ;
-(void)setAdapterID:(NSString *)arg1 ;
-(void)setTrackersByType:(NSMutableDictionary *)arg1 ;
-(void)setTrackersFired:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)trackersByType;
-(NSMutableSet *)trackersFired;
-(id)initWithAdapterID:(id)arg1 data:(id)arg2 trackers:(id)arg3 ;
-(void)fireTrackers:(long long)arg1 withExtraData:(id)arg2 ;
-(NSString *)adapterID;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
@end
