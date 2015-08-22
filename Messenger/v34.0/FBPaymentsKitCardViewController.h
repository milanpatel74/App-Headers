/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBPaymentsKitCardInfoViewDelegate.h>

@protocol FBPaymentsKitCardViewControllerDelegate;
@class FBMemCreditCard, FBPaymentsKitCardViewDataSource, NSString, FBPaymentsKitCardViewSectionHeaderView, FBPaymentsKitCardViewSectionFooterView, FBUserSession, FBFullscreenSpinnerController, NSMutableDictionary;

@interface FBPaymentsKitCardViewController : UITableViewController <FBPaymentsKitCardInfoViewDelegate> {

	FBMemCreditCard* _card;
	FBPaymentsKitCardViewDataSource* _viewDataSource;
	NSString* _errorDescription;
	FBPaymentsKitCardViewSectionHeaderView* _infoSectionHeaderView;
	FBPaymentsKitCardViewSectionFooterView* _infoSectionFooterView;
	FBPaymentsKitCardViewSectionFooterView* _makePrimarySectionFooterView;
	long long _presentingMode;
	long long _flowMode;
	FBUserSession* _session;
	FBFullscreenSpinnerController* _spinnerController;
	NSString* _accountID;
	NSString* _contextID;
	NSMutableDictionary* _errorMessagesForInfoViews;
	BOOL _shouldDisableErrorMessage;
	BOOL _isValidatingCard;
	id<FBPaymentsKitCardViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsKitCardViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isValidatingCard;                                                    //@synthesize isValidatingCard=_isValidatingCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleLinkTap:(id)arg1 withEvent:(id)arg2 ;
-(void)infoView:(id)arg1 didChangeContentsInTextAndImageView:(id)arg2 isUserInput:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5 ;
-(void)_applyConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)saveCard:(id)arg1 ;
-(id)_actionButtonTitleForMode:(long long)arg1 ;
-(void)_onCancel;
-(void)_updateCardViewOrientationIsLandscapeMode:(BOOL)arg1 ;
-(void)_deleteCard;
-(void)_updateSaveCardBarButtonItemEnabledState;
-(void)_updateInfoSectionHeaderView;
-(id)_rightBarButtonTitle;
-(id)_createGraphRequestForAddingCardWithCardNumber:(id)arg1 expMonth:(id)arg2 expYear:(id)arg3 csc:(id)arg4 zipCode:(id)arg5 ;
-(void)_handleSuccessfulResponseforGraphRequest:(id)arg1 cardNumber:(id)arg2 expiryDate:(id)arg3 zipCode:(id)arg4 ;
-(void)_handleAddCardCallback:(BOOL)arg1 paymentMethod:(id)arg2 error:(id)arg3 ;
-(void)_dismissSpinnerWithFadeOutEffect:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 flowMode:(long long)arg2 accountID:(id)arg3 ;
-(BOOL)isValidatingCard;
-(void)setIsValidatingCard:(BOOL)arg1 ;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBPaymentsKitCardViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<FBPaymentsKitCardViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end
