/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MNGAbstractAdController.h>
#import <SolitaireFree/MNGMRAIDViewDelegate.h>

@class MNGInterstitialMRAIDView, MNGEventHandler, NSString;

@interface MNGMRAIDAdController : MNGAbstractAdController <MNGMRAIDViewDelegate> {

	BOOL _iSMraidContentReady;
	MNGInterstitialMRAIDView* _mraidView;
	MNGEventHandler* _eventHandler;

}

@property (nonatomic,retain) MNGInterstitialMRAIDView * mraidView;              //@synthesize mraidView=_mraidView - In the implementation block
@property (assign,nonatomic) BOOL iSMraidContentReady;                          //@synthesize iSMraidContentReady=_iSMraidContentReady - In the implementation block
@property (nonatomic,retain) MNGEventHandler * eventHandler;                    //@synthesize eventHandler=_eventHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeButtonHandler;
-(id)initWithAdvertisement:(id)arg1 delegate:(id)arg2 ;
-(void)presentControllerAnimated:(id)arg1 ;
-(void)createCloseButton;
-(void)renderToScreen;
-(BOOL)isReadyToDisplay;
-(void)layoutCloseButtons;
-(void)setMraidView:(MNGInterstitialMRAIDView *)arg1 ;
-(MNGInterstitialMRAIDView *)mraidView;
-(BOOL)iSMraidContentReady;
-(void)setISMraidContentReady:(BOOL)arg1 ;
-(void)mraidViewAdReady:(id)arg1 ;
-(void)mraidViewAdFailed:(id)arg1 ;
-(void)mraidViewNavigate:(id)arg1 withURL:(id)arg2 ;
-(BOOL)mraidViewShouldResize:(id)arg1 toPosition:(CGRect)arg2 allowOffscreen:(BOOL)arg3 ;
-(void)mraidServiceCreateCalendarEventWithEventJSON:(id)arg1 ;
-(void)mraidServicePlayVideoWithUrlString:(id)arg1 ;
-(void)mraidServiceOpenBrowserWithUrlString:(id)arg1 ;
-(void)mraidServiceStorePictureWithUrlString:(id)arg1 ;
-(void)forceToOrientation:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setEventHandler:(MNGEventHandler *)arg1 ;
-(MNGEventHandler *)eventHandler;
@end
