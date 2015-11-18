/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSArray, UIScrollView, UIPageControl, NSMutableArray, NSLayoutConstraint, NSString;

@interface PTHTweetbotStatusDetailMediaController : PTHTweetbotStatusDetailChildController <UIScrollViewDelegate> {

	NSArray* _loadedMedia;
	BOOL _isLoaded;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	NSArray* _mediaViews;
	NSMutableArray* _mediaViewsConstraints;
	NSLayoutConstraint* _heightConstraint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)statusWasUpdated;
-(void)_loadMedia;
-(void)_presentMedium:(id)arg1 ;
-(void)_pageControlChanged;
-(void)previewingStatusDidChange;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end
