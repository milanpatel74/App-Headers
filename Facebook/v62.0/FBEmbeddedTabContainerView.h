/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBEmbeddedTab, FBEmbeddedTabContainerViewDelegate;
@class FBEmbeddedTabConfiguration, UIView, UIImageView, UIViewController, FBPullToRefreshView;

@interface FBEmbeddedTabContainerView : UIView {

	FBEmbeddedTabConfiguration* _config;
	UIView* _tabBar;
	UIView* _leftMaskView;
	UIView* _rightMaskView;
	UIImageView* _tabBarCardBackground;
	UIEdgeInsets _cardInsets;
	BOOL _shouldTabTapScrollToTop;
	BOOL _shouldRepositionForTimelineLikeChaining;
	UIViewController*<FBEmbeddedTab> _currentViewController;
	UIView* _headerView;
	FBPullToRefreshView* _pullToRefreshView;
	UIView* _secondaryStickyHeaderView;
	id<FBEmbeddedTabContainerViewDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController*<FBEmbeddedTab> currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshView * pullToRefreshView;                           //@synthesize pullToRefreshView=_pullToRefreshView - In the implementation block
@property (nonatomic,retain) UIView * secondaryStickyHeaderView;                                  //@synthesize secondaryStickyHeaderView=_secondaryStickyHeaderView - In the implementation block
@property (assign,nonatomic) BOOL shouldTabTapScrollToTop;                                        //@synthesize shouldTabTapScrollToTop=_shouldTabTapScrollToTop - In the implementation block
@property (assign,nonatomic,__weak) id<FBEmbeddedTabContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldRepositionForTimelineLikeChaining;                        //@synthesize shouldRepositionForTimelineLikeChaining=_shouldRepositionForTimelineLikeChaining - In the implementation block
-(FBPullToRefreshView *)pullToRefreshView;
-(UIView *)secondaryStickyHeaderView;
-(void)setSecondaryStickyHeaderView:(UIView *)arg1 ;
-(void)setShouldTabTapScrollToTop:(BOOL)arg1 ;
-(UIViewController*<FBEmbeddedTab>)currentViewController;
-(void)setCurrentViewController:(UIViewController*<FBEmbeddedTab>)arg1 ;
-(CGSize)_sizeOfTabs;
-(CGPoint)_minContentOffset;
-(void)_updateViewController:(id)arg1 withFrame:(CGRect)arg2 headerViewFrame:(CGRect)arg3 tabBarFrame:(CGRect)arg4 stickerHeaderViewFrame:(CGRect)arg5 tabBarBackgroundFrame:(CGRect)arg6 scrollView:(id)arg7 scrollViewOffset:(CGPoint)arg8 ;
-(BOOL)shouldTabTapScrollToTop;
-(BOOL)shouldRepositionForTimelineLikeChaining;
-(void)setShouldRepositionForTimelineLikeChaining:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 headerView:(id)arg3 tabBar:(id)arg4 ;
-(void)didTapCurrentTab;
-(void)setViewController:(id)arg1 fromViewController:(id)arg2 forceTabBarToTop:(BOOL)arg3 animated:(BOOL)arg4 direction:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setDelegate:(id<FBEmbeddedTabContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBEmbeddedTabContainerViewDelegate>)delegate;
-(UIView *)headerView;
@end
