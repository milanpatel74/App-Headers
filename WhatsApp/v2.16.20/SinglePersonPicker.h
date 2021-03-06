/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <WhatsApp/WASearchResultsControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol SinglePersonPickerDelegate;
@class WATableSection, WAContactsSectionInfo, WATableRow, NSString, UIFont, NSMutableDictionary, UITableView, UISearchDisplayController, WASearchResultsController, NSArray;

@interface SinglePersonPicker : WAViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, WASearchResultsControllerDelegate, CNContactViewControllerDelegate> {

	long long _actionsSectionIndex;
	WATableSection* _actionCellSection;
	WAContactsSectionInfo* _frequentlyContacted;
	WATableRow* _platformsDescriptionRow;
	BOOL _needsRefreshOnContactsSync;
	BOOL _doNotAdjustSearchBarPosition;
	BOOL _resetContentOffsetInDidLayoutSubviews;
	NSString* _disabledContactStatusText;
	NSString* _blockedContactStatusText;
	UIFont* _singleLetterSectionTitleFont;
	UIFont* _longSectionTitleFont;
	double _sectionHeaderHeight;
	NSMutableDictionary* _contactInfosForChatSearchResults;
	id<SinglePersonPickerDelegate> _delegate;
	unsigned long long _pickerMode;
	UITableView* _tableView;
	UISearchDisplayController* _contactsSearchDisplayController;
	WASearchResultsController* _searchResultsController;
	NSArray* _contactsSections;
	unsigned long long _totalCount;

}

@property (nonatomic,retain) UITableView * tableView;                                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UISearchDisplayController * contactsSearchDisplayController;              //@synthesize contactsSearchDisplayController=_contactsSearchDisplayController - In the implementation block
@property (nonatomic,retain) WASearchResultsController * searchResultsController;                      //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,copy) NSArray * contactsSections;                                                 //@synthesize contactsSections=_contactsSections - In the implementation block
@property (assign,nonatomic) unsigned long long totalCount;                                            //@synthesize totalCount=_totalCount - In the implementation block
@property (assign,nonatomic,__weak) id<SinglePersonPickerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                            //@synthesize pickerMode=_pickerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(BOOL)searchResultsControllerShouldUpdateContent:(id)arg1 ;
-(void)searchResultsControllerWillUpdateContent:(id)arg1 ;
-(void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2 ;
-(void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2 ;
-(void)searchResultsController:(id)arg1 didInsertSections:(id)arg2 ;
-(void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2 ;
-(void)searchResultsControllerDidUpdateContent:(id)arg1 ;
-(void)searchResultsControllerDidChangeContent:(id)arg1 ;
-(void)syncManagerDidFinishSync:(id)arg1 ;
-(void)setContactsSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(UISearchDisplayController *)contactsSearchDisplayController;
-(id)contactInfoForTableIndexPath:(id)arg1 ;
-(NSArray *)contactsSections;
-(id)contactSectionInfoForTableSection:(unsigned long long)arg1 ;
-(void)setContactsSections:(NSArray *)arg1 ;
-(void)updateSupplementaryViews;
-(BOOL)showTableViewSectionIndex;
-(void)addNewContact;
-(void)presentFailedToRegisterDeviceAlert;
-(id)singleLetterSectionTitleFont;
-(BOOL)tableView:(id)arg1 isActionsSection:(long long)arg2 ;
-(id)longSectionTitleFont;
-(id)contactInfoForSearchResultAtIndexPath:(id)arg1 ;
-(void)unblockContact:(id)arg1 ;
-(void)fixSearchBarPlacementWithAnimationDuration:(double)arg1 ;
-(void)setDelegate:(id<SinglePersonPickerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<SinglePersonPickerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(double)sectionHeaderHeight;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(WASearchResultsController *)searchResultsController;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(id)searchResultsTableView;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)reloadContacts;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setSearchResultsController:(WASearchResultsController *)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(unsigned long long)totalCount;
-(void)setTotalCount:(unsigned long long)arg1 ;
@end

