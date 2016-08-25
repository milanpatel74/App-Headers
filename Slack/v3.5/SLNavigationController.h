/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIButton, SLKDependencies, NSString;

@interface SLNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	BOOL wasShowingSidebarBefore;
	BOOL _isModal;
	BOOL _isUsingCloseButton;
	/*^block*/id _closeButtonTapped;
	UIButton* _dndButton;
	UIButton* _flexpaneButton;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) UIButton * dndButton;                               //@synthesize dndButton=_dndButton - In the implementation block
@property (nonatomic,retain) UIButton * flexpaneButton;                          //@synthesize flexpaneButton=_flexpaneButton - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,nonatomic) BOOL isModal;                                       //@synthesize isModal=_isModal - In the implementation block
@property (nonatomic,readonly) BOOL isUsingCloseButton;                          //@synthesize isUsingCloseButton=_isUsingCloseButton - In the implementation block
@property (nonatomic,copy) id closeButtonTapped;                                 //@synthesize closeButtonTapped=_closeButtonTapped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRootViewController:(id)arg1 dependencies:(id)arg2 ;
-(void)addCloseButton;
-(void)focusOnFlexpaneButton;
-(void)adjustForNewTopViewController:(id)arg1 ;
-(void)addNavBarButtons;
-(void)rerenderNavBarIfNecessary;
-(void)resetNavBarButtons;
-(id)closeBarButtonItem;
-(void)closeButtonPressed;
-(BOOL)isUsingCloseButton;
-(UIButton *)dndButton;
-(void)addNewNavBarButtons;
-(void)snoozeButtonPressed:(id)arg1 ;
-(void)setDndButton:(UIButton *)arg1 ;
-(void)searchButtonPressed:(id)arg1 ;
-(void)flexButtonPressed:(id)arg1 ;
-(void)setFlexpaneButton:(UIButton *)arg1 ;
-(id)closeButtonTapped;
-(UIButton *)flexpaneButton;
-(id)slNavigationBar;
-(void)disableInteractivePopGesture;
-(void)setCloseButtonTapped:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)setIsModal:(BOOL)arg1 ;
-(BOOL)isModal;
-(void)scrollToTop;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
