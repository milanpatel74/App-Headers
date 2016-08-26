/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPagingViewDelegate.h>
#import <Messenger/FBPagingViewDataSource.h>

@class NSString, FBMMessage, FBUserSession, FBImageDownloader, MNBusinessNavigationHandler, NSArray, UIPageControl, FBPagingView;

@interface MNAirlinesBoardingPassDetailViewController : UIViewController <FBPagingViewDelegate, FBPagingViewDataSource> {

	NSString* _boardingPassCollectionID;
	FBMMessage* _forwardableMessage;
	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	NSArray* _boardingPassDetailViewModels;
	UIPageControl* _pageControl;
	FBPagingView* _pagingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refreshView;
-(void)_updateScrollViewContentOffsetForVisiblePages;
-(BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(void)pagingViewDidStartScroll:(id)arg1 nextIndex:(long long)arg2 direction:(int)arg3 ;
-(void)pagingViewDidEndScroll:(id)arg1 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2 ;
-(id)initWithBoardingPassDetailViewModels:(id)arg1 session:(id)arg2 imageDownloader:(id)arg3 navigationHandler:(id)arg4 ;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_pageControlValueChanged:(id)arg1 ;
-(unsigned long long)numberOfPagesInPagingView:(id)arg1 ;
@end
