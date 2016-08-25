/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ApptentiveStyle.h>

@class NSString, UIColor, NSMutableDictionary;

@interface ApptentiveStyleSheet : NSObject <ApptentiveStyle> {

	NSString* _fontFamily;
	NSString* _lightFaceAttribute;
	NSString* _regularFaceAttribute;
	NSString* _mediumFaceAttribute;
	NSString* _boldFaceAttribute;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _failureColor;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;
	UIColor* _collectionBackgroundColor;
	UIColor* _placeholderColor;
	double _sizeAdjustment;
	NSMutableDictionary* _fontDescriptorOverrides;
	NSMutableDictionary* _colorOverrides;
	NSMutableDictionary* _fontTable;

}

@property (nonatomic,retain) NSMutableDictionary * fontDescriptorOverrides;              //@synthesize fontDescriptorOverrides=_fontDescriptorOverrides - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorOverrides;                       //@synthesize colorOverrides=_colorOverrides - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fontTable;                            //@synthesize fontTable=_fontTable - In the implementation block
@property (nonatomic,retain) NSString * fontFamily;                                      //@synthesize fontFamily=_fontFamily - In the implementation block
@property (nonatomic,retain) NSString * lightFaceAttribute;                              //@synthesize lightFaceAttribute=_lightFaceAttribute - In the implementation block
@property (nonatomic,retain) NSString * regularFaceAttribute;                            //@synthesize regularFaceAttribute=_regularFaceAttribute - In the implementation block
@property (nonatomic,retain) NSString * mediumFaceAttribute;                             //@synthesize mediumFaceAttribute=_mediumFaceAttribute - In the implementation block
@property (nonatomic,retain) NSString * boldFaceAttribute;                               //@synthesize boldFaceAttribute=_boldFaceAttribute - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                                     //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                   //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIColor * failureColor;                                     //@synthesize failureColor=_failureColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                   //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * collectionBackgroundColor;                        //@synthesize collectionBackgroundColor=_collectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                 //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double sizeAdjustment;                                      //@synthesize sizeAdjustment=_sizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFontFamilyName;
+(id)UIKitTextStyles;
+(long long)weightForTextStyle:(id)arg1 ;
+(id)sizeForTextStyle:(id)arg1 ;
+(id)apptentiveTextStyles;
+(id)apptentiveColorStyles;
+(id)styleSheet;
-(id)colorForStyle:(id)arg1 ;
-(id)fontForStyle:(id)arg1 ;
-(id)appearanceColorForClass:(Class)arg1 property:(SEL)arg2 default:(id)arg3 ;
-(UIColor *)collectionBackgroundColor;
-(NSMutableDictionary *)fontDescriptorOverrides;
-(id)faceAttributeForFontDescriptor:(id)arg1 ;
-(id)faceAttributeForWeight:(long long)arg1 ;
-(double)sizeAdjustment;
-(NSString *)lightFaceAttribute;
-(NSString *)mediumFaceAttribute;
-(NSString *)boldFaceAttribute;
-(NSString *)regularFaceAttribute;
-(id)fontDescriptorForStyle:(id)arg1 ;
-(NSMutableDictionary *)colorOverrides;
-(void)inheritDefaultColors;
-(UIColor *)failureColor;
-(id)interpolateAtPoint:(double)arg1 between:(id)arg2 and:(id)arg3 ;
-(void)setFontDescriptor:(id)arg1 forStyle:(id)arg2 ;
-(void)setColor:(id)arg1 forStyle:(id)arg2 ;
-(void)setLightFaceAttribute:(NSString *)arg1 ;
-(void)setRegularFaceAttribute:(NSString *)arg1 ;
-(void)setMediumFaceAttribute:(NSString *)arg1 ;
-(void)setBoldFaceAttribute:(NSString *)arg1 ;
-(void)setFailureColor:(UIColor *)arg1 ;
-(void)setCollectionBackgroundColor:(UIColor *)arg1 ;
-(void)setSizeAdjustment:(double)arg1 ;
-(void)setFontDescriptorOverrides:(NSMutableDictionary *)arg1 ;
-(void)setColorOverrides:(NSMutableDictionary *)arg1 ;
-(void)setFontTable:(NSMutableDictionary *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(id)init;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)setFontFamily:(NSString *)arg1 ;
-(NSString *)fontFamily;
-(NSMutableDictionary *)fontTable;
@end
