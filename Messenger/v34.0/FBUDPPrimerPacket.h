/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSURL, NSString, NSDictionary, FBEncryptedChannel;

@interface FBUDPPrimerPacket : FBValueObject <NSCopying, NSCoding> {

	NSURL* _url;
	NSString* _originalHost;
	unsigned long long _port;
	NSDictionary* _headers;
	NSString* _clientQueryID;
	FBEncryptedChannel* _encryptedChannel;

}

@property (nonatomic,copy,readonly) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalHost;                            //@synthesize originalHost=_originalHost - In the implementation block
@property (nonatomic,readonly) unsigned long long port;                                 //@synthesize port=_port - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headers;                             //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientQueryID;                           //@synthesize clientQueryID=_clientQueryID - In the implementation block
@property (nonatomic,copy,readonly) FBEncryptedChannel * encryptedChannel;              //@synthesize encryptedChannel=_encryptedChannel - In the implementation block
-(FBEncryptedChannel *)encryptedChannel;
-(id)initWithUrl:(id)arg1 originalHost:(id)arg2 port:(unsigned long long)arg3 headers:(id)arg4 clientQueryID:(id)arg5 encryptedChannel:(id)arg6 ;
-(NSString *)originalHost;
-(NSString *)clientQueryID;
-(NSURL *)url;
-(unsigned long long)port;
-(NSDictionary *)headers;
@end
