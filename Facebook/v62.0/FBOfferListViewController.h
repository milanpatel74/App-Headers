/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>

@protocol FBServiceTransactionMutating;
@class FBComponentTableViewDataSource, FBOffersModuleToolbox, FBPullToRefreshView, NSMutableSet, NSString, FBUserSession, UIView;

@interface FBOfferListViewController : UIViewController <FBPullToRefreshViewDelegate, FBComponentScrollEventListener, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceCellConfigProvider> {

	FBComponentTableViewDataSource* _dataSource;
	id<FBServiceTransactionMutating> _token;
	FBOffersModuleToolbox* _toolbox;
	FBPullToRefreshView* _pullToRefreshView;
	NSMutableSet* _seenSet;
	NSString* _location;
	BOOL _showingActiveOffers;
	BOOL _repopulating;
	FBUserSession* _session;
	UIView* _backgroundView;

}

@property (nonatomic,readonly) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL showingActiveOffers;               //@synthesize showingActiveOffers=_showingActiveOffers - In the implementation block
@property (assign,nonatomic) BOOL repopulating;                      //@synthesize repopulating=_repopulating - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithSession:(id)arg1 location:(id)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)fb_showNavBarSearchField;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(void)_onDownloadError;
-(void)_onTappedMarkAsUsed:(id)arg1 context:(id)arg2 ;
-(void)_onTappedMarkAsUnused:(id)arg1 context:(id)arg2 ;
-(void)_onTappedSaveToWallet:(id)arg1 context:(id)arg2 ;
-(void)_onTappedRemoveFromWallet:(id)arg1 context:(id)arg2 ;
-(void)_onTappedVisitPage:(id)arg1 context:(id)arg2 ;
-(void)_onTappedShare:(id)arg1 context:(id)arg2 ;
-(void)_onTappedGoToWallet:(id)arg1 context:(id)arg2 ;
-(void)offerDidChange:(id)arg1 ;
-(void)_onTappedVisitSite:(id)arg1 context:(id)arg2 ;
-(void)_onTappedSeeOfferDetails:(id)arg1 context:(id)arg2 ;
-(void)setShowingActiveOffers:(BOOL)arg1 ;
-(void)_requestData:(BOOL)arg1 ;
-(void)_repopulate:(id)arg1 fromCache:(BOOL)arg2 forceRequest:(BOOL)arg3 ;
-(id)_sortMergeCoupons:(id)arg1 offers:(id)arg2 ;
-(void)_setupSingleMessageScreen:(id)arg1 ;
-(void)pushOfferDetailsController:(id)arg1 ;
-(void)_removeItemAtIndexPath:(id)arg1 ;
-(BOOL)showingActiveOffers;
-(BOOL)repopulating;
-(void)setRepopulating:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UIView *)backgroundView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
