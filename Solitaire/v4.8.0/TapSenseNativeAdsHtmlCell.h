/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol TapSenseNativeAdsHtmlCellDelegate;
@class UIWebView, TSAdUnit, NSString;

@interface TapSenseNativeAdsHtmlCell : UITableViewCell <UIWebViewDelegate> {

	UIWebView* _adView;
	TSAdUnit* _nativeAd;
	id<TapSenseNativeAdsHtmlCellDelegate> _delegate;

}

@property (nonatomic,retain) UIWebView * adView;                                                 //@synthesize adView=_adView - In the implementation block
@property (nonatomic,retain) TSAdUnit * nativeAd;                                                //@synthesize nativeAd=_nativeAd - In the implementation block
@property (assign,nonatomic,__weak) id<TapSenseNativeAdsHtmlCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdView:(UIWebView *)arg1 ;
-(void)setNativeAd:(TSAdUnit *)arg1 ;
-(TSAdUnit *)nativeAd;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 frame:(CGRect)arg3 ;
-(void)setDelegate:(id<TapSenseNativeAdsHtmlCellDelegate>)arg1 ;
-(void)dealloc;
-(id<TapSenseNativeAdsHtmlCellDelegate>)delegate;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(UIWebView *)adView;
@end
