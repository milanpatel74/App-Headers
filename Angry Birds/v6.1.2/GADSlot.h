/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/GADMRAIDEventHandling.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <AngryBirdsClassic/GADSDKCoreControllerDelegate.h>
#import <AngryBirdsClassic/GADPercentDrivenUserInteractionAnimationControllerDelegate.h>
#import <AngryBirdsClassic/GADActiveViewMonitorDelegate.h>
#import <AngryBirdsClassic/GADAdViewActiveViewMonitoring.h>
#import <AngryBirdsClassic/GADAdFetcherDelegate.h>

@protocol GADSlotDelegate, GADSlotAdLoadDelegate, GADSlotAdEventDelegate, GADSlotAdResponseDelegate, GADSlotAdKeyDelegate;
@class GADMAdManager, GADMConfig, NSString, GADAd, GADAdType, GADRequest, GADCorrelator, NSNumber, GADAdView, GADSlotStatistics, GADIntermission, GADInterstitial, GADBannerAdViewDelegate, GADAdFetcher, NSDictionary, NSSet, NSTimer, GADActiveViewMonitor, GADSDKCoreWebView, UIView, GADPercentDrivenUserInteractionAnimationController, GADViewControllerFullScreenSwipeAnimation, SKStoreProductViewController, UIPanGestureRecognizer, GADScheduler;

@interface GADSlot : NSObject <GADMRAIDEventHandling, SKStoreProductViewControllerDelegate, GADSDKCoreControllerDelegate, GADPercentDrivenUserInteractionAnimationControllerDelegate, GADActiveViewMonitorDelegate, GADAdViewActiveViewMonitoring, GADAdFetcherDelegate> {

