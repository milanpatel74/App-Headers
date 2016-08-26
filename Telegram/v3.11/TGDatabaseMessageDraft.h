/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/PSCoding.h>

@class NSString, NSArray;

@interface TGDatabaseMessageDraft : NSObject <PSCoding> {

	BOOL _disableLinkPreview;
	int _replyToMessageId;
	int _date;
	NSString* _text;
	NSArray* _entities;

}

@property (nonatomic,readonly) NSString * text;                      //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * entities;                   //@synthesize entities=_entities - In the implementation block
@property (nonatomic,readonly) BOOL disableLinkPreview;              //@synthesize disableLinkPreview=_disableLinkPreview - In the implementation block
@property (nonatomic,readonly) int replyToMessageId;                 //@synthesize replyToMessageId=_replyToMessageId - In the implementation block
@property (nonatomic,readonly) int date;                             //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeyValueCoder:(id)arg1 ;
-(void)encodeWithKeyValueCoder:(id)arg1 ;
-(id)initWithText:(id)arg1 entities:(id)arg2 disableLinkPreview:(BOOL)arg3 replyToMessageId:(int)arg4 date:(int)arg5 ;
-(id)updateDate:(int)arg1 ;
-(int)replyToMessageId;
-(BOOL)disableLinkPreview;
-(BOOL)isEqual:(id)arg1 ;
-(int)date;
-(BOOL)isEmpty;
-(NSString *)text;
-(NSArray *)entities;
@end
