/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBPaymentsKitExistingPaymentMethodCellDelegate;
@class UIImageView, UILabel, UIButton, FBPaymentsKitPaymentMethod, UIImage, FBPopoverActionSheet, FBActionSheetButtonItem;

@interface FBPaymentsKitExistingPaymentMethodCell : UITableViewCell {

	UIImageView* _radioButtonImageView;
	UIImageView* _credentialImageView;
	UILabel* _title;
	UILabel* _subtitle;
	UIButton* _menuButton;
	FBPaymentsKitPaymentMethod* _paymentMethod;
	UIImage* _emptyCircle;
	UIImage* _selectedCircle;
	FBPopoverActionSheet* _modifyPaymentMethodActionSheet;
	FBActionSheetButtonItem* _editPaymentMethodItem;
	FBActionSheetButtonItem* _removePaymentMethodItem;
	id<FBPaymentsKitExistingPaymentMethodCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsKitExistingPaymentMethodCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_emptyCircleImage;
-(id)_selectedCircleImage;
-(void)_menuButtonTapped:(id)arg1 ;
-(void)_removePaymentMethod:(id)arg1 ;
-(id)_getPopoverActionSheetMenu;
-(id)_getEditPaymentMethodMenuItem;
-(id)_getRemovePaymentMethodMenuItem;
-(void)_editPaymentMethod:(id)arg1 ;
-(id)initWithPaymentMethod:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)displayPaymentMethod:(id)arg1 ;
-(void)selectCell;
-(void)unselectCell;
-(void)setDelegate:(id<FBPaymentsKitExistingPaymentMethodCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPaymentsKitExistingPaymentMethodCellDelegate>)delegate;
@end
