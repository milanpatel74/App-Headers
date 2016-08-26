/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSNumber, SSignal;

@interface TGBridgeChatMessageListView : NSObject <NSCoding> {

	NSArray* _messages;
	NSNumber* _earlierReferenceMessageId;
	NSNumber* _laterReferenceMessageId;
	SSignal* _earlierView;
	SSignal* _laterView;

}

@property (nonatomic,readonly) NSArray * messages;                 //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) SSignal * earlierView;              //@synthesize earlierView=_earlierView - In the implementation block
@property (nonatomic,readonly) SSignal * laterView;                //@synthesize laterView=_laterView - In the implementation block
+(id)chatMessageListViewWithTGChatMessageListView:(id)arg1 conversation:(id)arg2 ;
-(SSignal *)earlierView;
-(SSignal *)laterView;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)messages;
@end
