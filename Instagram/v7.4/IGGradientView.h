/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface IGGradientView : UIView {

	long long _gradientDirection;
	NSArray* _colors;

}

@property (assign,nonatomic) long long gradientDirection;              //@synthesize gradientDirection=_gradientDirection - In the implementation block
@property (nonatomic,retain) NSArray * colors;                         //@synthesize colors=_colors - In the implementation block
+(Class)layerClass;
-(void)setGradientDirection:(long long)arg1 ;
-(long long)gradientDirection;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)colors;
@end
