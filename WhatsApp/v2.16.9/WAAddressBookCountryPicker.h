/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@protocol WAAddressBookCountryPickerDelegate;
@class NSArray, NSDictionary;

@interface WAAddressBookCountryPicker : WATableViewController {

	NSArray* _sectionTitles;
	NSDictionary* _countryMap;
	id<WAAddressBookCountryPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAAddressBookCountryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)pickerWithDelegate:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(id)countryInfoForTableIndexPath:(id)arg1 ;
-(void)setDelegate:(id<WAAddressBookCountryPickerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<WAAddressBookCountryPickerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)cancelAction:(id)arg1 ;
@end
