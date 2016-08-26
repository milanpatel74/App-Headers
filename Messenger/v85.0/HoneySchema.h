/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface HoneySchema : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_sessionID;
	long long __thrift_seq;
	BOOL __thrift_sessionID_set;
	BOOL __thrift_seq_set;

}

@property (nonatomic,retain) NSString * sessionID; 
@property (assign,nonatomic) long long seq; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSeq:(long long)arg1 ;
-(id)toDict;
-(id)initWithSessionID:(id)arg1 seq:(long long)arg2 ;
-(BOOL)sessionIDIsSet;
-(void)unsetSessionID;
-(long long)seq;
-(BOOL)seqIsSet;
-(void)unsetSeq;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)write:(id)arg1 ;
@end
