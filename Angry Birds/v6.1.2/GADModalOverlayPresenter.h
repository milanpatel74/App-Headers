/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADOverlayPresenting.h>

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
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hideStatusBar;
-(void)appDidEnterForeground:(id)arg1 ;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(GADViewController *)presentedViewController;
-(id)presentationViewController;
-(void)setPresentedViewController:(GADViewController *)arg1 ;
-(BOOL)isReadyToPresent;
@end
