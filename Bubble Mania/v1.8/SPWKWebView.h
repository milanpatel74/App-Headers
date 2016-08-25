/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/SPWebView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSURL, WKWebView, NSString;

@interface SPWKWebView : SPWebView <WKNavigationDelegate> {

	NSURL* _privateUrl;
	WKWebView* _wkWebView;

}

@property (nonatomic,retain) NSURL * privateUrl;                    //@synthesize privateUrl=_privateUrl - In the implementation block
@property (nonatomic,retain) WKWebView * wkWebView;                 //@synthesize wkWebView=_wkWebView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(WKWebView *)wkWebView;
-(void)setPrivateUrl:(NSURL *)arg1 ;
-(NSURL *)privateUrl;
-(void)setWKUIDelegate:(id)arg1 ;
-(void)stringByEvaluatingJavaScriptFromString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setWkWebView:(WKWebView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id)view;
-(id)url;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)canGoBack;
-(void)stopLoading;
-(void)goBack;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end
