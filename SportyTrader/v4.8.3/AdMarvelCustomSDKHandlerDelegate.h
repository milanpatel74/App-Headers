/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol AdMarvelCustomSDKHandlerDelegate <NSObject>
@property (nonatomic,readonly) UIViewController * applicationUIViewController; 
@required
-(UIViewController *)applicationUIViewController;
-(void)customSDKHandler:(id)arg1 didReceiveAd:(id)arg2;
-(void)customSDKHandler:(id)arg1 didFailAd:(id)arg2;
-(void)customSDKHandler:(id)arg1 adViewExpanded:(id)arg2;
-(void)customSDKHandler:(id)arg1 adViewCollapsed:(id)arg2;
-(void)customSDKHandler:(id)arg1 adViewPresentedFullScreen:(id)arg2;
-(void)customSDKHandler:(id)arg1 adViewDismissedFullScreen:(id)arg2;
-(void)customSDKHandler:(id)arg1 adViewWillLeaveApplication:(id)arg2;
-(void)customSDKHandlerDidReceiveInterstitialAd:(id)arg1;
-(void)customSDKHandler:(id)arg1 didFailInterstitialAd:(id)arg2;
-(void)customSDKHandlerinterstitialPresented:(id)arg1;
-(void)customSDKHandlerinterstitialDismissed:(id)arg1;

@end
