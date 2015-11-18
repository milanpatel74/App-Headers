/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate;

@interface XMPPStatus : NSObject {

	NSString* _text;
	NSString* _jid;
	NSDate* _timestamp;
	unsigned long long _error;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * jid;                          //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long error;              //@synthesize error=_error - In the implementation block
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(unsigned long long)error;
-(id)init;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setError:(unsigned long long)arg1 ;
@end
