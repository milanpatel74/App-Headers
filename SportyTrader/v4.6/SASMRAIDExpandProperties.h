/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SASMRAIDAbstractProperties.h>

@class UIColor;

@interface SASMRAIDExpandProperties : SASMRAIDAbstractProperties {

	BOOL _useCustomClose;
	BOOL _modal;
	double _width;
	double _height;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) double width;                           //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                          //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL useCustomClose;                    //@synthesize useCustomClose=_useCustomClose - In the implementation block
@property (assign,getter=isModal,nonatomic) BOOL modal;              //@synthesize modal=_modal - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setUseCustomClose:(BOOL)arg1 ;
-(BOOL)useCustomClose;
-(id)opacityStringFromColor:(id)arg1 ;
-(BOOL)isStringAValidColor:(id)arg1 ;
-(BOOL)isStringHex:(id)arg1 ;
-(void)fillWithDefaultValues;
-(BOOL)isInvalidDictionary:(id)arg1 ;
-(BOOL)fillWithDictionary:(id)arg1 ;
-(id)dictionaryFromValues;
-(void)setModal:(BOOL)arg1 ;
-(BOOL)isModal;
-(void)dealloc;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(id)colorFromString:(id)arg1 ;
@end
