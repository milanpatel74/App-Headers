/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/UnityAdsZone.h>

@class UnityAdsRewardItemManager;

@interface UnityAdsIncentivizedZone : UnityAdsZone {

	UnityAdsRewardItemManager* _itemManager;

}

@property (nonatomic,retain) UnityAdsRewardItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
-(BOOL)isIncentivized;
-(UnityAdsRewardItemManager *)itemManager;
-(void)setItemManager:(UnityAdsRewardItemManager *)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
