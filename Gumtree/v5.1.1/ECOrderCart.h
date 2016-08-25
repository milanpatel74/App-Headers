/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSMutableArray, NSArray;

@interface ECOrderCart : NSObject {

	NSString* _paymentOption;
	NSString* _initialScreen;
	NSUUID* _transactionID;
	unsigned long long _step;
	NSString* _promotionCode;
	NSMutableArray* _myOrderItems;

}

@property (retain) NSMutableArray * myOrderItems;                   //@synthesize myOrderItems=_myOrderItems - In the implementation block
@property (readonly) NSArray * orderItems; 
@property (retain) NSString * paymentOption;                        //@synthesize paymentOption=_paymentOption - In the implementation block
@property (retain) NSString * initialScreen;                        //@synthesize initialScreen=_initialScreen - In the implementation block
@property (retain) NSUUID * transactionID;                          //@synthesize transactionID=_transactionID - In the implementation block
@property (assign) unsigned long long step;                         //@synthesize step=_step - In the implementation block
@property (nonatomic,retain) NSString * promotionCode;              //@synthesize promotionCode=_promotionCode - In the implementation block
+(id)orderCartForFeatureProviders:(id)arg1 withPaymentOption:(id)arg2 ;
+(id)orderCartWithAd:(id)arg1 withFeatures:(id)arg2 withPaymentOption:(id)arg3 ;
-(id)revenue;
-(void)setPromotionCode:(NSString *)arg1 ;
-(NSArray *)orderItems;
-(NSString *)promotionCode;
-(BOOL)isPurchaseOrderRequired;
-(void)setPaymentOption:(NSString *)arg1 ;
-(NSString *)paymentOption;
-(NSString *)initialScreen;
-(void)setInitialScreen:(NSString *)arg1 ;
-(NSMutableArray *)myOrderItems;
-(void)setMyOrderItems:(NSMutableArray *)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)step;
-(id)ads;
-(void)setTransactionID:(NSUUID *)arg1 ;
-(NSUUID *)transactionID;
-(void)setStep:(unsigned long long)arg1 ;
@end
