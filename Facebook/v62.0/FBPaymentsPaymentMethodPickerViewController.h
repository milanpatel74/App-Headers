/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsSectionBasedTableViewController.h>
#import <Facebook/FBPaymentsSelectPaymentMethodsListSectionActionDelegate.h>
#import <Facebook/FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsUpdateListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsPaymentMethodPickerViewControllerDelegate, FBPaymentsPaymentMethod;
@class NSString, FBUserSession, FBPaymentsPaymentMethodsCoordinator, NSArray, FBPaymentsEventListenerAnnouncer, NSDictionary;

@interface FBPaymentsPaymentMethodPickerViewController : FBPaymentsSectionBasedTableViewController <FBPaymentsSelectPaymentMethodsListSectionActionDelegate, FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate, FBPaymentsEventListener, FBPaymentsUpdateListener, FBPaymentsEventAnnouncing> {

	NSString* _productItemType;
	FBUserSession* _session;
	NSString* _viewContextID;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	NSArray* _acceptedPaymentMethodOptions;
	unsigned long long _existingPaymentMethodState;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	BOOL _allowUserToSelectBillingCountry;
	id<FBPaymentsPaymentMethodPickerViewControllerDelegate> _delegate;
	id<FBPaymentsPaymentMethod> _selectedPaymentMethod;
	NSDictionary* _paymentMethodOptionSelectActionMap;

}

@property (assign,nonatomic,__weak) id<FBPaymentsPaymentMethodPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBPaymentsPaymentMethod> selectedPaymentMethod;                                    //@synthesize selectedPaymentMethod=_selectedPaymentMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * paymentMethodOptionSelectActionMap;                                      //@synthesize paymentMethodOptionSelectActionMap=_paymentMethodOptionSelectActionMap - In the implementation block
@property (assign,nonatomic) BOOL allowUserToSelectBillingCountry;                                                 //@synthesize allowUserToSelectBillingCountry=_allowUserToSelectBillingCountry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hideNavBarRightButton;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentMethodsCoordinator:(id)arg2 productItemType:(id)arg3 acceptedPaymentMethodOptions:(id)arg4 ;
-(void)setSelectedPaymentMethod:(id<FBPaymentsPaymentMethod>)arg1 ;
-(id<FBPaymentsPaymentMethod>)selectedPaymentMethod;
-(BOOL)allowUserToSelectBillingCountry;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)selectPaymentMethodsSectionsListSection:(id)arg1 didSelectPaymentMethod:(id)arg2 ;
-(void)selectPaymentMethodsSectionsListSection:(id)arg1 didSelectAddPaymentMethodWithOption:(id)arg2 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)setPaymentMethodOptionSelectActionMap:(NSDictionary *)arg1 ;
-(void)setAllowUserToSelectBillingCountry:(BOOL)arg1 ;
-(NSDictionary *)paymentMethodOptionSelectActionMap;
-(void)paymentMethodOptionSelectAction:(id)arg1 didAddPaymentMethod:(id)arg2 ;
-(void)_updateTableViewSections;
-(void)_updateHasExistingPaymentMethod;
-(void)_onCancel:(id)arg1 ;
-(void)_setActionProvider:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsPaymentMethodPickerViewControllerDelegate>)arg1 ;
-(id<FBPaymentsPaymentMethodPickerViewControllerDelegate>)delegate;
-(void)_updateBackgroundColor;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateNavigationBar;
-(void)_updateTitle;
@end
