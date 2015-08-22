/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <SportyTrader/ADBannerViewDelegate.h>
#import <SportyTrader/AdMarvelDelegate.h>

@class UIWindow, CustomTabBarController, TabViewController, UIView, UIImageView, UIAlertView, ASIHTTPRequest, ActiveSportsManager, DataSource, AdManager, ADBannerView, SASInterstitialView, SASBannerView, UIButton, CustomInterstitielView, AdMarvelView, SOMAInterstitialBannerView, SOMABannerView, MNGAdsSDKFactory, NSString;

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate, ADBannerViewDelegate, AdMarvelDelegate> {

	UIWindow* window;
	CustomTabBarController* myTabBarController;
	TabViewController* currentViewController;
	UIView* splashscreenHolderView;
	UIImageView* splashscreenImageView;
	UIAlertView* connectionAlertView;
	ASIHTTPRequest* tokenRegisteringRequest;
	ASIHTTPRequest* notifsParametersUpdateRequest;
	ActiveSportsManager* activeSportsManager;
	DataSource* dataSource;
	BOOL activerFavoris;
	BOOL relaunchForFacebook;
	BOOL fromBackground;
	AdManager* adManager;
	ADBannerView* iAdBannerView;
	SASInterstitialView* adServerInterstitial;
	SASBannerView* adServerBanner;
	UIButton* customBannerView;
	CustomInterstitielView* customInterstitialView;
	AdMarvelView* lumataBannerView;
	AdMarvelView* lumataInterstitialView;
	SOMAInterstitialBannerView* smaatoInterstitialView;
	SOMABannerView* smaatoBannerView;
	MNGAdsSDKFactory* _mngInterstitialFactory;
	MNGAdsSDKFactory* _mngBannerFactory;
	UIView* _mngAdsBannerView;

}

