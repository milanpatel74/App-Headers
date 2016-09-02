/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Reddit/MPAdDestinationDisplayAgentDelegate.h>

@protocol MPAdWebViewAgentDelegate, MPAdAlertManagerProtocol;
@class MPAdConfiguration, MPAdDestinationDisplayAgent, MPAdWebView, MPUserInteractionGestureRecognizer, NSString;

@interface MPAdWebViewAgent : NSObject <UIGestureRecognizerDelegate, UIWebViewDelegate, MPAdDestinationDisplayAgentDelegate> {

	BOOL _shouldHandleRequests;
	BOOL _userInteractedWithWebView;
	MPAdConfiguration* _configuration;
	id<MPAdWebViewAgentDelegate> _delegate;
	MPAdDestinationDisplayAgent* _destinationDisplayAgent;
	MPAdWebView* _view;
	id<MPAdAlertManagerProtocol> _adAlertManager;
	MPUserInteractionGestureRecognizer* _userInteractionRecognizer;

}

@property (nonatomic,retain) MPAdConfiguration * configuration;                                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MPAdDestinationDisplayAgent * destinationDisplayAgent;                       //@synthesize destinationDisplayAgent=_destinationDisplayAgent - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleRequests;                                                   //@synthesize shouldHandleRequests=_shouldHandleRequests - In the implementation block
@property (nonatomic,retain) id<MPAdAlertManagerProtocol> adAlertManager;                                 //@synthesize adAlertManager=_adAlertManager - In the implementation block
@property (assign,nonatomic) BOOL userInteractedWithWebView;                                              //@synthesize userInteractedWithWebView=_userInteractedWithWebView - In the implementation block
@property (nonatomic,retain) MPUserInteractionGestureRecognizer * userInteractionRecognizer;              //@synthesize userInteractionRecognizer=_userInteractionRecognizer - In the implementation block
@property (nonatomic,retain) MPAdWebView * view;                                                          //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<MPAdWebViewAgentDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)userInteractedWithWebView;
-(id)viewControllerForPresentingModalView;
-(id)initWithAdWebViewFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)setShouldHandleRequests:(BOOL)arg1 ;
-(id)adConfiguration;
-(void)displayAgentWillPresentModal;
-(void)displayAgentWillLeaveApplication;
-(void)displayAgentDidDismissModal;
-(void)handleInteraction:(id)arg1 ;
-(MPUserInteractionGestureRecognizer *)userInteractionRecognizer;
-(void)setUserInteractionRecognizer:(MPUserInteractionGestureRecognizer *)arg1 ;
-(MPAdDestinationDisplayAgent *)destinationDisplayAgent;
-(BOOL)shouldHandleRequests;
-(void)setDestinationDisplayAgent:(MPAdDestinationDisplayAgent *)arg1 ;
-(void)setAdAlertManager:(id<MPAdAlertManagerProtocol>)arg1 ;
-(void)setUserInteractedWithWebView:(BOOL)arg1 ;
-(id<MPAdAlertManagerProtocol>)adAlertManager;
-(void)initAdAlertManager;
-(void)performActionForMoPubSpecificURL:(id)arg1 ;
-(BOOL)shouldIntercept:(id)arg1 navigationType:(long long)arg2 ;
-(void)interceptURL:(id)arg1 ;
-(void)forceRedraw;
-(id)viewControllerForPresentingMailVC;
-(void)adAlertManagerDidTriggerAlert:(id)arg1 ;
-(void)loadConfiguration:(id)arg1 ;
-(void)invokeJavaScriptForEvent:(unsigned long long)arg1 ;
-(void)disableRequestHandling;
-(void)enableRequestHandling;
-(void)setDelegate:(id<MPAdWebViewAgentDelegate>)arg1 ;
-(void)dealloc;
-(id<MPAdWebViewAgentDelegate>)delegate;
-(MPAdWebView *)view;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setView:(MPAdWebView *)arg1 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(MPAdConfiguration *)configuration;
@end
