/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ESGraphicsComponent.h>

@class NSString, ESColor, NSArray;

@interface ESLocalizableFontBillboardComponent : ESGraphicsComponent {

	BOOL autoResize;
	float fontPointSize;
	float shadowOffsetX;
	float shadowOffsetY;
	float strokeWidth;
	float maxHeight;
	float maxWidth;
	float gradientStartPointX;
	float gradientStartPointY;
	float gradientEndPointX;
	float gradientEndPointY;
	NSString* text;
	NSString* fontName;
	ESColor* textColor;
	ESColor* strokeColor;
	ESColor* shadowColor;
	NSArray* gradientColors;

}

@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * fontName; 
@property (nonatomic,retain) ESColor * textColor; 
@property (nonatomic,retain) ESColor * strokeColor; 
@property (nonatomic,retain) ESColor * shadowColor; 
@property (assign,nonatomic) float fontPointSize; 
@property (assign,nonatomic) float shadowOffsetX; 
@property (assign,nonatomic) float shadowOffsetY; 
@property (assign,nonatomic) float strokeWidth; 
@property (assign,nonatomic) float maxHeight; 
@property (assign,nonatomic) float maxWidth; 
@property (assign,nonatomic) BOOL autoResize; 
@property (nonatomic,retain) NSArray * gradientColors; 
@property (assign,nonatomic) float gradientStartPointX; 
@property (assign,nonatomic) float gradientStartPointY; 
@property (assign,nonatomic) float gradientEndPointX; 
@property (assign,nonatomic) float gradientEndPointY; 
+(id)mutableDictionaryTypes;
+(void)load;
-(void)updateProperties;
-(void)constructBillboard;
-(void)setFontPointSize:(float)arg1 ;
-(float)fontPointSize;
-(BOOL)autoResize;
-(void)setAutoResize:(BOOL)arg1 ;
-(void)setGradientStartPointX:(float)arg1 ;
-(void)setGradientStartPointY:(float)arg1 ;
-(void)setGradientEndPointX:(float)arg1 ;
-(void)setGradientEndPointY:(float)arg1 ;
-(float)gradientStartPointX;
-(float)gradientStartPointY;
-(float)gradientEndPointX;
-(float)gradientEndPointY;
-(void)dealloc;
-(void)setTextColor:(ESColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setShadowColor:(ESColor *)arg1 ;
-(ESColor *)shadowColor;
-(ESColor *)textColor;
-(NSString *)fontName;
-(void)setStrokeColor:(ESColor *)arg1 ;
-(ESColor *)strokeColor;
-(void)setFontName:(NSString *)arg1 ;
-(float)maxWidth;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)setMaxWidth:(float)arg1 ;
-(NSArray *)gradientColors;
-(void)setMaxHeight:(float)arg1 ;
-(void)setShadowOffsetX:(float)arg1 ;
-(void)setShadowOffsetY:(float)arg1 ;
-(float)maxHeight;
-(void)setStrokeWidth:(float)arg1 ;
-(float)strokeWidth;
-(float)shadowOffsetX;
-(float)shadowOffsetY;
@end
