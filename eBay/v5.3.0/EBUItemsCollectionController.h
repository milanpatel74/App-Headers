/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <ComponentUI/EUIImageViewLoaderDelegate.h>
#import <eBay/EBUItemsCollectionControllerProtocol.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <eBay/EGORefreshHelperDelegate.h>
#import <ComponentUI/EBNAppSpeedViewControllerProtocol.h>
#import <eBay/EBUImageZoomTransitionController.h>

@class UICollectionView, NSMutableArray, UIView, UIViewController, EGORefreshHelper, LoadingView, NSMutableIndexSet, EBNSiteSpeedTracker, NSString, EBUSplitViewItemPresenter, FloatingHeaderScrollViewContainer, NSTimer, NSIndexPath, UIAlertController, UICollectionViewCell;

@interface EBUItemsCollectionController : UICollectionViewController <EUIImageViewLoaderDelegate, EBUItemsCollectionControllerProtocol, UICollectionViewDelegateFlowLayout, EGORefreshHelperDelegate, EBNAppSpeedViewControllerProtocol, EBUImageZoomTransitionController> {

	BOOL predictiveAutoload;
	long long predictAutoloadThreshold;
	UICollectionView* itemsCollectionView;
	BOOL _hideContainersOnScroll;
	BOOL _hasPullToRefresh;
	BOOL _useExpandableSections;
	BOOL _showNoResultsCell;
	BOOL _isLayoutAnimating;
	BOOL _preventLayoutChangeReentrance;
	BOOL _trackPresentationTypeChange;
	BOOL _prefetchItemImages;
	long long _presentationType;
	unsigned long long _itemContext;
	Class _cellLayoutClass;
	NSMutableArray* _sections;
	UIView* _headerContainer;
	UIViewController* _headerController;
	UIView* _footerContainer;
	UIViewController* _footerController;
	EGORefreshHelper* _refreshHelper;
	LoadingView* _loadingIndicator;
	NSMutableIndexSet* _expandedSections;
	EBNSiteSpeedTracker* _siteSpeedTracker;
	NSString* _noResultsViewTitleString;
	NSString* _selectedListingID;
	EBUSplitViewItemPresenter* _splitViewItemPresenter;
	FloatingHeaderScrollViewContainer* _collectionViewContainer;
	long long _imagePreloadLookAhead;
	NSMutableArray* _preloadsInFlight;
	NSTimer* _endTimeUpdateTimer;
	NSIndexPath* _lastCellRequestedIndexPath;
	UIAlertController* _alertController;
	CGSize _preferredImageSize;

}

