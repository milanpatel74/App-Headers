/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGMediaAttachment.h>
#import <Telegram/TGMediaAttachmentParser.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TGBotContextResultAttachment : TGMediaAttachment <TGMediaAttachmentParser, NSCoding> {

	int _userId;
	NSString* _resultId;
	long long _queryId;

}

@property (nonatomic,readonly) int userId;                          //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) NSString * resultId;                 //@synthesize resultId=_resultId - In the implementation block
@property (nonatomic,readonly) long long queryId;                   //@synthesize queryId=_queryId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)resultId;
-(void)serialize:(id)arg1 ;
-(id)parseMediaAttachment:(id)arg1 ;
-(id)initWithUserId:(int)arg1 resultId:(id)arg2 queryId:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)queryId;
-(int)userId;
@end
