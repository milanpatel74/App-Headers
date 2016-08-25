/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <Gumtree/ECSearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UINavigationController, NSString, ECSearchBar, UIView, UIImageView, UITableView, ECSearchSuggestionCache;

@interface ECSearchSuggestionController : ECBaseViewController <ECSearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {

	BOOL _isBeingPresented;
	UINavigationController* _navController;
	NSString* _selectedSuggestionCategoryID;
	NSString* _searchCategoryID;
	ECSearchBar* _searchBar;
	/*^block*/id _overlayBlock;
	/*^block*/id _searchStringChangedHandler;
	/*^block*/id _searchStringClearedHandler;
	/*^block*/id _completionBlock;
	UIView* _overlayView;
	UIView* _overlayContainerView;
	UIImageView* _overlayTopShadowImageView;
	UITableView* _overlayTableView;
	double _searchBarAnimationPositionDelta;
	ECSearchSuggestionCache* _searchSuggestionCache;

}

@property (nonatomic,retain) ECSearchBar * searchBar;                            //@synthesize searchBar=_searchBar - In the implementation block
@property (copy) id overlayBlock;                                                //@synthesize overlayBlock=_overlayBlock - In the implementation block
@property (copy) id searchStringChangedHandler;                                  //@synthesize searchStringChangedHandler=_searchStringChangedHandler - In the implementation block
@property (copy) id searchStringClearedHandler;                                  //@synthesize searchStringClearedHandler=_searchStringClearedHandler - In the implementation block
@property (copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) UIView * overlayView;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (retain) UIView * overlayContainerView;                                //@synthesize overlayContainerView=_overlayContainerView - In the implementation block
@property (retain) UIImageView * overlayTopShadowImageView;                      //@synthesize overlayTopShadowImageView=_overlayTopShadowImageView - In the implementation block
@property (retain) UITableView * overlayTableView;                               //@synthesize overlayTableView=_overlayTableView - In the implementation block
@property (assign) double searchBarAnimationPositionDelta;                       //@synthesize searchBarAnimationPositionDelta=_searchBarAnimationPositionDelta - In the implementation block
@property (retain) NSString * selectedSuggestionCategoryID;                      //@synthesize selectedSuggestionCategoryID=_selectedSuggestionCategoryID - In the implementation block
@property (retain) ECSearchSuggestionCache * searchSuggestionCache;              //@synthesize searchSuggestionCache=_searchSuggestionCache - In the implementation block
@property (retain) UINavigationController * navController;                       //@synthesize navController=_navController - In the implementation block
@property (retain) NSString * searchCategoryID;                                  //@synthesize searchCategoryID=_searchCategoryID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setOverlayBlock:(id)arg1 ;
-(void)setSearchStringChangedHandler:(id)arg1 ;
-(void)setSearchSuggestionCache:(ECSearchSuggestionCache *)arg1 ;
-(void)resetResults;
-(void)initializeOverlayView;
-(void)removeObserversForSearchBar;
-(void)overlayClickedAction:(id)arg1 ;
-(void)setOverlayTopShadowImageView:(UIImageView *)arg1 ;
-(void)setOverlayTableView:(UITableView *)arg1 ;
-(UITableView *)overlayTableView;
-(UIImageView *)overlayTopShadowImageView;
-(void)dismissAnimated:(BOOL)arg1 success:(BOOL)arg2 action:(long long)arg3 ;
-(void)showOverlay:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)effectiveCategoryID;
-(void)searchBarTextDidChange:(id)arg1 ;
-(id)overlayBlock;
-(void)disassembleViews;
-(ECSearchSuggestionCache *)searchSuggestionCache;
-(void)addObserversForSearchBar;
-(NSString *)selectedSuggestionCategoryID;
-(NSString *)searchCategoryID;
-(id)searchStringChangedHandler;
-(void)consumeSuggestionBatch:(id)arg1 forSearchString:(id)arg2 categoryID:(id)arg3 ;
-(void)setSelectedSuggestionCategoryID:(NSString *)arg1 ;
-(void)showOverlay:(BOOL)arg1 ;
-(id)currentBatchKey;
-(void)assembleViews;
-(void)lookupSearchString;
-(id)searchStringClearedHandler;
-(void)searchBarDidStart:(id)arg1 ;
-(BOOL)searchBarShouldReturn:(id)arg1 ;
-(id)initWithSearchBar:(id)arg1 onOverlay:(/*^block*/id)arg2 onSearchStringChange:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isTableHidden;
-(void)setReturnKey:(long long)arg1 ;
-(void)setSearchCategoryID:(NSString *)arg1 ;
-(void)setSearchStringClearedHandler:(id)arg1 ;
-(double)searchBarAnimationPositionDelta;
-(void)setSearchBarAnimationPositionDelta:(double)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(ECSearchBar *)searchBar;
-(BOOL)isBeingPresented;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UINavigationController *)navController;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)searchBarShouldClear:(id)arg1 ;
-(void)setSearchBar:(ECSearchBar *)arg1 ;
-(UIView *)overlayContainerView;
-(void)setOverlayContainerView:(UIView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)cancelAction:(id)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
@end
