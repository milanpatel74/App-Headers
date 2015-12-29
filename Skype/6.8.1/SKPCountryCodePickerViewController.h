//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPModalViewController.h"

#import "SKPArrayControllerDelegate.h"
#import "SKPSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MKNavigationBar, MKTableView, NSString, SKPArrayController, SKPSearchBar, UIBarButtonItem, UIView;

@interface SKPCountryCodePickerViewController : SKPModalViewController <UITableViewDelegate, UITableViewDataSource, SKPArrayControllerDelegate, SKPSearchBarDelegate>
{
    _Bool _searchActive;
    id <SKPCountryCodePickerViewControllerDelegate> _delegate;
    MKTableView *_tableView;
    UIView *_navigationBarWrapper;
    MKNavigationBar *_headerNavigationBar;
    SKPSearchBar *_searchBar;
    UIView *_searchBarWrapper;
    NSString *_searchText;
    UIView *_overlayView;
    UIBarButtonItem *_cancelItem;
    SKPArrayController *_controller;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) SKPArrayController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic, getter=isSearchActive) _Bool searchActive; // @synthesize searchActive=_searchActive;
@property(retain, nonatomic) UIView *searchBarWrapper; // @synthesize searchBarWrapper=_searchBarWrapper;
@property(retain, nonatomic) SKPSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MKNavigationBar *headerNavigationBar; // @synthesize headerNavigationBar=_headerNavigationBar;
@property(retain, nonatomic) UIView *navigationBarWrapper; // @synthesize navigationBarWrapper=_navigationBarWrapper;
@property(retain, nonatomic) MKTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SKPCountryCodePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateSearchBarCancelButtonAccessibilityLabel;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)controllerDidChangeAllContent:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didMoveSectionAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)controller:(id)arg1 didInsertSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didDeleteSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didMoveObjectAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)controller:(id)arg1 didInsertObjectsAtIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didDeleteObjectsAtIndexPaths:(id)arg2;
- (void)controllerWillChangeContent:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (void)didCancelPicker:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)reorderViewsPushingSearchBarIntoTableView;
- (void)collapseViewsAfterSearch:(_Bool)arg1;
- (void)expandViewsToStartSearch:(_Bool)arg1;
- (void)reorderViewsPullingSearchBarFromTableView;
- (double)searchBarWrapperGrowingCap;
- (void)updateCoutriesPredicate;
- (_Bool)shouldHideIndexBarAndSection;
- (void)deactivateSearch;
- (void)activateSearch;
- (void)updateOverlayView;
- (id)countriesPredicate;
- (void)scrollTableViewToHideSearchBar;
- (_Bool)searchBarIsSticky;
- (long long)preferredStatusBarStyle;
- (void)didTapOverlayView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

