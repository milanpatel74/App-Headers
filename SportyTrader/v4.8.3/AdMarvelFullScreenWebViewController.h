/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol AdMarvelDelegate, AdMarvelFullScreenDelegate;
@class NSObject, AdMarvelWebView, AdMarvelToolBar, AdMarvelAudioRecordingManager, AdMarvelEmbeddedVideoAdHandler, NSString;

@interface AdMarvelFullScreenWebViewController : UIViewController <UIWebViewDelegate> {

	NSObject*<AdMarvelDelegate> adMarvelDelegate;
	NSObject*<AdMarvelFullScreenDelegate> adMarvelFullScreenDelegate;
	AdMarvelWebView* admarvelWebView;
	AdMarvelToolBar* adMarvelToolBar;
	AdMarvelWebView* admarvelSeparateFullscreenWebView;
	AdMarvelFullScreenWebViewController* webViewControllerForMiscNavigation;
	BOOL useExtraViewForMiscNavigation;
	BOOL autoDetectionBlocked;
	BOOL enableLinksWhenAutoDetectionBlocked;
	BOOL separateWebViewOpen;
	BOOL startingStatusBarHidden;
	BOOL canGoBack;
	int toolBarStatus;
	BOOL disableRotations;
	int lockedOrientation;
	BOOL disableAnimations;
	BOOL maximized;
	BOOL closeAppWhenMaximized;
	BOOL maximizing;
	BOOL minimizing;
	BOOL initialBannerClick;
	BOOL requestLoadingStopped;
	BOOL restoreAutoDetection;
	BOOL rotateViewControllerAfterLoading;
	AdMarvelAudioRecordingManager* audioRecordingManager;
	BOOL permittedToUseMicrophone;
	AdMarvelEmbeddedVideoAdHandler* _embeddedVideoHandler;

}

@property (assign,nonatomic) BOOL maximized; 
@property (assign,nonatomic) int toolBarStatus; 
@property (assign,nonatomic) BOOL restoreAutoDetection; 
@property (assign,nonatomic) BOOL autoDetectionBlocked; 
@property (assign,nonatomic) BOOL enableLinksWhenAutoDetectionBlocked; 
@property (assign,nonatomic) AdMarvelAudioRecordingManager * audioRecordingManager; 
@property (assign,nonatomic) BOOL permittedToUseMicrophone; 
@property (assign,nonatomic) BOOL maximizing; 
@property (assign,nonatomic) BOOL disableRotations; 
@property (assign,nonatomic) int lockedOrientation; 
@property (assign,nonatomic) BOOL rotateViewControllerAfterLoading; 
@property (nonatomic,retain) AdMarvelFullScreenWebViewController * webViewControllerForMiscNavigation; 
@property (nonatomic,retain) AdMarvelWebView * admarvelWebView; 
@property (nonatomic,retain) AdMarvelEmbeddedVideoAdHandler * embeddedVideoHandler;                                 //@synthesize embeddedVideoHandler=_embeddedVideoHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)disableRotations;
-(void)moviePlaybackDidFinish:(id)arg1 ;
-(void)showCloseButton;
-(void)orientationChanged;
-(void)loadVideo;
-(void)setAdMarvelDelegate:(id)arg1 ;
-(int)lockedOrientation;
-(void)setLockedOrientation:(int)arg1 ;
-(void)setAdmarvelWebView:(AdMarvelWebView *)arg1 ;
-(void)setPermittedToUseMicrophone:(BOOL)arg1 ;
-(void)setAudioRecordingManager:(AdMarvelAudioRecordingManager *)arg1 ;
-(void)setEmbeddedVideoHandler:(AdMarvelEmbeddedVideoAdHandler *)arg1 ;
-(void)setToolbarStatus:(int)arg1 ;
-(BOOL)enableLinksWhenAutoDetectionBlocked;
-(id)spawnedController;
-(BOOL)restoreAutoDetection;
-(void)movieWillExitFullscreen:(id)arg1 ;
-(void)removeMovieNotifications:(id)arg1 ;
-(void)restoreAutoDetectionFlag;
-(void)setupMovieNotifications:(id)arg1 ;
-(void)setDisableAnimations:(BOOL)arg1 ;
-(void)setInitialBannerClick:(BOOL)arg1 ;
-(void)setToolbarActivity:(BOOL)arg1 ;
-(void)minimizeAnimated:(BOOL)arg1 sendModalViewCloseNotification:(BOOL)arg2 ;
-(void)setWebViewControllerForMiscNavigation:(AdMarvelFullScreenWebViewController *)arg1 ;
-(BOOL)isInitialBannerClick;
-(void)handleToolbarAppearance;
-(void)setMaximized:(BOOL)arg1 ;
-(void)setMaximizing:(BOOL)arg1 ;
-(void)setDisableRotations:(BOOL)arg1 ;
-(BOOL)rotateViewControllerAfterLoading;
-(void)setAdMarvelFullScreenDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 fullScreenDelegate:(id)arg2 ;
-(void)setDisableRotation:(BOOL)arg1 ;
-(void)setFullScreenView:(id)arg1 ;
-(id)getFullScreenWebView;
-(BOOL)maximizing;
-(void)setUseExtraViewForMiscNavigation:(BOOL)arg1 ;
-(void)setAutoDetectionBlocked:(BOOL)arg1 ;
-(void)setEnableLinksWhenAutoDetectionBlocked:(BOOL)arg1 ;
-(BOOL)maximized;
-(void)setToolBarStatus:(int)arg1 ;
-(int)toolBarStatus;
-(void)hideCloseButton;
-(void)hideToolbar;
-(BOOL)isToolbarVisible;
-(void)showToolbar;
-(BOOL)autoDetectionBlocked;
-(void)setRestoreAutoDetection:(BOOL)arg1 ;
-(BOOL)permittedToUseMicrophone;
-(AdMarvelAudioRecordingManager *)audioRecordingManager;
-(void)forcefullyRotateViewControllerToLockedOrientation;
-(void)setRotateViewControllerAfterLoading:(BOOL)arg1 ;
-(AdMarvelWebView *)admarvelWebView;
-(BOOL)isSeparateWebViewOpen;
-(AdMarvelFullScreenWebViewController *)webViewControllerForMiscNavigation;
-(void)cleanupSeparateWebViewController;
-(void)setSeparateWebViewOpen:(BOOL)arg1 ;
-(AdMarvelEmbeddedVideoAdHandler *)embeddedVideoHandler;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)minimize;
-(BOOL)maximize;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

