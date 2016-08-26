/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, TGCollectionItem;

@interface TGCollectionItemView : UICollectionViewCell {

	UIView* _topStripeView;
	UIView* _bottomStripeView;
	int _itemPosition;
	double _separatorInset;
	TGCollectionItem* _boundItem;
	UIEdgeInsets _selectionInsets;

}

@property (assign,nonatomic) double separatorInset;                     //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selectionInsets;              //@synthesize selectionInsets=_selectionInsets - In the implementation block
@property (nonatomic,retain) TGCollectionItem * boundItem;              //@synthesize boundItem=_boundItem - In the implementation block
-(void)adjustOrdering;
-(void)setSelectionInsets:(UIEdgeInsets)arg1 ;
-(TGCollectionItem *)boundItem;
-(void)setBoundItem:(TGCollectionItem *)arg1 ;
-(void)setItemPosition:(int)arg1 animated:(BOOL)arg2 ;
-(void)setItemPosition:(int)arg1 ;
-(void)_updateStripes;
-(UIEdgeInsets)selectionInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)separatorInset;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSeparatorInset:(double)arg1 ;
@end
