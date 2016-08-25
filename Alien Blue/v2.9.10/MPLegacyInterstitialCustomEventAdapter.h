/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/MPBaseInterstitialAdapter.h>

@interface MPLegacyInterstitialCustomEventAdapter : MPBaseInterstitialAdapter {

	BOOL _hasTrackedImpression;
	BOOL _hasTrackedClick;

}

@property (assign,nonatomic) BOOL hasTrackedImpression;              //@synthesize hasTrackedImpression=_hasTrackedImpression - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedClick;                   //@synthesize hasTrackedClick=_hasTrackedClick - In the implementation block
-(BOOL)hasTrackedImpression;
-(void)customEventDidLoadAd;
-(void)customEventDidFailToLoadAd;
-(void)customEventActionWillBegin;
-(void)setHasTrackedImpression:(BOOL)arg1 ;
-(BOOL)hasTrackedClick;
-(void)setHasTrackedClick:(BOOL)arg1 ;
-(void)startTimeoutTimer;
-(void)getAdWithConfiguration:(id)arg1 ;
@end
