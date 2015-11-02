/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/WAForwardPickerDataSourceDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@protocol WAForwardPickerViewControllerDelegate;
@class UISegmentedControl, NSArray, WAForwardPickerSearchDataSource, NSMutableDictionary, _WAForwardPickerEmptyListView, UIToolbar, NSString;

@interface WAForwardPickerViewController : WATableViewController <WAForwardPickerDataSourceDelegate, UISearchDisplayDelegate> {

	UISegmentedControl* _segmentedControl;
	NSArray* _dataSources;
	WAForwardPickerSearchDataSource* _searchDataSource;
	long long _currentSourceType;
	NSMutableDictionary* _savedContentOffsets;
	BOOL _needsAdjustContentOffset;
	_WAForwardPickerEmptyListView* _emptyListView;
	UIToolbar* _toolbar;
	BOOL _requiresConfirmation;
	/*^block*/id _completionHandler;
	id<WAForwardPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL requiresConfirmation;                                              //@synthesize requiresConfirmation=_requiresConfirmation - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<WAForwardPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(void)wa_fontSizeDidChange;
-(void)searchWithCriteria:(id)arg1 ;
-(void)segmentedControlDidChange:(id)arg1 ;
-(void)setDataSourceType:(long long)arg1 ;
-(void)updateViewForCurrentSource;
-(BOOL)shouldShowSearchBar;
-(id)currentDataSource;
-(BOOL)isSearchBarShownForForwardPickerDataSource:(id)arg1 ;
-(id)confirmationTextForContactInfo:(id)arg1 ;
-(void)forwardPickerSearchDataSourceDidChangeContent:(id)arg1 ;
-(void)setRequiresConfirmation:(BOOL)arg1 ;
-(BOOL)requiresConfirmation;
-(void)setDelegate:(id<WAForwardPickerViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WAForwardPickerViewControllerDelegate>)delegate;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)awakeFromNib;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)cancel:(id)arg1 ;
@end

