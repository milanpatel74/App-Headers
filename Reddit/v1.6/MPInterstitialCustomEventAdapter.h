/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPBaseInterstitialAdapter.h>
#import <Reddit/MPPrivateInterstitialCustomEventDelegate.h>

@class MPInterstitialCustomEvent, MPAdConfiguration, NSString;

@interface MPInterstitialCustomEventAdapter : MPBaseInterstitialAdapter <MPPrivateInterstitialCustomEventDelegate> {

	BOOL _hasTrackedImpression;
	BOOL _hasTrackedClick;
	MPInterstitialCustomEvent* _interstitialCustomEvent;
	MPAdConfiguration* _configuration;

}

@property (nonatomic,retain) MPInterstitialCustomEvent * interstitialCustomEvent;              //@synthesize interstitialCustomEvent=_interstitialCustomEvent - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedImpression;                                        //@synthesize hasTrackedImpression=_hasTrackedImpression - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedClick;                                             //@synthesize hasTrackedClick=_hasTrackedClick - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showInterstitialFromViewController:(id)arg1 ;
-(id)interstitialDelegate;
-(id)adUnitId;
-(void)getAdWithConfiguration:(id)arg1 ;
-(BOOL)hasTrackedImpression;
-(void)setHasTrackedImpression:(BOOL)arg1 ;
-(BOOL)hasTrackedClick;
-(void)setHasTrackedClick:(BOOL)arg1 ;
-(void)interstitialCustomEvent:(id)arg1 didLoadAd:(id)arg2 ;
-(void)interstitialCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(void)interstitialCustomEventWillAppear:(id)arg1 ;
-(void)interstitialCustomEventDidAppear:(id)arg1 ;
-(void)interstitialCustomEventWillDisappear:(id)arg1 ;
-(void)interstitialCustomEventDidDisappear:(id)arg1 ;
-(void)interstitialCustomEventDidReceiveTapEvent:(id)arg1 ;
-(void)interstitialCustomEventWillLeaveApplication:(id)arg1 ;
-(MPInterstitialCustomEvent *)interstitialCustomEvent;
-(void)setInterstitialCustomEvent:(MPInterstitialCustomEvent *)arg1 ;
-(void)interstitialCustomEventDidExpire:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(id)location;
-(MPAdConfiguration *)configuration;
@end
