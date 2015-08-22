/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsTableRowAdapter.h>

@class NSString;

@interface T1BadgedTextTableRowAdapter : TFNItemsTableRowAdapter {

	NSString* _title;
	NSString* _badgeTitle;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * badgeTitle;              //@synthesize badgeTitle=_badgeTitle - In the implementation block
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)setBadgeTitle:(NSString *)arg1 ;
-(NSString *)badgeTitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
