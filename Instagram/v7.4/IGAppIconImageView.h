/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class UIImage;

@interface IGAppIconImageView : IGImageView {

	unsigned long long _imageRenderTicker;
	UIImage* _originalImage;

}

@property (assign,nonatomic) unsigned long long imageRenderTicker;              //@synthesize imageRenderTicker=_imageRenderTicker - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
-(void)reloadClippedImageWithImage:(id)arg1 ;
-(unsigned long long)imageRenderTicker;
-(void)setImageRenderTicker:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)originalImage;
@end
