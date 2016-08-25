/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont;

@interface WATextFormatter : NSObject {

	UIFont* _baseFont;
	UIFont* _boldFont;
	UIFont* _italicFont;
	UIFont* _boldItalicFont;
	UIFont* _monoSpaceFont;

}

@property (nonatomic,retain) UIFont * boldFont;                    //@synthesize boldFont=_boldFont - In the implementation block
@property (nonatomic,retain) UIFont * italicFont;                  //@synthesize italicFont=_italicFont - In the implementation block
@property (nonatomic,retain) UIFont * boldItalicFont;              //@synthesize boldItalicFont=_boldItalicFont - In the implementation block
@property (nonatomic,retain) UIFont * monoSpaceFont;               //@synthesize monoSpaceFont=_monoSpaceFont - In the implementation block
@property (nonatomic,retain) UIFont * baseFont;                    //@synthesize baseFont=_baseFont - In the implementation block
+(id)regexBlockMonoSpace;
+(id)regexBold;
+(id)regexItalic;
+(id)regexStrikethrough;
-(void)formatAttributedText:(id)arg1 ;
-(id)stripFormattingFromText:(id)arg1 ;
-(void)parseBlockMonoSpace:(id)arg1 ;
-(void)parseBold:(id)arg1 ;
-(void)parseItalic:(id)arg1 ;
-(void)parseStrikeThrough:(id)arg1 ;
-(UIFont *)monoSpaceFont;
-(id)boldFontFromFont:(id)arg1 ;
-(id)italicFontFromFont:(id)arg1 ;
-(UIFont *)italicFont;
-(UIFont *)boldItalicFont;
-(void)setItalicFont:(UIFont *)arg1 ;
-(void)setBoldItalicFont:(UIFont *)arg1 ;
-(void)setMonoSpaceFont:(UIFont *)arg1 ;
-(UIFont *)baseFont;
-(void)setBaseFont:(UIFont *)arg1 ;
-(UIFont *)boldFont;
-(void)setBoldFont:(UIFont *)arg1 ;
@end
