/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsScrollBumpTableRowAdapter.h>
#import <Twitter/T1StatusViewEventScribeHandler.h>

@class NSString, NSMutableDictionary;

@interface T1CarouselStatusTableRowAdapter : TFNItemsScrollBumpTableRowAdapter <T1StatusViewEventScribeHandler> {

	NSString* _title;
	NSMutableDictionary* _currentScrollingPageCache;

}

@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentScrollingPageCache;              //@synthesize currentScrollingPageCache=_currentScrollingPageCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(unsigned long long)dataViewController:(id)arg1 sectionBreaksForIndexPath:(id)arg2 ;
-(id)scribeSectionForObject:(id)arg1 controller:(id)arg2 indexPath:(id)arg3 ;
-(id)scribeComponentForObject:(id)arg1 page:(id)arg2 controller:(id)arg3 ;
-(id)scribeParametersForObject:(id)arg1 controller:(id)arg2 indexPath:(id)arg3 ;
-(id)carouselCellLayoutMetricsForController:(id)arg1 ;
-(void)_setUpStatusEventHandlerForScrollBumpCell:(id)arg1 carouselCell:(id)arg2 controller:(id)arg3 status:(id)arg4 account:(id)arg5 carousel:(id)arg6 indexPath:(id)arg7 ;
-(id)scribeContextForCarousel:(id)arg1 controller:(id)arg2 ;
-(unsigned long long)numberOfPagesForScrollBumpCell:(id)arg1 ;
-(id)scrollBumpCell:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2 ;
-(void)scrollBumpCell:(id)arg1 didTapPageAtIndex:(unsigned long long)arg2 ;
-(void)scrollBumpCell:(id)arg1 didScrollToPageAtIndex:(unsigned long long)arg2 direction:(long long)arg3 ;
-(void)scrollBumpCell:(id)arg1 didStopToPageAtIndex:(unsigned long long)arg2 ;
-(NSMutableDictionary *)currentScrollingPageCache;
-(void)setCurrentScrollingPageCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
