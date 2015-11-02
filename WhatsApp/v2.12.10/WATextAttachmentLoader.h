/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, NSMutableDictionary, NSArray;

@interface WATextAttachmentLoader : NSObject {

	NSMutableArray* _registeredSizes;
	NSDictionary* _symbolDict;
	NSMutableDictionary* _scaledSizeToFilenameSuffixDict;
	NSArray* _symbolArray;

}

@property (nonatomic,retain) NSArray * symbolArray;              //@synthesize symbolArray=_symbolArray - In the implementation block
+(id)regionalPairSet;
+(BOOL)isCustomEmojiSupported;
+(id)customEmojiSet;
+(id)skinToneModifierSet;
+(id)sharedLoader;
-(void)registerSize:(long long)arg1 ;
-(id)bestImageForName:(id)arg1 pointSize:(double)arg2 ;
-(id)bestRegisteredSizeForPointSize:(double)arg1 ;
-(id)textAttachmentForName:(id)arg1 pointSize:(double)arg2 ;
-(NSArray *)symbolArray;
-(void)setSymbolArray:(NSArray *)arg1 ;
-(id)init;
@end

