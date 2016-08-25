/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIScrollView, PTHTweetbotStatusFilter, PTHStaticSectionCell, NSMutableArray, NSArray;

@interface PTHTweetbotMuteEditController : PTHViewController {

	UIScrollView* _scrollView;
	PTHTweetbotStatusFilter* _originalStatusFilter;
	PTHStaticSectionCell* _matchingTweetsCell;
	PTHStaticSectionCell* _durationCell;
	NSMutableArray* _matchingTweets;
	unsigned long long _tweetCount;
	NSArray* _timelineStatuses;
	NSArray* _mentionStatuses;
	PTHTweetbotStatusFilter* _statusFilter;

}

@property (nonatomic,readonly) PTHTweetbotStatusFilter * statusFilter;              //@synthesize statusFilter=_statusFilter - In the implementation block
-(id)initWithStatusFilter:(id)arg1 ;
-(PTHTweetbotStatusFilter *)statusFilter;
-(id)editCells;
-(void)_changeDuration:(id)arg1 ;
-(void)_showMatchingTweets:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateUI;
-(void)save;
@end
