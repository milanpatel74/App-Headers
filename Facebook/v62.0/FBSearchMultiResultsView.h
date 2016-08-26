/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBSegmentedViewDelegate.h>
#import <Facebook/FBSearchResultsTabBarViewDelegate.h>

@protocol FBSegmentedViewDelegate;
@class UIView, NSArray, FBPopoverActionSheet, FBKVOController, FBUserSession, FBSearchSession, FBSideFeedLayoutManager, FBSearchResultsStickyFilterBarManager, FBPagingView, FBSegmentedView, NSString;

@interface FBSearchMultiResultsView : UIView <FBPopoverControllerDelegate, FBSegmentedViewDelegate, FBSearchResultsTabBarViewDelegate> {

	UIView* _tabBarContainer;
	BOOL _isGraphSearchEnabled;
	BOOL _isSearchResultsContentCentered;
	BOOL _isTabBarScrollPending;
	BOOL _useDarkStyle;
	unsigned long long _landingTabResultType;
	BOOL _isScrollableTabBar;
	NSArray* _mainFilters;
	NSArray* _otherFilters;
	BOOL _hasMoreFilters;
	unsigned long long _maximumAllowedFilterItemCount;
	FBPopoverActionSheet* _popover;
	long long _selectedMoreFilterIndex;
	long long _currentTabIndex;
	id<FBSegmentedViewDelegate> _delegate;
	UIView* _containerViewForExpandedLayout;
	FBKVOController* _KVOController;
	FBUserSession* _session;
	FBSearchSession* _searchSession;
	BOOL _stickyFilterBarViewHidden;
	double _topLayoutGuideLength;
	FBSideFeedLayoutManager* _sideFeedLayoutManager;
	FBSearchResultsStickyFilterBarManager* _filterBarManager;
	FBPagingView* _pagingView;
	UIView* _stickyFilterBarView;
	FBSegmentedView* _tabBar;

}

@property (assign,nonatomic) double topLayoutGuideLength;                                                    //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic,__weak) FBSideFeedLayoutManager * sideFeedLayoutManager;                         //@synthesize sideFeedLayoutManager=_sideFeedLayoutManager - In the implementation block
@property (assign,nonatomic,__weak) FBSearchResultsStickyFilterBarManager * filterBarManager;                //@synthesize filterBarManager=_filterBarManager - In the implementation block
@property (nonatomic,readonly) FBPagingView * pagingView;                                                    //@synthesize pagingView=_pagingView - In the implementation block
@property (nonatomic,readonly) UIView * stickyFilterBarView;                                                 //@synthesize stickyFilterBarView=_stickyFilterBarView - In the implementation block
@property (assign,getter=isStickyFilterBarViewHidden,nonatomic) BOOL stickyFilterBarViewHidden;              //@synthesize stickyFilterBarViewHidden=_stickyFilterBarViewHidden - In the implementation block
@property (nonatomic,readonly) FBSegmentedView * tabBar;                                                     //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,readonly) UIView * tabBarContainer;                                                     //@synthesize tabBarContainer=_tabBarContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSearchFilterTabBarSelectionStyle:(unsigned long long)arg1 ;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)segmentedView:(id)arg1 didSelectItemAtIndex:(long long)arg2 withSelectionType:(int)arg3 ;
-(FBSideFeedLayoutManager *)sideFeedLayoutManager;
-(UIView *)stickyFilterBarView;
-(void)setSideFeedLayoutManager:(FBSideFeedLayoutManager *)arg1 ;
-(void)setSelectedTabBarSegment:(long long)arg1 ;
-(void)setItems:(id)arg1 delegate:(id)arg2 ;
-(UIView *)tabBarContainer;
-(double)tabBarOffset;
-(void)_resizeResultsContainerView;
-(void)_linkFilterBarManagerToStickyHeaderContainerView;
-(void)_setupSegmentedTabBarWithItemNames:(id)arg1 isPlaceHolder:(BOOL)arg2 ;
-(void)_setupTableOfContentTapBarWithItems:(id)arg1 ;
-(void)_linkSideFeedPositionToDisplayedResultsScrollViewOffsetAfterRunloopCycle;
-(CGRect)_frameForTabBarContainer;
-(CGRect)_frameForExpandedLayout;
-(CGRect)_frameForPagingView;
-(void)_initializeMoreSectionPopover;
-(id)_popoverActionItemsWithSelectedFilter:(long long)arg1 ;
-(CGPoint)_popoverStartPoint;
-(void)_moreSectionItemSelected:(id)arg1 ;
-(void)setStickyFilterBarViewHidden:(BOOL)arg1 ;
-(id)_leafScrollView;
-(void)_linkSideFeedPositionToDisplayedResultsScrollViewOffset;
-(void)_setupTabBarFilters:(id)arg1 ;
-(id)initWithGraphSearchEnabled:(BOOL)arg1 landingTabResultType:(unsigned long long)arg2 scrollableTabBar:(BOOL)arg3 isContentCentered:(BOOL)arg4 useDarkStyle:(BOOL)arg5 session:(id)arg6 searchSession:(id)arg7 ;
-(void)setFilterBarManager:(FBSearchResultsStickyFilterBarManager *)arg1 ;
-(FBSearchResultsStickyFilterBarManager *)filterBarManager;
-(BOOL)isStickyFilterBarViewHidden;
-(void)searchResultsTabBarView:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)layoutSubviews;
-(FBSegmentedView *)tabBar;
-(FBPagingView *)pagingView;
@end
