/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Gumtree/ECBrowseItemDataProvider.h>
#import <Gumtree/ECAppendageViewProvider.h>
#import <Gumtree/ECUserAdListAppendageViewDelegate.h>

@protocol ECBrowseItemDataProviderDelegate;
@class NSArray, ECUserAdManager, ECCellFactory, ECMyAdsCheckoutButton, UICollectionView, ECAdListCollectionViewLayout, ECUserAdListConfig, ECSectionMapDataSource, ECErrorWithRetryCellFactory, ECFeatureCellFactory, ECFeatureOrder, ECItemListSectionMapGenerator, ECLoadMoreScrollViewBehavior, ECLoadMoreSectionMapTransformer, ECPullToRefreshView, ECStatusBarView, ECNotificationObserver, ECAdActionsController, ECActivityIndicatorView, ECUserAdListEmptyView, NSString;

@interface ECUserAdListViewController : ECBaseViewController <UICollectionViewDelegateFlowLayout, ECBrowseItemDataProvider, ECAppendageViewProvider, ECUserAdListAppendageViewDelegate> {

	NSArray* _debugServices;
	id<ECBrowseItemDataProviderDelegate> _browseItemDataProviderDelegate;
	ECUserAdManager* _adManager;
	ECCellFactory* _cellFactory;
	ECMyAdsCheckoutButton* _checkoutButton;
	UICollectionView* _collectionView;
	ECAdListCollectionViewLayout* _collectionViewLayout;
	ECUserAdListConfig* _config;
	ECSectionMapDataSource* _dataSource;
	ECErrorWithRetryCellFactory* _errorWithRetryFactory;
	ECFeatureCellFactory* _featureCellFactory;
	ECFeatureOrder* _featureOrder;
	ECItemListSectionMapGenerator* _itemListGenerator;
	ECLoadMoreScrollViewBehavior* _loadMoreBehavior;
	ECLoadMoreSectionMapTransformer* _featuresLoadMoreTransformer;
	ECLoadMoreSectionMapTransformer* _userAdsLoadMoreTransformer;
	NSArray* _observerTokens;
	ECPullToRefreshView* _pullToRefreshView;
	ECStatusBarView* _statusBarView;
	ECNotificationObserver* _sessionObserver;
	ECAdActionsController* _adActions;
	ECActivityIndicatorView* _activityIndicator;
	ECUserAdListEmptyView* _emptyStateView;

}

