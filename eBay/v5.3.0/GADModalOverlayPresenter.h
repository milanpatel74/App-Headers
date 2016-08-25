/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADOverlayPresenting.h>

@protocol NSObject;
@class GADViewController, NSString;

@interface GADModalOverlayPresenter : NSObject <GADOverlayPresenting> {

	GADViewController* _presentedViewController;
	BOOL _statusBarWasHidden;
	id<NSObject> _appForegroundObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) GADViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (getter=isReadyToPresent,nonatomic,readonly) BOOL readyToPresent; 
-(void)hideStatusBar;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)appDidEnterForeground:(id)arg1 ;
-(void)updateViewControllerOrientation:(id)arg1 ;
-(void)forceUpdateViewControllerOrientation:(id)arg1 ;
-(void)setNeedsUpdateOrientation;
-(void)dealloc;
-(GADViewController *)presentedViewController;
-(id)presentationViewController;
-(void)setPresentedViewController:(GADViewController *)arg1 ;
-(BOOL)isReadyToPresent;
@end
