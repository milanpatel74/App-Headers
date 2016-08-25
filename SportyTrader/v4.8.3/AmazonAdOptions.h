/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AmazonAdOptions : NSObject {

	BOOL _isTestRequest;
	BOOL _usesGeoLocation;
	BOOL _isDisplayAdsEnabled;
	BOOL _isVideoAdsEnabled;
	double _timeout;
	long long _minVideoAdDuration;
	long long _maxVideoAdDuration;
	NSMutableDictionary* _otherAdvancedOptions;

}

@property (assign,nonatomic) BOOL isDisplayAdsEnabled; 
@property (assign,nonatomic) BOOL isVideoAdsEnabled; 
@property (nonatomic,readonly) long long minVideoAdDuration; 
@property (nonatomic,readonly) long long maxVideoAdDuration; 
@property (assign,nonatomic) BOOL isTestRequest;                                      //@synthesize isTestRequest=_isTestRequest - In the implementation block
@property (assign,nonatomic) BOOL usesGeoLocation;                                    //@synthesize usesGeoLocation=_usesGeoLocation - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL isDisplayAdsEnabled;                                //@synthesize isDisplayAdsEnabled=_isDisplayAdsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isVideoAdsEnabled;                                  //@synthesize isVideoAdsEnabled=_isVideoAdsEnabled - In the implementation block
@property (assign,nonatomic) long long minVideoAdDuration;                            //@synthesize minVideoAdDuration=_minVideoAdDuration - In the implementation block
@property (assign,nonatomic) long long maxVideoAdDuration;                            //@synthesize maxVideoAdDuration=_maxVideoAdDuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * otherAdvancedOptions;              //@synthesize otherAdvancedOptions=_otherAdvancedOptions - In the implementation block
+(id)alloc;
+(id)options;
-(BOOL)isDisplayAdsEnabled;
-(BOOL)isVideoAdsEnabled;
-(long long)minVideoAdDuration;
-(long long)maxVideoAdDuration;
-(BOOL)isTestRequest;
-(BOOL)usesGeoLocation;
-(id)advancedOptions;
-(void)setIsDisplayAdsEnabled:(BOOL)arg1 ;
-(void)setIsVideoAdsEnabled:(BOOL)arg1 ;
-(void)setMinVideoAdDuration:(long long)arg1 ;
-(void)setMaxVideoAdDuration:(long long)arg1 ;
-(NSMutableDictionary *)otherAdvancedOptions;
-(void)setAdvancedOption:(id)arg1 forKey:(id)arg2 ;
-(void)setIsTestRequest:(BOOL)arg1 ;
-(void)setUsesGeoLocation:(BOOL)arg1 ;
-(void)setOtherAdvancedOptions:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
@end
