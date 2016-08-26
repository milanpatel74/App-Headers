/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLupdates_ChannelDifference.h>

@class NSArray;

@interface TLUpdates_ChannelDifference$tooLong : TLupdates_ChannelDifference {

	int _flags;
	int _pts;
	int _timeout;
	int _top_message;
	int _read_inbox_max_id;
	int _read_outbox_max_id;
	int _unread_count;
	NSArray* _messages;
	NSArray* _chats;
	NSArray* _users;

}

@property (assign,nonatomic) int flags;                           //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int pts;                             //@synthesize pts=_pts - In the implementation block
@property (assign,nonatomic) int timeout;                         //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) int top_message;                     //@synthesize top_message=_top_message - In the implementation block
@property (assign,nonatomic) int read_inbox_max_id;               //@synthesize read_inbox_max_id=_read_inbox_max_id - In the implementation block
@property (assign,nonatomic) int read_outbox_max_id;              //@synthesize read_outbox_max_id=_read_outbox_max_id - In the implementation block
@property (assign,nonatomic) int unread_count;                    //@synthesize unread_count=_unread_count - In the implementation block
@property (nonatomic,retain) NSArray * messages;                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) NSArray * chats;                     //@synthesize chats=_chats - In the implementation block
@property (nonatomic,retain) NSArray * users;                     //@synthesize users=_users - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(void)setPts:(int)arg1 ;
-(void)setChats:(NSArray *)arg1 ;
-(int)unread_count;
-(int)read_inbox_max_id;
-(int)read_outbox_max_id;
-(int)top_message;
-(void)setTop_message:(int)arg1 ;
-(void)setRead_inbox_max_id:(int)arg1 ;
-(void)setRead_outbox_max_id:(int)arg1 ;
-(void)setUnread_count:(int)arg1 ;
-(int)pts;
-(void)setTimeout:(int)arg1 ;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(int)timeout;
-(NSArray *)chats;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
