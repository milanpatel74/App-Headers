/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSString;

@interface PTHTweetbotTrend : PTHTweetbotObject {

	NSString* _name;
	NSString* _query;

}

@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * query;              //@synthesize query=_query - In the implementation block
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
-(void)updateFromDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
@end
