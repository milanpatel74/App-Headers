/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSArray, ECAPIPaymentMethod, ECAPIPromotionCode;

@interface ECAPIOrdersRequest : ECAPIRequestBase {

	BOOL _includePaymentMethod;
	NSArray* _orderItems;
	ECAPIPaymentMethod* _paymentMethod;
	ECAPIPromotionCode* _promotionCode;

}

@property (nonatomic,retain) NSArray * orderItems;                            //@synthesize orderItems=_orderItems - In the implementation block
@property (nonatomic,retain) ECAPIPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,retain) ECAPIPromotionCode * promotionCode;              //@synthesize promotionCode=_promotionCode - In the implementation block
@property (assign,nonatomic) BOOL includePaymentMethod;                       //@synthesize includePaymentMethod=_includePaymentMethod - In the implementation block
-(id)httpBody;
-(void)setOrderItems:(NSArray *)arg1 ;
-(void)setPromotionCode:(ECAPIPromotionCode *)arg1 ;
-(NSArray *)orderItems;
-(id)orderNodeWithOrderItem:(id)arg1 ;
-(ECAPIPromotionCode *)promotionCode;
-(void)addPostRootAttributes:(id)arg1 ;
-(id)paymentMethodNode;
-(void)setIncludePaymentMethod:(BOOL)arg1 ;
-(BOOL)includePaymentMethod;
-(id)initWithOrderItems:(id)arg1 paymentMethod:(id)arg2 promotionCode:(id)arg3 ;
-(id)init;
-(void)setPaymentMethod:(ECAPIPaymentMethod *)arg1 ;
-(ECAPIPaymentMethod *)paymentMethod;
@end
