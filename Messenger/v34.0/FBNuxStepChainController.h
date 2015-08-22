/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBNUXWindowDelegate.h>
#import <Messenger/FBNUXViewControllerDelegate.h>

@protocol FBNuxStepChainControllerDelegate, FBNuxStep, FBNuxStepViewController;
@class UIGestureRecognizer, FBPopoverController, UIViewController, UIView, FBNUXWindow, FBKVOController, NSMutableArray, UINavigationController, FBFlyUpViewController, NSString;

@interface FBNuxStepChainController : NSObject <FBPopoverControllerDelegate, FBNUXWindowDelegate, FBNUXViewControllerDelegate> {

	UIGestureRecognizer* _fullscreenTapRecognizer;
	BOOL _didCancel;
	unsigned long long _indexOfCurrentStep;
	id<FBNuxStepChainControllerDelegate> _delegate;
	id<FBNuxStep> _currentStep;
	FBPopoverController* _popoverController;
	UIViewController*<FBNuxStepViewController> _stepViewController;
	UIView* _nuxView;
	FBNUXWindow* _window;
	FBKVOController* _KVOController;
	unsigned long long _currentPageIndicatorIndex;
	NSMutableArray* _stepChain;
	NSMutableArray* _subSteps;
	UINavigationController* _navigationController;
	FBFlyUpViewController* _flyUpViewController;

}

@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) unsigned long long indexOfCurrentStep;                                    //@synthesize indexOfCurrentStep=_indexOfCurrentStep - In the implementation block
@property (assign,nonatomic,__weak) id<FBNuxStepChainControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBNuxStep> currentStep;                                                  //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,retain) FBPopoverController * popoverController;                                    //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,retain) UIViewController*<FBNuxStepViewController> stepViewController;              //@synthesize stepViewController=_stepViewController - In the implementation block
@property (nonatomic,retain) UIView * nuxView;                                                           //@synthesize nuxView=_nuxView - In the implementation block
@property (nonatomic,retain) FBNUXWindow * window;                                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) FBKVOController * KVOController;                                            //@synthesize KVOController=_KVOController - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageIndicatorIndex;                               //@synthesize currentPageIndicatorIndex=_currentPageIndicatorIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * stepChain;                                                 //@synthesize stepChain=_stepChain - In the implementation block
@property (nonatomic,retain) NSMutableArray * subSteps;                                                  //@synthesize subSteps=_subSteps - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) BOOL didCancel;                                                             //@synthesize didCancel=_didCancel - In the implementation block
@property (nonatomic,retain) FBFlyUpViewController * flyUpViewController;                                //@synthesize flyUpViewController=_flyUpViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(BOOL)nuxWindow:(id)arg1 shouldPassThroughHitTest:(CGPoint)arg2 event:(id)arg3 ;
-(void)nuxViewControllerWasDismissedForward:(id)arg1 ;
-(void)nuxViewControllerWasDismissedBackward:(id)arg1 ;
-(void)_transitionToStep:(id)arg1 ;
-(void)_notifyDelegateOfTransition;
-(void)arrowPositionForCurrentStepInWindowDidChange;
-(void)_unobserveCurrentStep;
-(void)_observeCurrentStep;
-(id)_substepsFromStep:(id)arg1 ;
-(void)_insertStepOrSubStepsForStep:(id)arg1 ;
-(void)_unravelStepsAndSubSteps;
-(void)_notifyDelegateOfCancel;
-(void)_onTapWindow:(id)arg1 ;
-(void)endNUXAnimated:(BOOL)arg1 ;
-(id)_nextStep;
-(void)_makeWindow;
-(id)_viewControllerForStep:(id)arg1 ;
-(id)_freshPopoverControllerForStep:(id)arg1 ;
-(void)setCurrentStep:(id<FBNuxStep>)arg1 ;
-(void)_configureForCurrentStep;
-(void)_closeNUX;
-(void)_updateStepCountIndicatorForward:(BOOL)arg1 ;
-(void)_cleanUpPresentingControllers;
-(void)_openNextStep;
-(void)_openPreviousStep;
-(void)_onTextEditingEvent:(id)arg1 ;
-(void)nuxViewControllerWasCanceled;
-(void)showNUX;
-(id)initWithFirstStep:(id)arg1 ;
-(void)endNUX;
-(unsigned long long)indexOfCurrentStep;
-(UIViewController*<FBNuxStepViewController>)stepViewController;
-(void)setStepViewController:(UIViewController*<FBNuxStepViewController>)arg1 ;
-(UIView *)nuxView;
-(void)setNuxView:(UIView *)arg1 ;
-(FBKVOController *)KVOController;
-(void)setKVOController:(FBKVOController *)arg1 ;
-(unsigned long long)currentPageIndicatorIndex;
-(void)setCurrentPageIndicatorIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stepChain;
-(void)setStepChain:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subSteps;
-(void)setSubSteps:(NSMutableArray *)arg1 ;
-(void)setDidCancel:(BOOL)arg1 ;
-(FBFlyUpViewController *)flyUpViewController;
-(void)setFlyUpViewController:(FBFlyUpViewController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBNuxStepChainControllerDelegate>)arg1 ;
-(FBNUXWindow *)window;
-(id<FBNuxStepChainControllerDelegate>)delegate;
-(void)setWindow:(FBNUXWindow *)arg1 ;
-(UINavigationController *)navigationController;
-(void)_cleanup;
-(BOOL)isVisible;
-(void)setPopoverController:(FBPopoverController *)arg1 ;
-(FBPopoverController *)popoverController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(BOOL)didCancel;
-(id<FBNuxStep>)currentStep;
@end
