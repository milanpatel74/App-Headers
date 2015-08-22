/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNPaymentsPeerToPeerCurrencyAndAmountView, FBRichTextView, FBPaymentsPeerToPeerTransferReceiptBodyViewModel, UIButton;

@interface FBPaymentsPeerToPeerTransferReceiptBodyView : UIView {

	MNPaymentsPeerToPeerCurrencyAndAmountView* _currencyAndAmountView;
	FBRichTextView* _statusTextView;
	FBRichTextView* _descriptionTextView;
	FBPaymentsPeerToPeerTransferReceiptBodyViewModel* _viewModel;
	UIButton* _receiptLinkButton;
	UIButton* _actionButton;

}

@property (nonatomic,copy) FBPaymentsPeerToPeerTransferReceiptBodyViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UIButton * receiptLinkButton;                                          //@synthesize receiptLinkButton=_receiptLinkButton - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                               //@synthesize actionButton=_actionButton - In the implementation block
-(void)setViewModel:(FBPaymentsPeerToPeerTransferReceiptBodyViewModel *)arg1 ;
-(FBPaymentsPeerToPeerTransferReceiptBodyViewModel *)viewModel;
-(UIButton *)receiptLinkButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)actionButton;
@end
