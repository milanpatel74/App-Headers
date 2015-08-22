/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBFlipControllerDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol UIViewControllerContextTransitioning, FBFlipViewControllerDelegate;
@class UIViewController, UIView, UITapGestureRecognizer, FBFlipController, NSString;

@interface FBFlipViewController : UIViewController <FBFlipControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	UIViewController* _contentViewController;
	UIView* _overlayView;
	UITapGestureRecognizer* _overlayTapRecognizer;
	BOOL _isPresenting;
	FBFlipController* _flipController;
	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _shouldDisableAutomaticHandlingOfKeyboardAnimations;
	id<FBFlipViewControllerDelegate> _delegate;
	UIView* _fromView;
	double _backgroundAlpha;
	unsigned long long _allowedInterfaceOrientations;
	CGSize _contentSize;
	CGPoint _initialPosition;

}

@property (assign,nonatomic,__weak) id<FBFlipViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * fromView;                                                    //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                   //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGPoint initialPosition;                                              //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableAutomaticHandlingOfKeyboardAnimations;              //@synthesize shouldDisableAutomaticHandlingOfKeyboardAnimations=_shouldDisableAutomaticHandlingOfKeyboardAnimations - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                                               //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long allowedInterfaceOrientations;                      //@synthesize allowedInterfaceOrientations=_allowedInterfaceOrientations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dimmingViewForFlipController:(id)arg1 ;
-(void)flipController:(id)arg1 prepareSnapshotView:(id)arg2 ;
-(void)didPresentFlipController:(id)arg1 ;
-(void)didDismissFlipController:(id)arg1 ;
-(void)setShouldDisableAutomaticHandlingOfKeyboardAnimations:(BOOL)arg1 ;
-(BOOL)shouldDisableAutomaticHandlingOfKeyboardAnimations;
-(void)_overlayTapped;
-(void)_animatePresentingTransition:(id)arg1 ;
-(void)_animateDismissingTransition:(id)arg1 ;
-(unsigned long long)allowedInterfaceOrientations;
-(void)setAllowedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBFlipViewControllerDelegate>)arg1 ;
-(id<FBFlipViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(CGSize)contentSize;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setContentSize:(CGSize)arg1 ;
-(UIView *)fromView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setFromView:(UIView *)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(double)backgroundAlpha;
-(CGPoint)initialPosition;
-(void)setInitialPosition:(CGPoint)arg1 ;
@end
