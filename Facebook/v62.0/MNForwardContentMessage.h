/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNForwardContent, FBOutgoingMessageRecipientInfo, MNMessageSendConversionContext;

@interface MNForwardContentMessage : FBValueObject <NSCopying> {

	MNForwardContent* _content;
	FBOutgoingMessageRecipientInfo* _recipientInfo;
	MNMessageSendConversionContext* _sendConversionContext;

}

@property (nonatomic,copy,readonly) MNForwardContent * content;                                          //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) FBOutgoingMessageRecipientInfo * recipientInfo;                      //@synthesize recipientInfo=_recipientInfo - In the implementation block
@property (nonatomic,copy,readonly) MNMessageSendConversionContext * sendConversionContext;              //@synthesize sendConversionContext=_sendConversionContext - In the implementation block
-(FBOutgoingMessageRecipientInfo *)recipientInfo;
-(MNMessageSendConversionContext *)sendConversionContext;
-(id)initWithContent:(id)arg1 recipientInfo:(id)arg2 sendConversionContext:(id)arg3 ;
-(MNForwardContent *)content;
@end
