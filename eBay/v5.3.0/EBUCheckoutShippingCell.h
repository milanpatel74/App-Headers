/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ActionCell.h>

@protocol EBNListingCheckoutInterface;
@class NSMutableArray, UIImageView, UILabel, EBUShippingMethodStackableLabels;

@interface EBUCheckoutShippingCell : ActionCell {

	BOOL _markAsSelected;
	BOOL _indentLikeShippingCell;
	id<EBNListingCheckoutInterface> _cartItem;
	NSMutableArray* _rightBoundaryConstraints;
	UIImageView* _selectedView;
	UILabel* _shippingCost;
	EBUShippingMethodStackableLabels* _stackedLabels;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) NSMutableArray * rightBoundaryConstraints;                            //@synthesize rightBoundaryConstraints=_rightBoundaryConstraints - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * selectedView;                                    //@synthesize selectedView=_selectedView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * shippingCost;                                        //@synthesize shippingCost=_shippingCost - In the implementation block
@property (assign,nonatomic,__weak) EBUShippingMethodStackableLabels * stackedLabels;              //@synthesize stackedLabels=_stackedLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;                                    //@synthesize localConstraints=_localConstraints - In the implementation block
@property (assign,nonatomic) BOOL markAsSelected;                                                  //@synthesize markAsSelected=_markAsSelected - In the implementation block
@property (retain) id<EBNListingCheckoutInterface> cartItem;                                       //@synthesize cartItem=_cartItem - In the implementation block
@property (assign,nonatomic) BOOL indentLikeShippingCell;                                          //@synthesize indentLikeShippingCell=_indentLikeShippingCell - In the implementation block
-(void)setCartItem:(id<EBNListingCheckoutInterface>)arg1 ;
-(double)rightColumnWidth;
-(void)setSelectedView:(UIImageView *)arg1 ;
-(id)logisticsTypeLabelWithText:(id)arg1 ;
-(id)errorLabelWithText:(id)arg1 ;
-(id)deliverByLabelWithText:(id)arg1 ;
-(id)additionalPaymentLabelWithText:(id)arg1 ;
-(id)shippingMethodLabelWithText:(id)arg1 ;
-(void)setupImageForLogisticType:(id)arg1 ;
-(id)shippingCostLabelWithText:(id)arg1 ;
-(EBUShippingMethodStackableLabels *)stackedLabels;
-(void)setRightBoundaryConstraints:(NSMutableArray *)arg1 ;
-(double)centerPadding;
-(double)leftImagePadding;
-(NSMutableArray *)rightBoundaryConstraints;
-(id)constraintWithAttribute:(long long)arg1 inArray:(id)arg2 ;
-(double)maxStackedLabelWidth;
-(double)shippingCostViewWidth;
-(double)accessoryViewWidth;
-(BOOL)indentLikeShippingCell;
-(double)leftSeparatorIndent;
-(void)setMarkAsSelected:(BOOL)arg1 ;
-(void)hideSelectedCheckmarkView;
-(double)maxMainColumnWidth;
-(BOOL)markAsSelected;
-(void)setIndentLikeShippingCell:(BOOL)arg1 ;
-(void)setStackedLabels:(EBUShippingMethodStackableLabels *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id<EBNListingCheckoutInterface>)cartItem;
-(UILabel *)shippingCost;
-(void)setShippingCost:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateConstraints;
-(double)rightPadding;
-(UIImageView *)selectedView;
-(double)verticalPadding;
-(double)heightForWidth:(double)arg1 ;
-(void)setupConstraints;
-(double)leftPadding;
@end
