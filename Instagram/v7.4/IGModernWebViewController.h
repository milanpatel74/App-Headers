/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Instagram/NJKWebViewProgressDelegate.h>

@protocol IGModernWebViewControllerDelegate;
@class NSURL, UIWebView, NJKWebViewProgress, UIProgressView, NSTimer, UIBarButtonItem, IGModernWebViewToolbar, UILabel, NSString, IGTableViewInsetInfoView;

@interface IGModernWebViewController : IGViewController <UIWebViewDelegate, NJKWebViewProgressDelegate> {

	BOOL _didAppear;
	BOOL _isInitialPageLoaded;
	id<IGModernWebViewControllerDelegate> _delegate;
	NSURL* _URL;
	UIWebView* _webView;
	NJKWebViewProgress* _webViewProgress;
	UIProgressView* _progressView;
	NSTimer* _hideProgressViewTimer;
	UIBarButtonItem* _shareBarButtonItem;
	IGModernWebViewToolbar* _toolBar;
	UILabel* _titleLabel;
	NSString* _currentTitle;
	IGTableViewInsetInfoView* _infoView;
	double _webViewInitialPageLoadStartTime;

}

@property (assign,nonatomic,__weak) id<IGModernWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NJKWebViewProgress * webViewProgress;                               //@synthesize webViewProgress=_webViewProgress - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSTimer * hideProgressViewTimer;                                    //@synthesize hideProgressViewTimer=_hideProgressViewTimer - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareBarButtonItem;                               //@synthesize shareBarButtonItem=_shareBarButtonItem - In the implementation block
@property (nonatomic,retain) IGModernWebViewToolbar * toolBar;                                   //@synthesize toolBar=_toolBar - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL didAppear;                                                     //@synthesize didAppear=_didAppear - In the implementation block
@property (nonatomic,copy) NSString * currentTitle;                                              //@synthesize currentTitle=_currentTitle - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                                //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) double webViewInitialPageLoadStartTime;                             //@synthesize webViewInitialPageLoadStartTime=_webViewInitialPageLoadStartTime - In the implementation block
@property (assign,nonatomic) BOOL isInitialPageLoaded;                                           //@synthesize isInitialPageLoaded=_isInitialPageLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onBackButtonTapped;
-(BOOL)prefersTabBarHidden;
-(void)setNavigationBarTitle:(id)arg1 ;
-(void)handleInfoViewTap:(id)arg1 ;
-(void)setWebViewInitialPageLoadStartTime:(double)arg1 ;
-(void)setDidAppear:(BOOL)arg1 ;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(void)shareTapped;
-(id)currentPageURLStringForLogging;
-(IGModernWebViewToolbar *)toolBar;
-(void)setToolBar:(IGModernWebViewToolbar *)arg1 ;
-(void)onForwardButtonTapped;
-(void)startHideProgressViewTimer;
-(BOOL)isInitialPageLoaded;
-(double)webViewInitialPageLoadStartTime;
-(void)setIsInitialPageLoaded:(BOOL)arg1 ;
-(void)startFinalProgressViewAnimation;
-(void)setHideProgressViewTimer:(NSTimer *)arg1 ;
-(NJKWebViewProgress *)webViewProgress;
-(void)webViewProgress:(id)arg1 didUpdateProgress:(double)arg2 ;
-(UIBarButtonItem *)shareBarButtonItem;
-(void)setWebViewProgress:(NJKWebViewProgress *)arg1 ;
-(NSTimer *)hideProgressViewTimer;
-(void)setShareBarButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)didAppear;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(BOOL)shouldShowToolbar;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<IGModernWebViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGModernWebViewControllerDelegate>)delegate;
-(UILabel *)titleLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)currentTitle;
-(UIWebView *)webView;
-(NSURL *)URL;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)updateNavigationButtons;
@end
