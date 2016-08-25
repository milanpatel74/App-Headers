/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/ProgressViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <eBay/CheckoutDataManagerObserver.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EBNAddressBookProtocol, NewShippingAddressDelegate;
@class UIResponder, NSString, UISwitch, UITableView, CountryCodeWrapper, PostalAddress, ActionCell, LPNumberInfo, EBNCheckoutDataManager, AddressModifiedFields, EBUActionButton, UIBarButtonItem, UIButton;

@interface NewShippingAddress : ProgressViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate, CheckoutDataManagerObserver, UIAlertViewDelegate> {

	UIResponder* currentResponder;
	NSString* designatedFirstResponder;
	BOOL nextButtonTapped;
	BOOL isEditing;
	BOOL textEditSemaphore;
	UISwitch* defaultAddressSwitch;
	BOOL _phoneNumberFocused;
	BOOL _phoneNumberRed;
	BOOL _deleteKeyTapped;
	BOOL _showMakePrimary;
	BOOL _canSelectCountry;
	BOOL _forShippingLabel;
	BOOL _lastMakePrimaryState;
	UITableView* _addressTableView;
	CountryCodeWrapper* _selectedCountryCode;
	PostalAddress* _shippingAddress;
	ActionCell* _countryCell;
	LPNumberInfo* _asYouTypeNumberInfo;
	EBNCheckoutDataManager*<EBNAddressBookProtocol> _abDataManager;
	id<NewShippingAddressDelegate> _delegate;
	unsigned long long _lastSavedAddressHash;
	AddressModifiedFields* _modifiedFields;
	PostalAddress* _addressFieldValues;
	/*^block*/id _completionBlock;
	EBUActionButton* _doneButton;
	UIBarButtonItem* _doneButtonItem;
	UIButton* _cancelButton;
	UIBarButtonItem* _cancelButtonItem;
	NSRange _phoneNumberChangedRange;

}

