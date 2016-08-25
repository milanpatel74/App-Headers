/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/SASMediationAdapter.h>
#import <SportyTrader/FBAdViewDelegate.h>
#import <SportyTrader/FBInterstitialAdDelegate.h>

@class SASAdView, NSString, UIViewController, FBAdView, FBInterstitialAd;

@interface SASFacebookAdapter : SASMediationAdapter <FBAdViewDelegate, FBInterstitialAdDelegate> {

	SASAdView* _adView;
	NSString* _placementID;
	UIViewController* _rootViewController;
	FBAdView* _facebookAdView;
	FBInterstitialAd* _interstitialAd;
	CGRect _frame;

}

@property (assign,nonatomic,__weak) SASAdView * adView;                                 //@synthesize adView=_adView - In the implementation block
@property (nonatomic,retain) NSString * placementID;                                    //@synthesize placementID=_placementID - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) CGRect frame;                                              //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain) FBAdView * facebookAdView;                                 //@synthesize facebookAdView=_facebookAdView - In the implementation block
@property (nonatomic,retain) FBInterstitialAd * interstitialAd;                         //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adViewDidLoad:(id)arg1 ;
-(void)setAdView:(SASAdView *)arg1 ;
-(void)requestAd;
-(void)adViewDidClick:(id)arg1 ;
-(void)adView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)interstitialAdDidClick:(id)arg1 ;
-(void)interstitialAdDidClose:(id)arg1 ;
-(id)initMediationAdViewWithAdView:(id)arg1 adParameters:(id)arg2 interfaceParameters:(id)arg3 ;
-(void)requestInterstitialAd;
-(void)cancelAd;
-(id)mediationAdView;
-(void)setPlacementID:(NSString *)arg1 ;
-(FBAdSize)bannerAdSize;
-(void)requestBannerAdWithSize:(FBAdSize)arg1 ;
-(NSString *)placementID;
-(void)setFacebookAdView:(FBAdView *)arg1 ;
-(FBAdView *)facebookAdView;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)handleFailureWithError:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(FBInterstitialAd *)interstitialAd;
-(void)setInterstitialAd:(FBInterstitialAd *)arg1 ;
-(SASAdView *)adView;
@end
