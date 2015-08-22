/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGTableViewCell.h>

@class UIColor;

@interface IGPlainTableViewCell : IGTableViewCell {

	BOOL _canSelect;
	UIColor* _defaultBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * defaultBackgroundColor;                  //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL canSelect;                                  //@synthesize canSelect=_canSelect - In the implementation block
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(BOOL)canSelect;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(UIColor *)defaultBackgroundColor;
@end
