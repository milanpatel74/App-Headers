/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EBUCheckoutCartViewControllerBase, NSArray;

@interface EBUCheckoutCartCollectionViewSectionFactory : NSObject {

	EBUCheckoutCartViewControllerBase* _delegate;

}

@property (assign,nonatomic,__weak) EBUCheckoutCartViewControllerBase * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * setupSections; 
+(id)factoryWithDelegate:(id)arg1 ;
-(id)cartDataManager;
-(id)setupCollectionViewHeaderSection;
-(id)setupItemAndShippingSections;
-(id)setupAddressAndPaymentSection;
-(id)setupSummarySection;
-(id)alertBanner;
-(id)invoicedLayoutForSellerGroup:(id)arg1 ;
-(id)nonInvoicedLayoutForSellerGroup:(id)arg1 ;
-(NSArray *)setupSections;
-(void)setDelegate:(EBUCheckoutCartViewControllerBase *)arg1 ;
-(EBUCheckoutCartViewControllerBase *)delegate;
-(id)actionHandler;
@end
