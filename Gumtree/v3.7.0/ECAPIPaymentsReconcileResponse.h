/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSString, NSDictionary;

@interface ECAPIPaymentsReconcileResponse : ECAPIResponseBase {

	NSString* _paymentStatus;
	NSString* _invoiceStatus;
	NSDictionary* _errorDict;

}

@property (nonatomic,retain) NSString * paymentStatus;              //@synthesize paymentStatus=_paymentStatus - In the implementation block
@property (nonatomic,retain) NSString * invoiceStatus;              //@synthesize invoiceStatus=_invoiceStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * errorDict;              //@synthesize errorDict=_errorDict - In the implementation block
-(NSString *)paymentStatus;
-(NSString *)invoiceStatus;
-(NSDictionary *)errorDict;
-(void)setPaymentStatus:(NSString *)arg1 ;
-(void)setInvoiceStatus:(NSString *)arg1 ;
-(void)setErrorDict:(NSDictionary *)arg1 ;
-(void)parseData:(id)arg1 ;
@end
