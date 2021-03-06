/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@protocol PTHTweetbotAccountTabBarDelegate;
@class NSArray, UIView, PTHTweetbotAccount, UIViewController, PTHTweetbotAccountController, NSString;

@interface PTHTweetbotAccountTabBar : UIView {

	NSArray* _controllers;
	NSArray* _tabBarItemViews;
	UIView* _borderView;
	PTHTweetbotAccount* _account;
	UIViewController* _selectedController;
	id<PTHTweetbotAccountTabBarDelegate> _delegate;
	PTHTweetbotAccountController* _viewController;

}

@property (nonatomic,readonly) NSString * colorGroupName; 
@property (nonatomic,readonly) PTHTweetbotAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * controllers;                                           //@synthesize controllers=_controllers - In the implementation block
@property (nonatomic,retain) UIViewController * selectedController;                             //@synthesize selectedController=_selectedController - In the implementation block
@property (assign,nonatomic,__weak) id<PTHTweetbotAccountTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotAccountController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)_doubleTapped:(id)arg1 ;
-(id)initWithAccount:(id)arg1 controllers:(id)arg2 ;
-(void)setSelectedController:(UIViewController *)arg1 ;
-(id)itemViewAtPoint:(CGPoint)arg1 ;
-(id)itemViewAtIndex:(unsigned long long)arg1 ;
-(UIViewController *)selectedController;
-(id)colorNamed:(id)arg1 ;
-(NSString *)colorGroupName;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PTHTweetbotAccountTabBarDelegate>)arg1 ;
-(id<PTHTweetbotAccountTabBarDelegate>)delegate;
-(void)setViewController:(PTHTweetbotAccountController *)arg1 ;
-(PTHTweetbotAccountController *)viewController;
-(PTHTweetbotAccount *)account;
-(NSArray *)controllers;
-(void)_tapped:(id)arg1 ;
@end

