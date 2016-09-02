/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPInterstitialViewController.h>
#import <Reddit/MPAdWebViewAgentDelegate.h>

@protocol MPInterstitialViewControllerDelegate;
@class MPAdWebViewAgent, MPAdWebView, NSString;

@interface MPHTMLInterstitialViewController : MPInterstitialViewController <MPAdWebViewAgentDelegate> {

	id<MPInterstitialViewControllerDelegate> _delegate;
	MPAdWebViewAgent* _backingViewAgent;
	MPAdWebView* _backingView;

}

@property (nonatomic,retain) MPAdWebView * backingView;                        //@synthesize backingView=_backingView - In the implementation block
@property (nonatomic,retain) MPAdWebViewAgent * backingViewAgent;              //@synthesize backingViewAgent=_backingViewAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(id)adUnitId;
-(void)adActionWillBegin:(id)arg1 ;
-(void)adActionWillLeaveApplication:(id)arg1 ;
-(void)adActionDidFinish:(id)arg1 ;
-(void)adDidClose:(id)arg1 ;
-(void)adDidFinishLoadingAd:(id)arg1 ;
-(void)adDidFailToLoadAd:(id)arg1 ;
-(void)loadConfiguration:(id)arg1 ;
-(void)willPresentInterstitial;
-(void)didPresentInterstitial;
-(void)willDismissInterstitial;
-(void)didDismissInterstitial;
-(MPAdWebViewAgent *)backingViewAgent;
-(MPAdWebView *)backingView;
-(void)setBackingViewAgent:(MPAdWebViewAgent *)arg1 ;
-(void)setBackingView:(MPAdWebView *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)location;
@end
