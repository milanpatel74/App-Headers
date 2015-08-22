/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>

@class UIView, NSMutableArray, UIDynamicAnimator, UIScrollView, UISnapBehavior, UIDynamicItemBehavior, PTHShapeView, PTHTweetbotAccount, PTHTweetbotAvatarView, NSString;

@interface PTHTweetbotPostAccountPickerController : PTHViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIScrollViewDelegate, UIDynamicAnimatorDelegate> {

	UIView* _backgroundView;
	NSMutableArray* _accounts;
	UIDynamicAnimator* _animator;
	UIScrollView* _scrollView;
	NSMutableArray* _avatarViews;
	NSMutableArray* _filterItems;
	NSMutableArray* _attachmentBehaviors;
	UISnapBehavior* _selectedSnapBehavior;
	UIDynamicItemBehavior* _dynamicItemBehavior;
	PTHShapeView* _targetView;
	unsigned long long _selectedAccountIndex;
	BOOL _dragged;
	BOOL _dismissed;
	PTHTweetbotAccount* _selectedAccount;
	PTHTweetbotAvatarView* _presentingAvatarView;

}

@property (nonatomic,retain) PTHTweetbotAccount * selectedAccount;                      //@synthesize selectedAccount=_selectedAccount - In the implementation block
@property (nonatomic,retain) PTHTweetbotAvatarView * presentingAvatarView;              //@synthesize presentingAvatarView=_presentingAvatarView - In the implementation block
@property (assign,nonatomic) unsigned long long selectedAccountIndex;                   //@synthesize selectedAccountIndex=_selectedAccountIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PTHTweetbotAccount *)selectedAccount;
-(void)setSelectedAccount:(PTHTweetbotAccount *)arg1 ;
-(void)presentTransition:(id)arg1 ;
-(void)dismissTransition:(id)arg1 ;
-(void)setPresentingAvatarView:(PTHTweetbotAvatarView *)arg1 ;
-(void)didTap:(id)arg1 ;
-(void)setSelectedAccountIndex:(unsigned long long)arg1 ;
-(PTHTweetbotAvatarView *)presentingAvatarView;
-(unsigned long long)selectedAccountIndex;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)_dismiss;
-(void)setup;
@end
