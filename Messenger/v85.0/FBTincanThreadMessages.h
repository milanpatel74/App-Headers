/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBTincanThreadMessages : FBGraphQLInput {

	NSString* _senderId;
	NSNumber* _sendTime;
	NSString* _salamanderThrift;
	NSString* _hmac;

}

@property (nonatomic,copy) NSString * senderId;                      //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy) NSNumber * sendTime;                      //@synthesize sendTime=_sendTime - In the implementation block
@property (nonatomic,copy) NSString * salamanderThrift;              //@synthesize salamanderThrift=_salamanderThrift - In the implementation block
@property (nonatomic,copy) NSString * hmac;                          //@synthesize hmac=_hmac - In the implementation block
-(NSString *)senderId;
-(void)setSenderId:(NSString *)arg1 ;
-(void)setSalamanderThrift:(NSString *)arg1 ;
-(void)setHmac:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)salamanderThrift;
-(NSString *)hmac;
-(NSNumber *)sendTime;
-(void)setSendTime:(NSNumber *)arg1 ;
@end
