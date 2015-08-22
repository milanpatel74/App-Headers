/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTabbedViewController.h>

@protocol ECSearchResultsMapViewNavigationProtocol;
@class ECSearchAdsDataProvider, ECResultsViewSegmentedControl, ECSearchResultsViewController;

@interface ECSearchResultsTabbedViewController : ECBaseTabbedViewController {

	BOOL _usersAds;
	ECSearchAdsDataProvider* _dataProvider;
	ECResultsViewSegmentedControl* _resultViewTypeSegmentedControl;
	ECSearchResultsViewController* _listController;
	ECSearchResultsViewController* _galleryController;
	id<ECSearchResultsMapViewNavigationProtocol> _navigationDelegate;

}

@property (nonatomic,retain) ECSearchAdsDataProvider * dataProvider;                                       //@synthesize dataProvider=_dataProvider - In the implementation block
@property (assign,nonatomic) BOOL usersAds;                                                                //@synthesize usersAds=_usersAds - In the implementation block
@property (nonatomic,retain) ECResultsViewSegmentedControl * resultViewTypeSegmentedControl;               //@synthesize resultViewTypeSegmentedControl=_resultViewTypeSegmentedControl - In the implementation block
@property (nonatomic,retain) ECSearchResultsViewController * listController;                               //@synthesize listController=_listController - In the implementation block
@property (nonatomic,retain) ECSearchResultsViewController * galleryController;                            //@synthesize galleryController=_galleryController - In the implementation block
@property (nonatomic,retain) id<ECSearchResultsMapViewNavigationProtocol> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL canShowGallery; 
@property (nonatomic,readonly) BOOL canShowMap; 
-(void)setGalleryController:(ECSearchResultsViewController *)arg1 ;
-(void)setResultViewTypeSegmentedControl:(ECResultsViewSegmentedControl *)arg1 ;
-(ECResultsViewSegmentedControl *)resultViewTypeSegmentedControl;
-(BOOL)canShowGallery;
-(ECSearchResultsViewController *)galleryController;
-(void)resultViewTypeSegmentedControlAction:(id)arg1 ;
-(void)selectViewType:(long long)arg1 ;
-(id)contollerForType:(long long)arg1 ;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(void)trackViewSelected:(long long)arg1 ;
-(void)setUsersAds:(BOOL)arg1 ;
-(BOOL)usersAds;
-(BOOL)canShowMap;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDataProvider:(ECSearchAdsDataProvider *)arg1 ;
-(ECSearchAdsDataProvider *)dataProvider;
-(id<ECSearchResultsMapViewNavigationProtocol>)navigationDelegate;
-(void)setNavigationDelegate:(id<ECSearchResultsMapViewNavigationProtocol>)arg1 ;
-(void)setListController:(ECSearchResultsViewController *)arg1 ;
-(ECSearchResultsViewController *)listController;
@end
