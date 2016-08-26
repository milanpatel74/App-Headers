/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPageOffersDataFetcherDelegate.h>
#import <Facebook/FBComponentCollectionViewDataSourceCellConfigProvider.h>
#import <Facebook/FBEmbeddedTab.h>

@class FBStreamListView, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBStreamListViewStateManager, FBScenePath, FBPageOffersComponentContext, NSString, FBUserSession, FBPageOffersDataFetcher, NSArray, UIScrollView, UIView;

@interface FBPageOffersViewController : UIViewController <FBPageOffersDataFetcherDelegate, FBComponentCollectionViewDataSourceCellConfigProvider, FBEmbeddedTab> {

	FBStreamListView* _listView;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBStreamListViewStateManager* _viewStateManager;
	FBScenePath* _scenePath;
	FBPageOffersComponentContext* _componentContext;
	NSString* _pageFBID;
	FBUserSession* _userSession;
	FBPageOffersDataFetcher* _dataFetcher;
	NSArray* _currentOffers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
-(FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1 ;
-(void)refreshData;
-(BOOL)shouldApplyTabBarContentInsets;
-(id)initWithPageFBID:(id)arg1 userSession:(id)arg2 ;
-(void)dataFetchSucceededWithData:(id)arg1 ;
-(void)dataFetchFailedForPageWithError:(id)arg1 ;
-(id)createModel:(id)arg1 currentIndex:(long long)arg2 ;
-(UIScrollView *)scrollView;
-(void)viewDidLoad;
@end
