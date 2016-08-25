/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUItemsCollectionController.h>
#import <eBay/EBNPagedResultsDataManagerObserver.h>
#import <eBay/EBUDynamicHeightViewDelegate.h>
#import <nautilus/EBNFollowedDataManagerObserver.h>

@class EBNCollectionDetailsDataManager, EBUFeedCollectionHeaderView, EBUFeedCollectionDescriptionCell, EBULandingPageViewController, EUILineSeparatorView, NSString;

@interface EBUFeedCollectionItemsController : EBUItemsCollectionController <EBNPagedResultsDataManagerObserver, EBUDynamicHeightViewDelegate, EBNFollowedDataManagerObserver> {

	BOOL _alreadyTracked;
	BOOL _shouldCollapseHeader;
	BOOL _descriptionIsExpanded;
	EBNCollectionDetailsDataManager* _dataManager;
	EBUFeedCollectionHeaderView* _feedCollectionHeaderView;
	EBUFeedCollectionDescriptionCell* _feedCollectionDescriptionCell;
	EBULandingPageViewController* _similarSection;
	EUILineSeparatorView* _brandingStripView;

}

@property (nonatomic,retain) EBUFeedCollectionHeaderView * feedCollectionHeaderView;                        //@synthesize feedCollectionHeaderView=_feedCollectionHeaderView - In the implementation block
@property (nonatomic,retain) EBUFeedCollectionDescriptionCell * feedCollectionDescriptionCell;              //@synthesize feedCollectionDescriptionCell=_feedCollectionDescriptionCell - In the implementation block
@property (assign,nonatomic) BOOL alreadyTracked;                                                           //@synthesize alreadyTracked=_alreadyTracked - In the implementation block
@property (assign,nonatomic) BOOL shouldCollapseHeader;                                                     //@synthesize shouldCollapseHeader=_shouldCollapseHeader - In the implementation block
@property (assign,nonatomic) BOOL descriptionIsExpanded;                                                    //@synthesize descriptionIsExpanded=_descriptionIsExpanded - In the implementation block
@property (nonatomic,retain) EBULandingPageViewController * similarSection;                                 //@synthesize similarSection=_similarSection - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * brandingStripView;                                      //@synthesize brandingStripView=_brandingStripView - In the implementation block
@property (nonatomic,retain) EBNCollectionDetailsDataManager * dataManager;                                 //@synthesize dataManager=_dataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewHeightChanged:(id)arg1 ;
-(BOOL)canLoadMore;
-(void)refetchContents;
-(id)feedEntity;
-(long long)defaultPresentationType;
-(EUILineSeparatorView *)brandingStripView;
-(void)setBrandingStripView:(EUILineSeparatorView *)arg1 ;
-(void)setAlreadyTracked:(BOOL)arg1 ;
-(void)setShouldCollapseHeader:(BOOL)arg1 ;
-(BOOL)alreadyTracked;
-(BOOL)useNIBForHeader;
-(void)setSimilarSection:(EBULandingPageViewController *)arg1 ;
-(BOOL)shouldCollapseHeader;
-(EBULandingPageViewController *)similarSection;
-(void)showFullFeedCollectionDescription;
-(void)setupHeaderViewLayoutConstraints:(BOOL)arg1 ;
-(void)loadSimilars;
-(void)followedDataManagerDidUpdate:(long long)arg1 ;
-(EBUFeedCollectionHeaderView *)feedCollectionHeaderView;
-(void)setFeedCollectionHeaderView:(EBUFeedCollectionHeaderView *)arg1 ;
-(EBUFeedCollectionDescriptionCell *)feedCollectionDescriptionCell;
-(void)setFeedCollectionDescriptionCell:(EBUFeedCollectionDescriptionCell *)arg1 ;
-(BOOL)descriptionIsExpanded;
-(void)setDescriptionIsExpanded:(BOOL)arg1 ;
-(void)setDataManager:(EBNCollectionDetailsDataManager *)arg1 ;
-(EBNCollectionDetailsDataManager *)dataManager;
-(void)registerTracking;
-(void)followedDataManager:(id)arg1 didUpdate:(long long)arg2 ;
-(void)followedDataManager:(id)arg1 didUpdateHiddenEntities:(long long)arg2 ;
-(unsigned long long)loadedCount;
-(void)pagedDataManagerDidFindItems:(id)arg1 ;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)loadMore;
@end
