/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIUserConversationDetailsRequest : ECAPIRequestBase {

	NSString* _conversationId;

}

@property (nonatomic,copy) NSString * conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
-(id)initWithConversationId:(id)arg1 ;
-(id)command;
-(void)setConversationId:(NSString *)arg1 ;
-(NSString *)conversationId;
@end
