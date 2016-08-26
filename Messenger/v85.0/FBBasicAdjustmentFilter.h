/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageFilter.h>

@interface FBBasicAdjustmentFilter : FBImageFilter {

	BOOL _needsConfigure;
	BOOL _hueColorize;
	double _saturation;
	double _contrast;
	double _brightness;
	double _hue;

}

@property (assign,nonatomic) double saturation;              //@synthesize saturation=_saturation - In the implementation block
@property (assign,nonatomic) double contrast;                //@synthesize contrast=_contrast - In the implementation block
@property (assign,nonatomic) double brightness;              //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) double hue;                     //@synthesize hue=_hue - In the implementation block
@property (assign,nonatomic) BOOL hueColorize;               //@synthesize hueColorize=_hueColorize - In the implementation block
-(BOOL)hueColorize;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(void)setHueColorize:(BOOL)arg1 ;
-(void)setContrast:(double)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(double)contrast;
-(double)saturation;
-(void)setSaturation:(double)arg1 ;
-(id)fragmentShader;
-(void)setHue:(double)arg1 ;
-(double)hue;
@end
