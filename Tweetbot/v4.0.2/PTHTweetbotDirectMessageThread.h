/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSMutableArray, PTHTweetbotUser, PTHTweetbotAccountMessages, NSArray, PTHTweetbotDirectMessage;

@interface PTHTweetbotDirectMessageThread : PTHTweetbotObject {

	NSMutableArray* _messages;
	BOOL _isLoading;
	PTHTweetbotUser* _otherUser;
	long long _lastReadTID;
	unsigned long long _unreadMessageCount;
	PTHTweetbotAccountMessages* _accountMessages;

}

@property (nonatomic,readonly) NSArray * messages; 
@property (nonatomic,__weak,readonly) PTHTweetbotDirectMessage * latestMessage; 
@property (nonatomic,readonly) long long otherUserTID; 
@property (nonatomic,readonly) PTHTweetbotUser * otherUser;                                    //@synthesize otherUser=_otherUser - In the implementation block
@property (assign,nonatomic) long long lastReadTID;                                            //@synthesize lastReadTID=_lastReadTID - In the implementation block
@property (getter=isRead,nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) unsigned long long unreadMessageCount;                          //@synthesize unreadMessageCount=_unreadMessageCount - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (assign,nonatomic,__weak) PTHTweetbotAccountMessages * accountMessages;              //@synthesize accountMessages=_accountMessages - In the implementation block
+(id)setup:(id)arg1 userVersion:(long long)arg2 ;
+(id)verify:(id)arg1 ;
+(id)fetchAllWithConnection:(id)arg1 ;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(PTHTweetbotAccountMessages *)accountMessages;
-(BOOL)hasString:(id)arg1 ;
-(long long)lastReadTID;
-(void)markRead;
-(void)destroy:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)otherUser;
-(PTHTweetbotDirectMessage *)latestMessage;
-(unsigned long long)indexOfDirectMessageWithTID:(long long)arg1 ;
-(void)setLastReadTID:(long long)arg1 ;
-(void)directMessageWasDestroyed:(id)arg1 ;
-(void)replaceDirectMessageDraft:(id)arg1 withDirectMessage:(id)arg2 ;
-(long long)otherUserTID;
-(void)setAccountMessages:(PTHTweetbotAccountMessages *)arg1 ;
-(void)addDirectMessage:(id)arg1 ;
-(id)messageWithTID:(long long)arg1 ;
-(void)removeDirectMessageAtIndex:(unsigned long long)arg1 ;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 messages:(id)arg3 lastReadTID:(long long)arg4 ;
-(void)_updateCounts;
-(void)_sendThreadWasUpdated;
-(void)store;
-(id)description;
-(unsigned long long)messageCount;
-(BOOL)isRead;
-(unsigned long long)unreadMessageCount;
-(NSArray *)messages;
-(void)setAccount:(id)arg1 ;
@end

