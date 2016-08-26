/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Skype/SKPViewModelArrayControllerDelegate.h>
#import <Skype/MKTokenFieldBarDelegate.h>
#import <Skype/SKPSearchBarDelegate.h>
#import <Skype/SKPContactsFilterHeaderCollectionViewDelegate.h>
#import <Skype/SKPAddContactPickerControllerDelegate.h>

@protocol SKPPeoplePickerViewControllerDelegate;
@class SKPViewModelArrayController, MKCollectionView, MKTokenFieldBar, SKPSearchBar, UIView, NSMutableSet, NSArray, NSString, MKGlobalStylesheet, SKPPeoplePickerContactsFilterView, SKPPeoplePickerSearchCell, NSMutableArray, SKPEmptyListView, UIScrollView, NSTimer;

@interface SKPPeoplePickerViewController : SKPViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SKPViewModelArrayControllerDelegate, MKTokenFieldBarDelegate, SKPSearchBarDelegate, SKPContactsFilterHeaderCollectionViewDelegate, SKPAddContactPickerControllerDelegate> {

	BOOL _enableMultiSelect;
	BOOL _disableUnauthorizedContacts;
	BOOL _hidePSTNContacts;
	BOOL _hideEcho123;
	BOOL _hideBots;
	BOOL _forceDisableContactsHeaderView;
	BOOL _shouldShowFavorites;
	BOOL _showWhiteOverlay;
	BOOL _isSearching;
	BOOL _hasSavedContactsCache;
	BOOL _hasSavedFavoritesCache;
	BOOL _showEmptyPage;
	BOOL _shouldObserveForEmptyPage;
	BOOL _shouldHaveLookupTimer;
	SKPViewModelArrayController* _singleSelectFavoritesController;
	SKPViewModelArrayController* _multiSelectFavoritesController;
	SKPViewModelArrayController* _singleSelectContactsController;
	SKPViewModelArrayController* _multiSelectContactsController;
	MKCollectionView* _collectionView;
	MKTokenFieldBar* _tokenFieldBar;
	SKPSearchBar* _searchBar;
	UIView* _searchBarContainer;
	UIView* _searchWhiteOverlay;
	id<SKPPeoplePickerViewControllerDelegate> _delegate;
	NSMutableSet* _selectedItems;
	unsigned long long _maximumSelectionSize;
	NSArray* _preselectedFavorites;
	NSArray* _preselectedContacts;
	NSString* _stringForPreselectedItems;
	double _bottomContentInset;
	MKGlobalStylesheet* _stylesheet;
	long long _state;
	long long _preferredStatusBarStyle;
	double _favoritesColumnWidth;
	double _favoritesRightMargin;
	double _topContentInset;
	double _topLayoutGuideLength;
	SKPViewModelArrayController* _favoritesController;
	SKPPeoplePickerContactsFilterView* _contactsHeaderView;
	SKPViewModelArrayController* _contactsController;
	long long _contactsFilterType;
	NSString* _searchText;
	SKPPeoplePickerSearchCell* _searchCell;
	NSMutableArray* _mutableSelectedContacts;
	SKPEmptyListView* _emptyPageView;
	UIScrollView* _emptyPageScrollView;
	NSTimer* _lookupTimer;
	CGRect _oldBounds;

}

