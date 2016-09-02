/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseView.h>
#import <Reddit/CarouselItemViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol CarouselViewDelegate;
@class NSObject, BaseCollectionView, AttributedLabelRegular, UIImage, NSString, NSArray;

@interface CarouselView : BaseView <CarouselItemViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {

	unsigned long long _itemsPerScreen;
	NSObject*<CarouselViewDelegate> _delegate;
	double _itemWidth;
	BaseCollectionView* _contentScrollView;
	AttributedLabelRegular* _headerLabel;
	UIImage* _headerImage;
	NSString* _headerText;
	NSArray* _items;

}

@property (nonatomic,retain) BaseCollectionView * contentScrollView;                       //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (nonatomic,retain) AttributedLabelRegular * headerLabel;                         //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                                        //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                          //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long itemsPerScreen;                            //@synthesize itemsPerScreen=_itemsPerScreen - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CarouselViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double itemWidth;                                             //@synthesize itemWidth=_itemWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)calculatedSizeWithData:(id)arg1 ;
-(void)configureWithItems:(id)arg1 ;
-(void)configureHeaderWithText:(id)arg1 image:(id)arg2 ;
-(void)carouselItemViewDidTap:(id)arg1 ;
-(unsigned long long)itemsPerScreen;
-(void)setItemsPerScreen:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<CarouselViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSObject*<CarouselViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)prepareForReuse;
-(BaseCollectionView *)contentScrollView;
-(void)setItemWidth:(double)arg1 ;
-(double)itemWidth;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setHeaderLabel:(AttributedLabelRegular *)arg1 ;
-(AttributedLabelRegular *)headerLabel;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setContentScrollView:(BaseCollectionView *)arg1 ;
@end
