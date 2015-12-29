//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, SKPProgressHud, UIWebView;

@interface SKPMSAView : UIView <UIWebViewDelegate>
{
    _Bool _progressIndicatorVisible;
    UIWebView *_webView;
    SKPProgressHud *_progressHud;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) SKPProgressHud *progressHud; // @synthesize progressHud=_progressHud;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool progressIndicatorVisible; // @synthesize progressIndicatorVisible=_progressIndicatorVisible;
- (void).cxx_destruct;
- (void)loadRequest:(id)arg1;
- (void)stopLoading;
- (_Bool)goBack;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) __weak id <UIWebViewDelegate> delegate;
- (void)setupWebView;
- (void)setupAppearance;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

