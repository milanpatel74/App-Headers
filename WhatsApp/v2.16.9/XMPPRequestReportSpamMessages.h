/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/XMPPRequest.h>

@class NSString;

@interface XMPPRequestReportSpamMessages : XMPPRequest

@property (nonatomic,copy) NSString * creatorJID; 
@property (nonatomic,copy) NSString * sourceJID; 
@property (nonatomic,copy) NSString * groupSubject; 
@property (nonatomic,copy) NSString * spammerJID; 
+(id)stanzaFromMessage:(id)arg1 ;
-(NSString *)creatorJID;
-(void)setCreatorJID:(NSString *)arg1 ;
-(NSString *)groupSubject;
-(void)setGroupSubject:(NSString *)arg1 ;
-(id)initWithMessages:(id)arg1 webClientRequestID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)sourceJID;
-(void)setSourceJID:(NSString *)arg1 ;
-(NSString *)spammerJID;
-(void)setSpammerJID:(NSString *)arg1 ;
@end
