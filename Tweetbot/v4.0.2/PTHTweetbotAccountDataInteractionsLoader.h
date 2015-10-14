/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotAccountDataLoader.h>

@class NSMutableArray, NSDate;

@interface PTHTweetbotAccountDataInteractionsLoader : PTHTweetbotAccountDataLoader {

	NSMutableArray* _pendingUpdateBlocks;
	long long _sinceTID;
	NSDate* _lastUpdateDate;
	NSDate* _streamingStartDate;

}
-(id)initWithAccountData:(id)arg1 ;
-(void)dispatchFindInteractionsSinceDate:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindQuoteTIDsSinceTID:(long long)arg1 maxTID:(long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)_addFavorite:(id)arg1 ;
-(void)_deleteFavorite:(id)arg1 ;
-(void)_addRetweet:(id)arg1 ;
-(void)_addMentionOrReply:(id)arg1 ;
-(void)_addFollow:(id)arg1 ;
-(void)_addQuote:(id)arg1 ;
-(void)_deleteStatus:(id)arg1 ;
-(void)_handleBlock:(id)arg1 ;
-(void)_streamingStarted;
-(void)_streamingStopped;
-(id)setup:(id)arg1 userVersion:(long long)arg2 ;
-(void)_interactionsDidChange:(id)arg1 ;
-(void)_addInteraction:(unsigned char)arg1 sourceUserTID:(long long)arg2 sourceStatusTID:(long long)arg3 targetStatusTID:(long long)arg4 userInfo:(id)arg5 ;
-(void)_deleteInteraction:(unsigned char)arg1 sourceUserTID:(long long)arg2 sourceStatusTID:(long long)arg3 targetStatusTID:(long long)arg4 ;
-(void)_updateFromServerIfNeeded:(/*^block*/id)arg1 ;
-(void)_dispatchFind:(id)arg1 parameters:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)verify:(id)arg1 ;
-(void)dispatchFindInteractionsForStatusTID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindInteractionCountsForStatusTID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindInteractionsForStatusTID:(long long)arg1 type:(unsigned char)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dispatchFindRecentStatusesWithInteractions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindRecentInteractions:(unsigned char)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindDailyInteractionCounts:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)tableName;
-(void)log:(/*^block*/id)arg1 ;
@end
