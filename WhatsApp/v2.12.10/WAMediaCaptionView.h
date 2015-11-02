/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class WALabel, NSCache, UIImageView, UIView, UIFont, NSString;

@interface WAMediaCaptionView : UIView {

	WALabel* _textLabel;
	WALabel* _secondaryLabel;
	CGRect _secondaryImageRect;
	float _blendAmount;
	NSCache* _heightCache;
	UIImageView* _gradientView;
	UIView* _gradientViewContainer;
	UIView* _topBorder;
	UIView* _secondaryTopBorder;
	BOOL _isOcclusionLocked;
	CGRect _imageRect;

}

@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) CGRect imageRect;                    //@synthesize imageRect=_imageRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * text; 
-(CGSize)sizeThatFits:(CGSize)arg1 forLabel:(id)arg2 ;
-(void)updateOcclusionAppearance;
-(void)showText:(id)arg1 imageRect:(CGRect)arg2 blendedWithText:(id)arg3 imageRect:(CGRect)arg4 blendAmount:(float)arg5 ;
-(void)setText:(id)arg1 onLabel:(id)arg2 ;
-(void)resizeToFit;
-(float)overlapBetweenRect:(CGRect)arg1 andView:(id)arg2 ;
-(void)updateObstructedAppearanceBlendingOverlap:(float)arg1 withOverlap:(float)arg2 ;
-(void)setText:(id)arg1 imageRect:(CGRect)arg2 ;
-(void)unlockOcclusionAppearanceWithAnimation:(BOOL)arg1 ;
-(void)lockOcclusionAppearanceWithAnimation:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(UIFont *)font;
-(void)setImageRect:(CGRect)arg1 ;
-(CGRect)imageRect;
@end

