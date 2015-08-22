/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFIGConfigBuilder.h>

@class NSString, UIFont, UIColor, UIView;

@interface FBInterstitialViewConfigBuilder : NSObject <FBFIGConfigBuilder> {

	BOOL _subtitleAdjustsFontSizeToFitWidth;
	BOOL _hasDismissButton;
	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _subtitle;
	UIFont* _subtitleFont;
	UIColor* _subtitleColor;
	unsigned long long _subtitleMaxNumberOfLines;
	UIView* _contentView;
	NSString* _primaryButtonTitle;
	unsigned long long _primaryButtonStyle;
	unsigned long long _primaryButtonSize;
	UIColor* _primaryButtonColor;
	UIColor* _primaryButtonBackgroundColor;
	NSString* _secondaryButtonTitle;
	unsigned long long _secondaryButtonStyle;
	unsigned long long _secondaryButtonSize;
	UIColor* _secondaryButtonColor;
	UIColor* _secondaryButtonBackgroundColor;
	UIColor* _backgroundColor;
	UIEdgeInsets _contentViewEdgeInsets;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIFont * titleFont;                                         //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                       //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long titleMaxNumberOfLines;                 //@synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) UIFont * subtitleFont;                                      //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,copy) UIColor * subtitleColor;                                    //@synthesize subtitleColor=_subtitleColor - In the implementation block
@property (assign,nonatomic) unsigned long long subtitleMaxNumberOfLines;              //@synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL subtitleAdjustsFontSizeToFitWidth;                   //@synthesize subtitleAdjustsFontSizeToFitWidth=_subtitleAdjustsFontSizeToFitWidth - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewEdgeInsets;                       //@synthesize contentViewEdgeInsets=_contentViewEdgeInsets - In the implementation block
@property (nonatomic,copy) NSString * primaryButtonTitle;                              //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (assign,nonatomic) unsigned long long primaryButtonStyle;                    //@synthesize primaryButtonStyle=_primaryButtonStyle - In the implementation block
@property (assign,nonatomic) unsigned long long primaryButtonSize;                     //@synthesize primaryButtonSize=_primaryButtonSize - In the implementation block
@property (nonatomic,copy) UIColor * primaryButtonColor;                               //@synthesize primaryButtonColor=_primaryButtonColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryButtonBackgroundColor;                     //@synthesize primaryButtonBackgroundColor=_primaryButtonBackgroundColor - In the implementation block
@property (nonatomic,copy) NSString * secondaryButtonTitle;                            //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryButtonStyle;                  //@synthesize secondaryButtonStyle=_secondaryButtonStyle - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryButtonSize;                   //@synthesize secondaryButtonSize=_secondaryButtonSize - In the implementation block
@property (nonatomic,copy) UIColor * secondaryButtonColor;                             //@synthesize secondaryButtonColor=_secondaryButtonColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryButtonBackgroundColor;                   //@synthesize secondaryButtonBackgroundColor=_secondaryButtonBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasDismissButton;                                    //@synthesize hasDismissButton=_hasDismissButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builderForInstance:(id)arg1 ;
+(id)builder;
-(unsigned long long)titleMaxNumberOfLines;
-(void)setTitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)subtitleMaxNumberOfLines;
-(BOOL)subtitleAdjustsFontSizeToFitWidth;
-(BOOL)hasDismissButton;
-(NSString *)primaryButtonTitle;
-(unsigned long long)primaryButtonStyle;
-(unsigned long long)primaryButtonSize;
-(UIColor *)primaryButtonColor;
-(UIColor *)primaryButtonBackgroundColor;
-(NSString *)secondaryButtonTitle;
-(unsigned long long)secondaryButtonStyle;
-(unsigned long long)secondaryButtonSize;
-(UIColor *)secondaryButtonColor;
-(UIColor *)secondaryButtonBackgroundColor;
-(UIEdgeInsets)contentViewEdgeInsets;
-(void)setPrimaryButtonTitle:(NSString *)arg1 ;
-(void)setSecondaryButtonTitle:(NSString *)arg1 ;
-(void)setHasDismissButton:(BOOL)arg1 ;
-(void)setSubtitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(void)setSubtitleAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setContentViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPrimaryButtonStyle:(unsigned long long)arg1 ;
-(void)setPrimaryButtonSize:(unsigned long long)arg1 ;
-(void)setPrimaryButtonColor:(UIColor *)arg1 ;
-(void)setPrimaryButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setSecondaryButtonStyle:(unsigned long long)arg1 ;
-(void)setSecondaryButtonSize:(unsigned long long)arg1 ;
-(void)setSecondaryButtonColor:(UIColor *)arg1 ;
-(void)setSecondaryButtonBackgroundColor:(UIColor *)arg1 ;
-(id)build;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(id)_init;
-(NSString *)title;
-(UIEdgeInsets)edgeInsets;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIFont *)titleFont;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIFont *)subtitleFont;
-(UIColor *)subtitleColor;
-(void)setSubtitleColor:(UIColor *)arg1 ;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
@end
