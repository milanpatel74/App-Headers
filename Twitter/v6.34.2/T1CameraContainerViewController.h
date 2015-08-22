/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Twitter/T1CameraControlsBarDelegate.h>
#import <Twitter/T1CameraPhotoViewControllerDelegate.h>
#import <Twitter/T1CameraVideoViewControllerDelegate.h>
#import <Twitter/TFNTooltipViewDelegate.h>
#import <Twitter/T1JumpBackToHomeTimelineBehavior.h>

@protocol T1CameraContainerViewControllerDelegate;
@class UIViewController, T1CameraPhotoViewController, T1CameraVideoViewController, UIView, T1CameraControlsBar, T1TwitterTooltipView, UITapGestureRecognizer, TFNTwitterVideoSegmentManager, TFNTwitterAccount, T1CameraToolbar, NSString;

@interface T1CameraContainerViewController : TFNViewController <UIScrollViewDelegate, T1CameraControlsBarDelegate, T1CameraPhotoViewControllerDelegate, T1CameraVideoViewControllerDelegate, TFNTooltipViewDelegate, T1JumpBackToHomeTimelineBehavior> {

	long long _mode;
	long long _videoMode;
	UIViewController* _viewController;
	T1CameraPhotoViewController* _photoViewController;
	T1CameraVideoViewController* _videoViewController;
	UIView* _contentView;
	T1CameraControlsBar* _controlsBar;
	T1TwitterTooltipView* _tooltipView;
	UITapGestureRecognizer* _dismissTooltipRecognizer;
	double _toolbarNaturalHeight;
	long long _lockOrientation;
	BOOL _toolbarLandscape;
	CGPoint _toolbarCenter;
	BOOL _allowsSwitchingMode;
	id<T1CameraContainerViewControllerDelegate> _delegate;
	long long _preferredDevice;
	TFNTwitterVideoSegmentManager* _segmentManager;
	UIView* _tooltipOverlayView;
	TFNTwitterAccount* _account;
	T1CameraToolbar* _toolbar;

}

@property (assign,nonatomic,__weak) id<T1CameraContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentViewInsets; 
@property (nonatomic,readonly) double controlsBarHeight; 
@property (assign,nonatomic) BOOL allowsSwitchingMode;                                                 //@synthesize allowsSwitchingMode=_allowsSwitchingMode - In the implementation block
@property (assign,nonatomic) long long preferredDevice;                                                //@synthesize preferredDevice=_preferredDevice - In the implementation block
@property (nonatomic,retain) TFNTwitterVideoSegmentManager * segmentManager;                           //@synthesize segmentManager=_segmentManager - In the implementation block
@property (assign,nonatomic) BOOL toolbarHidden; 
@property (nonatomic,retain) UIView * tooltipOverlayView;                                              //@synthesize tooltipOverlayView=_tooltipOverlayView - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) T1CameraPhotoViewController * photoViewController; 
@property (nonatomic,readonly) T1CameraToolbar * toolbar;                                              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) T1CameraVideoViewController * videoViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(id)scribeComponent;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)viewDidFullyAppear:(BOOL)arg1 ;
-(BOOL)tooltipShouldShow:(id)arg1 ;
-(void)tooltipDidTap:(id)arg1 ;
-(id)initWithMode:(long long)arg1 account:(id)arg2 ;
-(TFNTwitterVideoSegmentManager *)segmentManager;
-(void)setAllowsSwitchingMode:(BOOL)arg1 ;
-(void)setSegmentManager:(TFNTwitterVideoSegmentManager *)arg1 ;
-(void)_deviceOrientationDidChange:(id)arg1 ;
-(void)photoViewController:(id)arg1 didCapturePhoto:(id)arg2 ;
-(void)photoViewController:(id)arg1 didUsePhoto:(id)arg2 ;
-(void)photoViewControllerDidCancel:(id)arg1 ;
-(void)_logAction:(id)arg1 element:(id)arg2 ;
-(void)photoViewController:(id)arg1 setCaptureEnabled:(BOOL)arg2 ;
-(void)photoViewController:(id)arg1 didChangeMode:(long long)arg2 ;
-(void)_presentTooltipIfNeeded:(long long)arg1 ;
-(BOOL)_canSwitchMode;
-(T1CameraPhotoViewController *)photoViewController;
-(double)controlsBarHeight;
-(void)_layoutTooltipOverlayView:(long long)arg1 ;
-(UIView *)tooltipOverlayView;
-(void)_addChildViewController:(id)arg1 replaceChildViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_dismissTooltipIfVisible;
-(void)_logClickActionWithElement:(id)arg1 ;
-(void)_switchToPhoto:(BOOL)arg1 ;
-(void)_animateToolbarAwayForRecording:(BOOL)arg1 ;
-(CGRect)rectInTooltipOverlayViewForTooltipLocation:(long long)arg1 ;
-(void)_dismissTooltipRecognizerDidTap:(id)arg1 ;
-(void)_logAction:(id)arg1 element:(id)arg2 value:(id)arg3 ;
-(void)controlsBarDidTapPhotoCapture:(id)arg1 ;
-(void)controlsBarDidTapUsePhoto:(id)arg1 ;
-(void)controlsBarDidTapRetakePhoto:(id)arg1 ;
-(void)controlsBarDidStartPressingVideoCapture:(id)arg1 ;
-(void)controlsBarDidStopPressingVideoCapture:(id)arg1 ;
-(void)controlsBar:(id)arg1 didChangeMode:(long long)arg2 ;
-(void)videoViewController:(id)arg1 didAttachVideoAsset:(id)arg2 ;
-(void)videoViewControllerDidCancel:(id)arg1 ;
-(void)videoViewControllerDidStartRecording:(id)arg1 ;
-(void)videoViewControllerDidStopRecording:(id)arg1 ;
-(void)videoViewController:(id)arg1 setCaptureButtonEnabled:(BOOL)arg2 ;
-(void)videoViewController:(id)arg1 setModeButtonHidden:(BOOL)arg2 ;
-(void)videoViewController:(id)arg1 lockControlsOrientation:(long long)arg2 ;
-(void)videoViewControllerUnlockControlsOrientation:(id)arg1 ;
-(void)videoViewController:(id)arg1 didChangeMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)refreshToolBarItemsAnimated:(BOOL)arg1 ;
-(BOOL)allowsSwitchingMode;
-(long long)preferredDevice;
-(void)setPreferredDevice:(long long)arg1 ;
-(void)setTooltipOverlayView:(UIView *)arg1 ;
-(void)_setViewController:(id)arg1 animated:(BOOL)arg2 ;
-(T1CameraVideoViewController *)videoViewController;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1CameraContainerViewControllerDelegate>)arg1 ;
-(id<T1CameraContainerViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(T1CameraToolbar *)toolbar;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(UIEdgeInsets)contentViewInsets;
-(TFNTwitterAccount *)account;
-(void)_switchToVideo:(BOOL)arg1 ;
-(BOOL)toolbarHidden;
@end
