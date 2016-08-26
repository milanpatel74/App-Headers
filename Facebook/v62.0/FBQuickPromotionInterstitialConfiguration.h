/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIFont, UIColor;

@interface FBQuickPromotionInterstitialConfiguration : NSObject {

	BOOL _socialContextBelowFacepile;
	BOOL _showsStatusBar;
	BOOL _imageOnTop;
	unsigned long long _titleFontWeight;
	long long _titleMaxLines;
	UIFont* _titleFont;
	UIColor* _titleColor;
	long long _subtitleMaxLines;
	UIFont* _subtitleFont;
	UIColor* _subtitleColor;
	long long _footerMaxLines;
	UIFont* _footerFont;
	UIColor* _footerColor;
	long long _textOnlyTitleMaxLines;
	long long _textOnlySubtitleMaxLines;
	long long _socialContextMaxLines;
	UIColor* _socialContextColor;
	unsigned long long _socialContextLabelType;
	double _socialContextSpace;
	long long _modalTransitionStyle;
	long long _facepileCount;
	unsigned long long _facepileItemSize;
	long long _facepileInterItemPadding;
	unsigned long long _facepileItemStype;
	double _gutterWidth;
	double _titlePadding;
	unsigned long long _buttonBarType;
	CGSize _maxImageSize;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) unsigned long long titleFontWeight;                     //@synthesize titleFontWeight=_titleFontWeight - In the implementation block
@property (assign,nonatomic) long long titleMaxLines;                                //@synthesize titleMaxLines=_titleMaxLines - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                     //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                   //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) long long subtitleMaxLines;                             //@synthesize subtitleMaxLines=_subtitleMaxLines - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                                  //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,retain) UIColor * subtitleColor;                                //@synthesize subtitleColor=_subtitleColor - In the implementation block
@property (assign,nonatomic) long long footerMaxLines;                               //@synthesize footerMaxLines=_footerMaxLines - In the implementation block
@property (nonatomic,retain) UIFont * footerFont;                                    //@synthesize footerFont=_footerFont - In the implementation block
@property (nonatomic,retain) UIColor * footerColor;                                  //@synthesize footerColor=_footerColor - In the implementation block
@property (assign,nonatomic) long long textOnlyTitleMaxLines;                        //@synthesize textOnlyTitleMaxLines=_textOnlyTitleMaxLines - In the implementation block
@property (assign,nonatomic) long long textOnlySubtitleMaxLines;                     //@synthesize textOnlySubtitleMaxLines=_textOnlySubtitleMaxLines - In the implementation block
@property (assign,nonatomic) long long socialContextMaxLines;                        //@synthesize socialContextMaxLines=_socialContextMaxLines - In the implementation block
@property (nonatomic,retain) UIColor * socialContextColor;                           //@synthesize socialContextColor=_socialContextColor - In the implementation block
@property (assign,nonatomic) unsigned long long socialContextLabelType;              //@synthesize socialContextLabelType=_socialContextLabelType - In the implementation block
@property (assign,nonatomic) BOOL socialContextBelowFacepile;                        //@synthesize socialContextBelowFacepile=_socialContextBelowFacepile - In the implementation block
@property (assign,nonatomic) double socialContextSpace;                              //@synthesize socialContextSpace=_socialContextSpace - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                         //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBar;                                    //@synthesize showsStatusBar=_showsStatusBar - In the implementation block
@property (assign,nonatomic) long long facepileCount;                                //@synthesize facepileCount=_facepileCount - In the implementation block
@property (assign,nonatomic) unsigned long long facepileItemSize;                    //@synthesize facepileItemSize=_facepileItemSize - In the implementation block
@property (assign,nonatomic) long long facepileInterItemPadding;                     //@synthesize facepileInterItemPadding=_facepileInterItemPadding - In the implementation block
@property (assign,nonatomic) unsigned long long facepileItemStype;                   //@synthesize facepileItemStype=_facepileItemStype - In the implementation block
@property (assign,nonatomic) double gutterWidth;                                     //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (assign,nonatomic) double titlePadding;                                    //@synthesize titlePadding=_titlePadding - In the implementation block
@property (assign,nonatomic) CGSize maxImageSize;                                    //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                         //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL imageOnTop;                                        //@synthesize imageOnTop=_imageOnTop - In the implementation block
@property (assign,nonatomic) unsigned long long buttonBarType;                       //@synthesize buttonBarType=_buttonBarType - In the implementation block
-(void)setSubtitleMaxLines:(long long)arg1 ;
-(void)setTitleFontWeight:(unsigned long long)arg1 ;
-(long long)textOnlyTitleMaxLines;
-(long long)textOnlySubtitleMaxLines;
-(unsigned long long)facepileItemSize;
-(double)titlePadding;
-(double)socialContextSpace;
-(BOOL)socialContextBelowFacepile;
-(BOOL)imageOnTop;
-(unsigned long long)socialContextLabelType;
-(long long)socialContextMaxLines;
-(UIColor *)socialContextColor;
-(long long)facepileCount;
-(unsigned long long)facepileItemStype;
-(long long)facepileInterItemPadding;
-(long long)footerMaxLines;
-(UIFont *)footerFont;
-(UIColor *)footerColor;
-(void)setFooterFont:(UIFont *)arg1 ;
-(void)setFooterMaxLines:(long long)arg1 ;
-(void)setSocialContextBelowFacepile:(BOOL)arg1 ;
-(void)setSocialContextLabelType:(unsigned long long)arg1 ;
-(void)setFooterColor:(UIColor *)arg1 ;
-(void)setTitlePadding:(double)arg1 ;
-(void)setTextOnlyTitleMaxLines:(long long)arg1 ;
-(void)setTextOnlySubtitleMaxLines:(long long)arg1 ;
-(void)setSocialContextMaxLines:(long long)arg1 ;
-(void)setFacepileCount:(long long)arg1 ;
-(void)setFacepileItemSize:(unsigned long long)arg1 ;
-(void)setFacepileInterItemPadding:(long long)arg1 ;
-(void)setFacepileItemStype:(unsigned long long)arg1 ;
-(void)setImageOnTop:(BOOL)arg1 ;
-(void)setButtonBarType:(unsigned long long)arg1 ;
-(unsigned long long)buttonBarType;
-(void)setSocialContextColor:(UIColor *)arg1 ;
-(void)setSocialContextSpace:(double)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(UIEdgeInsets)contentEdgeInsets;
-(UIFont *)titleFont;
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(UIFont *)subtitleFont;
-(void)setTitleMaxLines:(long long)arg1 ;
-(long long)titleMaxLines;
-(void)setSubtitleColor:(UIColor *)arg1 ;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setMaxImageSize:(CGSize)arg1 ;
-(CGSize)maxImageSize;
-(unsigned long long)titleFontWeight;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(BOOL)showsStatusBar;
-(UIColor *)subtitleColor;
-(long long)subtitleMaxLines;
@end
