/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNViewController.h>
#import <Twitter/T1MomentCapsuleViewControllerDelegate.h>
#import <Twitter/T1MomentCapsuleViewControllerDataSource.h>
#import <Twitter/TFNPagingViewControllerDataSource.h>
#import <Twitter/TFNPagingViewControllerDelegate.h>
#import <Twitter/T1MomentCapsuleOverlayViewControllerDataSource.h>
#import <Twitter/T1MomentCapsuleOverlayViewControllerDelegate.h>
#import <Twitter/TFNTwitterMomentsCapsuleDataManagerListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TFNTwitterMomentsCapsuleDataManager;
@class TFNPagingViewController, T1MomentCapsuleViewController, T1MomentCapsuleOverlayViewController, UIView, UIScrollView, TFNTwitterAccount, NSArray, UIPanGestureRecognizer, TFNTwitterMomentCapsuleScribeDelegate, NSString;

@interface T1MomentCapsulePivotViewController : TFNViewController <T1MomentCapsuleViewControllerDelegate, T1MomentCapsuleViewControllerDataSource, TFNPagingViewControllerDataSource, TFNPagingViewControllerDelegate, T1MomentCapsuleOverlayViewControllerDataSource, T1MomentCapsuleOverlayViewControllerDelegate, TFNTwitterMomentsCapsuleDataManagerListener, UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	TFNPagingViewController* _pagingViewController;
	id<TFNTwitterMomentsCapsuleDataManager> _momentCapsuleDataManager;
	id<TFNTwitterMomentsCapsuleDataManager> _nextMomentCapsuleDataManager;
	T1MomentCapsuleViewController* _currentCapsuleViewController;
	T1MomentCapsuleViewController* _nextCapsuleViewController;
	T1MomentCapsuleOverlayViewController* _overlayViewController;
	UIView* _backgroundView;
	UIView* _placeholderView;
	long long _placeholderOrientation;
	UIScrollView* _panScrollView;
	TFNTwitterAccount* _account;
	NSArray* _pivotList;
	UIPanGestureRecognizer* _panGestureRecognizer;
	TFNTwitterMomentCapsuleScribeDelegate* _scribeDelegate;

}

@property (nonatomic,retain) TFNPagingViewController * pagingViewController;                                    //@synthesize pagingViewController=_pagingViewController - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentsCapsuleDataManager> momentCapsuleDataManager;                  //@synthesize momentCapsuleDataManager=_momentCapsuleDataManager - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentsCapsuleDataManager> nextMomentCapsuleDataManager;              //@synthesize nextMomentCapsuleDataManager=_nextMomentCapsuleDataManager - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleViewController * currentCapsuleViewController;                      //@synthesize currentCapsuleViewController=_currentCapsuleViewController - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleViewController * nextCapsuleViewController;                         //@synthesize nextCapsuleViewController=_nextCapsuleViewController - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleOverlayViewController * overlayViewController;                      //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;                                                          //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) long long placeholderOrientation;                                                  //@synthesize placeholderOrientation=_placeholderOrientation - In the implementation block
@property (nonatomic,retain) UIScrollView * panScrollView;                                                      //@synthesize panScrollView=_panScrollView - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * pivotList;                                                               //@synthesize pivotList=_pivotList - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                     //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) TFNTwitterMomentCapsuleScribeDelegate * scribeDelegate;                            //@synthesize scribeDelegate=_scribeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tfn_presentFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)primaryOverlayThemeForOverlayViewController:(id)arg1 ;
-(id)secondaryOverlayThemeForOverlayViewController:(id)arg1 ;
-(double)progressBarValueForOverlayViewController:(id)arg1 ;
-(double)maskingPercentageForOverylayViewController:(id)arg1 ;
-(BOOL)shouldShowBoltButtonForOverylayViewController:(id)arg1 ;
-(BOOL)shouldShowActivityIndicatorForOverylayViewController:(id)arg1 ;
-(BOOL)shouldShowProgressBarForOverylayViewController:(id)arg1 ;
-(double)soundButtonAlphaForOverylayViewController:(id)arg1 ;
-(BOOL)soundOnForOverylayViewController:(id)arg1 ;
-(void)overlayViewControllerDidPressCloseButton:(id)arg1 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)dataManager:(id)arg1 didFetchCapsulePivotList:(id)arg2 ;
-(id)initWithMomentID:(id)arg1 account:(id)arg2 ;
-(long long)numberOfPagesInPagingViewController:(id)arg1 ;
-(id)pagingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(TFNPagingViewController *)pagingViewController;
-(void)pagingViewController:(id)arg1 didUpdateVisiblePercent:(double)arg2 onPageAtIndex:(long long)arg3 ;
-(void)setPagingViewController:(TFNPagingViewController *)arg1 ;
-(id)initWithMomentCapsuleDataManager:(id)arg1 account:(id)arg2 scribeDelegate:(id)arg3 ;
-(T1MomentCapsuleViewController *)currentCapsuleViewController;
-(T1MomentCapsuleViewController *)nextCapsuleViewController;
-(void)setPanScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)panScrollView;
-(void)setOverlayViewController:(T1MomentCapsuleOverlayViewController *)arg1 ;
-(id<TFNTwitterMomentsCapsuleDataManager>)momentCapsuleDataManager;
-(long long)placeholderOrientation;
-(void)setPlaceholderOrientation:(long long)arg1 ;
-(void)setNextCapsuleViewController:(T1MomentCapsuleViewController *)arg1 ;
-(void)setNextMomentCapsuleDataManager:(id<TFNTwitterMomentsCapsuleDataManager>)arg1 ;
-(void)setPivotList:(NSArray *)arg1 ;
-(void)setCurrentCapsuleViewController:(T1MomentCapsuleViewController *)arg1 ;
-(id<TFNTwitterMomentsCapsuleDataManager>)nextMomentCapsuleDataManager;
-(void)setMomentCapsuleDataManager:(id<TFNTwitterMomentsCapsuleDataManager>)arg1 ;
-(TFNTwitterMomentCapsuleScribeDelegate *)scribeDelegate;
-(NSArray *)pivotList;
-(void)_setupPivotForCapsule:(id)arg1 ;
-(void)_performPivot;
-(void)capsuleViewController:(id)arg1 didShowPageAtIndex:(long long)arg2 ofCount:(long long)arg3 ;
-(void)capsuleViewController:(id)arg1 didPivotToCapsule:(id)arg2 ;
-(id)pivotCapsulesForCapsuleViewController:(id)arg1 ;
-(void)setScribeDelegate:(TFNTwitterMomentCapsuleScribeDelegate *)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)viewDidLoad;
-(void)_resetState;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(T1MomentCapsuleOverlayViewController *)overlayViewController;
@end
