/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface XMPPTokenizer : NSObject {

	NSDictionary* _textToTokenDictionaries[240];
	NSDictionary* _tokenToTextDictionaries[240];

}
+(id)mainTokenizer;
+(id)webClientTokenizer;
-(void)setTextToTokenDictionary:(id)arg1 forDictionaryType:(int)arg2 ;
-(void)setTokenToTextDictionary:(id)arg1 forDictionaryType:(int)arg2 ;
-(id)convertTextToToken:(id)arg1 ;
-(id)convertTokenToText:(unsigned char)arg1 usingDictionaryType:(int)arg2 ;
-(void)dealloc;
-(id)init;
@end
