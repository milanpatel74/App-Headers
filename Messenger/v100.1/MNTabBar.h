/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionViewFlowLayout, UICollectionView, UIView;

@interface MNTabBar : UIView {

	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	UIView* _backgroundView;
	CGRect _tappableArea;
	BOOL _reducesTapTarget;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL reducesTapTarget;                            //@synthesize reducesTapTarget=_reducesTapTarget - In the implementation block
-(void)setReducesTapTarget:(BOOL)arg1 ;
-(void)_initCollectionView;
-(void)_updateTapTarget;
-(double)_totalWidthForTabs;
-(BOOL)reducesTapTarget;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
@end

