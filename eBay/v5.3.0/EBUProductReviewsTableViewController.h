/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightViewTableViewController.h>
#import <nautilus/EBNDataManagerObserver.h>
#import <eBay/EBUAbstractController.h>

@class EBNListing, EBNProductReviewsDataManager, NSHashTable, NSString, UIView, NSObject;

@interface EBUProductReviewsTableViewController : EBUDynamicHeightViewTableViewController <EBNDataManagerObserver, EBUAbstractController> {

	EBNListing* _item;
	EBNProductReviewsDataManager* _dataManager;
	unsigned long long _currentCellCount;
	NSHashTable* _expandedReviews;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) unsigned long long currentCellCount;                     //@synthesize currentCellCount=_currentCellCount - In the implementation block
@property (nonatomic,retain) NSHashTable * expandedReviews;                           //@synthesize expandedReviews=_expandedReviews - In the implementation block
@property (nonatomic,retain) EBNListing * item;                                       //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) EBNProductReviewsDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSObject * model; 
-(void)setExpandedReviews:(NSHashTable *)arg1 ;
-(NSHashTable *)expandedReviews;
-(unsigned long long)currentCellCount;
-(void)setCurrentCellCount:(unsigned long long)arg1 ;
-(void)updateCurrentCellCount;
-(id)tableViewProtected:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(void)dataManager:(id)arg1 willBeginFetch:(id)arg2 ;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)setDataManager:(EBNProductReviewsDataManager *)arg1 ;
-(EBNProductReviewsDataManager *)dataManager;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(EBNListing *)item;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(NSObject *)model;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setItem:(EBNListing *)arg1 ;
-(void)setModel:(NSObject *)arg1 ;
-(Class)layoutClass;
-(void)initInternal;
-(void)refreshView;
@end
