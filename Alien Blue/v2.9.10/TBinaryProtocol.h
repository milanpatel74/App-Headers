/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TProtocol.h>

@protocol TTransport;
@class NSString;

@interface TBinaryProtocol : NSObject <TProtocol> {

	id<TTransport> mTransport;
	BOOL mStrictRead;
	BOOL mStrictWrite;
	int mMessageSizeLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(int)readI32;
-(void)readFieldEnd;
-(void)readStructEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeI32:(int)arg1 ;
-(void)writeFieldEnd;
-(void)writeFieldStop;
-(void)writeStructEnd;
-(long long)readI64;
-(void)writeI64:(long long)arg1 ;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(BOOL)readBool;
-(void)writeBool:(BOOL)arg1 ;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(void)readMapEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeMapEnd;
-(id)readBinary;
-(void)writeBinary:(id)arg1 ;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(void)writeDouble:(double)arg1 ;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(short)readI16;
-(void)writeI16:(short)arg1 ;
-(id)initWithTransport:(id)arg1 strictRead:(BOOL)arg2 strictWrite:(BOOL)arg3 ;
-(int)messageSizeLimit;
-(id)readStringBody:(int)arg1 ;
-(void)writeByte:(unsigned char)arg1 ;
-(void)setMessageSizeLimit:(int)arg1 ;
-(double)readDouble;
-(void)dealloc;
-(id)readString;
-(unsigned char)readByte;
-(id)initWithTransport:(id)arg1 ;
-(id)transport;
-(void)writeString:(id)arg1 ;
@end
