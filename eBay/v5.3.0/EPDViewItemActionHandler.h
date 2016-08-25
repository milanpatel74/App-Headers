/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUViewItemActionHandler.h>
#import <eBay/EBUShippingLabelManagerDelegate.h>
#import <eBay/EndItemControllerDelegate.h>
#import <eBay/LeaveFeedbackControlleriPadDelegate.h>
#import <eBay/ManageShippingDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <eBay/EBUGiftingDelegate.h>

@class UIView, NSArray, EBUViewItemDescriptionViewController, ManageShippingController, EBUShippingLabelPrintViewController, ShareItemHelper, NSString;

@interface EPDViewItemActionHandler : EBUViewItemActionHandler <EBUShippingLabelManagerDelegate, EndItemControllerDelegate, LeaveFeedbackControlleriPadDelegate, ManageShippingDelegate, UIPopoverControllerDelegate, EBUGiftingDelegate> {

	UIView* scanPopoverSourceView;
	NSArray* allScannedTrackingNumbers;
	EBUViewItemDescriptionViewController* _descriptionController;
	ManageShippingController* manageShippingController;
	EBUShippingLabelPrintViewController* _shippingLabelController;
	ShareItemHelper* _shareHelper;
	NSString* _scannedTrackingNumber;
	NSString* _carrierBasedOnTrackingNumber;

}

@property (nonatomic,copy) NSString * scannedTrackingNumber;                                                            //@synthesize scannedTrackingNumber=_scannedTrackingNumber - In the implementation block
@property (nonatomic,copy) NSString * carrierBasedOnTrackingNumber;                                                     //@synthesize carrierBasedOnTrackingNumber=_carrierBasedOnTrackingNumber - In the implementation block
@property (assign,nonatomic,__weak) EPDViewItemViewController*<EPDViewItemActionHandlerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userActionShowGSPTerms:(id)arg1 ;
-(void)checkoutWithCart;
-(void)showBestOfferDetails:(id)arg1 ;
-(void)userActionShareItem:(id)arg1 ;
-(void)userActionViewProductReviews:(id)arg1 ;
-(void)userActionShowMAPPrice:(id)arg1 ;
-(void)selectVariationValueForSpecific:(id)arg1 sender:(id)arg2 ;
-(void)itemEnded:(BOOL)arg1 ;
-(void)giftingDetailsSuccess:(id)arg1 ;
-(void)shippingLabelManagerFinishEditing:(id)arg1 ;
-(void)userActionAddToCart:(id)arg1 ;
-(void)userActionBuyItNow:(id)arg1 ;
-(void)userActionShowInStorePickup:(id)arg1 ;
-(void)userActionShowCharity:(id)arg1 ;
-(void)userActionShowMoneyBackGuarantee:(id)arg1 ;
-(void)userActionShowLocationMap:(id)arg1 ;
-(void)userActionShowInternationalShippingInfo:(id)arg1 ;
-(void)shippingInfoDismissedAndChanged:(BOOL)arg1 ;
-(void)rescanShippingLabel;
-(NSString *)scannedTrackingNumber;
-(void)setScannedTrackingNumber:(NSString *)arg1 ;
-(NSString *)carrierBasedOnTrackingNumber;
-(void)setCarrierBasedOnTrackingNumber:(NSString *)arg1 ;
-(void)userActionWriteReview:(id)arg1 ;
-(void)userActionShowS2FInfo:(id)arg1 ;
-(void)userActionShowBuyerInfo:(id)arg1 ;
-(void)setDataModel:(id)arg1 ;
-(void)userActionPlaceOrIncreaseBid:(id)arg1 ;
-(void)userActionAddTrackingNumber:(id)arg1 ;
-(void)userActionWatchItem:(id)arg1 ;
-(void)showGiftingLayerForActionID:(long long)arg1 ;
-(void)userActionBuyAnother:(id)arg1 ;
-(void)userActionCancelOrder:(id)arg1 ;
-(void)userActionContactBuyer:(id)arg1 ;
-(void)userActionContactSeller:(id)arg1 ;
-(void)userActionEndItem:(id)arg1 ;
-(void)userActionLeaveFeedback:(id)arg1 ;
-(void)userActionMakeOffer:(id)arg1 ;
-(void)userActionPrintShippingLabel:(id)arg1 ;
-(void)userActionResolveAProblem:(id)arg1 ;
-(void)userActionReviewCounterOffer:(id)arg1 ;
-(void)userActionReviewOffer:(id)arg1 ;
-(void)userActionSeeCancelDetails:(id)arg1 ;
-(void)userActionSeeCaseDetails:(id)arg1 ;
-(void)userActionSeeRequestDetails:(id)arg1 ;
-(void)userActionSeeReturnDetails:(id)arg1 ;
-(void)userActionSendPaymentReminder:(id)arg1 ;
-(void)userActionShowMoreOptions:(id)arg1 ;
-(void)userActionViewOrderDetails:(id)arg1 ;
-(void)userActionViewRelistedItem:(id)arg1 ;
-(void)userActionShowBiddingHistory:(id)arg1 ;
-(void)userActionShowSellerLegalInfo:(id)arg1 ;
-(void)userActionViewFullDescription:(id)arg1 ;
-(void)userActionViewProductDetails:(id)arg1 ;
-(void)userActionViewProductRelatedPageForURL:(id)arg1 ;
-(void)feedbackLeft:(BOOL)arg1 ;
-(void)scanItemController:(id)arg1 didReturnResults:(id)arg2 ;
-(void)userSelectedTrackingNumber:(id)arg1 ;
-(void)scanShippingLabel:(id)arg1 ;
-(void)manageShipping:(id)arg1 ;
-(void)presentPostTransactionWebView:(id)arg1 title:(id)arg2 ;
-(void)continueScanning:(id)arg1 ;
-(void)cancelScanning:(id)arg1 ;
-(void)sellOneLikeThisWithTrackingAction:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
