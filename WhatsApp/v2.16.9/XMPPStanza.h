/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/XMPPStanzaElement.h>

@class NSDictionary, NSString, NSDate, NSError;

@interface XMPPStanza : XMPPStanzaElement {

	NSDictionary* _connectionInfo;

}

@property (nonatomic,copy) NSString * uniqueIdentifier; 
@property (nonatomic,copy) NSString * fromJID; 
@property (nonatomic,copy) NSString * toJID; 
@property (nonatomic,copy) NSString * participant; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSString * errorCode; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL offline; 
@property (nonatomic,readonly) int offlineCount; 
@property (nonatomic,copy) NSDictionary * connectionInfo;                                                                        //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (getter=isReceivedWithActiveWebClientSession,nonatomic,readonly) BOOL receivedWithActiveWebClientSession; 
+(id)stanzaForWebClientFromMessage:(id)arg1 invisible:(BOOL)arg2 ;
+(id)stanzaForWebClientFromMessage:(id)arg1 ;
+(id)generateUniqueMessageIdentifier;
+(id)generateUniqueIdentifier;
+(id)generateSID;
-(NSString *)fromJID;
-(void)setFromJID:(NSString *)arg1 ;
-(NSString *)toJID;
-(void)setToJID:(NSString *)arg1 ;
-(BOOL)isReceivedWithActiveWebClientSession;
-(id)initWithName:(id)arg1 fromJID:(id)arg2 toJID:(id)arg3 ;
-(id)initWithStanzaElement:(id)arg1 ;
-(int)offlineCount;
-(BOOL)offline;
-(NSDate *)timestamp;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)errorCode;
-(void)setConnectionInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)connectionInfo;
-(NSString *)participant;
-(void)setParticipant:(NSString *)arg1 ;
-(NSError *)error;
@end
