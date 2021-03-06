/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUCheckoutImageValueView.h>

@class EBNCheckoutDataManager, EBUPaymentMethodActionHandler, ItemPictureView;

@interface EBUPaymentMethodPayPalCreditView : EBUCheckoutImageValueView {

	EBNCheckoutDataManager* _dataManager;
	EBUPaymentMethodActionHandler* _actionHandler;
	ItemPictureView* _itemPictureView;

}

@property (__weak) EBNCheckoutDataManager * dataManager;                       //@synthesize dataManager=_dataManager - In the implementation block
@property (__weak) EBUPaymentMethodActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (retain) ItemPictureView * itemPictureView;                          //@synthesize itemPictureView=_itemPictureView - In the implementation block
+(id)viewFromDataManager:(id)arg1 actionHandler:(id)arg2 ;
-(ItemPictureView *)itemPictureView;
-(void)setItemPictureView:(ItemPictureView *)arg1 ;
-(double)imageColumnWidth;
-(void)performActionWithTrackableURL:(id)arg1 ;
-(void)setupItemPictureView;
-(void)executeLoader:(id)arg1 ;
-(void)setupPayPalCreditViewWithDataManager:(id)arg1 actionHandler:(id)arg2 ;
-(void)setupLoggedInImage;
-(void)setupPaypalCreditTitle;
-(void)setupPromotionSummary;
-(void)setupSubMessage;
-(id)linkString;
-(void)loadFundingSource;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(CGSize)imageSize;
-(CGSize)maxImageSize;
-(EBUPaymentMethodActionHandler *)actionHandler;
-(void)setActionHandler:(EBUPaymentMethodActionHandler *)arg1 ;
-(void)setupActions;
@end

