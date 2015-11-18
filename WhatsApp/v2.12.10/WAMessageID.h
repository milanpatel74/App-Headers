/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface WAMessageID : NSObject {

	BOOL _isFromMe;
	NSString* _stanzaID;
	NSString* _participant;

}

@property (nonatomic,copy,readonly) NSString * stanzaID;                 //@synthesize stanzaID=_stanzaID - In the implementation block
@property (nonatomic,copy,readonly) NSString * participant;              //@synthesize participant=_participant - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe;                            //@synthesize isFromMe=_isFromMe - In the implementation block
-(NSString *)stanzaID;
-(id)initWithStanzaID:(id)arg1 participant:(id)arg2 isFromMe:(BOOL)arg3 ;
-(BOOL)hasSameIdentityAsMessage:(id)arg1 ;
-(id)uniqueKeyWithChatJID:(id)arg1 ;
-(NSString *)participant;
-(BOOL)isFromMe;
@end
