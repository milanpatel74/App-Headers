/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTPongMessage : NSObject {

	long long _messageId;
	long long _pingId;

}

@property (nonatomic,readonly) long long messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) long long pingId;                 //@synthesize pingId=_pingId - In the implementation block
-(id)initWithMessageId:(long long)arg1 pingId:(long long)arg2 ;
-(long long)pingId;
-(long long)messageId;
@end
