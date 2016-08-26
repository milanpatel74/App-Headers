/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableView.h>
#import <Facebook/FBReactionOverlayFooterViewDelegate.h>

@protocol FBReactionCardsTableViewDelegate;
@class FBReactionOverlayPageInfoView, UIView, NSString;

@interface FBReactionCardsTableView : UITableView <FBReactionOverlayFooterViewDelegate> {

	BOOL _isDragging;
	BOOL _isAnimating;
	BOOL _seeMoreIsExpanded;
	double _contentVerticalOffset;
	id<FBReactionCardsTableViewDelegate> _cardsTableViewDelegate;
	FBReactionOverlayPageInfoView* _pageInfoView;
	double _seeMoreHeightChangeForPageInfoView;
	UIView* _footerView;

}

@property (nonatomic,retain) FBReactionOverlayPageInfoView * pageInfoView;                                    //@synthesize pageInfoView=_pageInfoView - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                                //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL seeMoreIsExpanded;                                                          //@synthesize seeMoreIsExpanded=_seeMoreIsExpanded - In the implementation block
@property (assign,nonatomic) double seeMoreHeightChangeForPageInfoView;                                       //@synthesize seeMoreHeightChangeForPageInfoView=_seeMoreHeightChangeForPageInfoView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                             //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double contentVerticalOffset;                                                    //@synthesize contentVerticalOffset=_contentVerticalOffset - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionCardsTableViewDelegate> cardsTableViewDelegate;              //@synthesize cardsTableViewDelegate=_cardsTableViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPageInfoView:(FBReactionOverlayPageInfoView *)arg1 ;
-(FBReactionOverlayPageInfoView *)pageInfoView;
-(id)cardViews;
-(void)expandSeeMore;
-(void)collapseSeeMore;
-(BOOL)seeMoreIsExpanded;
-(void)scrollViewDidScrollOverDistance:(double)arg1 withSeeMore:(BOOL)arg2 ;
-(void)willBeginDragging;
-(void)didFinishDragging;
-(void)removeFooterView;
-(double)contentVerticalOffset;
-(void)didActivateFooterAction;
-(void)_setContentVerticalOffsetWithPageInfoViewCalculated:(double)arg1 ;
-(void)resetToUnscrolledStateAnimated:(BOOL)arg1 ;
-(void)setSeeMoreHeightChangeForPageInfoView:(double)arg1 ;
-(double)_tableViewSlideDistanceWhenSeeMoreIsTapped;
-(void)_performSeeMoreAnimationWithNewContentVerticalOffset:(double)arg1 newPageInfoViewFrame:(CGRect)arg2 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(double)_calculateFooterViewVerticalOffset;
-(void)setContentVerticalOffset:(double)arg1 ;
-(void)prepareForRender;
-(void)addPageInfoView:(id)arg1 ;
-(void)addFooterView:(id)arg1 ;
-(id<FBReactionCardsTableViewDelegate>)cardsTableViewDelegate;
-(void)setCardsTableViewDelegate:(id<FBReactionCardsTableViewDelegate>)arg1 ;
-(void)setSeeMoreIsExpanded:(BOOL)arg1 ;
-(double)seeMoreHeightChangeForPageInfoView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)isAnimating;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end
