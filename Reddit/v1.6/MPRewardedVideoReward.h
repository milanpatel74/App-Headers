/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MPRewardedVideoReward : NSObject {

	NSString* _currencyType;
	NSNumber* _amount;

}

@property (nonatomic,readonly) NSString * currencyType;              //@synthesize currencyType=_currencyType - In the implementation block
@property (nonatomic,readonly) NSNumber * amount;                    //@synthesize amount=_amount - In the implementation block
-(id)initWithCurrencyType:(id)arg1 amount:(id)arg2 ;
-(id)initWithCurrencyAmount:(id)arg1 ;
-(NSString *)currencyType;
-(NSNumber *)amount;
@end
