/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserCursor.h>

@interface PTHTweetbotFollowingCursor : PTHTweetbotUserCursor
-(id)initWithTweetbotUser:(id)arg1 ;
-(BOOL)needsSort;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(id)newItemWithDictionary:(id)arg1 ;
-(BOOL)usesCursorPagination;
-(void)processItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removedNotification:(id)arg1 ;
-(void)addedNotification:(id)arg1 ;
-(id)queryDictionary;
-(void)dealloc;
@end