@property (nonatomic,retain) FloatingHeaderScrollViewContainer * collectionViewContainer;              //@synthesize collectionViewContainer=_collectionViewContainer - In the implementation block
@property (assign,nonatomic) BOOL isLayoutAnimating;                                                   //@synthesize isLayoutAnimating=_isLayoutAnimating - In the implementation block
@property (assign,nonatomic) CGSize preferredImageSize;                                                //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (assign,nonatomic) long long imagePreloadLookAhead;                                          //@synthesize imagePreloadLookAhead=_imagePreloadLookAhead - In the implementation block
@property (nonatomic,retain) NSMutableArray * preloadsInFlight;                                        //@synthesize preloadsInFlight=_preloadsInFlight - In the implementation block
@property (assign,nonatomic) long long presentationType;                                               //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) Class cellLayoutClass;                                                    //@synthesize cellLayoutClass=_cellLayoutClass - In the implementation block
@property (nonatomic,retain) NSTimer * endTimeUpdateTimer;                                             //@synthesize endTimeUpdateTimer=_endTimeUpdateTimer - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastCellRequestedIndexPath;                                 //@synthesize lastCellRequestedIndexPath=_lastCellRequestedIndexPath - In the implementation block
@property (assign,nonatomic) BOOL showNoResultsCell;                                                   //@synthesize showNoResultsCell=_showNoResultsCell - In the implementation block
@property (assign) BOOL preventLayoutChangeReentrance;                                                 //@synthesize preventLayoutChangeReentrance=_preventLayoutChangeReentrance - In the implementation block
@property (assign,nonatomic) BOOL trackPresentationTypeChange;                                         //@synthesize trackPresentationTypeChange=_trackPresentationTypeChange - In the implementation block
@property (assign,nonatomic) BOOL prefetchItemImages;                                                  //@synthesize prefetchItemImages=_prefetchItemImages - In the implementation block
@property (nonatomic,retain) EBUSplitViewItemPresenter * splitViewItemPresenter;                       //@synthesize splitViewItemPresenter=_splitViewItemPresenter - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) unsigned long long itemContext;                                           //@synthesize itemContext=_itemContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                                //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) UIView * headerContainer;                                                 //@synthesize headerContainer=_headerContainer - In the implementation block
@property (nonatomic,retain) UIViewController * headerController;                                      //@synthesize headerController=_headerController - In the implementation block
@property (nonatomic,retain) UIView * footerContainer;                                                 //@synthesize footerContainer=_footerContainer - In the implementation block
@property (nonatomic,retain) UIViewController * footerController;                                      //@synthesize footerController=_footerController - In the implementation block
@property (assign,nonatomic) BOOL hideContainersOnScroll;                                              //@synthesize hideContainersOnScroll=_hideContainersOnScroll - In the implementation block
@property (nonatomic,retain) EGORefreshHelper * refreshHelper;                                         //@synthesize refreshHelper=_refreshHelper - In the implementation block
@property (assign,nonatomic) BOOL hasPullToRefresh;                                                    //@synthesize hasPullToRefresh=_hasPullToRefresh - In the implementation block
@property (nonatomic,retain) LoadingView * loadingIndicator;                                           //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL useExpandableSections;                                               //@synthesize useExpandableSections=_useExpandableSections - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * expandedSections;                                     //@synthesize expandedSections=_expandedSections - In the implementation block
@property (nonatomic,retain) EBNSiteSpeedTracker * siteSpeedTracker;                                   //@synthesize siteSpeedTracker=_siteSpeedTracker - In the implementation block
@property (nonatomic,retain) NSString * noResultsViewTitleString;                                      //@synthesize noResultsViewTitleString=_noResultsViewTitleString - In the implementation block
@property (nonatomic,copy) NSString * selectedListingID;                                               //@synthesize selectedListingID=_selectedListingID - In the implementation block
@property (nonatomic,readonly) double headerPeekHeight; 
@property (nonatomic,readonly) UICollectionViewCell * noResultsCollectionCell; 
@property (nonatomic,readonly) long long defaultPresentationType; 
@property (nonatomic,readonly) BOOL saveSelectedPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id postLoadHandler; 
-(void)trackViewDidBecomeActive;
-(void)setItemContext:(unsigned long long)arg1 ;
-(BOOL)canLoadMore;
-(void)refetchContents;
-(void)showBusyState:(BOOL)arg1 ;
-(void)showNoResultsView:(BOOL)arg1 ;
-(void)reloadContents;
-(void)insertNewContent;
-(EGORefreshHelper *)refreshHelper;
-(UICollectionViewCell *)noResultsCollectionCell;
-(void)reloadTableViewDataSource;
-(void)setPresentationType:(long long)arg1 ;
-(void)handleDCSChanged:(id)arg1 ;
-(void)handleCurrencyConversionsUpdated:(id)arg1 ;
-(void)setCollectionViewContainer:(FloatingHeaderScrollViewContainer *)arg1 ;
-(FloatingHeaderScrollViewContainer *)collectionViewContainer;
-(BOOL)hideContainersOnScroll;
-(void)setupPresentationType;
-(BOOL)hasPullToRefresh;
-(void)setRefreshHelper:(EGORefreshHelper *)arg1 ;
-(UIView *)headerContainer;
-(NSMutableArray *)preloadsInFlight;
-(NSTimer *)endTimeUpdateTimer;
-(void)updateVisibleItemEndTimes;
-(void)setEndTimeUpdateTimer:(NSTimer *)arg1 ;
-(void)setSelectedListingID:(NSString *)arg1 ;
-(BOOL)useExpandableSections;
-(double)headerPeekHeight;
-(unsigned long long)itemContext;
-(BOOL)isContextMyEbaySelling:(unsigned long long)arg1 ;
-(void)setCellLayoutClass:(Class)arg1 ;
-(id)presentationNameMap;
-(BOOL)saveSelectedPresentation;
-(id)savedPresentationKey;
-(long long)presentationTypeFromString:(id)arg1 ;
-(long long)defaultPresentationType;
-(long long)initialPresentationType;
-(void)setPresentationType:(long long)arg1 animated:(BOOL)arg2 ;
-(id)stringFromPresentationType:(long long)arg1 ;
-(id)layoutForPresentationType:(long long)arg1 ;
-(void)setPreferredImageSize:(CGSize)arg1 ;
-(void)setIsLayoutAnimating:(BOOL)arg1 ;
-(void)willChangeToLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionFromGridToListLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitioningFromListToGridLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)animatingLayoutChangeToLayout:(id)arg1 oldLayout:(id)arg2 ;
-(void)didChangeToLayout:(id)arg1 animated:(BOOL)arg2 ;
-(long long)imagePreloadLookAhead;
-(void)setImagePreloadLookAhead:(long long)arg1 ;
-(void)dismissViewItem:(BOOL)arg1 ;
-(long long)normalizedSectionIndexPath:(id)arg1 ;
-(void)invalidateAdapterCache;
-(void)autoSelectItem;
-(void)setLastCellRequestedIndexPath:(NSIndexPath *)arg1 ;
-(void)reloadItemAtIndexPath:(id)arg1 ;
-(BOOL)preventLayoutChangeReentrance;
-(void)setPreventLayoutChangeReentrance:(BOOL)arg1 ;
-(void)updateVisibleCellsForLayoutChange;
-(void)deleteItemAtCell:(id)arg1 ;
-(id)listingForIndexPath:(id)arg1 ;
-(Class)cellLayoutClass;
-(void)configureListingCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSummaryCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)listingSummaryForIndexPath:(id)arg1 ;
-(BOOL)canConfigureCellForListing:(id)arg1 ;
-(void)configureListingCell:(id)arg1 withListing:(id)arg2 forIndexPath:(id)arg3 ;
-(BOOL)canEditItemAtIndexPath:(id)arg1 ;
-(void)deleteButton:(id)arg1 pressedAtCell:(id)arg2 ;
-(NSIndexPath *)lastCellRequestedIndexPath;
-(void)sweepPreloads:(id)arg1 ;
-(void)triggerLoadMoreForSection:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)isLayoutAnimating;
-(NSString *)selectedListingID;
-(BOOL)shouldAddVisitedItemsToRecents;
-(void)presentViewItemForItem:(id)arg1 context:(id)arg2 ;
-(BOOL)isItemAtIndexPathAutoSelectable:(id)arg1 ;
-(void)refreshVisibleItems;
-(UIView *)footerContainer;
-(NSString *)noResultsViewTitleString;
-(id)transitionImageView:(BOOL)arg1 ;
-(void)scrollToTop:(BOOL)arg1 ;
-(BOOL)isZoomImageAvailable:(BOOL)arg1 ;
-(CGRect)zoomTransitionTargetImageFrame:(BOOL)arg1 ;
-(id)transitionBackgroundColor;
-(void)setHeaderContainer:(UIView *)arg1 ;
-(void)setHeaderController:(UIViewController *)arg1 ;
-(void)setFooterContainer:(UIView *)arg1 ;
-(void)setFooterController:(UIViewController *)arg1 ;
-(void)setHideContainersOnScroll:(BOOL)arg1 ;
-(unsigned long long)loadedCountForSection:(unsigned long long)arg1 ;
-(void)resetContents;
-(void)reloadSelectedItem;
-(void)updateItemTimes;
-(BOOL)isItemOurItem:(id)arg1 ;
-(void)setHasPullToRefresh:(BOOL)arg1 ;
-(void)setUseExpandableSections:(BOOL)arg1 ;
-(void)setNoResultsViewTitleString:(NSString *)arg1 ;
-(EBUSplitViewItemPresenter *)splitViewItemPresenter;
-(void)setSplitViewItemPresenter:(EBUSplitViewItemPresenter *)arg1 ;
-(BOOL)showNoResultsCell;
-(void)setShowNoResultsCell:(BOOL)arg1 ;
-(void)setPreloadsInFlight:(NSMutableArray *)arg1 ;
-(BOOL)trackPresentationTypeChange;
-(void)setTrackPresentationTypeChange:(BOOL)arg1 ;
-(BOOL)prefetchItemImages;
-(void)setPrefetchItemImages:(BOOL)arg1 ;
-(void)imageViewLoader:(id)arg1 didSuccessfullyLoadForImageView:(id)arg2 ;
-(void)imageViewLoader:(id)arg1 didFailLoadForImageView:(id)arg2 ;
-(UIViewController *)headerController;
-(UIViewController *)footerController;
-(unsigned long long)loadedCount;
-(long long)appSpeedBeaconID;
-(EBNSiteSpeedTracker *)siteSpeedTracker;
-(void)setSiteSpeedTracker:(EBNSiteSpeedTracker *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)hasItems;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)dismissAlertController;
-(void)loadMore;
-(id)objectForIndexPath:(id)arg1 ;
-(long long)presentationType;
-(CGSize)preferredImageSize;
-(void)setLoadingIndicator:(LoadingView *)arg1 ;
-(LoadingView *)loadingIndicator;
-(NSMutableIndexSet *)expandedSections;
-(void)setExpandedSections:(NSMutableIndexSet *)arg1 ;
@end

