/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataMonitor.h>

@class PTHTweetbotStatus, NSMutableSet, NSArray;

@interface PTHTweetbotAccountDataStatusStatisticsMonitor : PTHTweetbotAccountDataMonitor {

	PTHTweetbotStatus* _status;
	BOOL _isUpdating;
	NSMutableSet* _badUserTIDs;
	NSMutableSet* _badStatusTIDs;
	NSArray* _retweeters;
	NSArray* _favoriters;
	NSArray* _replies;
	NSArray* _quotes;

}

@property (nonatomic,copy) NSArray * retweeters;              //@synthesize retweeters=_retweeters - In the implementation block
@property (nonatomic,copy) NSArray * favoriters;              //@synthesize favoriters=_favoriters - In the implementation block
@property (nonatomic,copy) NSArray * replies;                 //@synthesize replies=_replies - In the implementation block
@property (nonatomic,copy) NSArray * quotes;                  //@synthesize quotes=_quotes - In the implementation block
-(NSArray *)retweeters;
-(NSArray *)favoriters;
-(id)initWithAccountData:(id)arg1 ;
-(void)update:(BOOL)arg1 streamed:(BOOL)arg2 ;
-(void)setFavoriters:(NSArray *)arg1 ;
-(void)setRetweeters:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)replies;
-(void)setReplies:(NSArray *)arg1 ;
-(id)initWithStatus:(id)arg1 ;
-(NSArray *)quotes;
-(void)setQuotes:(NSArray *)arg1 ;
-(void)_sendDidChange;
@end
