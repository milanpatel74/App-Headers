/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>
#import <Twitter/TFNPageControlDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TFNTwitterScribableGallery, TFNPagedGalleryCellDelegate;
@class TFNPagedGalleryCellState, TFNPagedGalleryCellViewCache, TFNTwitterAccount, TFNTwitterScribeContext, UIColor, UIScrollView, TFNPageControl, NSMutableArray, NSString;

@interface TFNPagedGalleryCell : TFNTableViewCell <TFNPageControlDelegate, UIScrollViewDelegate> {

	BOOL _isScrollingUsingPageControl;
	TFNPagedGalleryCellState* _state;
	TFNPagedGalleryCellViewCache* _viewCache;
	TFNTwitterAccount* _account;
	TFNTwitterScribeContext* _scribeContext;
	UIColor* _galleryColor;
	id<TFNTwitterScribableGallery> _galleryModel;
	/*^block*/id _pageTapBlock;
	/*^block*/id _pageLongPressBlock;
	id<TFNPagedGalleryCellDelegate> _delegate;
	long long _pageControlPosition;
	unsigned long long _lastPage;
	UIScrollView* _scrollView;
	TFNPageControl* _pageControl;
	NSMutableArray* _galleryViews;

}

@property (nonatomic,readonly) TFNPagedGalleryCellState * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) TFNPagedGalleryCellViewCache * viewCache;                     //@synthesize viewCache=_viewCache - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                      //@synthesize scribeContext=_scribeContext - In the implementation block
@property (nonatomic,retain) UIColor * galleryColor;                                       //@synthesize galleryColor=_galleryColor - In the implementation block
@property (nonatomic,retain) id<TFNTwitterScribableGallery> galleryModel;                  //@synthesize galleryModel=_galleryModel - In the implementation block
@property (nonatomic,copy) id pageTapBlock;                                                //@synthesize pageTapBlock=_pageTapBlock - In the implementation block
@property (nonatomic,copy) id pageLongPressBlock;                                          //@synthesize pageLongPressBlock=_pageLongPressBlock - In the implementation block
@property (assign,nonatomic,__weak) id<TFNPagedGalleryCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long pageControlPosition;                                //@synthesize pageControlPosition=_pageControlPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long currentPage; 
@property (nonatomic,readonly) unsigned long long numberOfPages; 
@property (assign,nonatomic) unsigned long long lastPage;                                  //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) TFNPageControl * pageControl;                                 //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic) BOOL isScrollingUsingPageControl;                             //@synthesize isScrollingUsingPageControl=_isScrollingUsingPageControl - In the implementation block
@property (nonatomic,retain) NSMutableArray * galleryViews;                                //@synthesize galleryViews=_galleryViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)pageControlHeight;
+(unsigned long long)maxPageCount;
-(TFNTwitterScribeContext *)scribeContext;
-(id)_scribeComponent;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(void)willDisplayInDataViewController:(id)arg1 ;
-(void)_legacyLayoutSubviews;
-(id)_scribeParameters;
-(void)setPageControl:(TFNPageControl *)arg1 ;
-(void)setViewCache:(TFNPagedGalleryCellViewCache *)arg1 ;
-(void)setPageTapBlock:(id)arg1 ;
-(id<TFNTwitterScribableGallery>)galleryModel;
-(void)setGalleryModel:(id<TFNTwitterScribableGallery>)arg1 ;
-(TFNPagedGalleryCellViewCache *)viewCache;
-(void)updateWithViews:(id)arg1 state:(id)arg2 ;
-(void)currentPageWillDisplay;
-(id)currentGalleryPageView;
-(void)pageControlPageDidChange:(id)arg1 ;
-(id)pageTapBlock;
-(id)pageLongPressBlock;
-(void)setLastPage:(unsigned long long)arg1 ;
-(void)galleryPageDidChange;
-(void)scrollToPage:(unsigned long long)arg1 usingPageControl:(BOOL)arg2 animate:(BOOL)arg3 ;
-(unsigned long long)lastPage;
-(void)setGalleryColor:(UIColor *)arg1 ;
-(UIColor *)galleryColor;
-(void)setPageLongPressBlock:(id)arg1 ;
-(long long)pageControlPosition;
-(void)setPageControlPosition:(long long)arg1 ;
-(BOOL)isScrollingUsingPageControl;
-(void)setIsScrollingUsingPageControl:(BOOL)arg1 ;
-(NSMutableArray *)galleryViews;
-(void)setGalleryViews:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<TFNPagedGalleryCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<TFNPagedGalleryCellDelegate>)delegate;
-(TFNPagedGalleryCellState *)state;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(unsigned long long)numberOfPages;
-(unsigned long long)currentPage;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)cleanup;
-(TFNPageControl *)pageControl;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
