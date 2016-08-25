/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
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
