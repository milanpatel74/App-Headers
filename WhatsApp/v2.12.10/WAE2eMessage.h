/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSData, NSMutableArray;

@interface WAE2eMessage : NSObject {

	int _ciphertextMessageType;
	NSString* _jid;
	NSString* _participant;
	NSString* _stanzaId;
	NSString* _conversation;
	NSData* _encryptedData;
	NSMutableArray* _participantMessages;
	NSString* _phash;

}

@property (nonatomic,retain) NSString * jid;                                    //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) NSString * participant;                            //@synthesize participant=_participant - In the implementation block
@property (nonatomic,retain) NSString * stanzaId;                               //@synthesize stanzaId=_stanzaId - In the implementation block
@property (nonatomic,retain) NSString * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                            //@synthesize encryptedData=_encryptedData - In the implementation block
@property (assign) int ciphertextMessageType;                                   //@synthesize ciphertextMessageType=_ciphertextMessageType - In the implementation block
@property (nonatomic,retain) NSMutableArray * participantMessages;              //@synthesize participantMessages=_participantMessages - In the implementation block
@property (nonatomic,retain) NSString * phash;                                  //@synthesize phash=_phash - In the implementation block
-(void)setDecryptedData:(id)arg1 ;
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(NSMutableArray *)participantMessages;
-(int)ciphertextMessageType;
-(NSString *)phash;
-(id)initWithJID:(id)arg1 participant:(id)arg2 stanzaId:(id)arg3 ;
-(long long)recipientId;
-(NSString *)stanzaId;
-(long long)recepientIdForJid:(id)arg1 ;
-(void)setCiphertextMessageType:(int)arg1 ;
-(void)setPhash:(NSString *)arg1 ;
-(void)setParticipantMessages:(NSMutableArray *)arg1 ;
-(void)setStanzaId:(NSString *)arg1 ;
-(NSString *)participant;
-(void)setParticipant:(NSString *)arg1 ;
-(int)version;
-(id)initForMessage:(id)arg1 ;
-(void)setConversation:(NSString *)arg1 ;
-(NSString *)conversation;
-(NSData *)encryptedData;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)dataToEncrypt;
@end

