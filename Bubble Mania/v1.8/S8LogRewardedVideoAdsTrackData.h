/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/S8LogTrackData.h>

@class NSString;

@interface S8LogRewardedVideoAdsTrackData : S8LogTrackData {

	BOOL _watchAgain;
	NSString* _channelName;
	long long _funnelStep;
	NSString* _viewName;
	NSString* _action;
	NSString* _incentiveType;
	long long _incentiveItemId;
	long long _incentiveAmount;
	long long _incentiveLootId;

}

@property (nonatomic,retain) NSString * channelName;                 //@synthesize channelName=_channelName - In the implementation block
@property (assign,nonatomic) long long funnelStep;                   //@synthesize funnelStep=_funnelStep - In the implementation block
@property (nonatomic,retain) NSString * viewName;                    //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,retain) NSString * action;                      //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * incentiveType;               //@synthesize incentiveType=_incentiveType - In the implementation block
@property (assign,nonatomic) long long incentiveItemId;              //@synthesize incentiveItemId=_incentiveItemId - In the implementation block
@property (assign,nonatomic) long long incentiveAmount;              //@synthesize incentiveAmount=_incentiveAmount - In the implementation block
@property (assign,nonatomic) long long incentiveLootId;              //@synthesize incentiveLootId=_incentiveLootId - In the implementation block
@property (assign,nonatomic) BOOL watchAgain;                        //@synthesize watchAgain=_watchAgain - In the implementation block
-(void)setViewName:(NSString *)arg1 ;
-(NSString *)viewName;
-(void)setChannelName:(NSString *)arg1 ;
-(long long)funnelStep;
-(void)setFunnelStep:(long long)arg1 ;
-(NSString *)incentiveType;
-(void)setIncentiveType:(NSString *)arg1 ;
-(long long)incentiveItemId;
-(void)setIncentiveItemId:(long long)arg1 ;
-(long long)incentiveAmount;
-(void)setIncentiveAmount:(long long)arg1 ;
-(long long)incentiveLootId;
-(void)setIncentiveLootId:(long long)arg1 ;
-(BOOL)watchAgain;
-(void)setWatchAgain:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)channelName;
@end
