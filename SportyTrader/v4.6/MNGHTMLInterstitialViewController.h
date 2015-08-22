/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/MNGInterstitialViewController.h>
#import <SportyTrader/MNGAdWebViewAgentDelegate.h>

@protocol MNGInterstitialViewControllerDelegate;
@class MNGAdWebViewAgent, MNGAdWebView, NSString;

@interface MNGHTMLInterstitialViewController : MNGInterstitialViewController <MNGAdWebViewAgentDelegate> {

	id<MNGInterstitialViewControllerDelegate> _delegate;
	MNGAdWebViewAgent* _backingViewAgent;
	id _customMethodDelegate;
	MNGAdWebView* _backingView;

}

@property (nonatomic,retain) MNGAdWebViewAgent * backingViewAgent;              //@synthesize backingViewAgent=_backingViewAgent - In the implementation block
@property (assign,nonatomic) id customMethodDelegate;                           //@synthesize customMethodDelegate=_customMethodDelegate - In the implementation block
@property (nonatomic,retain) MNGAdWebView * backingView;                        //@synthesize backingView=_backingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(void)adDidClose:(id)arg1 ;
-(id)adUnitId;
-(void)setCustomMethodDelegate:(id)arg1 ;
-(void)adActionWillBegin:(id)arg1 ;
-(void)adActionWillLeaveApplication:(id)arg1 ;
-(void)adActionDidFinish:(id)arg1 ;
-(void)adDidFinishLoadingAd:(id)arg1 ;
-(void)adDidFailToLoadAd:(id)arg1 ;
-(id)customMethodDelegate;
-(void)loadConfiguration:(id)arg1 ;
-(MNGAdWebViewAgent *)backingViewAgent;
-(void)setBackingViewAgent:(MNGAdWebViewAgent *)arg1 ;
-(MNGAdWebView *)backingView;
-(void)setBackingView:(MNGAdWebView *)arg1 ;
-(void)willPresentInterstitial;
-(void)didPresentInterstitial;
-(void)willDismissInterstitial;
-(void)didDismissInterstitial;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)location;
@end
