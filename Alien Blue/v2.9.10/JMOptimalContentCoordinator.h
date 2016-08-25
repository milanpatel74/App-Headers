/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@protocol JMOptimalContentCoordinatorDelegate;
@class UIWebView, UIView, NSObject, JMContentOptimizer, NSURL, NSString;

@interface JMOptimalContentCoordinator : NSObject <UIWebViewDelegate> {

	UIWebView* _standardView;
	UIView* _optimalView;
	UIView* _i_contentView;
	NSObject*<JMOptimalContentCoordinatorDelegate> _delegate;

}

@property (readonly) UIView * view; 
@property (retain) UIWebView * standardView;                                             //@synthesize standardView=_standardView - In the implementation block
@property (retain) UIView * optimalView;                                                 //@synthesize optimalView=_optimalView - In the implementation block
@property (retain) UIView * i_contentView;                                               //@synthesize i_contentView=_i_contentView - In the implementation block
@property (__weak) NSObject*<JMOptimalContentCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) JMContentOptimizer * optimizer; 
@property (readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyThemeSettings;
-(UIWebView *)standardView;
-(void)browserBack;
-(void)browserForward;
-(BOOL)browserCanGoBack;
-(BOOL)browserCanGoForward;
-(void)browserRefresh;
-(JMContentOptimizer *)optimizer;
-(void)setShowsOptimalContent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)unloadContentView;
-(void)layoutContentView;
-(UIView *)i_contentView;
-(void)setI_contentView:(UIView *)arg1 ;
-(void)setStandardView:(UIWebView *)arg1 ;
-(UIView *)optimalView;
-(void)setOptimalView:(UIView *)arg1 ;
-(void)destroyOptimalView;
-(void)createStandardView;
-(void)destroyStandardView;
-(void)createOptimalView;
-(void)loadOptimalView;
-(void)loadStandardView;
-(BOOL)tryToNotifyOptimizerWithSelector:(SEL)arg1 ;
-(void)browserStopLoading;
-(void)setDelegate:(NSObject*<JMOptimalContentCoordinatorDelegate>)arg1 ;
-(NSObject*<JMOptimalContentCoordinatorDelegate>)delegate;
-(UIView *)view;
-(id)initWithDelegate:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end