	long long _state;
	unsigned long long _activeViewID;
	long long _swipeToViewControllerCheckerTaskID;
	GADMAdManager* _mediationManager;
	GADMConfig* _mediationConfiguration;
	BOOL _slotHasAttemptedAnAdRequestAtLeastOnce;
	BOOL _isListeningToDeviceOrientationChangeEvent;
	CGRect _usableInterfaceFrame;
	CGRect _creativeWebViewFrame;
	CGRect _creativeAdFrame;
	BOOL _viewHasMadeImpression;
	long long _CSIIdentifier;
	NSString* _adResponseKey;
	NSString* _netWorkLatencyKey;
	NSString* _adRenderingKey;
	NSString* _totalTimeKey;
	BOOL _hasAutoRefreshed;
	BOOL _reloadable;
	BOOL _manualImpressionsEnabled;
	BOOL _calledLoadAndDisplayRequest;
	BOOL _swipeToViewControllerEnabled;
	BOOL _swipeToViewControllerAnimationControllerInitialized;
	BOOL _adCustomRendered;
	id<GADSlotDelegate> _slotDelegate;
	id<GADSlotAdLoadDelegate> _adLoadDelegate;
	id<GADSlotAdEventDelegate> _adEventDelegate;
	id<GADSlotAdResponseDelegate> _adResponseDelegate;
	id<GADSlotAdKeyDelegate> _adKeyDelegate;
	NSString* _adUnitID;
	GADAd* _ad;
	GADAdType* _adType;
	GADRequest* _request;
	GADCorrelator* _correlator;
	NSNumber* _timeLastLoaded;
	GADAdView* _adView;
	GADSlotStatistics* _slotStats;
	GADIntermission* _intermission;
	GADInterstitial* _interstitial;
	GADBannerAdViewDelegate* _adViewDelegate;
	GADAd* _loadingAd;
	GADAdFetcher* _adFetcher;
	NSDictionary* _applicationStatistics;
	NSSet* _pendingAdStatistics;
	NSTimer* _reloadTimer;
	double _reloadInterval;
	NSString* _requestID;
	GADRequest* _nextRequest;
	GADActiveViewMonitor* _activeViewMonitor;
	GADSDKCoreWebView* _SDKCoreWebView;
	UIView* _activeViewMonitoredView;
	NSDictionary* _savedParamsForCheckingSwipeToViewController;
	GADPercentDrivenUserInteractionAnimationController* _animationController;
	GADViewControllerFullScreenSwipeAnimation* _animation;
	SKStoreProductViewController* _swipeableStoreProductViewController;
	UIPanGestureRecognizer* _swipeGestureRecognizer;
	GADSlot* _strongSlotForSwipeToViewController;
	GADScheduler* _swipeToViewControllerChecker;
	CGSize _newAdSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long CSIIdentifier; 
@property (assign,nonatomic) BOOL viewHasMadeImpression; 
@property (assign,nonatomic,__weak) id<GADSlotDelegate> slotDelegate;                                               //@synthesize slotDelegate=_slotDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADSlotAdLoadDelegate> adLoadDelegate;                                       //@synthesize adLoadDelegate=_adLoadDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADSlotAdEventDelegate> adEventDelegate;                                     //@synthesize adEventDelegate=_adEventDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADSlotAdResponseDelegate> adResponseDelegate;                               //@synthesize adResponseDelegate=_adResponseDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADSlotAdKeyDelegate> adKeyDelegate;                                         //@synthesize adKeyDelegate=_adKeyDelegate - In the implementation block
@property (nonatomic,copy) NSString * adUnitID;                                                                     //@synthesize adUnitID=_adUnitID - In the implementation block
@property (assign,nonatomic) BOOL hasAutoRefreshed;                                                                 //@synthesize hasAutoRefreshed=_hasAutoRefreshed - In the implementation block
@property (assign,nonatomic) BOOL reloadable;                                                                       //@synthesize reloadable=_reloadable - In the implementation block
@property (assign,nonatomic) BOOL manualImpressionsEnabled;                                                         //@synthesize manualImpressionsEnabled=_manualImpressionsEnabled - In the implementation block
@property (nonatomic,retain) GADAd * ad;                                                                            //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) GADAdType * adType;                                                                    //@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy) GADRequest * request;                                                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GADCorrelator * correlator;                                                            //@synthesize correlator=_correlator - In the implementation block
@property (nonatomic,retain) NSNumber * timeLastLoaded;                                                             //@synthesize timeLastLoaded=_timeLastLoaded - In the implementation block
@property (nonatomic,readonly) GADAdView * adView;                                                                  //@synthesize adView=_adView - In the implementation block
@property (nonatomic,retain) GADSlotStatistics * slotStats;                                                         //@synthesize slotStats=_slotStats - In the implementation block
@property (assign,nonatomic) BOOL calledLoadAndDisplayRequest;                                                      //@synthesize calledLoadAndDisplayRequest=_calledLoadAndDisplayRequest - In the implementation block
@property (assign,nonatomic,__weak) GADIntermission * intermission;                                                 //@synthesize intermission=_intermission - In the implementation block
@property (assign,nonatomic,__weak) GADInterstitial * interstitial;                                                 //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,retain) GADBannerAdViewDelegate * adViewDelegate;                                              //@synthesize adViewDelegate=_adViewDelegate - In the implementation block
@property (nonatomic,retain) GADAd * loadingAd;                                                                     //@synthesize loadingAd=_loadingAd - In the implementation block
@property (nonatomic,retain) GADAdFetcher * adFetcher;                                                              //@synthesize adFetcher=_adFetcher - In the implementation block
@property (nonatomic,copy) NSDictionary * applicationStatistics;                                                    //@synthesize applicationStatistics=_applicationStatistics - In the implementation block
@property (nonatomic,copy) NSSet * pendingAdStatistics;                                                             //@synthesize pendingAdStatistics=_pendingAdStatistics - In the implementation block
@property (nonatomic,retain) NSTimer * reloadTimer;                                                                 //@synthesize reloadTimer=_reloadTimer - In the implementation block
@property (assign,nonatomic) double reloadInterval;                                                                 //@synthesize reloadInterval=_reloadInterval - In the implementation block
@property (nonatomic,copy) NSString * requestID;                                                                    //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) GADRequest * nextRequest;                                                                //@synthesize nextRequest=_nextRequest - In the implementation block
@property (assign,nonatomic) CGSize newAdSize;                                                                      //@synthesize newAdSize=_newAdSize - In the implementation block
@property (nonatomic,retain) GADActiveViewMonitor * activeViewMonitor;                                              //@synthesize activeViewMonitor=_activeViewMonitor - In the implementation block
@property (setter=DKCoreWebView,nonatomic,retain) GADSDKCoreWebView * SDKCoreWebView;                               //@synthesize SDKCoreWebView=_SDKCoreWebView - In the implementation block
@property (nonatomic,retain) UIView * activeViewMonitoredView;                                                      //@synthesize activeViewMonitoredView=_activeViewMonitoredView - In the implementation block
@property (nonatomic,copy) NSDictionary * savedParamsForCheckingSwipeToViewController;                              //@synthesize savedParamsForCheckingSwipeToViewController=_savedParamsForCheckingSwipeToViewController - In the implementation block
@property (assign,nonatomic) BOOL swipeToViewControllerEnabled;                                                     //@synthesize swipeToViewControllerEnabled=_swipeToViewControllerEnabled - In the implementation block
@property (assign,nonatomic) BOOL swipeToViewControllerAnimationControllerInitialized;                              //@synthesize swipeToViewControllerAnimationControllerInitialized=_swipeToViewControllerAnimationControllerInitialized - In the implementation block
@property (nonatomic,retain) GADPercentDrivenUserInteractionAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,retain) GADViewControllerFullScreenSwipeAnimation * animation;                                 //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * swipeableStoreProductViewController;                    //@synthesize swipeableStoreProductViewController=_swipeableStoreProductViewController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * swipeGestureRecognizer;                                       //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (nonatomic,retain) GADSlot * strongSlotForSwipeToViewController;                                          //@synthesize strongSlotForSwipeToViewController=_strongSlotForSwipeToViewController - In the implementation block
@property (assign,getter=isAdCustomRendered,nonatomic) BOOL adCustomRendered;                                       //@synthesize adCustomRendered=_adCustomRendered - In the implementation block
@property (nonatomic,retain) GADScheduler * swipeToViewControllerChecker;                                           //@synthesize swipeToViewControllerChecker=_swipeToViewControllerChecker - In the implementation block
+(void)initialize;
-(void)updatePositionFromView:(id)arg1 ;
-(void)updateVisibility:(BOOL)arg1 ;
-(void)handleError:(id)arg1 action:(id)arg2 ;
-(void)MRAIDAdDidUnload;
-(void)MRAIDAdDidLoad;
-(void)notifyOrientationToMRAIDCreative;
-(void)notifyDeviceFeatures;
-(void)SDKDidBecomeReady;
-(id)creativePositionDictionaryForActiveViewBounds:(CGRect)arg1 ;
-(void)didChangeDeviceOrientation;
-(void)beginListeningToDeviceOrientationChangeEvent;
-(void)endListeningToDeviceOrientationChangeEvent;
-(void)addCreativeOrientationChangeObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)unscheduleSwipeToViewControllerChecker;
-(void)scheduleSwipeToViewControllerChecker;
-(void)enableSwipeToViewController;
-(void)disableSwipeToViewController;
-(void)canEnableSwipeToViewController;
-(void)setUpAnimationController;
-(BOOL)shouldProcessTouch:(CGPoint)arg1 inView:(id)arg2 ;
-(void)loadStoreProductViewController;
-(void)handlePanGesture:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)loadAdNetworkJavaScriptRequest:(id)arg1 ;
-(void)willLeaveAppDueToClick;
-(void)didReceiveValidAd;
-(void)didLoadAdHTMLInWebView;
-(void)didMakeAdImpression;
-(void)didFailToReceiveAdWithError:(id)arg1 shouldCancelPendingActions:(BOOL)arg2 ;
-(void)willRequestAdURL;
-(void)willFetchAdContent;
-(void)invalidateState;
-(void)willLoadAdHTMLInWebView;
-(void)didFetchAdContent;
-(void)willProcessMediationResponse;
-(void)didFailToRetrieveSDKCoreWithError:(id)arg1 ;
-(void)didReceiveAdURL;
-(void)willStartAdRendering;
-(void)didReceiveInvalidAd;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)resetState;
-(void)updateContentSize:(CGSize)arg1 ;
-(void)processAdResponse:(id)arg1 ;
-(void)adWasClicked;
-(void)adWillLeaveApplication;
-(void)adFinishedLoadingContent;
-(void)adFailedToReceiveContentWithError:(id)arg1 ;
-(void)willProcessAd;
-(void)adWillPresentScreen;
-(void)adWillDismissScreen;
-(void)adDidDismissScreen;
-(long long)CSIIdentifier;
-(void)failedJavaScriptFile;
-(void)loadAdURLWithParameters:(id)arg1 ;
-(long long)requestedAdType;
-(void)invalidJavaScriptRequest;
-(id)multipleAdSizeParameterFromSizes:(id)arg1 ;
-(id)requestParameters;
-(void)presentMediatedInterstitialFromRootViewController:(id)arg1 ;
-(BOOL)isMediating;
-(id)adNetworkClassName;
-(BOOL)changeAdTypeTo:(id)arg1 ;
-(void)requestAdWithType:(id)arg1 mediationConfig:(id)arg2 ;
-(BOOL)hasConsistentMediationConfigForAdType:(id)arg1 ;
-(void)processMediationAdResponse:(id)arg1 ;
-(id)viewControllerForPresentingModalView;
-(void)animationControllerDidFinishAnimationTransition:(id)arg1 ;
-(void)animationControllerDidCancelAnimationTransition:(id)arg1 ;
-(void)didReceiveInAppPurchase:(id)arg1 ;
-(id)inAppPurchaseDelegate;
-(void)activeViewMonitorDidRefresh:(id)arg1 ;
-(BOOL)canEnableActiveViewMonitoring;
-(void)createActiveViewMonitor;
-(BOOL)monitoredViewIsSubviewOfDeviceScreen;
-(void)activeViewMonitorWillUnload;
-(id)activeViewParameters:(id)arg1 activeViewUnloaded:(BOOL)arg2 ;
-(id)activeViewJSCommandWithParams:(id)arg1 ;
-(id)dictionaryForBounds:(CGRect)arg1 ;
-(id)adFormat;
-(BOOL)viewHasMadeImpression;
-(void)startActiveViewReportingIfEnabled;
-(void)finishActiveViewReporting;
-(void)setViewHasMadeImpression:(BOOL)arg1 ;
-(void)adViewDidStopActiveViewMonitoring;
-(void)adViewDidChangeActiveViewVisibility:(BOOL)arg1 ;
-(void)pingImpressionURLs;
-(void)loadAd:(id)arg1 headers:(id)arg2 ;
-(void)setAdViewDelegate:(GADBannerAdViewDelegate *)arg1 ;
-(GADBannerAdViewDelegate *)adViewDelegate;
-(GADIntermission *)intermission;
-(void)setIntermission:(GADIntermission *)arg1 ;
-(void)pingClickURLs;
-(NSNumber *)timeLastLoaded;
-(id)gestureClickURLWithURL:(id)arg1 ;
-(void)setReloadable:(BOOL)arg1 ;
-(void)setSlotDelegate:(id<GADSlotDelegate>)arg1 ;
-(void)setAdEventDelegate:(id<GADSlotAdEventDelegate>)arg1 ;
-(void)setAdLoadDelegate:(id<GADSlotAdLoadDelegate>)arg1 ;
-(void)setAdResponseDelegate:(id<GADSlotAdResponseDelegate>)arg1 ;
-(void)setAdKeyDelegate:(id<GADSlotAdKeyDelegate>)arg1 ;
-(void)cancelPendingAndFutureActions;
-(void)setAdType:(id)arg1 andReloadRequest:(BOOL)arg2 ;
-(void)setAdUnitID:(NSString *)arg1 ;
-(NSString *)adUnitID;
-(BOOL)hasAutoRefreshed;
-(void)scheduleAdReloadTimer;
-(void)bannerDidMoveToWindow:(id)arg1 ;
-(CGSize)newAdSize;
-(id<GADSlotDelegate>)slotDelegate;
-(BOOL)isMakingRequest;
-(void)cancelPendingActions;
-(void)loadNextRequestWithAutoRefresh:(BOOL)arg1 ;
-(void)deactivateReloadTimer;
-(void)reloadCurrentRequest;
-(GADActiveViewMonitor *)activeViewMonitor;
-(id<GADSlotAdKeyDelegate>)adKeyDelegate;
-(BOOL)shouldMakeRequest:(id)arg1 ;
-(void)setHasAutoRefreshed:(BOOL)arg1 ;
-(void)logRequestTestAdInstructions;
-(void)setAd:(GADAd *)arg1 ;
-(GADAdFetcher *)adFetcher;
-(void)resetRequestState;
-(void)setLoadingAd:(GADAd *)arg1 ;
-(void)setNewAdSize:(CGSize)arg1 ;
-(double)reloadInterval;
-(void)setReloadInterval:(double)arg1 ;
-(void)setAdFetcher:(GADAdFetcher *)arg1 ;
-(void)appWillBecomeInactive:(id)arg1 ;
-(void)adWillPresentFullScreen:(id)arg1 ;
-(void)adDidRelinquishFullScreen:(id)arg1 ;
-(BOOL)isGoogleAdURL:(id)arg1 ;
-(void)setViewForAdUsingView:(id)arg1 ;
-(void)finishedLoadingAdResponse:(id)arg1 ;
-(BOOL)validateAdResponseWithAdSize:(GADAdSize)arg1 andValidAdSizes:(id)arg2 ;
-(void)adFetcher:(id)arg1 didFetchAd:(id)arg2 ;
-(void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4 ;
-(void)mediatedAdNetworkAutoRefreshed;
-(void)interstitialViewWillAppear;
-(void)interstitialViewWillDisappear;
-(void)processStandardAdResponse:(id)arg1 ;
-(void)pingManualTrackingURLs;
-(void)processCustomRenderingAdResponse:(id)arg1 ;
-(id<GADSlotAdLoadDelegate>)adLoadDelegate;
-(id<GADSlotAdEventDelegate>)adEventDelegate;
-(id<GADSlotAdResponseDelegate>)adResponseDelegate;
-(BOOL)reloadable;
-(BOOL)manualImpressionsEnabled;
-(void)setManualImpressionsEnabled:(BOOL)arg1 ;
-(void)setAdType:(GADAdType *)arg1 ;
-(GADCorrelator *)correlator;
-(void)setCorrelator:(GADCorrelator *)arg1 ;
-(void)setTimeLastLoaded:(NSNumber *)arg1 ;
-(GADSlotStatistics *)slotStats;
-(void)setSlotStats:(GADSlotStatistics *)arg1 ;
-(BOOL)calledLoadAndDisplayRequest;
-(void)setCalledLoadAndDisplayRequest:(BOOL)arg1 ;
-(GADInterstitial *)interstitial;
-(void)setInterstitial:(GADInterstitial *)arg1 ;
-(GADAd *)loadingAd;
-(NSDictionary *)applicationStatistics;
-(void)setApplicationStatistics:(NSDictionary *)arg1 ;
-(void)setPendingAdStatistics:(NSSet *)arg1 ;
-(NSTimer *)reloadTimer;
-(void)setReloadTimer:(NSTimer *)arg1 ;
-(void)setActiveViewMonitor:(GADActiveViewMonitor *)arg1 ;
-(GADSDKCoreWebView *)SDKCoreWebView;
-(void)setSDKCoreWebView:(GADSDKCoreWebView *)arg1 ;
-(UIView *)activeViewMonitoredView;
-(void)setActiveViewMonitoredView:(UIView *)arg1 ;
-(NSDictionary *)savedParamsForCheckingSwipeToViewController;
-(void)setSavedParamsForCheckingSwipeToViewController:(NSDictionary *)arg1 ;
-(BOOL)swipeToViewControllerEnabled;
-(void)setSwipeToViewControllerEnabled:(BOOL)arg1 ;
-(BOOL)swipeToViewControllerAnimationControllerInitialized;
-(void)setSwipeToViewControllerAnimationControllerInitialized:(BOOL)arg1 ;
-(SKStoreProductViewController *)swipeableStoreProductViewController;
-(void)setSwipeableStoreProductViewController:(SKStoreProductViewController *)arg1 ;
-(UIPanGestureRecognizer *)swipeGestureRecognizer;
-(void)setSwipeGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(GADSlot *)strongSlotForSwipeToViewController;
-(void)setStrongSlotForSwipeToViewController:(GADSlot *)arg1 ;
-(BOOL)isAdCustomRendered;
-(void)setAdCustomRendered:(BOOL)arg1 ;
-(GADScheduler *)swipeToViewControllerChecker;
-(void)setSwipeToViewControllerChecker:(GADScheduler *)arg1 ;
-(NSSet *)pendingAdStatistics;
-(BOOL)isMRAIDEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setAnimationController:(GADPercentDrivenUserInteractionAnimationController *)arg1 ;
-(GADPercentDrivenUserInteractionAnimationController *)animationController;
-(void)invalidate;
-(GADRequest *)request;
-(GADViewControllerFullScreenSwipeAnimation *)animation;
-(void)loadRequest:(id)arg1 ;
-(void)setAnimation:(GADViewControllerFullScreenSwipeAnimation *)arg1 ;
-(void)setRequest:(GADRequest *)arg1 ;
-(GADAd *)ad;
-(GADRequest *)nextRequest;
-(void)setNextRequest:(GADRequest *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(void)cancelLoad;
-(NSString *)requestID;
-(GADAdType *)adType;
-(GADAdView *)adView;
-(void)appDidBecomeActive:(id)arg1 ;
@end
