/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotService.h>

@class NSArray;

@interface PTHTweetbotSyncService : PTHTweetbotService

@property (nonatomic,copy,readonly) NSArray * syncCursors; 
+(id)serviceClasses;
-(void)getPosition;
-(void)postPosition;
-(NSArray *)syncCursors;
-(id)syncKeyForCursor:(id)arg1 ;
-(id)cursorForSyncKey:(id)arg1 ;
@end
