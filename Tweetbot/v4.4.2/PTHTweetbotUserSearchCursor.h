/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class NSString;

@interface PTHTweetbotUserSearchCursor : PTHTweetbotCursor {

	NSString* _query;

}

@property (nonatomic,copy,readonly) NSString * query;              //@synthesize query=_query - In the implementation block
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 query:(id)arg2 ;
-(id)requestURLString;
-(BOOL)needsSort;
-(id)queryDictionary;
-(NSString *)query;
-(id)uniqueID;
@end
