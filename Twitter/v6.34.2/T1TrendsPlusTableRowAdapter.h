/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsTableRowAdapter.h>

@class NSMutableArray;

@interface T1TrendsPlusTableRowAdapter : TFNItemsTableRowAdapter {

	NSMutableArray* _insertedTrends;

}

@property (nonatomic,retain) NSMutableArray * insertedTrends;              //@synthesize insertedTrends=_insertedTrends - In the implementation block
+(void)dataViewController:(id)arg1 presentSearchForTrend:(id)arg2 atIndexPath:(id)arg3 ;
+(id)_scribeParametersWithTrend:(id)arg1 indexPath:(id)arg2 ;
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(NSMutableArray *)insertedTrends;
-(void)dataViewController:(id)arg1 swapFromTrends:(id)arg2 toTrends:(id)arg3 ;
-(/*^block*/id)scribeActionForTrend:(id)arg1 indexPath:(id)arg2 ;
-(void)setInsertedTrends:(NSMutableArray *)arg1 ;
@end
