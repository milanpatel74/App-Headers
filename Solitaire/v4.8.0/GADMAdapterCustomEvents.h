/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/GADMAdNetworkAdapter.h>
#import <SolitaireFree/GADCustomEventBannerDelegate.h>
#import <SolitaireFree/GADCustomEventInterstitialDelegate.h>
#import <SolitaireFree/GADCustomEventNativeAdDelegate.h>

@protocol GADMAdNetworkConnector, GADCustomEventBanner, GADCustomEventInterstitial, GADCustomEventNativeAd;
@class UIViewController, NSString;

@interface GADMAdapterCustomEvents : NSObject <GADMAdNetworkAdapter, GADCustomEventBannerDelegate, GADCustomEventInterstitialDelegate, GADCustomEventNativeAdDelegate> {

	id<GADMAdNetworkConnector> _connector;
	id<GADCustomEventBanner> _customEventBanner;
	id<GADCustomEventInterstitial> _customEventInterstitial;
	id<GADCustomEventNativeAd> _customEventNativeAd;

}

@property (assign,nonatomic,__weak) id<GADMAdNetworkConnector> connector;                            //@synthesize connector=_connector - In the implementation block
@property (nonatomic,retain) id<GADCustomEventBanner> customEventBanner;                             //@synthesize customEventBanner=_customEventBanner - In the implementation block
@property (nonatomic,retain) id<GADCustomEventInterstitial> customEventInterstitial;                 //@synthesize customEventInterstitial=_customEventInterstitial - In the implementation block
@property (nonatomic,retain) id<GADCustomEventNativeAd> customEventNativeAd;                         //@synthesize customEventNativeAd=_customEventNativeAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewControllerForPresentingModalView; 
+(id)adapterVersion;
+(Class)networkExtrasClass;
-(void)stopBeingDelegate;
-(id)initWithGADMAdNetworkConnector:(id)arg1 ;
-(void)getBannerWithSize:(GADAdSize)arg1 ;
-(void)getInterstitial;
-(BOOL)isBannerAnimationOK:(long long)arg1 ;
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2 ;
-(BOOL)handlesUserClicks;
-(id<GADMAdNetworkConnector>)connector;
-(void)callBackToConnectorWithError:(id)arg1 isInterstitial:(BOOL)arg2 ;
-(id)customEventWithCredentials:(id)arg1 isInterstitial:(BOOL)arg2 ;
-(void)setCustomEventBanner:(id<GADCustomEventBanner>)arg1 ;
-(void)setCustomEventInterstitial:(id<GADCustomEventInterstitial>)arg1 ;
-(UIViewController *)viewControllerForPresentingModalView;
-(void)setCustomEventNativeAd:(id<GADCustomEventNativeAd>)arg1 ;
-(id<GADCustomEventBanner>)customEventBanner;
-(id<GADCustomEventInterstitial>)customEventInterstitial;
-(id<GADCustomEventNativeAd>)customEventNativeAd;
-(void)customEventBannerWasClicked:(id)arg1 ;
-(void)customEventInterstitialDidReceiveAd:(id)arg1 ;
-(void)customEventBanner:(id)arg1 didReceiveAd:(id)arg2 ;
-(void)customEventBanner:(id)arg1 didFailAd:(id)arg2 ;
-(void)customEventBannerWillPresentModal:(id)arg1 ;
-(void)customEventBannerWillDismissModal:(id)arg1 ;
-(void)customEventBannerDidDismissModal:(id)arg1 ;
-(void)customEventBannerWillLeaveApplication:(id)arg1 ;
-(void)customEventBanner:(id)arg1 clickDidOccurInAd:(id)arg2 ;
-(void)customEventInterstitial:(id)arg1 didFailAd:(id)arg2 ;
-(void)customEventInterstitialWasClicked:(id)arg1 ;
-(void)customEventInterstitialWillPresent:(id)arg1 ;
-(void)customEventInterstitialWillDismiss:(id)arg1 ;
-(void)customEventInterstitialDidDismiss:(id)arg1 ;
-(void)customEventInterstitialWillLeaveApplication:(id)arg1 ;
-(void)customEventInterstitial:(id)arg1 didReceiveAd:(id)arg2 ;
-(void)customEventNativeAd:(id)arg1 didReceiveMediatedNativeAd:(id)arg2 ;
-(void)customEventNativeAd:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(void)setConnector:(id<GADMAdNetworkConnector>)arg1 ;
-(void)dealloc;
@end
