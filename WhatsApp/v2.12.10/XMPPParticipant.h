/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface XMPPParticipant : NSObject {

	BOOL _admin;
	NSString* _jid;
	long long _errorCode;

}

@property (nonatomic,copy) NSString * jid;                           //@synthesize jid=_jid - In the implementation block
@property (assign,getter=isAdmin,nonatomic) BOOL admin;              //@synthesize admin=_admin - In the implementation block
@property (assign,nonatomic) long long errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
+(id)participantFromParticipantElement:(id)arg1 ;
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(BOOL)isAdmin;
-(void)setAdmin:(BOOL)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
@end

