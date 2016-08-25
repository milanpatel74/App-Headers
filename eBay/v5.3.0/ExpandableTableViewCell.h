/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightViewTableCell.h>

@class UIImageView, NSIndexPath, UIView, UIGestureRecognizer;

@interface ExpandableTableViewCell : EBUDynamicHeightViewTableCell {

	BOOL _expanded;
	BOOL _expandable;
	UIImageView* _expandedIconImageView;
	NSIndexPath* _indexPath;
	UIView* _tappableExpanderContainer;
	UIGestureRecognizer* _gestureRecognizer;
	double _optimalHeight;
	double _defaultHeight;
	double _currentHeight;
	double _paddingLeft;
	double _paddingRight;

}

@property (nonatomic,retain) UIImageView * expandedIconImageView;                  //@synthesize expandedIconImageView=_expandedIconImageView - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                        //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL expandable;                                      //@synthesize expandable=_expandable - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UIView * tappableExpanderContainer;                   //@synthesize tappableExpanderContainer=_tappableExpanderContainer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) double optimalHeight;                                 //@synthesize optimalHeight=_optimalHeight - In the implementation block
@property (assign,nonatomic) double defaultHeight;                                 //@synthesize defaultHeight=_defaultHeight - In the implementation block
@property (assign,nonatomic) double currentHeight;                                 //@synthesize currentHeight=_currentHeight - In the implementation block
@property (assign,nonatomic) double paddingLeft;                                   //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) double paddingRight;                                  //@synthesize paddingRight=_paddingRight - In the implementation block
-(void)invalidateHeight;
-(double)optimalHeight;
-(void)setOptimalHeight:(double)arg1 ;
-(void)setDefaultHeight:(double)arg1 ;
-(UIImageView *)expandedIconImageView;
-(void)setExpandedIconImageView:(UIImageView *)arg1 ;
-(void)setExpandable:(BOOL)arg1 ;
-(BOOL)expandable;
-(void)localInit;
-(void)setCurrentHeight:(double)arg1 ;
-(UIView *)tappableExpanderContainer;
-(void)setTappableExpanderContainer:(UIView *)arg1 ;
-(void)handleTitleTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(NSIndexPath *)indexPath;
-(double)defaultHeight;
-(double)currentHeight;
-(void)prepareForReuse;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setPaddingLeft:(double)arg1 ;
-(void)setPaddingRight:(double)arg1 ;
-(double)paddingLeft;
-(double)paddingRight;
@end
