/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/GADActiveViewGMSGHandlerDelegate.h>
#import <SportyTrader/GADAdViewDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableSet, GADAdViewDelegate, GADAdView, GADActiveViewGMSGHandler, NSMapTable, GADSDKCoreGMSGHandler, NSString;

@interface GADSDKCoreWebView : NSObject <GADActiveViewGMSGHandlerDelegate, GADAdViewDelegate> {

	long long _state;
	BOOL _hasSDKCoreLoadedAtLeastOnce;
	NSMutableArray* _pendingJSCommands;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _commandQueue;
	NSMutableSet* _SDKCoreObservers;
	GADAdViewDelegate* _adViewDelegate;
	GADAdView* _adView;
	GADActiveViewGMSGHandler* _activeViewGMSGHandler;
	NSMapTable* _activeViewObservers;
	NSMutableSet* _runningActiveViewObserverIdentifiers;
	GADSDKCoreGMSGHandler* _SDKCoreGMSGHandler;

}

@property (assign) long long state; 
@property (assign) BOOL hasSDKCoreLoadedAtLeastOnce; 
@property (setter=DKCoreGMSGHandler,nonatomic,retain) GADSDKCoreGMSGHandler * SDKCoreGMSGHandler;              //@synthesize SDKCoreGMSGHandler=_SDKCoreGMSGHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeViewGMSGHandler:(id)arg1 didReceiveVisibilityNotification:(BOOL)arg2 forActiveViewID:(unsigned long long)arg3 ;
-(void)activeViewGMSGHandler:(id)arg1 didReceiveUntrackNotificationForActiveViewID:(unsigned long long)arg2 ;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(GADSDKCoreGMSGHandler *)SDKCoreGMSGHandler;
-(void)refreshSDKCoreAndNotifyObserver:(id)arg1 ;
-(BOOL)isActiveViewRunning;
-(void)enqueueJavaScriptCommand:(id)arg1 ;
-(BOOL)hasSDKCoreLoadedAtLeastOnce;
-(void)addObserverForOneTimeNotification:(id)arg1 ;
-(void)postJSNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)notifyAllObserversOnlyOnceThatSDKCoreRequestIsFinished;
-(void)setHasSDKCoreLoadedAtLeastOnce:(BOOL)arg1 ;
-(void)dispatchPendingJavaScriptCommands;
-(void)setActiveViewObserver:(id)arg1 forActiveViewID:(unsigned long long)arg2 ;
-(void)removeActiveViewObserverForActiveViewID:(unsigned long long)arg1 ;
-(void)clearAllActiveViewInstances;
-(void)setSDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 ;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end
