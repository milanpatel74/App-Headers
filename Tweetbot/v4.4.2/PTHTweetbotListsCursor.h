/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserCursor.h>

@class NSArray;

@interface PTHTweetbotListsCursor : PTHTweetbotUserCursor

@property (nonatomic,__weak,readonly) NSArray * ownedLists; 
@property (nonatomic,__weak,readonly) NSArray * publicLists; 
@property (nonatomic,__weak,readonly) NSArray * privateLists; 
@property (nonatomic,__weak,readonly) NSArray * subscribedLists; 
+(Class)itemClass;
-(NSArray *)ownedLists;
-(NSArray *)subscribedLists;
-(id)requestURLString;
-(double)loadNewerInterval;
-(NSArray *)publicLists;
-(NSArray *)privateLists;
-(id)queryDictionary;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldReload;
@end
