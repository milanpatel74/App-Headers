/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class PTHTweetbotAccount, UILongPressGestureRecognizer, UIControl, UIView, NSLayoutConstraint, UIVisualEffectView, UIScrollView, NSMutableArray, PTHTweetbotList, NSString;

@interface PTHTweetbotHomeTimelineListPickerController : PTHViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	PTHTweetbotAccount* _account;
	UILongPressGestureRecognizer* _listPickerRecognizer;
	UIControl* _contentView;
	UIView* _backgroundView;
	NSLayoutConstraint* _contentTopConstraint;
	UIVisualEffectView* _effectView;
	UIScrollView* _scrollView;
	NSMutableArray* _listViews;
	PTHTweetbotList* _selectedList;

}

@property (nonatomic,retain) PTHTweetbotList * selectedList;              //@synthesize selectedList=_selectedList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gestureRecognizerChanged:(id)arg1 ;
-(void)presentTransition:(id)arg1 ;
-(void)dismissTransition:(id)arg1 ;
-(void)setSelectedList:(PTHTweetbotList *)arg1 ;
-(PTHTweetbotList *)selectedList;
-(void)_selectedList:(id)arg1 ;
-(void)_updateTopConstraint;
-(void)_updateTopConstraint:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)_dismiss;
-(id)initWithAccount:(id)arg1 ;
@end
