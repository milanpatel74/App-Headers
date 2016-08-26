/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsAddressDataFetcherDelegate.h>
#import <Facebook/FBPaymentsAddressFormViewControllerDelegate.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBPaymentsActorFetching, FBPaymentsAddressListViewControllerDelegate, FBPaymentsAddressListViewControllerPickerDelegate, FBPaymentsNavigationDelegate, FBPaymentsConnectionStatusProviding;
@class NSString, FBUserSession, NSArray, UITableView, FBPaymentsAddressDataFetcher, FBMemMailingAddress, FBPaymentsFooterWrapperView, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsAddressListViewController : UIViewController <FBPaymentsAddressDataFetcherDelegate, FBPaymentsAddressFormViewControllerDelegate, FBPaymentsNavigationDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing, UITableViewDataSource, UITableViewDelegate> {

	NSString* _viewContextID;
	FBUserSession* _session;
	id<FBPaymentsActorFetching> _actorFetcher;
	NSArray* _addresses;
	UITableView* _tableView;
	FBPaymentsAddressDataFetcher* _addressDataFetcher;
	long long _listStyle;
	FBMemMailingAddress* _selectedAddress;
	FBPaymentsFooterWrapperView* _tableSectionFooterView;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsAddressListViewControllerDelegate> _delegate;
	id<FBPaymentsAddressListViewControllerPickerDelegate> _pickerDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _addressListCellStyle;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;

}

@property (assign,nonatomic,__weak) id<FBPaymentsAddressListViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsAddressListViewControllerPickerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                               //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long addressListCellStyle;                                                           //@synthesize addressListCellStyle=_addressListCellStyle - In the implementation block
@property (nonatomic,retain) id<FBPaymentsConnectionStatusProviding> connectionStatusProvider;                         //@synthesize connectionStatusProvider=_connectionStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hideNavBarRightButton;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(id)newNavigationController;
-(id)initPickerStyleAddressListWithSession:(id)arg1 currentSelectedAddress:(id)arg2 actorFetcher:(id)arg3 ;
-(void)addressDataFetcher:(id)arg1 didFetchAddresses:(id)arg2 ;
-(void)addressDataFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)addressDataFetcherWillFetchAddress:(id)arg1 ;
-(void)addressFormViewControllerDidCancel:(id)arg1 ;
-(void)addressFormViewControllerDidAddOrUpdateAddress:(id)arg1 ;
-(void)addressFormViewControllerHasUpdates:(id)arg1 ;
-(void)addressFormViewControllerDidDeleteAddress:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)initEditStyleAddressListWithSession:(id)arg1 actorFetcher:(id)arg2 ;
-(void)setConnectionStatusProvider:(id<FBPaymentsConnectionStatusProviding>)arg1 ;
-(void)_onCancel;
-(id<FBPaymentsConnectionStatusProviding>)connectionStatusProvider;
-(void)setAddressListCellStyle:(long long)arg1 ;
-(void)_didTapCellForAddress:(id)arg1 ;
-(id)_addressListCellForTableView:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_setIsLoadingAddress:(BOOL)arg1 ;
-(id)_pickerStyleAddressListCellForTableView:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)_editStyleAddressListCellForTableView:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_selectAddress:(id)arg1 ;
-(void)_pushAddressFormWithAddress:(id)arg1 ;
-(void)_presentAddressFormWithAddress:(id)arg1 ;
-(id)_addressFormViewControllerForAddress:(id)arg1 ;
-(long long)addressListCellStyle;
-(void)setDelegate:(id<FBPaymentsAddressListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBPaymentsAddressListViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_reloadData;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id<FBPaymentsAddressListViewControllerPickerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<FBPaymentsAddressListViewControllerPickerDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end
