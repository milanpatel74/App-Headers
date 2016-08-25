/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>
#import <BubbleMania/IAPProduct.h>

@protocol IAPProduct;
@class NSString, NSDictionary, SKProduct, NSLocale, NSDecimalNumber;

@interface StoreProduct : ModelObject <IAPProduct> {

	BOOL _qaProduct;
	int _amount;
	int _priceTier;
	int _discount;
	int _productType;
	NSString* _productId;
	id<IAPProduct> _baseProduct;
	NSDictionary* _displayInfo;
	NSDictionary* _info;
	double _basePrice;
	SKProduct* _product;
	NSLocale* _priceLocale;
	NSDecimalNumber* _price;

}

@property (nonatomic,retain) NSString * productId;                        //@synthesize productId=_productId - In the implementation block
@property (nonatomic,retain) id<IAPProduct> baseProduct;                  //@synthesize baseProduct=_baseProduct - In the implementation block
@property (nonatomic,retain) NSDictionary * displayInfo;                  //@synthesize displayInfo=_displayInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * info;                         //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) int amount;                                  //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) double basePrice;                            //@synthesize basePrice=_basePrice - In the implementation block
@property (assign,nonatomic) int priceTier;                               //@synthesize priceTier=_priceTier - In the implementation block
@property (assign,nonatomic) int discount;                                //@synthesize discount=_discount - In the implementation block
@property (assign,nonatomic) BOOL qaProduct;                              //@synthesize qaProduct=_qaProduct - In the implementation block
@property (assign,nonatomic) int productType;                             //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) SKProduct * product;                         //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSLocale * priceLocale;                      //@synthesize priceLocale=_priceLocale - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * price;                     //@synthesize price=_price - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * productIdentifier; 
+(id)mutableDictionaryTypes;
+(void)load;
-(void)setPriceLocale:(NSLocale *)arg1 ;
-(void)setBasePrice:(double)arg1 ;
-(double)basePrice;
-(int)discount;
-(void)setBaseProduct:(id<IAPProduct>)arg1 ;
-(id<IAPProduct>)baseProduct;
-(int)priceTier;
-(BOOL)qaProduct;
-(BOOL)isOnSale;
-(id)localizedPrice;
-(void)setupWithProduct:(id)arg1 ;
-(id)stringFromDisplay:(id)arg1 ;
-(long long)comparePriceToProduct:(id)arg1 ;
-(void)setProductId:(NSString *)arg1 ;
-(void)setDisplayInfo:(NSDictionary *)arg1 ;
-(void)setPriceTier:(int)arg1 ;
-(void)setDiscount:(int)arg1 ;
-(void)setQaProduct:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSDictionary *)info;
-(void)setAmount:(int)arg1 ;
-(int)amount;
-(void)setInfo:(NSDictionary *)arg1 ;
-(NSDecimalNumber *)price;
-(void)setPrice:(NSDecimalNumber *)arg1 ;
-(NSLocale *)priceLocale;
-(NSString *)productIdentifier;
-(void)setProduct:(SKProduct *)arg1 ;
-(SKProduct *)product;
-(NSString *)productId;
-(int)productType;
-(void)setProductType:(int)arg1 ;
-(NSDictionary *)displayInfo;
@end