@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) CustomTabBarController * myTabBarController; 
@property (assign,nonatomic,__weak) TabViewController * currentViewController; 
@property (nonatomic,retain) UIView * splashscreenHolderView; 
@property (nonatomic,retain) UIImageView * splashscreenImageView; 
@property (nonatomic,retain) UIAlertView * connectionAlertView; 
@property (nonatomic,retain) ASIHTTPRequest * tokenRegisteringRequest; 
@property (nonatomic,retain) ASIHTTPRequest * notifsParametersUpdateRequest; 
@property (nonatomic,retain) ActiveSportsManager * activeSportsManager; 
@property (nonatomic,retain) DataSource * dataSource; 
@property (assign,nonatomic) BOOL activerFavoris; 
@property (assign,nonatomic) BOOL relaunchForFacebook; 
@property (nonatomic,retain) AdManager * adManager; 
@property (nonatomic,retain) ADBannerView * iAdBannerView; 
@property (nonatomic,retain) SASInterstitialView * adServerInterstitial; 
@property (nonatomic,retain) SASBannerView * adServerBanner; 
@property (nonatomic,retain) UIButton * customBannerView; 
@property (nonatomic,retain) CustomInterstitielView * customInterstitialView; 
@property (nonatomic,retain) AdMarvelView * lumataBannerView; 
@property (nonatomic,retain) AdMarvelView * lumataInterstitialView; 
@property (nonatomic,retain) SOMAInterstitialBannerView * smaatoInterstitialView; 
@property (nonatomic,retain) SOMABannerView * smaatoBannerView; 
@property (nonatomic,retain) MNGAdsSDKFactory * mngInterstitialFactory;                        //@synthesize mngInterstitialFactory=_mngInterstitialFactory - In the implementation block
@property (nonatomic,retain) MNGAdsSDKFactory * mngBannerFactory;                              //@synthesize mngBannerFactory=_mngBannerFactory - In the implementation block
@property (nonatomic,retain) UIView * mngAdsBannerView;                                        //@synthesize mngAdsBannerView=_mngAdsBannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)activerFavoris;
-(CustomTabBarController *)myTabBarController;
-(UIImageView *)splashscreenImageView;
-(void)setActiveSportsManager:(ActiveSportsManager *)arg1 ;
-(ActiveSportsManager *)activeSportsManager;
-(void)setTabBarTitles;
-(void)setCurrentViewController:(TabViewController *)arg1 ;
-(void)showSplashscreen;
-(void)manageNotificationAtStart:(id)arg1 ;
-(AdManager *)adManager;
-(UIButton *)customBannerView;
-(ADBannerView *)iAdBannerView;
-(SASBannerView *)adServerBanner;
-(AdMarvelView *)lumataBannerView;
-(SOMABannerView *)smaatoBannerView;
-(UIView *)splashscreenHolderView;
-(CustomInterstitielView *)customInterstitialView;
-(UIAlertView *)connectionAlertView;
-(void)setConnectionAlertView:(UIAlertView *)arg1 ;
-(ASIHTTPRequest *)tokenRegisteringRequest;
-(void)setTokenRegisteringRequest:(ASIHTTPRequest *)arg1 ;
-(ASIHTTPRequest *)notifsParametersUpdateRequest;
-(void)setNotifsParametersUpdateRequest:(ASIHTTPRequest *)arg1 ;
-(void)registerTokenOnDistantServer:(id)arg1 withRetryOnFailure:(BOOL)arg2 ;
-(void)updateTokenState:(int)arg1 ;
-(void)setAdManager:(AdManager *)arg1 ;
-(void)setActiverFavoris:(BOOL)arg1 ;
-(TabViewController *)currentViewController;
-(void)closeCustomInterstitial:(id)arg1 ;
-(AdMarvelView *)lumataInterstitialView;
-(void)sessionStateChanged:(id)arg1 state:(unsigned long long)arg2 error:(id)arg3 handler:(id)arg4 ;
-(id)partnerId;
-(id)siteId;
-(id)applicationUIViewController;
-(void)getAdSucceeded;
-(void)getAdFailed;
-(void)getInterstitialAdSucceeded;
-(void)getInterstitialAdFailed;
-(void)interstitialClosed;
-(void)dismissSplashscreen:(BOOL)arg1 ;
-(void)customAdPressed:(id)arg1 ;
-(BOOL)openSessionWithAllowLoginUI:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)setMyTabBarController:(CustomTabBarController *)arg1 ;
-(void)setSplashscreenHolderView:(UIView *)arg1 ;
-(void)setSplashscreenImageView:(UIImageView *)arg1 ;
-(BOOL)relaunchForFacebook;
-(void)setRelaunchForFacebook:(BOOL)arg1 ;
-(void)setIAdBannerView:(ADBannerView *)arg1 ;
-(SASInterstitialView *)adServerInterstitial;
-(void)setAdServerInterstitial:(SASInterstitialView *)arg1 ;
-(void)setAdServerBanner:(SASBannerView *)arg1 ;
-(void)setCustomBannerView:(UIButton *)arg1 ;
-(void)setCustomInterstitialView:(CustomInterstitielView *)arg1 ;
-(void)setLumataBannerView:(AdMarvelView *)arg1 ;
-(void)setLumataInterstitialView:(AdMarvelView *)arg1 ;
-(SOMAInterstitialBannerView *)smaatoInterstitialView;
-(void)setSmaatoInterstitialView:(SOMAInterstitialBannerView *)arg1 ;
-(void)setSmaatoBannerView:(SOMABannerView *)arg1 ;
-(MNGAdsSDKFactory *)mngInterstitialFactory;
-(void)setMngInterstitialFactory:(MNGAdsSDKFactory *)arg1 ;
-(MNGAdsSDKFactory *)mngBannerFactory;
-(void)setMngBannerFactory:(MNGAdsSDKFactory *)arg1 ;
-(UIView *)mngAdsBannerView;
-(void)setMngAdsBannerView:(UIView *)arg1 ;
-(void)publish;
-(void)setDataSource:(DataSource *)arg1 ;
-(UIWindow *)window;
-(DataSource *)dataSource;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
@end
