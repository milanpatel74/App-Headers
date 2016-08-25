/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slack/Slack-Structs.h>
@class NSMutableAttributedString, UIColor;

@interface TSFTextStyler : NSObject {

	NSMutableAttributedString* _string;
	UIColor* _textColor;
	UIColor* _linkColor;
	UIColor* _disabledLinkColor;
	unsigned long long _defaultStyleMask;
	unsigned long long _fontBase;

}

@property (assign,nonatomic) unsigned long long defaultStyleMask;              //@synthesize defaultStyleMask=_defaultStyleMask - In the implementation block
@property (assign,nonatomic) unsigned long long fontBase;                      //@synthesize fontBase=_fontBase - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * string;               //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;                              //@synthesize linkColor=_linkColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledLinkColor;                      //@synthesize disabledLinkColor=_disabledLinkColor - In the implementation block
+(id)stylerWithString:(id)arg1 defaultStyle:(unsigned long long)arg2 ;
+(id)stylerWithAttributedString:(id)arg1 defaultStyle:(unsigned long long)arg2 ;
-(void)addLink:(unsigned long long)arg1 href:(id)arg2 inRange:(NSRange)arg3 provider:(id)arg4 ;
-(void)addFontStyling:(unsigned long long)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)setDefaultStyleMask:(unsigned long long)arg1 ;
-(void)setFontBase:(unsigned long long)arg1 ;
-(void)applyBaseFont;
-(UIColor *)disabledLinkColor;
-(void)setDisabledLinkColor:(UIColor *)arg1 ;
-(unsigned long long)defaultStyleMask;
-(unsigned long long)fontBase;
-(id)fontForStyleMask:(unsigned long long)arg1 ;
-(void)addLinkWithURL:(id)arg1 range:(NSRange)arg2 ;
-(id)stringInRange:(NSRange)arg1 ;
-(void)addLinkWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttibuteName:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)addColor:(id)arg1 range:(NSRange)arg2 ;
-(void)addBackgroundColor:(id)arg1 range:(NSRange)arg2 ;
-(void)addUnderlineToRange:(NSRange)arg1 ;
-(id)init;
-(NSMutableAttributedString *)string;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(id)attributedString;
-(void)setString:(NSMutableAttributedString *)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(UIColor *)linkColor;
@end
