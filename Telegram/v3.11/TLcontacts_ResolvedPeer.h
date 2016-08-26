/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLObject.h>

@class TLPeer, NSArray, NSString;

@interface TLcontacts_ResolvedPeer : NSObject <TLObject> {

	TLPeer* _peer;
	NSArray* _chats;
	NSArray* _users;

}

@property (nonatomic,retain) TLPeer * peer;                         //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) NSArray * chats;                       //@synthesize chats=_chats - In the implementation block
@property (nonatomic,retain) NSArray * users;                       //@synthesize users=_users - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(void)setChats:(NSArray *)arg1 ;
-(TLPeer *)peer;
-(void)setPeer:(TLPeer *)arg1 ;
-(NSArray *)chats;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end
