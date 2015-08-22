/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface FBCardStretchableImageBuilder : NSObject {

	double _cornerRadius;
	UIColor* _insideColor;
	UIColor* _outsideColor;
	UIColor* _borderColor;
	double _borderWidth;
	double _shadowBlurRadius;
	UIColor* _shadowColor;
	CGSize _shadowOffset;
	CGSize _stretchableSize;
	UIEdgeInsets _borderInsets;

}

@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * insideColor;                  //@synthesize insideColor=_insideColor - In the implementation block
@property (nonatomic,retain) UIColor * outsideColor;                 //@synthesize outsideColor=_outsideColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;              //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                    //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;                //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                  //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize stretchableSize;                 //@synthesize stretchableSize=_stretchableSize - In the implementation block
-(id)getResult;
-(void)setInsideColor:(UIColor *)arg1 ;
-(void)setOutsideColor:(UIColor *)arg1 ;
-(UIColor *)insideColor;
-(UIColor *)outsideColor;
-(CGSize)stretchableSize;
-(void)setStretchableSize:(CGSize)arg1 ;
-(id)init;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setShadowBlurRadius:(double)arg1 ;
-(double)shadowBlurRadius;
-(double)borderWidth;
-(UIColor *)borderColor;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
@end
