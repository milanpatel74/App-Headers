/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol ImageSearchControllerDelegate;
@class UIActivityIndicatorView, UILabel, UIButton, UIView, UIImageView, NSMutableArray, UISearchBar, ImageListScrollView, NSString;

@interface ImageSearchController : WAViewController <UISearchBarDelegate> {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _labelNoResults;
	UIButton* _buttonLoadMore;
	UIView* _overlayView;
	UIImageView* _bingAttribution;
	NSMutableArray* _imageURLs;
	NSMutableArray* _thumbnailViews;
	UIImageView* _highlightedImageView;
	long long _searchOffset;
	long long _resultsCount;
	UISearchBar* _searchBar;
	ImageListScrollView* _scrollView;
	NSString* _preloadedSearchText;
	id<ImageSearchControllerDelegate> _delegate;

}

@property (nonatomic,retain) UISearchBar * searchBar;                                        //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) ImageListScrollView * scrollView;                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSString * preloadedSearchText;                                 //@synthesize preloadedSearchText=_preloadedSearchText - In the implementation block
@property (assign,nonatomic,__weak) id<ImageSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLayoutForCurrentOrientation;
-(void)showActivity:(BOOL)arg1 ;
-(void)setPreloadedSearchText:(NSString *)arg1 ;
-(void)resetSearchResults;
-(void)loadMoreAction:(id)arg1 ;
-(void)doSearch:(id)arg1 ;
-(void)selectMediaAtIndex:(id)arg1 ;
-(void)processImageSearchResponseData:(id)arg1 error:(id)arg2 ;
-(void)hideOverlay;
-(void)clearAction:(id)arg1 ;
-(NSString *)preloadedSearchText;
-(void)cancelAction:(id)arg1 ;
-(void)setDelegate:(id<ImageSearchControllerDelegate>)arg1 ;
-(id<ImageSearchControllerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setScrollView:(ImageListScrollView *)arg1 ;
-(ImageListScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UISearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)showOverlay;
-(void)addSearchResults:(id)arg1 ;
@end
