/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECRefreshableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Gumtree/ECHomeSearchViewControllerDelegate.h>
#import <Gumtree/ECSearchProtocol.h>
#import <Gumtree/ECViewItemDetailsProtocol.h>

@protocol ECHomeRootViewControllerNavigationProtocol;
@class ECAppConfig, ECSearchManager, ECHomeSearchField, ECHomeSearchViewModel, NSTimer, NSDate, UIView, UITableView, ECBrowseItemDataProviderBridge, NSArray, ECHomePageConfiguration, ECSearchResults, NSMutableArray, ECHomeEditorialViewController, ECHomeItemViewController, ECLocation, ECLocationSelectionModule, ECSavedSearchesDataProvider, NSMutableDictionary, ECBusinessStripesDataProvider, ECHomeStripeOrderModel, NSString, ECSearchParameters;

@interface ECHomeRootViewController : ECRefreshableViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, ECHomeSearchViewControllerDelegate, ECSearchProtocol, ECViewItemDetailsProtocol> {

	BOOL _tableNeedsReloadFlag;
	BOOL _rowsNeedRefreshFlag;
	BOOL _isVisible;
	BOOL _didWarnAboutConnection;
	id<ECHomeRootViewControllerNavigationProtocol> _navigationDelegate;
	ECAppConfig* _appConfig;
	ECSearchManager* _searchManager;
	ECHomeSearchField* _keywordField;
	ECHomeSearchViewModel* _searchModel;
	NSTimer* _timer;
	NSDate* _nextUpdate;
	UIView* _hostingView;
	UITableView* _tableView;
	ECBrowseItemDataProviderBridge* _dataProviderBridge;
	NSArray* _observers;
	ECHomePageConfiguration* _configuration;
	ECSearchResults* _categoryHistogramResults;
	NSMutableArray* _rowData;
	ECHomeEditorialViewController* _editorialController;
	ECHomeItemViewController* _featuredController;
	ECHomeItemViewController* _nearbyController;
	ECHomeItemViewController* _businessController;
	ECHomeItemViewController* _watchlistController;
	ECLocation* _nonNearbyStripeLocation;
	ECLocation* _nearbyStripeLocation;
	ECLocationSelectionModule* _pickerModule;
	ECSavedSearchesDataProvider* _savedSearchesProvider;
	NSMutableDictionary* _savedSearchControllers;
	ECBusinessStripesDataProvider* _businessStripesProvider;
	NSMutableDictionary* _businessStripesControllers;
	ECHomeStripeOrderModel* _rowOrderModel;
	NSString* _lastUserName;

}

