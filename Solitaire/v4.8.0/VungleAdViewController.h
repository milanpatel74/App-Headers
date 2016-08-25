/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSMutableArray, VungleVideoPlayer, VungleWebView, VungleAdLegacy, SKStoreProductViewController, NSNumber, NSDictionary, NSString;

@interface VungleAdViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	BOOL _webviewAdded;
	BOOL _didPlayOnce;
	double _adStart;
	NSMutableArray* _views;
	BOOL _incentivized;
	BOOL _videoIsPlaying;
	BOOL _statusBarHidden;
	BOOL _willShowProductView;
	BOOL _delegateCloseNotified;
	BOOL _firstView;
	BOOL _didDownload;
	BOOL _finished;
	BOOL _storeLoaded;
	BOOL _removeLastBundle;
	VungleVideoPlayer* _videoPlayer;
	VungleWebView* _webView;
	VungleAdLegacy* _bundle;
	double _downloadTime;
	SKStoreProductViewController* _storeViewController;
	NSMutableArray* _clickSequence;
	NSNumber* _appStoreId;
	NSDictionary* _eventsDisplayed;
	NSDictionary* _events;
	double _timeViewed;
	double _videoLength;

}

@property (assign,nonatomic) VungleVideoPlayer * videoPlayer;                                 //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (assign,nonatomic) VungleWebView * webView;                                         //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) VungleAdLegacy * bundle;                                         //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) double downloadTime;                                             //@synthesize downloadTime=_downloadTime - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * storeViewController;              //@synthesize storeViewController=_storeViewController - In the implementation block
@property (assign,nonatomic) BOOL incentivized;                                               //@synthesize incentivized=_incentivized - In the implementation block
@property (nonatomic,retain) NSMutableArray * clickSequence;                                  //@synthesize clickSequence=_clickSequence - In the implementation block
@property (assign,nonatomic) BOOL videoIsPlaying;                                             //@synthesize videoIsPlaying=_videoIsPlaying - In the implementation block
@property (copy) NSNumber * appStoreId;                                                       //@synthesize appStoreId=_appStoreId - In the implementation block
@property (assign) BOOL statusBarHidden;                                                      //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (assign) BOOL willShowProductView;                                                  //@synthesize willShowProductView=_willShowProductView - In the implementation block
@property (assign) BOOL delegateCloseNotified;                                                //@synthesize delegateCloseNotified=_delegateCloseNotified - In the implementation block
@property (assign) BOOL firstView;                                                            //@synthesize firstView=_firstView - In the implementation block
@property (retain) NSDictionary * eventsDisplayed;                                            //@synthesize eventsDisplayed=_eventsDisplayed - In the implementation block
@property (assign) NSDictionary * events;                                                     //@synthesize events=_events - In the implementation block
@property (assign) double timeViewed;                                                         //@synthesize timeViewed=_timeViewed - In the implementation block
@property (assign) double videoLength;                                                        //@synthesize videoLength=_videoLength - In the implementation block
@property (assign) BOOL didDownload;                                                          //@synthesize didDownload=_didDownload - In the implementation block
@property (assign) BOOL finished;                                                             //@synthesize finished=_finished - In the implementation block
@property (assign) BOOL storeLoaded;                                                          //@synthesize storeLoaded=_storeLoaded - In the implementation block
@property (assign) BOOL removeLastBundle;                                                     //@synthesize removeLastBundle=_removeLastBundle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)vunglePostRollAction:(int)arg1 ;
-(NSMutableArray *)clickSequence;
-(void)updateReportAd;
-(void)reactToAppEnteringBackground;
-(void)setIncentivized:(BOOL)arg1 ;
-(id)initWithAd:(id)arg1 ;
-(id)validInAppDownloadUrl:(id)arg1 ;
-(void)setAppStoreId:(NSNumber *)arg1 ;
-(void)prepareStoreViewControllerWithAppID:(id)arg1 ;
-(void)setEventsDisplayed:(NSDictionary *)arg1 ;
-(void)setStoreViewController:(SKStoreProductViewController *)arg1 ;
-(void)setClickSequence:(NSMutableArray *)arg1 ;
-(void)finishAdView:(BOOL)arg1 ;
-(BOOL)presentAppStoreWithDelegate:(id)arg1 ;
-(void)dispatchEventURLs:(id)arg1 ;
-(void)setStoreLoaded:(BOOL)arg1 ;
-(void)presentStoreDelayed:(id)arg1 ;
-(double)downloadTime;
-(void)setDownloadTime:(double)arg1 ;
-(SKStoreProductViewController *)storeViewController;
-(void)setVideoIsPlaying:(BOOL)arg1 ;
-(NSNumber *)appStoreId;
-(BOOL)willShowProductView;
-(void)setWillShowProductView:(BOOL)arg1 ;
-(BOOL)delegateCloseNotified;
-(void)setDelegateCloseNotified:(BOOL)arg1 ;
-(NSDictionary *)eventsDisplayed;
-(double)timeViewed;
-(void)setTimeViewed:(double)arg1 ;
-(BOOL)didDownload;
-(void)setDidDownload:(BOOL)arg1 ;
-(BOOL)storeLoaded;
-(BOOL)removeLastBundle;
-(void)setRemoveLastBundle:(BOOL)arg1 ;
-(BOOL)videoIsPlaying;
-(void)updateLatestPlayInfo;
-(BOOL)incentivized;
-(void)dispatchEventNamed:(id)arg1 subCategory:(id)arg2 max:(int)arg3 ;
-(void)vungleVideoPlayerDidFinish:(id)arg1 ;
-(void)videoCTAClicked:(id)arg1 ;
-(void)dealloc;
-(BOOL)statusBarHidden;
-(BOOL)prefersStatusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(VungleWebView *)webView;
-(void)setWebView:(VungleWebView *)arg1 ;
-(VungleAdLegacy *)bundle;
-(void)setBundle:(VungleAdLegacy *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setVideoLength:(double)arg1 ;
-(double)videoLength;
-(void)setFirstView:(BOOL)arg1 ;
-(BOOL)firstView;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(NSDictionary *)events;
-(VungleVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(VungleVideoPlayer *)arg1 ;
-(BOOL)finished;
-(void)setEvents:(NSDictionary *)arg1 ;
@end