@property (nonatomic,retain) ECUserAdManager * adManager;                                                             //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) ECCellFactory * cellFactory;                                                             //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) ECMyAdsCheckoutButton * checkoutButton;                                                  //@synthesize checkoutButton=_checkoutButton - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) ECAdListCollectionViewLayout * collectionViewLayout;                                     //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) ECUserAdListConfig * config;                                                             //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) ECSectionMapDataSource * dataSource;                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ECErrorWithRetryCellFactory * errorWithRetryFactory;                                     //@synthesize errorWithRetryFactory=_errorWithRetryFactory - In the implementation block
@property (nonatomic,retain) ECFeatureCellFactory * featureCellFactory;                                               //@synthesize featureCellFactory=_featureCellFactory - In the implementation block
@property (nonatomic,retain) ECFeatureOrder * featureOrder;                                                           //@synthesize featureOrder=_featureOrder - In the implementation block
@property (nonatomic,retain) ECItemListSectionMapGenerator * itemListGenerator;                                       //@synthesize itemListGenerator=_itemListGenerator - In the implementation block
@property (nonatomic,retain) ECLoadMoreScrollViewBehavior * loadMoreBehavior;                                         //@synthesize loadMoreBehavior=_loadMoreBehavior - In the implementation block
@property (nonatomic,retain) ECLoadMoreSectionMapTransformer * featuresLoadMoreTransformer;                           //@synthesize featuresLoadMoreTransformer=_featuresLoadMoreTransformer - In the implementation block
@property (nonatomic,retain) ECLoadMoreSectionMapTransformer * userAdsLoadMoreTransformer;                            //@synthesize userAdsLoadMoreTransformer=_userAdsLoadMoreTransformer - In the implementation block
@property (nonatomic,retain) NSArray * observerTokens;                                                                //@synthesize observerTokens=_observerTokens - In the implementation block
@property (nonatomic,retain) ECPullToRefreshView * pullToRefreshView;                                                 //@synthesize pullToRefreshView=_pullToRefreshView - In the implementation block
@property (nonatomic,retain) ECStatusBarView * statusBarView;                                                         //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * sessionObserver;                                                //@synthesize sessionObserver=_sessionObserver - In the implementation block
@property (nonatomic,retain) ECAdActionsController * adActions;                                                       //@synthesize adActions=_adActions - In the implementation block
@property (nonatomic,retain) ECActivityIndicatorView * activityIndicator;                                             //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) ECUserAdListEmptyView * emptyStateView;                                                  //@synthesize emptyStateView=_emptyStateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ECBrowseItemDataProviderDelegate> browseItemDataProviderDelegate;              //@synthesize browseItemDataProviderDelegate=_browseItemDataProviderDelegate - In the implementation block
-(void)setAdManager:(ECUserAdManager *)arg1 ;
-(ECUserAdManager *)adManager;
-(double)sizeMultiplier;
-(id)viewForAd:(id)arg1 metadata:(id)arg2 ;
-(id)browserItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfBrowserItem:(id)arg1 ;
-(id<ECBrowseItemDataProviderDelegate>)browseItemDataProviderDelegate;
-(void)setBrowseItemDataProviderDelegate:(id<ECBrowseItemDataProviderDelegate>)arg1 ;
-(id)debugServices;
-(ECCellFactory *)cellFactory;
-(void)configureCellFactory;
-(void)configureLoadMoreBehavior;
-(ECPullToRefreshView *)pullToRefreshView;
-(ECLoadMoreScrollViewBehavior *)loadMoreBehavior;
-(void)setPullToRefreshView:(ECPullToRefreshView *)arg1 ;
-(void)setLoadMoreBehavior:(ECLoadMoreScrollViewBehavior *)arg1 ;
-(id)initWithAdManager:(id)arg1 config:(id)arg2 ;
-(void)featureOrderDidUpdate;
-(void)setSessionObserver:(ECNotificationObserver *)arg1 ;
-(void)setObserverTokens:(NSArray *)arg1 ;
-(void)setCheckoutButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)cancelFeatureOrderAction:(id)arg1 ;
-(ECLoadMoreSectionMapTransformer *)featuresLoadMoreTransformer;
-(ECLoadMoreSectionMapTransformer *)userAdsLoadMoreTransformer;
-(void)updateEmptyStateView:(unsigned long long)arg1 ;
-(void)updateStatusBarView;
-(ECUserAdListEmptyView *)emptyStateView;
-(void)setEmptyStateView:(ECUserAdListEmptyView *)arg1 ;
-(void)attachToAdManager;
-(void)configureCheckoutButton;
-(void)configurePullToRefreshView;
-(void)showInfoForFeatureOrderItem:(id)arg1 ;
-(void)setFeatureCellFactory:(ECFeatureCellFactory *)arg1 ;
-(void)setErrorWithRetryFactory:(ECErrorWithRetryCellFactory *)arg1 ;
-(ECFeatureCellFactory *)featureCellFactory;
-(ECErrorWithRetryCellFactory *)errorWithRetryFactory;
-(void)setUserAdsLoadMoreTransformer:(ECLoadMoreSectionMapTransformer *)arg1 ;
-(void)setFeaturesLoadMoreTransformer:(ECLoadMoreSectionMapTransformer *)arg1 ;
-(void)displayAd:(id)arg1 startPromoteFlow:(BOOL)arg2 ;
-(void)promoteAd:(id)arg1 ;
-(NSArray *)observerTokens;
-(ECNotificationObserver *)sessionObserver;
-(ECAdActionsController *)adActions;
-(void)setAdActions:(ECAdActionsController *)arg1 ;
-(void)paymentButtonWasTapped:(id)arg1 forAd:(id)arg2 inView:(id)arg3 ;
-(void)promoteButtonWasTapped:(id)arg1 forAd:(id)arg2 inView:(id)arg3 ;
-(void)repostButtonWasTapped:(id)arg1 forAd:(id)arg2 inView:(id)arg3 ;
-(void)activateButtonWasTapped:(id)arg1 forAd:(id)arg2 inView:(id)arg3 ;
-(void)setCellFactory:(ECCellFactory *)arg1 ;
-(ECFeatureOrder *)featureOrder;
-(ECMyAdsCheckoutButton *)checkoutButton;
-(void)setFeatureOrder:(ECFeatureOrder *)arg1 ;
-(void)setCheckoutButton:(ECMyAdsCheckoutButton *)arg1 ;
-(void)setupActivityIndicator;
-(void)setItemListGenerator:(ECItemListSectionMapGenerator *)arg1 ;
-(ECItemListSectionMapGenerator *)itemListGenerator;
-(ECStatusBarView *)statusBarView;
-(void)setStatusBarView:(ECStatusBarView *)arg1 ;
-(void)setDataSource:(ECSectionMapDataSource *)arg1 ;
-(void)dealloc;
-(ECSectionMapDataSource *)dataSource;
-(ECAdListCollectionViewLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)loadView;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(ECUserAdListConfig *)config;
-(unsigned long long)numberOfItems;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setCollectionViewLayout:(ECAdListCollectionViewLayout *)arg1 ;
-(void)setConfig:(ECUserAdListConfig *)arg1 ;
-(ECActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(ECActivityIndicatorView *)arg1 ;
-(void)checkOut;
-(void)refresh;
-(BOOL)requiresAuthentication;
-(void)configureDataSource;
-(void)stateDidChange;
@end