@property (assign,nonatomic) BOOL lastMakePrimaryState;                                        //@synthesize lastMakePrimaryState=_lastMakePrimaryState - In the implementation block
@property (assign,nonatomic) unsigned long long lastSavedAddressHash;                          //@synthesize lastSavedAddressHash=_lastSavedAddressHash - In the implementation block
@property (retain) AddressModifiedFields * modifiedFields;                                     //@synthesize modifiedFields=_modifiedFields - In the implementation block
@property (retain) PostalAddress * addressFieldValues;                                         //@synthesize addressFieldValues=_addressFieldValues - In the implementation block
@property (copy) id completionBlock;                                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) EBUActionButton * doneButton;                                               //@synthesize doneButton=_doneButton - In the implementation block
@property (retain) UIBarButtonItem * doneButtonItem;                                           //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (retain) UIButton * cancelButton;                                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) UIBarButtonItem * cancelButtonItem;                                         //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (assign) BOOL phoneNumberFocused;                                                    //@synthesize phoneNumberFocused=_phoneNumberFocused - In the implementation block
@property (assign) BOOL phoneNumberRed;                                                        //@synthesize phoneNumberRed=_phoneNumberRed - In the implementation block
@property (retain) UITableView * addressTableView;                                             //@synthesize addressTableView=_addressTableView - In the implementation block
@property (retain) CountryCodeWrapper * selectedCountryCode;                                   //@synthesize selectedCountryCode=_selectedCountryCode - In the implementation block
@property (retain) PostalAddress * shippingAddress;                                            //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (retain) ActionCell * countryCell;                                                   //@synthesize countryCell=_countryCell - In the implementation block
@property (retain) LPNumberInfo * asYouTypeNumberInfo;                                         //@synthesize asYouTypeNumberInfo=_asYouTypeNumberInfo - In the implementation block
@property (retain) EBNCheckoutDataManager*<EBNAddressBookProtocol> abDataManager;              //@synthesize abDataManager=_abDataManager - In the implementation block
@property (assign,nonatomic,__weak) id<NewShippingAddressDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSRange phoneNumberChangedRange;                                            //@synthesize phoneNumberChangedRange=_phoneNumberChangedRange - In the implementation block
@property (assign) BOOL deleteKeyTapped;                                                       //@synthesize deleteKeyTapped=_deleteKeyTapped - In the implementation block
@property (assign) BOOL showMakePrimary;                                                       //@synthesize showMakePrimary=_showMakePrimary - In the implementation block
@property (assign) BOOL canSelectCountry;                                                      //@synthesize canSelectCountry=_canSelectCountry - In the implementation block
@property (assign) BOOL forShippingLabel;                                                      //@synthesize forShippingLabel=_forShippingLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shippingAddressController;
-(void)trackViewDidBecomeActive;
-(void)updateUIElements;
-(BOOL)resignCurrentResponder;
-(id)containingCellOfResponder:(id)arg1 ;
-(void)setCurrentResponder:(id)arg1 ;
-(void)scrollResponderToVisible;
-(void)previous:(id)arg1 ;
-(void)setAbDataManager:(EBNCheckoutDataManager*<EBNAddressBookProtocol>)arg1 ;
-(BOOL)canSelectCountry;
-(void)setCanSelectCountry:(BOOL)arg1 ;
-(void)setCountryCell:(ActionCell *)arg1 ;
-(ActionCell *)countryCell;
-(void)selectCountryCode:(id)arg1 ;
-(void)setPhoneNumberChangedRange:(NSRange)arg1 ;
-(NSRange)phoneNumberChangedRange;
-(void)setShowMakePrimary:(BOOL)arg1 ;
-(void)setPhoneNumberFocused:(BOOL)arg1 ;
-(EBNCheckoutDataManager*<EBNAddressBookProtocol>)abDataManager;
-(void)setLastSavedAddressHash:(unsigned long long)arg1 ;
-(void)setLastMakePrimaryState:(BOOL)arg1 ;
-(UITableView *)addressTableView;
-(void)getAddressFromCells;
-(BOOL)isAddressFieldModified:(id)arg1 ;
-(void)phoneEditFinished:(id)arg1 ;
-(void)autoFormatTextField:(id)arg1 ;
-(void)restoreAddressToCells;
-(void)highlightRequiredCells;
-(BOOL)showMakePrimary;
-(void)setAsDefault:(id)arg1 ;
-(void)setupEnabledState;
-(id)teCellForIdentifier:(id)arg1 ;
-(BOOL)hasValidPhoneEntry;
-(unsigned long long)lastSavedAddressHash;
-(BOOL)lastMakePrimaryState;
-(void)showInvalidPhoneNumberAlert;
-(void)getRequiredCells;
-(BOOL)requiredFieldsEntered;
-(void)setupTableCells:(BOOL)arg1 ;
-(void)updateModifiedCells;
-(BOOL)phoneNumberFocused;
-(LPNumberInfo *)asYouTypeNumberInfo;
-(void)setAsYouTypeNumberInfo:(LPNumberInfo *)arg1 ;
-(BOOL)deleteKeyTapped;
-(BOOL)phoneNumberRed;
-(void)setDeleteKeyTapped:(BOOL)arg1 ;
-(id)nameTextEditCell;
-(void)countryCodeSelected:(id)arg1 ;
-(void)setPhoneNumberRed:(BOOL)arg1 ;
-(void)setAddressTableView:(UITableView *)arg1 ;
-(BOOL)forShippingLabel;
-(void)setForShippingLabel:(BOOL)arg1 ;
-(AddressModifiedFields *)modifiedFields;
-(PostalAddress *)addressFieldValues;
-(void)addressBookIsBeingChanged;
-(void)addressBookUpdateAddFailed;
-(void)setModifiedFields:(AddressModifiedFields *)arg1 ;
-(void)setAddressFieldValues:(PostalAddress *)arg1 ;
-(void)setDelegate:(id<NewShippingAddressDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<NewShippingAddressDelegate>)delegate;
-(id)indexPathForCell:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setDoneButton:(EBUActionButton *)arg1 ;
-(EBUActionButton *)doneButton;
-(void)done:(id)arg1 ;
-(void)addAddress:(id)arg1 ;
-(CountryCodeWrapper *)selectedCountryCode;
-(void)setSelectedCountryCode:(CountryCodeWrapper *)arg1 ;
-(void)addressBookChanged:(BOOL)arg1 ;
-(void)dismissView;
-(PostalAddress *)shippingAddress;
-(void)setShippingAddress:(PostalAddress *)arg1 ;
-(void)next:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
@end
