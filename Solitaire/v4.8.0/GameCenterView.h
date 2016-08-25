/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <SolitaireFree/GameCenterButtonDelegate.h>

@protocol GameCenterViewDelegate;
@class UIView, UIImageView, UILabel, GameCenter, NSMutableArray, GCButton, CrossPromotionPanelView, UIActivityIndicatorView, NSString;

@interface GameCenterView : UIView <GameCenterButtonDelegate> {

	BOOL leavingView;
	BOOL inGameCenter;
	UIView* titleViewContainer;
	UIImageView* titleIconView;
	UIImageView* titleView;
	UILabel* titleLabel;
	GameCenter* gameCenter;
	NSMutableArray* gcButtons;
	UIView* gcButtonContainerView;
	UIImageView* innerBackgroundView;
	UIImageView* outerBackgroundView;
	UIView* contentsView;
	UIView* mainView;
	UIView* dimOuterBackgroundView;
	GCButton* doneButton;
	UIImageView* borderView;
	int rotationType;
	long long startOrientation;
	unsigned char lockOrientation;
	UIView* bannerBackgroundView;
	BOOL visible;
	CrossPromotionPanelView* crossPromoPanel;
	UIView* bannerAdView;
	id<GameCenterViewDelegate> _delegate;
	UIActivityIndicatorView* _progress;

}

@property (assign,nonatomic) id<GameCenterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) int rotationType; 
@property (readonly) UIActivityIndicatorView * progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned char lockOrientation; 
@property (assign) long long startOrientation; 
@property (readonly) BOOL visible; 
@property (readonly) BOOL inGameCenter; 
@property (nonatomic,readonly) float statusBarHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutUI;
-(void)leftGameCenter;
-(void)setRotationType:(int)arg1 ;
-(id)initWithGameCenter:(id)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
-(void)readyForGameCenter;
-(int)rotationType;
-(CGSize)getMainViewSize;
-(float)getSmallerDimension;
-(id)getRootView;
-(CGSize)getContentsViewSize;
-(CGPoint)getContentsViewOrigin;
-(void)makeGCButtonForType:(int)arg1 ;
-(CGPoint)getMainViewOrigin;
-(void)finishedHidingGameCenterView;
-(void)viewAchievements;
-(void)viewLeaderboards;
-(void)viewMultiplayer;
-(void)viewInvite;
-(void)gameCenterButtonWasPressed:(id)arg1 ;
-(void)viewReset;
-(long long)startOrientation;
-(void)setStartOrientation:(long long)arg1 ;
-(BOOL)inGameCenter;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<GameCenterViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<GameCenterViewDelegate>)delegate;
-(float)statusBarHeight;
-(BOOL)visible;
-(void)didRotate;
-(UIActivityIndicatorView *)progress;
-(void)willRotate:(long long)arg1 ;
-(void)doneButtonPressed;
-(void)setLockOrientation:(unsigned char)arg1 ;
-(unsigned char)lockOrientation;
@end
