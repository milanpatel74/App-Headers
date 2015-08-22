/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSData, NSNumber;

@interface FBMQTTEncodedMessage : NSObject {

	int _qos;
	NSString* _topic;
	NSData* _payload;
	NSNumber* _messageID;

}

@property (nonatomic,copy) NSString * topic;                    //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) int qos;                           //@synthesize qos=_qos - In the implementation block
@property (nonatomic,copy) NSData * payload;                    //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSNumber * messageID;              //@synthesize messageID=_messageID - In the implementation block
+(id)messageWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 ;
+(id)messageWithTopic:(id)arg1 payload:(id)arg2 ;
-(id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 ;
-(id)description;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(NSString *)topic;
-(int)qos;
-(void)setQos:(int)arg1 ;
-(void)setMessageID:(NSNumber *)arg1 ;
-(NSNumber *)messageID;
-(void)setTopic:(NSString *)arg1 ;
@end
