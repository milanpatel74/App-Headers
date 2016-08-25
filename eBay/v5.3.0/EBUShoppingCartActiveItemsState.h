/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUShoppingCartBaseItemsState.h>

@class CartTotalFooterView;

@interface EBUShoppingCartActiveItemsState : EBUShoppingCartBaseItemsState {

	CartTotalFooterView* _cartTotalView;

}

@property (nonatomic,retain) CartTotalFooterView * cartTotalView;              //@synthesize cartTotalView=_cartTotalView - In the implementation block
+(id)stateForViewController:(id)arg1 ;
-(void)performingItemOperation;
-(void)addCellsForItem:(id)arg1 forSection:(id)arg2 ;
-(id)findAppliedPromotionsForSection:(id)arg1 ;
-(void)addAppliedPromotionCells:(id)arg1 fromPromotions:(id)arg2 sellerId:(id)arg3 ;
-(id)emptyCellForState;
-(id)makeCartTotalView;
-(void)setCartTotalView:(CartTotalFooterView *)arg1 ;
-(CartTotalFooterView *)cartTotalView;
-(id)advanceState;
-(void)setupStateSections;
-(void)setupStateFooter;
-(id)emptyCartHeaderView;
-(void)goShoppingAction:(id)arg1 ;
@end
