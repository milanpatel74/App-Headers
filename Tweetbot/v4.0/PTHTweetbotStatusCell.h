/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:47 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class PTHTweetbotStatusView, PTHSwipePanGestureRecognizer, PTHTweetbotStatusActionDrawerView, UIView, UIImageView, PTHTweetbotEntityTextFontAppearance, PTHTweetbotEntityTextColorAppearance, PTHTweetbotStatus;

@interface PTHTweetbotStatusCell : PTHTweetbotCell {

	PTHTweetbotStatusView* _statusView;
	PTHSwipePanGestureRecognizer* _leftPanRecognizer;
	PTHTweetbotStatusActionDrawerView* _drawerView;
	unsigned long long _cellType;
	BOOL _swiping;
	UIView* _swipeBackgroundView;
	double _swipePosition;
	UIView* _swipeSeparatorLine;
	UIImageView* _leftSwipeIndicator;
	UIView* _rightSwipeIndicator;
	UIImageView* _rightActionImageView;
	UIImageView* _rightReplyImageView;
	UIView* _rightTopLineView;
	UIView* _rightBottomLineView;
	int _rightSwipeState;
	BOOL _disableLayout;
	BOOL _drawerDisabled;
	BOOL _reallySelected;
	PTHTweetbotEntityTextFontAppearance* _fontAppearance;
	PTHTweetbotEntityTextColorAppearance* _normalColorAppearance;
	PTHTweetbotEntityTextColorAppearance* _mentionColorAppearance;
	PTHTweetbotEntityTextColorAppearance* _selectedColorAppearance;

}

@property (nonatomic,readonly) PTHTweetbotStatusView * statusView;                                        //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextFontAppearance * fontAppearance;                        //@synthesize fontAppearance=_fontAppearance - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextColorAppearance * normalColorAppearance;                //@synthesize normalColorAppearance=_normalColorAppearance - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextColorAppearance * mentionColorAppearance;               //@synthesize mentionColorAppearance=_mentionColorAppearance - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextColorAppearance * selectedColorAppearance;              //@synthesize selectedColorAppearance=_selectedColorAppearance - In the implementation block
@property (assign,getter=isDrawerDisabled,nonatomic) BOOL drawerDisabled;                                 //@synthesize drawerDisabled=_drawerDisabled - In the implementation block
@property (assign,getter=isReallySelected,nonatomic) BOOL reallySelected;                                 //@synthesize reallySelected=_reallySelected - In the implementation block
@property (nonatomic,readonly) PTHTweetbotStatus * status; 
@property (nonatomic,readonly) PTHTweetbotEntityTextColorAppearance * colorAppearance; 
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(Class)statusViewLayoutClass;
+(Class)statusViewClass;
+(double)selectedDrawerHeightforTableView:(id)arg1 ;
-(void)setDrawerDisabled:(BOOL)arg1 ;
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(void)setReallySelected:(BOOL)arg1 ;
-(BOOL)isReallySelected;
-(PTHTweetbotEntityTextColorAppearance *)colorAppearance;
-(void)leftPanSwipe:(id)arg1 ;
-(void)rightPanSwipe:(id)arg1 ;
-(void)setFontAppearance:(PTHTweetbotEntityTextFontAppearance *)arg1 ;
-(void)_statusWasUpdated:(id)arg1 ;
-(void)_userWasUpdated:(id)arg1 ;
-(void)setReallySelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_animateDrawer:(BOOL)arg1 ;
-(void)setNormalColorAppearance:(PTHTweetbotEntityTextColorAppearance *)arg1 ;
-(void)setMentionColorAppearance:(PTHTweetbotEntityTextColorAppearance *)arg1 ;
-(void)setSelectedColorAppearance:(PTHTweetbotEntityTextColorAppearance *)arg1 ;
-(void)didRetweet;
-(PTHTweetbotEntityTextColorAppearance *)normalColorAppearance;
-(PTHTweetbotEntityTextColorAppearance *)mentionColorAppearance;
-(PTHTweetbotEntityTextColorAppearance *)selectedColorAppearance;
-(BOOL)isDrawerDisabled;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)description;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(void)setItem:(id)arg1 ;
-(PTHTweetbotStatusView *)statusView;
-(PTHTweetbotStatus *)status;
-(void)updateStatus;
@end
