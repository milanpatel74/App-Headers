//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADInterstitial, GADRequestError;

@protocol GADInterstitialDelegate <NSObject>

@optional
- (void)interstitialWillLeaveApplication:(GADInterstitial *)arg1;
- (void)interstitialDidDismissScreen:(GADInterstitial *)arg1;
- (void)interstitialWillDismissScreen:(GADInterstitial *)arg1;
- (void)interstitialWillPresentScreen:(GADInterstitial *)arg1;
- (void)interstitial:(GADInterstitial *)arg1 didFailToReceiveAdWithError:(GADRequestError *)arg2;
- (void)interstitialDidReceiveAd:(GADInterstitial *)arg1;
@end

