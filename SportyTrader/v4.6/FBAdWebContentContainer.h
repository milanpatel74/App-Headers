/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBAdContentContainer.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString, NSURL, FBHTMLAdDataModel;

@interface FBAdWebContentContainer : FBAdContentContainer <UIWebViewDelegate> {

	BOOL _isJavascriptAdControlInitialized;
	BOOL _isInterstitial;
	UIWebView* _webView;
	NSString* _activationCommand;
	NSURL* _requestURL;

}

@property (nonatomic,retain) UIWebView * webView;                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * activationCommand;                         //@synthesize activationCommand=_activationCommand - In the implementation block
@property (nonatomic,retain) FBHTMLAdDataModel * offsiteAd; 
@property (assign,nonatomic) BOOL isJavascriptAdControlInitialized;              //@synthesize isJavascriptAdControlInitialized=_isJavascriptAdControlInitialized - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                                   //@synthesize requestURL=_requestURL - In the implementation block
@property (assign,nonatomic) BOOL isInterstitial;                                //@synthesize isInterstitial=_isInterstitial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInterstitial;
-(void)initializeJavascriptAdControl;
-(void)setActivationCommand:(NSString *)arg1 ;
-(BOOL)isJavascriptAdControlInitialized;
-(void)setIsJavascriptAdControlInitialized:(BOOL)arg1 ;
-(void)setIsInterstitial:(BOOL)arg1 ;
-(id)initWithAdView:(id)arg1 actualAdSize:(CGSize)arg2 adSizeType:(FBAdSize)arg3 ;
-(id)getView;
-(BOOL)loadAdResponse:(id)arg1 ;
-(BOOL)logImpression;
-(BOOL)logClick;
-(BOOL)loadAdMarkup:(id)arg1 activationCommand:(id)arg2 ;
-(NSString *)activationCommand;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
@end
