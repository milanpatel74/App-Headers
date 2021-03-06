/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Gumtree/GADIntermitting.h>

@protocol GADOverlayPresenting;
@class GADIntermission, GADSlot, NSString;

@interface GADViewController : UIViewController <GADIntermitting> {

	id _appForegroundObserver;
	BOOL _viewDidAppear;
	GADIntermission* _intermission;
	unsigned long long _supportedInterfaceOrientations;
	GADSlot* _slot;
	GADViewController* _retainCycle;
	id<GADOverlayPresenting> _presenter;
	/*^block*/id _dismissalCompletion;

}

@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic,__weak) GADSlot * slot;                                          //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) GADViewController * retainCycle;                                //@synthesize retainCycle=_retainCycle - In the implementation block
@property (nonatomic,retain) id<GADOverlayPresenting> presenter;                             //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                           //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear;                                             //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GADIntermission * intermission;                               //@synthesize intermission=_intermission - In the implementation block
-(void)relinquishScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)recordDismissal;
-(GADIntermission *)intermission;
-(void)addToCurrentIntermission;
-(void)finishDismissal;
-(void)setRetainCycle:(GADViewController *)arg1 ;
-(void)finishAppearing;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldDismissOnApplicationEnteringForeground;
-(void)viewChangedToOrientation:(long long)arg1 ;
-(GADViewController *)retainCycle;
-(id)dismissalCompletion;
-(void)setDismissalCompletion:(id)arg1 ;
-(GADSlot *)slot;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)commonInit;
-(void)setSupportedOrientations:(unsigned long long)arg1 ;
-(id<GADOverlayPresenting>)presenter;
-(void)setPresenter:(id<GADOverlayPresenting>)arg1 ;
-(void)setSlot:(GADSlot *)arg1 ;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(BOOL)viewDidAppear;
@end

