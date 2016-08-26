/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBEventListener.h>

@protocol FBApplicationSendEventHookable, FBWebRTCCallStatusBarViewControllerDelegate;
@class FBWebRTCCallStatusBarView, UIApplication, NSString;

@interface FBWebRTCCallStatusBarViewController : UIViewController <FBViewerContextClassProvidable, FBEventListener> {

	FBWebRTCCallStatusBarView* _callStatusBarView;
	BOOL _viewIsOnScreen;
	UIApplication*<FBApplicationSendEventHookable> _application;
	id<FBWebRTCCallStatusBarViewControllerDelegate> _delegate;
	NSString* _lastStatus;

}

@property (nonatomic,copy) NSString * lastStatus;                                                          //@synthesize lastStatus=_lastStatus - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallStatusBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)willSendEvent:(id)arg1 ;
-(void)didSendEvent:(id)arg1 ;
-(void)_applicationWillEnterBackground;
-(void)_applicationEnteredForeground;
-(NSString *)lastStatus;
-(void)setLastStatus:(NSString *)arg1 ;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<FBWebRTCCallStatusBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCCallStatusBarViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setStatus:(id)arg1 ;
@end
