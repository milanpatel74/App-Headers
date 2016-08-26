/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TGKeyCommand : NSObject <NSCopying> {

	NSString* _title;
	NSString* _input;
	long long _modifierFlags;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * input;                     //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
+(id)keyCommandWithTitle:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 ;
+(id)keyCommandWithUIKeyCommand:(id)arg1 ;
+(id)keyCommandForSystemActionSelector:(SEL)arg1 ;
-(id)UIKeyCommand;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(NSString *)input;
-(long long)modifierFlags;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
