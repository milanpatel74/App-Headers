/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface XMPPContact : NSObject {

	BOOL _whatsapp;
	NSString* _number;
	NSString* _jid;

}

@property (nonatomic,copy) NSString * number;              //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * jid;                 //@synthesize jid=_jid - In the implementation block
@property (assign,nonatomic) BOOL whatsapp;                //@synthesize whatsapp=_whatsapp - In the implementation block
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(void)setWhatsapp:(BOOL)arg1 ;
-(BOOL)whatsapp;
-(id)description;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
@end
