/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class TGWebPageMediaAttachment, UIView, UIWebView, UIActivityIndicatorView, NSString;

@interface TGEmbedPreviewView : UIView <UIWebViewDelegate> {

	TGWebPageMediaAttachment* _webPage;
	UIView* _dimView;
	UIView* _webViewWrapper;
	UIWebView* _webView;
	UIActivityIndicatorView* _activityIndicator;
	/*^block*/id _dismiss;

}

@property (nonatomic,copy) id dismiss;                              //@synthesize dismiss=_dismiss - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateOut:(/*^block*/id)arg1 ;
-(void)setDismiss:(id)arg1 ;
-(void)dimViewTapGesture:(id)arg1 ;
-(CGRect)webViewFrameForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 webPage:(id)arg2 ;
-(void)layoutSubviews;
-(id)dismiss;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIEdgeInsets)insets;
-(void)animateIn;
@end
