/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTIncomingMessage : NSObject {

	int _seqNo;
	long long _messageId;
	long long _salt;
	double _timestamp;
	long long _size;
	id _body;

}

@property (nonatomic,readonly) long long messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) int seqNo;                        //@synthesize seqNo=_seqNo - In the implementation block
@property (nonatomic,readonly) long long salt;                   //@synthesize salt=_salt - In the implementation block
@property (nonatomic,readonly) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) id body;                          //@synthesize body=_body - In the implementation block
-(int)seqNo;
-(id)initWithMessageId:(long long)arg1 seqNo:(int)arg2 salt:(long long)arg3 timestamp:(double)arg4 size:(long long)arg5 body:(id)arg6 ;
-(long long)size;
-(double)timestamp;
-(id)body;
-(long long)salt;
-(long long)messageId;
@end
