/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/SLKFileDocumentViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIView, NSString;

@interface SLKFileDocumentWebViewController : SLKFileDocumentViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	UIView* _statusBarBackground;

}

@property (nonatomic,retain) UIWebView * webView;                       //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIView * statusBarBackground;              //@synthesize statusBarBackground=_statusBarBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateContentBodyIn;
-(void)animateContentBodyOut;
-(void)setupData;
-(UIView *)statusBarBackground;
-(void)updateInsets;
-(void)setStatusBarBackground:(UIView *)arg1 ;
-(void)setupWebView;
-(id)stringWrapperWithHtml:(id)arg1 css:(id)arg2 ;
-(id)spacesCSS;
-(void)setupPost;
-(void)setupSpace;
-(void)setupPDF;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end
