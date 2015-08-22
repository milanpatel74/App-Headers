/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSString, NSArray, ECAPIPaymentMethod, ECAPIInvoice;

@interface ECAPIOrdersResponse : ECAPIResponseBase {

	NSString* _identifier;
	NSArray* _orders;
	ECAPIPaymentMethod* _payment;
	ECAPIInvoice* _invoice;

}

@property (retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSArray * orders;                          //@synthesize orders=_orders - In the implementation block
@property (retain) ECAPIPaymentMethod * payment;              //@synthesize payment=_payment - In the implementation block
@property (retain) ECAPIInvoice * invoice;                    //@synthesize invoice=_invoice - In the implementation block
-(ECAPIInvoice *)invoice;
-(id)orderWithNode:(id)arg1 ;
-(void)setOrders:(NSArray *)arg1 ;
-(id)paymentWithNode:(id)arg1 ;
-(void)setPayment:(ECAPIPaymentMethod *)arg1 ;
-(id)invoiceWithNode:(id)arg1 ;
-(void)setInvoice:(ECAPIInvoice *)arg1 ;
-(NSArray *)orders;
-(ECAPIPaymentMethod *)payment;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)parseData:(id)arg1 ;
@end
