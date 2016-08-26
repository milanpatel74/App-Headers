/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLUpdates.h>

@class NSString, TLMessageFwdHeader, NSArray;

@interface TLUpdates$modernUpdateShortChatMessage : TLUpdates {

	int _flags;
	int _n_id;
	int _from_id;
	int _chat_id;
	int _pts;
	int _pts_count;
	int _date;
	int _via_bot_id;
	int _reply_to_msg_id;
	NSString* _message;
	TLMessageFwdHeader* _fwd_header;
	NSArray* _entities;

}

@property (assign,nonatomic) int flags;                                    //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int n_id;                                     //@synthesize n_id=_n_id - In the implementation block
@property (assign,nonatomic) int from_id;                                  //@synthesize from_id=_from_id - In the implementation block
@property (assign,nonatomic) int chat_id;                                  //@synthesize chat_id=_chat_id - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int pts;                                      //@synthesize pts=_pts - In the implementation block
@property (assign,nonatomic) int pts_count;                                //@synthesize pts_count=_pts_count - In the implementation block
@property (assign,nonatomic) int date;                                     //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) TLMessageFwdHeader * fwd_header;              //@synthesize fwd_header=_fwd_header - In the implementation block
@property (assign,nonatomic) int via_bot_id;                               //@synthesize via_bot_id=_via_bot_id - In the implementation block
@property (assign,nonatomic) int reply_to_msg_id;                          //@synthesize reply_to_msg_id=_reply_to_msg_id - In the implementation block
@property (nonatomic,retain) NSArray * entities;                           //@synthesize entities=_entities - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(void)setN_id:(int)arg1 ;
-(int)n_id;
-(void)setPts:(int)arg1 ;
-(void)setChat_id:(int)arg1 ;
-(void)setReply_to_msg_id:(int)arg1 ;
-(int)chat_id;
-(void)setPts_count:(int)arg1 ;
-(void)setFrom_id:(int)arg1 ;
-(int)from_id;
-(int)reply_to_msg_id;
-(int)pts_count;
-(TLMessageFwdHeader *)fwd_header;
-(void)setFwd_header:(TLMessageFwdHeader *)arg1 ;
-(int)via_bot_id;
-(void)setVia_bot_id:(int)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(int)date;
-(NSString *)message;
-(void)setDate:(int)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(int)pts;
-(NSArray *)entities;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
