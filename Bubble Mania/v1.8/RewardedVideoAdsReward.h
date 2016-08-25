/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface RewardedVideoAdsReward : NSObject {

	long long _quantity;
	NSString* _type;
	long long _rewardId;
	NSMutableDictionary* _rewardInfo;

}

@property (assign,nonatomic) long long quantity;                            //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,retain) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long rewardId;                            //@synthesize rewardId=_rewardId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rewardInfo;              //@synthesize rewardInfo=_rewardInfo - In the implementation block
-(id)generateRewardInfo;
-(int)rewardQuantity;
-(NSMutableDictionary *)rewardInfo;
-(void)storeRewards;
-(long long)rewardId;
-(void)setRewardId:(long long)arg1 ;
-(id)rewardCode;
-(void)grantRewardsWithChangeEvent:(id)arg1 ;
-(void)logRewardedVideoAdsFunnelStep:(long long)arg1 action:(id)arg2 ;
-(void)setRewardInfo:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setQuantity:(long long)arg1 ;
-(BOOL)isAvailable;
-(int)itemId;
-(long long)quantity;
@end
