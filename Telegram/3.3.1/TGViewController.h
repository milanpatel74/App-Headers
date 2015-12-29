//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TGViewControllerNavigationBarAppearance.h"
#import "UIPopoverControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, TGAutorotationLock, TGNavigationController, TGPopoverController, UIBarButtonItem, UINavigationItem, UIView;

@interface TGViewController : UIViewController <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, TGViewControllerNavigationBarAppearance>
{
    _Bool _hatTargetNavigationItem;
    id <SDisposable> _sizeClassDisposable;
    double _currentSizeChangeDuration;
    _Bool _doNotFlipIfRTL;
    _Bool _viewControllerIsChangingInterfaceOrientation;
    _Bool _viewControllerHasEverAppeared;
    _Bool _viewControllerIsAnimatingAppearanceTransition;
    _Bool _adjustControllerInsetWhenStartingRotation;
    _Bool _dismissPresentedControllerWhenRemovedFromNavigationStack;
    _Bool _viewControllerIsAppearing;
    _Bool _viewControllerIsDisappearing;
    _Bool _navigationBarShouldBeHidden;
    _Bool _autoManageStatusBarBackground;
    _Bool _automaticallyManageScrollViewInsets;
    _Bool _ignoreKeyboardWhenAdjustingScrollViewInsets;
    _Bool _isFirstInStack;
    int _style;
    NSMutableArray *_associatedWindowStack;
    TGPopoverController *_associatedPopoverController;
    double _controllerStatusBarHeight;
    double _additionalNavigationBarHeight;
    NSArray *_scrollViewsForAutomaticInsetsAdjustment;
    UIViewController *_customParentViewController;
    TGNavigationController *_customNavigationController;
    long long _currentSizeClass;
    UIView *_viewControllerStatusBarBackgroundView;
    long long _viewControllerRotatingFromOrientation;
    UINavigationItem *_targetNavigationItem;
    UIViewController *_targetNavigationTitleController;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_rightBarButtonItem;
    NSString *_titleText;
    UIView *_titleView;
    TGAutorotationLock *_autorotationLock;
    struct UIEdgeInsets _controllerCleanInset;
    struct UIEdgeInsets _controllerInset;
    struct UIEdgeInsets _controllerScrollInset;
    struct UIEdgeInsets _parentInsets;
    struct UIEdgeInsets _explicitTableInset;
    struct UIEdgeInsets _explicitScrollIndicatorInset;
}

