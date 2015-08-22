/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPullToRefreshViewDelegate.h>
#import <Messenger/WKScriptMessageHandler.h>
#import <Messenger/FBWebView.h>

@class FBUserSession, WKWebView, FBWKWebViewDelegateAdaptor, FBPullToRefreshView, FBKVOController, WKNavigation, UIView, NSURLRequest, NSString, NSURL, UIScrollView;

@interface FBWKWebView : UIView <FBPullToRefreshViewDelegate, WKScriptMessageHandler, FBWebView> {

	FBUserSession* _session;
	int _usagePolicy;
	CGPoint _lastTouchLocation;
	WKWebView* _webView;
	FBWKWebViewDelegateAdaptor* _delegateAdaptor;
	FBPullToRefreshView* _pullToRefreshView;
	FBKVOController* _KVOController;
	WKNavigation* _perfLogNavigation;
	BOOL _hasPullToRefresh;
	BOOL _isBannerAtTop;
	BOOL _recoveredFromOOMCrash;
	int _displayState;
	UIView* _bannerView;
	unsigned long long _dataDetectorTypes;
	UIView* _errorView;
	NSURLRequest* _request;

}

@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL recoveredFromOOMCrash;                       //@synthesize recoveredFromOOMCrash=_recoveredFromOOMCrash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayState;                                   //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes;               //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView;                                //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                 //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic) BOOL hasPullToRefresh;                              //@synthesize hasPullToRefresh=_hasPullToRefresh - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (assign,nonatomic) BOOL isBannerAtTop;                                 //@synthesize isBannerAtTop=_isBannerAtTop - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(void)_cancelPendingLogEvent;
-(void)_layoutBannerView;
-(NSURL *)currentLocationURL;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setGestureRecognizersEnabled:(BOOL)arg1 ;
-(void)updateOrientationWithOrientation:(long long)arg1 ;
-(void)exposePullToRefresh;
-(BOOL)currentlyCrashed;
-(BOOL)recoveredFromOOMCrash;
-(int)displayState;
-(void)setDisplayState:(int)arg1 ;
-(BOOL)hasPullToRefresh;
-(void)setHasPullToRefresh:(BOOL)arg1 ;
-(BOOL)isBannerAtTop;
-(void)setIsBannerAtTop:(BOOL)arg1 ;
-(int)webViewImplementation;
-(id)_facebookAuthCookieString;
-(void)_loadingStateChanged;
-(void)_estimatedProgressChanged;
-(void)_titleChanged;
-(void)_URLChanged;
-(void)_recoverFromOOMCrash;
-(BOOL)_isFacebookAuthCookieName:(id)arg1 ;
-(BOOL)_isValidCookieValue:(id)arg1 ;
-(id)_requestWithFacebookAuthCookies:(id)arg1 ;
-(id)initWithSession:(id)arg1 frame:(CGRect)arg2 usagePolicy:(int)arg3 ;
-(void)_logDidStopNavigation:(id)arg1 ;
-(void)_logDidStopNavigation:(id)arg1 failed:(id)arg2 ;
-(UIView *)bannerView;
-(void)dealloc;
-(void)setDelegate:(id<FBWebViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(BOOL)hasOnlySecureContent;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(UIView *)errorView;
-(void)setErrorView:(UIView *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end
