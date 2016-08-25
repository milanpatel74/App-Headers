/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/MPInterstitialViewController.h>
#import <AlienBlue/MPAdWebViewAgentDelegate.h>

@protocol MPInterstitialViewControllerDelegate;
@class MPAdWebViewAgent, MPAdWebView, NSString;

@interface MPHTMLInterstitialViewController : MPInterstitialViewController <MPAdWebViewAgentDelegate> {

	id<MPInterstitialViewControllerDelegate> _delegate;
	MPAdWebViewAgent* _backingViewAgent;
	id _customMethodDelegate;
	MPAdWebView* _backingView;

}

@property (nonatomic,retain) MPAdWebViewAgent * backingViewAgent;              //@synthesize backingViewAgent=_backingViewAgent - In the implementation block
@property (assign,nonatomic,__weak) id customMethodDelegate;                   //@synthesize customMethodDelegate=_customMethodDelegate - In the implementation block
@property (nonatomic,retain) MPAdWebView * backingView;                        //@synthesize backingView=_backingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)adUnitId;
-(id)viewControllerForPresentingModalView;
-(void)setCustomMethodDelegate:(id)arg1 ;
-(void)adActionWillBegin:(id)arg1 ;
-(void)adActionWillLeaveApplication:(id)arg1 ;
-(void)adActionDidFinish:(id)arg1 ;
-(void)adDidClose:(id)arg1 ;
-(void)adDidFinishLoadingAd:(id)arg1 ;
-(void)adDidFailToLoadAd:(id)arg1 ;
-(id)customMethodDelegate;
-(void)loadConfiguration:(id)arg1 ;
-(MPAdWebViewAgent *)backingViewAgent;
-(MPAdWebView *)backingView;
-(void)setBackingViewAgent:(MPAdWebViewAgent *)arg1 ;
-(void)setBackingView:(MPAdWebView *)arg1 ;
-(void)willPresentInterstitial;
-(void)didPresentInterstitial;
-(void)willDismissInterstitial;
-(void)didDismissInterstitial;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)location;
@end
