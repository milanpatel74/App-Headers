/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIControl, NSMutableArray, PTHTweetbotAvatarView, PTHTransitioningDelegate, PTHTweetbotAccount;

@interface PTHTweetbotAccountQuickPickerController : PTHViewController {

	UIControl* _backgroundView;
	NSMutableArray* _avatarViews;
	PTHTweetbotAvatarView* _currentAvatarView;
	UIControl* _cropView;
	PTHTransitioningDelegate* _transitioningDelegate;
	PTHTweetbotAccount* _selectedAccount;
	PTHTweetbotAvatarView* _navbarAvatarView;

}

@property (nonatomic,retain) PTHTweetbotAccount * selectedAccount;                  //@synthesize selectedAccount=_selectedAccount - In the implementation block
@property (nonatomic,retain) PTHTweetbotAvatarView * navbarAvatarView;              //@synthesize navbarAvatarView=_navbarAvatarView - In the implementation block
-(PTHTweetbotAccount *)selectedAccount;
-(void)setSelectedAccount:(PTHTweetbotAccount *)arg1 ;
-(void)gestureRecognizerChanged:(id)arg1 ;
-(void)setNavbarAvatarView:(PTHTweetbotAvatarView *)arg1 ;
-(void)_selectAccount:(id)arg1 ;
-(PTHTweetbotAvatarView *)navbarAvatarView;
-(void)presentWithDuration:(double)arg1 transitionContext:(id)arg2 ;
-(void)dismissWithDuration:(double)arg1 transitionContext:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_dismiss;
@end