@property (nonatomic,retain) ECAppConfig * appConfig;                                                               //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,retain) ECSearchManager * searchManager;                                                       //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) ECHomeSearchField * keywordField;                                                      //@synthesize keywordField=_keywordField - In the implementation block
@property (nonatomic,retain) ECHomeSearchViewModel * searchModel;                                                   //@synthesize searchModel=_searchModel - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                                       //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * nextUpdate;                                                                   //@synthesize nextUpdate=_nextUpdate - In the implementation block
@property (assign,nonatomic,__weak) UIView * hostingView;                                                           //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) ECBrowseItemDataProviderBridge * dataProviderBridge;                                   //@synthesize dataProviderBridge=_dataProviderBridge - In the implementation block
@property (assign,nonatomic) BOOL tableNeedsReloadFlag;                                                             //@synthesize tableNeedsReloadFlag=_tableNeedsReloadFlag - In the implementation block
@property (assign,nonatomic) BOOL rowsNeedRefreshFlag;                                                              //@synthesize rowsNeedRefreshFlag=_rowsNeedRefreshFlag - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                                        //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,retain) NSArray * observers;                                                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) ECHomePageConfiguration * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) ECSearchParameters * currentSearchParameters; 
@property (nonatomic,readonly) NSString * currentKeyword; 
@property (nonatomic,retain) ECSearchResults * categoryHistogramResults;                                            //@synthesize categoryHistogramResults=_categoryHistogramResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * rowData;                                                              //@synthesize rowData=_rowData - In the implementation block
@property (nonatomic,retain) ECHomeEditorialViewController * editorialController;                                   //@synthesize editorialController=_editorialController - In the implementation block
@property (nonatomic,retain) ECHomeItemViewController * featuredController;                                         //@synthesize featuredController=_featuredController - In the implementation block
@property (nonatomic,retain) ECHomeItemViewController * nearbyController;                                           //@synthesize nearbyController=_nearbyController - In the implementation block
@property (nonatomic,retain) ECHomeItemViewController * businessController;                                         //@synthesize businessController=_businessController - In the implementation block
@property (nonatomic,retain) ECHomeItemViewController * watchlistController;                                        //@synthesize watchlistController=_watchlistController - In the implementation block
@property (nonatomic,retain) ECLocation * nonNearbyStripeLocation;                                                  //@synthesize nonNearbyStripeLocation=_nonNearbyStripeLocation - In the implementation block
@property (nonatomic,retain) ECLocation * nearbyStripeLocation;                                                     //@synthesize nearbyStripeLocation=_nearbyStripeLocation - In the implementation block
@property (nonatomic,retain) ECLocationSelectionModule * pickerModule;                                              //@synthesize pickerModule=_pickerModule - In the implementation block
@property (nonatomic,retain) ECSavedSearchesDataProvider * savedSearchesProvider;                                   //@synthesize savedSearchesProvider=_savedSearchesProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * savedSearchControllers;                                          //@synthesize savedSearchControllers=_savedSearchControllers - In the implementation block
@property (nonatomic,retain) ECBusinessStripesDataProvider * businessStripesProvider;                               //@synthesize businessStripesProvider=_businessStripesProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * businessStripesControllers;                                      //@synthesize businessStripesControllers=_businessStripesControllers - In the implementation block
@property (nonatomic,retain) ECHomeStripeOrderModel * rowOrderModel;                                                //@synthesize rowOrderModel=_rowOrderModel - In the implementation block
@property (assign,nonatomic) BOOL didWarnAboutConnection;                                                           //@synthesize didWarnAboutConnection=_didWarnAboutConnection - In the implementation block
@property (nonatomic,retain) NSString * lastUserName;                                                               //@synthesize lastUserName=_lastUserName - In the implementation block
@property (nonatomic,readonly) ECLocation * searchLocation; 
@property (assign,nonatomic,__weak) id<ECHomeRootViewControllerNavigationProtocol> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithSearchManager:(id)arg1 appConfig:(id)arg2 ;
-(ECSearchParameters *)currentSearchParameters;
-(void)trackPageView;
-(void)gotoCategoryPicker;
-(ECHomeSearchField *)keywordField;
-(void)locationDidUpdateNotification:(id)arg1 ;
-(void)showSearchForAlertID:(id)arg1 ;
-(void)updateSavedSearches:(id)arg1 ;
-(void)setRowsNeedRefreshFlag:(BOOL)arg1 ;
-(void)setTableNeedsReload;
-(void)updateStripeLocation:(id)arg1 isNearby:(BOOL)arg2 ;
-(ECLocation *)nonNearbyStripeLocation;
-(ECLocationSelectionModule *)pickerModule;
-(void)updateSearchFieldLocation:(id)arg1 ;
-(void)showLocationPickerWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)lastUserName;
-(void)updateRowOrderModelForUserLoginChange:(BOOL)arg1 ;
-(void)handleNewSavedSearch:(id)arg1 ;
-(void)handleDeletedSavedSearch:(id)arg1 ;
-(ECHomeItemViewController *)watchlistController;
-(void)setDidWarnAboutConnection:(BOOL)arg1 ;
-(void)updateRowOrderModel;
-(void)loadCategoryHistogram;
-(void)updateTableIfNeeded;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setCustomPlaceholderLocationString;
-(ECHomeStripeOrderModel *)rowOrderModel;
-(ECSearchResults *)categoryHistogramResults;
-(void)cancelModalNoTracking;
-(void)showSearchWithParameters:(id)arg1 ;
-(void)cancelModalDialogWithTracking:(id)arg1 ;
-(void)setPickerModule:(ECLocationSelectionModule *)arg1 ;
-(void)showSearchWithParameters:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDataProviderBridge:(ECBrowseItemDataProviderBridge *)arg1 ;
-(ECBrowseItemDataProviderBridge *)dataProviderBridge;
-(void)showAd:(id)arg1 withDataProvider:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)showAd:(id)arg1 withDataProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showLogin;
-(void)gotoKeywordSearch;
-(ECLocation *)nearbyStripeLocation;
-(void)setNearbyStripeLocation:(ECLocation *)arg1 ;
-(void)setNonNearbyStripeLocation:(ECLocation *)arg1 ;
-(ECSavedSearchesDataProvider *)savedSearchesProvider;
-(void)setTableNeedsReloadFlag:(BOOL)arg1 ;
-(BOOL)tableNeedsReloadFlag;
-(void)updateRowOrder;
-(BOOL)rowsNeedRefreshFlag;
-(void)refreshRows;
-(NSMutableArray *)rowData;
-(id)rowDataForPath:(id)arg1 ;
-(void)refreshSavedSearchRows;
-(void)setSavedSearchesProvider:(ECSavedSearchesDataProvider *)arg1 ;
-(ECBusinessStripesDataProvider *)businessStripesProvider;
-(void)setRowOrderModel:(ECHomeStripeOrderModel *)arg1 ;
-(void)updateUserSearchIdentifiers;
-(void)updateBusinessStripesIdentifiers;
-(void)setNextUpdate:(NSDate *)arg1 ;
-(void)setRowData:(NSMutableArray *)arg1 ;
-(void)addEditorialRow;
-(void)addFeaturedRow;
-(void)addLoginRow;
-(void)addNearbyRow;
-(void)addBusinessPickedRow;
-(void)addBusinessStripeRow:(id)arg1 ;
-(void)addSavedSearchRow:(id)arg1 ;
-(void)addWatchListRow;
-(void)addSettingsRow;
-(void)setLastUserName:(NSString *)arg1 ;
-(ECHomeEditorialViewController *)editorialController;
-(void)setEditorialController:(ECHomeEditorialViewController *)arg1 ;
-(void)showAndTrackAd:(id)arg1 withController:(id)arg2 rank:(unsigned long long)arg3 position:(unsigned long long)arg4 rowTypeName:(id)arg5 ;
-(void)showWatchList:(id)arg1 ;
-(void)handleError:(id)arg1 onHomeItemVC:(id)arg2 ;
-(void)setWatchlistController:(ECHomeItemViewController *)arg1 ;
-(ECHomeItemViewController *)featuredController;
-(id)createSearchRow:(id)arg1 withParameters:(id)arg2 noItemTitle:(id)arg3 withRowType:(long long)arg4 ;
-(void)setFeaturedController:(ECHomeItemViewController *)arg1 ;
-(void)updateControllerLocation:(id)arg1 ifYes:(BOOL)arg2 isNearby:(BOOL)arg3 ;
-(ECHomeItemViewController *)nearbyController;
-(void)setNearbyController:(ECHomeItemViewController *)arg1 ;
-(ECHomeItemViewController *)businessController;
-(void)setBusinessController:(ECHomeItemViewController *)arg1 ;
-(NSMutableDictionary *)businessStripesControllers;
-(void)showAd:(id)arg1 withController:(id)arg2 ;
-(NSMutableDictionary *)savedSearchControllers;
-(BOOL)isEditorialRow:(id)arg1 ;
-(BOOL)isStringRow:(id)arg1 ;
-(id)dequeueCellForController:(id)arg1 ;
-(id)updateStringCell:(id)arg1 ;
-(id)setupAccessibilityIdentifierForItemView:(id)arg1 ;
-(void)setCategoryHistogramResults:(ECSearchResults *)arg1 ;
-(BOOL)didWarnAboutConnection;
-(void)homeSearchViewControllerCanceled:(id)arg1 ;
-(void)homeSearchViewController:(id)arg1 searchWithParameters:(id)arg2 analyticsAction:(id)arg3 doRemember:(BOOL)arg4 ;
-(void)gotoSearchResultsWithParameters:(id)arg1 ;
-(void)gotoAdDetailsForAdWithIdentifier:(id)arg1 withSourceApplication:(id)arg2 ;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(NSString *)currentKeyword;
-(void)showLoginSelected:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 analyticsAction:(id)arg3 ;
-(void)setKeywordField:(ECHomeSearchField *)arg1 ;
-(UIView *)hostingView;
-(void)setHostingView:(UIView *)arg1 ;
-(void)setSavedSearchControllers:(NSMutableDictionary *)arg1 ;
-(void)setBusinessStripesProvider:(ECBusinessStripesDataProvider *)arg1 ;
-(void)setBusinessStripesControllers:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)beginRefreshing;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setConfiguration:(ECHomePageConfiguration *)arg1 ;
-(void)timerFired:(id)arg1 ;
-(BOOL)isVisible;
-(ECHomePageConfiguration *)configuration;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setSearchModel:(ECHomeSearchViewModel *)arg1 ;
-(ECHomeSearchViewModel *)searchModel;
-(id)token;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(ECLocation *)searchLocation;
-(ECAppConfig *)appConfig;
-(void)setAppConfig:(ECAppConfig *)arg1 ;
-(id<ECHomeRootViewControllerNavigationProtocol>)navigationDelegate;
-(void)setNavigationDelegate:(id<ECHomeRootViewControllerNavigationProtocol>)arg1 ;
-(NSDate *)nextUpdate;
-(ECSearchManager *)searchManager;
-(void)setSearchManager:(ECSearchManager *)arg1 ;
@end