@property (nonatomic,retain) MKGlobalStylesheet * stylesheet;                                              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) MKCollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) MKTokenFieldBar * tokenFieldBar;                                            //@synthesize tokenFieldBar=_tokenFieldBar - In the implementation block
@property (nonatomic,readonly) UIView * searchBarContainer;                                                //@synthesize searchBarContainer=_searchBarContainer - In the implementation block
@property (nonatomic,readonly) SKPSearchBar * searchBar;                                                   //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) long long preferredStatusBarStyle;                                            //@synthesize preferredStatusBarStyle=_preferredStatusBarStyle - In the implementation block
@property (assign,nonatomic) double favoritesColumnWidth;                                                  //@synthesize favoritesColumnWidth=_favoritesColumnWidth - In the implementation block
@property (assign,nonatomic) double favoritesRightMargin;                                                  //@synthesize favoritesRightMargin=_favoritesRightMargin - In the implementation block
@property (assign,nonatomic) CGRect oldBounds;                                                             //@synthesize oldBounds=_oldBounds - In the implementation block
@property (assign,nonatomic) double topContentInset;                                                       //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                                                  //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowFavorites;                                                   //@synthesize shouldShowFavorites=_shouldShowFavorites - In the implementation block
@property (nonatomic,retain) SKPViewModelArrayController * favoritesController;                            //@synthesize favoritesController=_favoritesController - In the implementation block
@property (nonatomic,readonly) SKPViewModelArrayController * multiSelectFavoritesController;               //@synthesize multiSelectFavoritesController=_multiSelectFavoritesController - In the implementation block
@property (nonatomic,readonly) SKPViewModelArrayController * singleSelectFavoritesController;              //@synthesize singleSelectFavoritesController=_singleSelectFavoritesController - In the implementation block
@property (nonatomic,retain) SKPPeoplePickerContactsFilterView * contactsHeaderView;                       //@synthesize contactsHeaderView=_contactsHeaderView - In the implementation block
@property (nonatomic,retain) SKPViewModelArrayController * contactsController;                             //@synthesize contactsController=_contactsController - In the implementation block
@property (nonatomic,readonly) SKPViewModelArrayController * multiSelectContactsController;                //@synthesize multiSelectContactsController=_multiSelectContactsController - In the implementation block
@property (nonatomic,readonly) SKPViewModelArrayController * singleSelectContactsController;               //@synthesize singleSelectContactsController=_singleSelectContactsController - In the implementation block
@property (assign,nonatomic) long long contactsFilterType;                                                 //@synthesize contactsFilterType=_contactsFilterType - In the implementation block
@property (nonatomic,readonly) UIView * searchWhiteOverlay;                                                //@synthesize searchWhiteOverlay=_searchWhiteOverlay - In the implementation block
@property (assign,getter=isShowingWhiteOverlay,nonatomic) BOOL showWhiteOverlay;                           //@synthesize showWhiteOverlay=_showWhiteOverlay - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                          //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) BOOL isSearching;                                                           //@synthesize isSearching=_isSearching - In the implementation block
@property (nonatomic,retain) SKPPeoplePickerSearchCell * searchCell;                                       //@synthesize searchCell=_searchCell - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedItems;                                                 //@synthesize selectedItems=_selectedItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSelectedContacts;                                     //@synthesize mutableSelectedContacts=_mutableSelectedContacts - In the implementation block
@property (assign,nonatomic) BOOL hasSavedContactsCache;                                                   //@synthesize hasSavedContactsCache=_hasSavedContactsCache - In the implementation block
@property (assign,nonatomic) BOOL hasSavedFavoritesCache;                                                  //@synthesize hasSavedFavoritesCache=_hasSavedFavoritesCache - In the implementation block
@property (assign,nonatomic) BOOL showEmptyPage;                                                           //@synthesize showEmptyPage=_showEmptyPage - In the implementation block
@property (nonatomic,retain) SKPEmptyListView * emptyPageView;                                             //@synthesize emptyPageView=_emptyPageView - In the implementation block
@property (nonatomic,retain) UIScrollView * emptyPageScrollView;                                           //@synthesize emptyPageScrollView=_emptyPageScrollView - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveForEmptyPage;                                               //@synthesize shouldObserveForEmptyPage=_shouldObserveForEmptyPage - In the implementation block
@property (nonatomic,readonly) BOOL userHasContacts; 
@property (nonatomic,readonly) BOOL isPerformingLookup; 
@property (assign,nonatomic) BOOL shouldHaveLookupTimer;                                                   //@synthesize shouldHaveLookupTimer=_shouldHaveLookupTimer - In the implementation block
@property (nonatomic,retain) NSTimer * lookupTimer;                                                        //@synthesize lookupTimer=_lookupTimer - In the implementation block
@property (assign,nonatomic,__weak) id<SKPPeoplePickerViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isMultiSelectEnabled,nonatomic) BOOL enableMultiSelect;                           //@synthesize enableMultiSelect=_enableMultiSelect - In the implementation block
@property (nonatomic,readonly) NSArray * selectedContacts; 
@property (nonatomic,readonly) NSArray * selectedIdentities; 
@property (assign,nonatomic) unsigned long long maximumSelectionSize;                                      //@synthesize maximumSelectionSize=_maximumSelectionSize - In the implementation block
@property (assign,nonatomic) BOOL disableUnauthorizedContacts;                                             //@synthesize disableUnauthorizedContacts=_disableUnauthorizedContacts - In the implementation block
@property (assign,nonatomic) BOOL hidePSTNContacts;                                                        //@synthesize hidePSTNContacts=_hidePSTNContacts - In the implementation block
@property (assign,nonatomic) BOOL hideEcho123;                                                             //@synthesize hideEcho123=_hideEcho123 - In the implementation block
@property (assign,nonatomic) BOOL hideBots;                                                                //@synthesize hideBots=_hideBots - In the implementation block
@property (nonatomic,copy) NSArray * preselectedFavorites;                                                 //@synthesize preselectedFavorites=_preselectedFavorites - In the implementation block
@property (nonatomic,copy) NSArray * preselectedContacts;                                                  //@synthesize preselectedContacts=_preselectedContacts - In the implementation block
@property (nonatomic,retain) NSString * stringForPreselectedItems;                                         //@synthesize stringForPreselectedItems=_stringForPreselectedItems - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAvailableContacts; 
@property (assign,nonatomic) double bottomContentInset;                                                    //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (nonatomic,readonly) BOOL isTokenFieldSearchActive; 
@property (assign,nonatomic) BOOL forceDisableContactsHeaderView;                                          //@synthesize forceDisableContactsHeaderView=_forceDisableContactsHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)tokenFieldBarClass;
+(id)observedKeyPathsForEmptyPage;
+(id)predicateForSingleSelectFavoritesWithSearchText:(id)arg1 ;
+(id)predicateForMultiSelectFavoritesWithSearchText:(id)arg1 ;
+(id)predicateForMultiSelectContactsWithFilterType:(long long)arg1 searchText:(id)arg2 hideEcho123:(BOOL)arg3 hideBots:(BOOL)arg4 hidePSTN:(BOOL)arg5 ;
+(id)predicateForSingleSelectContactsWithFilterType:(long long)arg1 searchText:(id)arg2 ;
-(void)setEnableMultiSelect:(BOOL)arg1 ;
-(void)setDisableUnauthorizedContacts:(BOOL)arg1 ;
-(void)setHidePSTNContacts:(BOOL)arg1 ;
-(void)setHideEcho123:(BOOL)arg1 ;
-(void)setHideBots:(BOOL)arg1 ;
-(unsigned long long)maximumSelectionSize;
-(MKTokenFieldBar *)tokenFieldBar;
-(void)setMaximumSelectionSize:(unsigned long long)arg1 ;
-(long long)contactsFilterType;
-(BOOL)isMultiSelectEnabled;
-(void)mkTokenFieldBar:(id)arg1 didAddToken:(id)arg2 obj:(id)arg3 ;
-(void)mkTokenFieldBar:(id)arg1 didRemoveToken:(id)arg2 obj:(id)arg3 ;
-(void)mkTokenFieldBarDidRemoveAllTokens:(id)arg1 ;
-(BOOL)mkTokenFieldBarShouldBeginEditing:(id)arg1 ;
-(void)mkTokenFieldBarDidBeginEditing:(id)arg1 ;
-(void)mkTokenFieldBarDidEndEditing:(id)arg1 ;
-(void)mkTokenFieldBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)mkTokenFieldBarTextDidReset:(id)arg1 ;
-(void)setContactsFilterType:(long long)arg1 ;
-(BOOL)hidePSTNContacts;
-(BOOL)hideEcho123;
-(BOOL)hideBots;
-(BOOL)isPerformingLookup;
-(void)controller:(id)arg1 didDeleteObjectsAtIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didInsertObjectsAtIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didMoveObjectAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)controllerDidChangeAllContent:(id)arg1 ;
-(void)controller:(id)arg1 didDeleteSectionsAtIndexes:(id)arg2 ;
-(void)controller:(id)arg1 didInsertSectionsAtIndexes:(id)arg2 ;
-(void)controller:(id)arg1 didMoveSectionAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(SKPEmptyListView *)emptyPageView;
-(void)setEmptyPageView:(SKPEmptyListView *)arg1 ;
-(void)setPreselectedContacts:(NSArray *)arg1 ;
-(void)setForceDisableContactsHeaderView:(BOOL)arg1 ;
-(NSArray *)selectedIdentities;
-(CGRect)oldBounds;
-(void)setOldBounds:(CGRect)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(void)showSkypeDirectorySearch:(id)arg1 ;
-(void)addContactPickerControllerDidCancel:(id)arg1 ;
-(void)addContactPickerController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)addContactPickerController:(id)arg1 callConversation:(id)arg2 ;
-(void)contactsFilterView:(id)arg1 didSelectFilterType:(long long)arg2 ;
-(void)onTokenFieldFrameDidChangeNotification:(id)arg1 ;
-(void)setShouldObserveForEmptyPage:(BOOL)arg1 ;
-(void)setShouldHaveLookupTimer:(BOOL)arg1 ;
-(UIScrollView *)emptyPageScrollView;
-(void)setEmptyPageScrollView:(UIScrollView *)arg1 ;
-(id)attributedEmptyPageTitleForState:(long long)arg1 isMultiSelectEnabled:(BOOL)arg2 ;
-(unsigned long long)numberOfAvailableContacts;
-(BOOL)userHasContacts;
-(NSTimer *)lookupTimer;
-(void)setLookupTimer:(NSTimer *)arg1 ;
-(void)lookupTimerDidFire:(id)arg1 ;
-(SKPViewModelArrayController *)contactsController;
-(BOOL)isEmptyState:(long long)arg1 ;
-(SKPPeoplePickerContactsFilterView *)contactsHeaderView;
-(BOOL)contactsHeaderViewShouldBeEnabledForState:(long long)arg1 ;
-(void)setShowEmptyPage:(BOOL)arg1 ;
-(UIView *)searchBarContainer;
-(void)moveTokenFieldBarToView:(id)arg1 ;
-(void)setShowWhiteOverlay:(BOOL)arg1 ;
-(BOOL)isMultiSelectState:(long long)arg1 ;
-(CGRect)tokenFieldBarFrameForState:(long long)arg1 ;
-(BOOL)forceDisableContactsHeaderView;
-(void)setFavoritesColumnWidth:(double)arg1 ;
-(void)setFavoritesRightMargin:(double)arg1 ;
-(CGRect)searchBarContainerFrameForState:(long long)arg1 ;
-(SKPViewModelArrayController *)favoritesController;
-(BOOL)shouldShowFavorites;
-(long long)initialStateWithMultiSelect:(BOOL)arg1 ;
-(SKPViewModelArrayController *)multiSelectFavoritesController;
-(SKPViewModelArrayController *)singleSelectFavoritesController;
-(void)setFavoritesController:(SKPViewModelArrayController *)arg1 ;
-(SKPViewModelArrayController *)multiSelectContactsController;
-(SKPViewModelArrayController *)singleSelectContactsController;
-(void)setContactsController:(SKPViewModelArrayController *)arg1 ;
-(CGRect)searchBarFrameForState:(long long)arg1 ;
-(UIView *)searchWhiteOverlay;
-(UIEdgeInsets)contentInsetsForState:(long long)arg1 ;
-(void)oneShotSaveContactsControllerIfAppropriate;
-(void)oneShotSaveFavoritesControllersIfAppropriate;
-(BOOL)hasSavedContactsCache;
-(void)setHasSavedContactsCache:(BOOL)arg1 ;
-(BOOL)hasSavedFavoritesCache;
-(void)setHasSavedFavoritesCache:(BOOL)arg1 ;
-(void)didTapSearchWhiteOverlay:(id)arg1 ;
-(SKPPeoplePickerSearchCell *)searchCell;
-(void)removeSelection:(id)arg1 ;
-(void)notifyDelegateOfChangeInSelection;
-(BOOL)sectionIsFavorites:(unsigned long long)arg1 ;
-(CGSize)sizeForFavoriteItemAtIndexPath:(id)arg1 ;
-(BOOL)sectionIsContacts:(unsigned long long)arg1 ;
-(CGSize)sizeForContactItemAtIndexPath:(id)arg1 ;
-(void)setContactsHeaderView:(SKPPeoplePickerContactsFilterView *)arg1 ;
-(CGSize)sizeForFavoriteHeaderAtSection:(long long)arg1 ;
-(CGSize)sizeForContactsHeaderAtSection:(long long)arg1 ;
-(unsigned long long)absoluteSectionIndexForContactsSectionIndex:(unsigned long long)arg1 ;
-(id)absoluteIndexPathForContactIndexPath:(id)arg1 ;
-(void)setSearchCell:(SKPPeoplePickerSearchCell *)arg1 ;
-(BOOL)isConversationIdentitySelected:(id)arg1 ;
-(id)indexPathForContactSourceFromIndexPath:(id)arg1 ;
-(BOOL)disableUnauthorizedContacts;
-(NSString *)stringForPreselectedItems;
-(void)setStringForPreselectedItems:(NSString *)arg1 ;
-(BOOL)indexPathIsPreselected:(id)arg1 ;
-(NSArray *)preselectedFavorites;
-(NSArray *)preselectedContacts;
-(id)initWithType:(long long)arg1 disableUnauthorizedContacts:(BOOL)arg2 preselectedFavorites:(id)arg3 preselectedContacts:(id)arg4 ;
-(BOOL)isTokenFieldSearchActive;
-(void)inactivateTokenFieldSearch;
-(void)setPreselectedFavorites:(NSArray *)arg1 ;
-(id)absoluteIndexPathsForContactIndexPaths:(id)arg1 ;
-(id)absoluteSectionIndexesForContactsSectionIndexes:(id)arg1 ;
-(double)favoritesColumnWidth;
-(double)favoritesRightMargin;
-(BOOL)isShowingWhiteOverlay;
-(NSMutableArray *)mutableSelectedContacts;
-(void)setMutableSelectedContacts:(NSMutableArray *)arg1 ;
-(BOOL)showEmptyPage;
-(BOOL)shouldObserveForEmptyPage;
-(BOOL)shouldHaveLookupTimer;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)setDelegate:(id<SKPPeoplePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SKPPeoplePickerViewControllerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(long long)preferredStatusBarStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithType:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(MKCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setSelection:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SKPSearchBar *)searchBar;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)updateSelection;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(NSString *)searchText;
-(BOOL)accessibilityPerformEscape;
-(NSMutableSet *)selectedItems;
-(void)setSelectedItems:(NSMutableSet *)arg1 ;
-(void)setPreferredStatusBarStyle:(long long)arg1 ;
-(void)addSelection:(id)arg1 ;
-(NSArray *)selectedContacts;
-(BOOL)isSearching;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)searchForText:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setTopContentInset:(double)arg1 ;
-(double)topContentInset;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
-(void)updateMetrics;
-(MKGlobalStylesheet *)stylesheet;
-(void)setStylesheet:(MKGlobalStylesheet *)arg1 ;
@end
