/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WAEmojiStamp : NSObject <NSCopying> {

	BOOL _flipped;
	NSString* _text;
	NSString* _formattedText;

}

@property (assign,getter=isFlipped,nonatomic) BOOL flipped;               //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,copy) NSString * formattedText;                      //@synthesize formattedText=_formattedText - In the implementation block
@property (nonatomic,readonly) NSString * textureIdentifier; 
@property (nonatomic,readonly) NSString * text;                           //@synthesize text=_text - In the implementation block
-(NSString *)textureIdentifier;
-(id)initWithTextureIdentifier:(id)arg1 ;
-(id)initWithString:(id)arg1 flipped:(BOOL)arg2 font:(CTFontRef)arg3 ;
-(void)setFormattedText:(NSString *)arg1 ;
-(void)setFlipped:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSString *)formattedText;
-(BOOL)isFlipped;
@end