+ (int)preferredAnimationCurve;
+ (void)userInteractionEnableTimerEvent;
+ (_Bool)useExperimentalRTL;
+ (void)setUseExperimentalRTL:(_Bool)arg1;
+ (void)disableUserInteractionFor:(double)arg1;
+ (void)enableTimerEvent;
+ (void)attemptAutorotation;
+ (_Bool)autorotationAllowed;
+ (void)disableAutorotationFor:(double)arg1 reentrant:(_Bool)arg2;
+ (void)disableAutorotationFor:(double)arg1;
+ (void)enableAutorotation;
+ (void)disableAutorotation;
+ (_Bool)hasLargeScreen;
+ (_Bool)isWidescreen;
+ (struct CGSize)screenSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)screenSize:(long long)arg1;
+ (id)titleTextColorForStyle:(int)arg1;
+ (id)titleSubtitleFontForStyle:(int)arg1 landscape:(_Bool)arg2;
+ (id)titleTitleFontForStyle:(int)arg1 landscape:(_Bool)arg2;
+ (id)titleFontForStyle:(int)arg1 landscape:(_Bool)arg2;
@property(retain, nonatomic) TGAutorotationLock *autorotationLock; // @synthesize autorotationLock=_autorotationLock;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(nonatomic) __weak UIViewController *targetNavigationTitleController; // @synthesize targetNavigationTitleController=_targetNavigationTitleController;
@property(nonatomic) __weak UINavigationItem *targetNavigationItem; // @synthesize targetNavigationItem=_targetNavigationItem;
@property(nonatomic) long long viewControllerRotatingFromOrientation; // @synthesize viewControllerRotatingFromOrientation=_viewControllerRotatingFromOrientation;
@property(retain, nonatomic) UIView *viewControllerStatusBarBackgroundView; // @synthesize viewControllerStatusBarBackgroundView=_viewControllerStatusBarBackgroundView;
@property(readonly, nonatomic) long long currentSizeClass; // @synthesize currentSizeClass=_currentSizeClass;
@property(nonatomic) _Bool isFirstInStack; // @synthesize isFirstInStack=_isFirstInStack;
@property(retain, nonatomic) TGNavigationController *customNavigationController; // @synthesize customNavigationController=_customNavigationController;
@property(nonatomic) __weak UIViewController *customParentViewController; // @synthesize customParentViewController=_customParentViewController;
@property(retain, nonatomic) NSArray *scrollViewsForAutomaticInsetsAdjustment; // @synthesize scrollViewsForAutomaticInsetsAdjustment=_scrollViewsForAutomaticInsetsAdjustment;
@property(nonatomic) _Bool ignoreKeyboardWhenAdjustingScrollViewInsets; // @synthesize ignoreKeyboardWhenAdjustingScrollViewInsets=_ignoreKeyboardWhenAdjustingScrollViewInsets;
@property(nonatomic) _Bool automaticallyManageScrollViewInsets; // @synthesize automaticallyManageScrollViewInsets=_automaticallyManageScrollViewInsets;
@property(nonatomic) _Bool autoManageStatusBarBackground; // @synthesize autoManageStatusBarBackground=_autoManageStatusBarBackground;
@property(nonatomic) _Bool navigationBarShouldBeHidden; // @synthesize navigationBarShouldBeHidden=_navigationBarShouldBeHidden;
@property(nonatomic) double additionalNavigationBarHeight; // @synthesize additionalNavigationBarHeight=_additionalNavigationBarHeight;
@property(nonatomic) struct UIEdgeInsets explicitScrollIndicatorInset; // @synthesize explicitScrollIndicatorInset=_explicitScrollIndicatorInset;
@property(nonatomic) struct UIEdgeInsets explicitTableInset; // @synthesize explicitTableInset=_explicitTableInset;
@property(nonatomic) struct UIEdgeInsets parentInsets; // @synthesize parentInsets=_parentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets controllerScrollInset; // @synthesize controllerScrollInset=_controllerScrollInset;
@property(readonly, nonatomic) struct UIEdgeInsets controllerInset; // @synthesize controllerInset=_controllerInset;
@property(readonly, nonatomic) struct UIEdgeInsets controllerCleanInset; // @synthesize controllerCleanInset=_controllerCleanInset;
@property(readonly, nonatomic) double controllerStatusBarHeight; // @synthesize controllerStatusBarHeight=_controllerStatusBarHeight;
@property(nonatomic) _Bool viewControllerIsDisappearing; // @synthesize viewControllerIsDisappearing=_viewControllerIsDisappearing;
@property(nonatomic) _Bool viewControllerIsAppearing; // @synthesize viewControllerIsAppearing=_viewControllerIsAppearing;
@property(nonatomic) _Bool dismissPresentedControllerWhenRemovedFromNavigationStack; // @synthesize dismissPresentedControllerWhenRemovedFromNavigationStack=_dismissPresentedControllerWhenRemovedFromNavigationStack;
@property(nonatomic) _Bool adjustControllerInsetWhenStartingRotation; // @synthesize adjustControllerInsetWhenStartingRotation=_adjustControllerInsetWhenStartingRotation;
@property(nonatomic) _Bool viewControllerIsAnimatingAppearanceTransition; // @synthesize viewControllerIsAnimatingAppearanceTransition=_viewControllerIsAnimatingAppearanceTransition;
@property(nonatomic) _Bool viewControllerHasEverAppeared; // @synthesize viewControllerHasEverAppeared=_viewControllerHasEverAppeared;
@property(nonatomic) _Bool viewControllerIsChangingInterfaceOrientation; // @synthesize viewControllerIsChangingInterfaceOrientation=_viewControllerIsChangingInterfaceOrientation;
@property(nonatomic) _Bool doNotFlipIfRTL; // @synthesize doNotFlipIfRTL=_doNotFlipIfRTL;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) TGPopoverController *associatedPopoverController; // @synthesize associatedPopoverController=_associatedPopoverController;
@property(retain, nonatomic) NSMutableArray *associatedWindowStack; // @synthesize associatedWindowStack=_associatedWindowStack;
- (void).cxx_destruct;
- (void)layoutControllerForSize:(struct CGSize)arg1 duration:(double)arg2;
- (void)updateSizeClass;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (id)_currentTitleController;
- (id)_currentNavigationItem;
- (void)setTargetNavigationItem:(id)arg1 titleController:(id)arg2;
- (void)setStatusBarBackgroundAlpha:(float)arg1;
- (id)statusBarBackgroundView;
- (double)statusBarBackgroundAlpha;
- (void)setNavigationBarHidden:(_Bool)arg1 withAnimation:(int)arg2 duration:(double)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 withAnimation:(int)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)controllerInsetUpdated:(struct UIEdgeInsets)arg1;
- (_Bool)shouldAdjustScrollViewInsetsForInversedLayout;
- (void)_autoAdjustInsetsForScrollView:(id)arg1 previousInset:(struct UIEdgeInsets)arg2;
- (_Bool)_updateControllerInsetForOrientation:(long long)arg1 statusBarHeight:(double)arg2 keyboardHeight:(double)arg3 force:(_Bool)arg4 notify:(_Bool)arg5;
- (double)tabBarHeight;
- (double)navigationBarHeightForInterfaceOrientation:(long long)arg1;
- (_Bool)_updateControllerInsetForOrientation:(long long)arg1 force:(_Bool)arg2 notify:(_Bool)arg3;
- (_Bool)_updateControllerInset:(_Bool)arg1;
- (void)setExplicitTableInset:(struct UIEdgeInsets)arg1 scrollIndicatorInset:(struct UIEdgeInsets)arg2;
- (void)adjustToInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)statusBarShouldBeHidden;
- (void)navigationBarSwipeDownAction;
- (void)navigationBarAction;
- (_Bool)navigationBarHasAction;
- (long long)requiredNavigationBarStyle;
- (void)adjustNavigationItem:(long long)arg1;
- (void)viewControllerKeyboardWillHide:(id)arg1;
- (void)viewControllerKeyboardWillChangeFrame:(id)arg1;
- (id)findFirstResponder:(id)arg1;
- (void)viewControllerStatusBarWillChangeFrame:(id)arg1;
- (double)_currentStatusBarHeight;
- (float)_keyboardAdditionalDeltaHeightWhenRotatingFrom:(long long)arg1 toOrientation:(long long)arg2;
- (double)_currentKeyboardHeight:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct UIEdgeInsets)controllerInsetForInterfaceOrientation:(long long)arg1;
- (void)_adjustControllerInsetForRotationToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldAutorotate;
- (long long)currentInterfaceOrientation;
- (struct CGSize)referenceViewSizeForOrientation:(long long)arg1;
- (void)localizationUpdated;
- (void)releaseRotationLock;
- (void)acquireRotationLock;
- (id)popoverController;
- (_Bool)willCaptureInputShortly;
- (_Bool)inFormSheet;
- (_Bool)inPopover;
- (_Bool)shouldIgnoreNavigationBar;
- (_Bool)shouldIgnoreStatusBar;
- (id)navigationController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dealloc;
- (void)_commonViewControllerInit;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

