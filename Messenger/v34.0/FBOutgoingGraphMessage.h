/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, FBOutgoingMessageRecipientInfo, FBMStringWithRedactedDescription, NSDictionary;

@interface FBOutgoingGraphMessage : FBValueObject <NSCopying> {

	NSString* _offlineThreadingId;
	FBOutgoingMessageRecipientInfo* _recipientInfo;
	FBMStringWithRedactedDescription* _body;
	NSDictionary* _sendParameters;
	NSDictionary* _analyticsExtras;
	unsigned long long _contentType;
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                               //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) FBOutgoingMessageRecipientInfo * recipientInfo;              //@synthesize recipientInfo=_recipientInfo - In the implementation block
@property (nonatomic,copy,readonly) FBMStringWithRedactedDescription * body;                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * sendParameters;                               //@synthesize sendParameters=_sendParameters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsExtras;                              //@synthesize analyticsExtras=_analyticsExtras - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                                             //@synthesize path=_path - In the implementation block
-(NSDictionary *)analyticsExtras;
-(NSString *)offlineThreadingId;
-(id)initWithOfflineThreadingId:(id)arg1 recipientInfo:(id)arg2 body:(id)arg3 sendParameters:(id)arg4 analyticsExtras:(id)arg5 contentType:(unsigned long long)arg6 path:(id)arg7 ;
-(FBOutgoingMessageRecipientInfo *)recipientInfo;
-(NSDictionary *)sendParameters;
-(NSString *)path;
-(FBMStringWithRedactedDescription *)body;
-(unsigned long long)contentType;
@end
