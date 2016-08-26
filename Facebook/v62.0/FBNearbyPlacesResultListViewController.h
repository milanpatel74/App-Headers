/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentCollectionSupplementaryElementViewProvider.h>
#import <Facebook/FBComponentCollectionViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBNearbyPlacesComponentAnalyticsDelegate.h>
#import <Facebook/FBNearbyPlacesResultListDataFetchingDelegate.h>
#import <Facebook/FBNearbyPlacesMapViewControllerDelegate.h>
#import <Facebook/FBNearbyPlacesResultListViewDelegate.h>
#import <Facebook/FBNearbyPlacesFilterBarDelegate.h>
#import <Facebook/FBNearbyPlacesAdvancedFiltersViewControllerDelegate.h>

@protocol FBNearbyPlacesResultListDataFetching, FBNearbyPlacesResultListViewControllerDelegate;
@class FBNearbyPlacesResultListModel, FBNearbyPlacesResultListView, FBNearbyPlacesMapViewController, FBNearbyPlacesLoggerHelper, FBNearbyPlacesPageActionHandler, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBContentInsetTracker, FBNearbyPlacesAdvancedFiltersModelController, UIScrollView, NSString;

@interface FBNearbyPlacesResultListViewController : UIViewController <FBComponentCellAppearanceEventListener, FBComponentCollectionSupplementaryElementViewProvider, FBComponentCollectionViewDataSourceSelectionEventListener, FBComponentScrollEventListener, FBNearbyPlacesComponentAnalyticsDelegate, FBNearbyPlacesResultListDataFetchingDelegate, FBNearbyPlacesMapViewControllerDelegate, FBNearbyPlacesResultListViewDelegate, FBNearbyPlacesFilterBarDelegate, FBNearbyPlacesAdvancedFiltersViewControllerDelegate> {

	FBNearbyPlacesResultListModel* _model;
	FBNearbyPlacesResultListView* _resultListView;
	FBNearbyPlacesMapViewController* _mapViewController;
	FBNearbyPlacesLoggerHelper* _nearbyPlacesLoggerHelper;
	FBNearbyPlacesPageActionHandler* _pageActionHandler;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBContentInsetTracker* _contentInsetTracker;
	id<FBNearbyPlacesResultListDataFetching> _dataFetcher;
	BOOL _withFilterBar;
	FBNearbyPlacesAdvancedFiltersModelController* _filtersModelController;
	unsigned long long _displayState;
	unsigned long long _displayMode;
	id<FBNearbyPlacesResultListViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long displayState;                                               //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,readonly) unsigned long long displayMode;                                                //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentView; 
@property (nonatomic,readonly) UIScrollView * noResultsView; 
@property (assign,nonatomic,__weak) id<FBNearbyPlacesResultListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(id)analyticsModule;
-(void)dataSource:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)displayState;
-(void)didTapOnToggleButton;
-(id)initWithSession:(id)arg1 searchData:(id)arg2 displayMode:(unsigned long long)arg3 withFilterBar:(BOOL)arg4 dataFetcher:(id)arg5 loggerHelper:(id)arg6 ;
-(void)setDisplayState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(UIScrollView *)noResultsView;
-(unsigned long long)indexOfComponentWithPage:(id)arg1 ;
-(void)componentWithPage:(id)arg1 didPerformAction:(unsigned long long)arg2 ;
-(void)componentWithPage:(id)arg1 didTapPhotoAtIndex:(unsigned long long)arg2 totalCount:(unsigned long long)arg3 ;
-(void)_openPageViewControllerForPage:(id)arg1 ;
-(id)resultListData;
-(void)_assertValidModel;
-(void)_updateModelWithResultListData:(id)arg1 ;
-(void)_cancelFetchRequest;
-(void)_sendFilterNetworkRequest;
-(void)_sendResultListNetworkRequest;
-(void)_applicationDidForeground:(id)arg1 ;
-(void)_logViewResultsList;
-(void)_didTapOnSeeMapButton;
-(void)_setupComponentDataSource;
-(void)_setupHybridMapView;
-(double)_hybridMapHeight;
-(void)_setHybridDisplayState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setToggleDisplayState:(unsigned long long)arg1 ;
-(void)_clearDataBeforeFetch;
-(void)_queueFetch:(id)arg1 ;
-(void)_setupMapViewControllerIfNeeded;
-(BOOL)_isMapVisible;
-(void)_updateComponentDataSourceFromModels:(id)arg1 toModels:(id)arg2 ;
-(void)_updateNoResultsViewVisibility;
-(void)_appendBrowseResultListIDsToBugReportData;
-(void)_sendPaginationRequest;
-(void)_logTappedTableViewListResultWithIndexPath:(id)arg1 cellType:(unsigned long long)arg2 tapAction:(unsigned long long)arg3 ;
-(void)loadPaginationIfNecessary:(FBScrollViewState)arg1 ;
-(void)_sendMapRegionNetworkRequest:(id)arg1 ;
-(void)_updateViewAndLogWithModel;
-(id)_indexPathForComponentWithPage:(id)arg1 ;
-(void)_logTappedTableViewListResultPhotoWithSelectedPhotoIndex:(unsigned long long)arg1 photoResultsCount:(unsigned long long)arg2 resultIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 indexPath:(id)arg3 ;
-(void)dataFetcher:(id)arg1 didFetchData:(id)arg2 fromCache:(BOOL)arg3 ;
-(void)dataFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)nearbyPlacesMapViewControllerDidTapOnSearchThisAreaButtonWithUserVisibleRegion:(SCD_Struct_FB5)arg1 ;
-(void)resultListViewDidTapTopInset:(id)arg1 ;
-(void)resultListViewDidPullHeaderDown:(id)arg1 ;
-(void)didTapFilterBar:(id)arg1 ;
-(void)filtersViewController:(id)arg1 didApplyFiltersModelFromController:(id)arg2 ;
-(void)sendFilterNetworkRequestIfNecessaryWithSortType:(unsigned long long)arg1 filterMask:(unsigned long long)arg2 ;
-(void)sendResultListNetworkRequestIfNecessary;
-(void)setDelegate:(id<FBNearbyPlacesResultListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(id<FBNearbyPlacesResultListViewControllerDelegate>)delegate;
-(UIScrollView *)contentView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)prepareForReuse;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)displayMode;
-(unsigned long long)resultsCount;
@end
