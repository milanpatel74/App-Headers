/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UINavigationControllerDelegate, WAPercentDrivenInteractiveTransitioning, OS_dispatch_group, UIViewControllerAnimatedTransitioning;
@class UIScreenEdgePanGestureRecognizer, NSObject, NSString;

@interface WANavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	id<UINavigationControllerDelegate> _originalDelegate;
	long long _lastAnimationControllerOperation;
	UIScreenEdgePanGestureRecognizer* _customPopGestureRecognizer;
	id<WAPercentDrivenInteractiveTransitioning> _interactionController;
	NSObject*<OS_dispatch_group> _interactiveTransitionDispatchGroup;
	BOOL _interactiveTransitionInProgress;
	BOOL _customInteractivePopInProgress;
	id<UIViewControllerAnimatedTransitioning> _transitionController;

}

@property (nonatomic,readonly) id<UIViewControllerAnimatedTransitioning> transitionController;              //@synthesize transitionController=_transitionController - In the implementation block
@property (nonatomic,readonly) BOOL customInteractivePopInProgress;                                         //@synthesize customInteractivePopInProgress=_customInteractivePopInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useNavigationBarWithBlur;
+(id)defaultInteractionController;
+(void)initialize;
-(void)popToMainViewControllerAnimated:(BOOL)arg1 ;
-(void)handlePopAnimationScreenEdgePanGestureRecognizer:(id)arg1 ;
-(BOOL)beginCustomInteractivePopWithGestureRecognizer:(id)arg1 performBeforePop:(/*^block*/id)arg2 ;
-(BOOL)shouldBeginCustomInteractivePopAnimationWithGestureRecognizer:(id)arg1 ;
-(void)handleInteractiveTransitionGesture:(id)arg1 ;
-(void)didCompleteCustomInteractiveTransition;
-(void)didCancelCustomInteractiveTransition;
-(void)performBlockAfterAnimationBegins:(/*^block*/id)arg1 ;
-(id)interactiveScreenEdgePopTransition;
-(void)prepareForInteractivePushWithGestureRecognizer:(id)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)transitionController;
-(BOOL)customInteractivePopInProgress;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
@end

