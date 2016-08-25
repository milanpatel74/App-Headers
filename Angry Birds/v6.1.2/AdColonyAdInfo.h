/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AdColonyAdInfo : NSObject {

	int _iapQuantity;
	BOOL _shown;
	BOOL _iapEnabled;
	NSString* _zoneID;
	NSString* _iapProductID;
	unsigned long long _iapEngagementType;

}

@property (nonatomic,readonly) BOOL shown;                                        //@synthesize shown=_shown - In the implementation block
@property (nonatomic,readonly) NSString * zoneID;                                 //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) BOOL iapEnabled;                                   //@synthesize iapEnabled=_iapEnabled - In the implementation block
@property (nonatomic,readonly) NSString * iapProductID;                           //@synthesize iapProductID=_iapProductID - In the implementation block
@property (nonatomic,readonly) int iapQuantity;                                   //@synthesize iapQuantity=_iapQuantity - In the implementation block
@property (nonatomic,readonly) unsigned long long iapEngagementType;              //@synthesize iapEngagementType=_iapEngagementType - In the implementation block
+(id)currentAdInfo;
-(id)initWithCurrentAdInfo;
-(void)clearIAPInfo;
-(void)setShown:(BOOL)arg1 ;
-(void)setIAPProductID:(id)arg1 ;
-(void)setIAPQuantity:(int)arg1 ;
-(void)setIAPEnabled:(BOOL)arg1 ;
-(void)setIAPEngagementType:(unsigned long long)arg1 ;
-(id)init;
-(void)reset;
-(void)setZoneID:(NSString *)arg1 ;
-(BOOL)shown;
-(BOOL)iapEnabled;
-(NSString *)iapProductID;
-(int)iapQuantity;
-(unsigned long long)iapEngagementType;
-(NSString *)zoneID;
@end
