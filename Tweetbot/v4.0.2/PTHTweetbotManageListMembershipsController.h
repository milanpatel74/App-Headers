/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotLoadingTableViewController.h>

@class PTHTweetbotUser, PTHTweetbotListsCursor, NSMutableArray, UIBarButtonItem;

@interface PTHTweetbotManageListMembershipsController : PTHTweetbotLoadingTableViewController {

	PTHTweetbotUser* _user;
	PTHTweetbotListsCursor* _listsCursor;
	NSMutableArray* _addedLists;
	NSMutableArray* _changedLists;
	BOOL _loadedMemberships;
	UIBarButtonItem* _saveBarButtonItem;

}
+(Class)cellClass;
-(id)initWithTweetbotUser:(id)arg1 ;
-(void)configure:(id)arg1 forItem:(id)arg2 ;
-(void)loadDataIfNeeded:(BOOL)arg1 ;
-(void)save;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end
