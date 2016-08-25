/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol GADCustomEventBannerDelegate <NSObject>
@property (nonatomic,readonly) UIViewController * viewControllerForPresentingModalView; 
@required
-(UIViewController *)viewControllerForPresentingModalView;
-(void)customEventBannerWasClicked:(id)arg1;
-(void)customEventBanner:(id)arg1 didReceiveAd:(id)arg2;
-(void)customEventBanner:(id)arg1 didFailAd:(id)arg2;
-(void)customEventBannerWillPresentModal:(id)arg1;
-(void)customEventBannerWillDismissModal:(id)arg1;
-(void)customEventBannerDidDismissModal:(id)arg1;
-(void)customEventBannerWillLeaveApplication:(id)arg1;
-(void)customEventBanner:(id)arg1 clickDidOccurInAd:(id)arg2;

@end
