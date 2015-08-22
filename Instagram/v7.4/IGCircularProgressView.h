/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGArcLayer, UIColor;

@interface IGCircularProgressView : UIView {

	IGArcLayer* _progressLayer;
	double _progress;

}

@property (assign,nonatomic) double progress;                          //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double trackThickness; 
@property (nonatomic,retain) UIColor * progressTintColor; 
@property (nonatomic,retain) UIColor * trackTintColor; 
-(void)setTrackThickness:(double)arg1 ;
-(double)trackThickness;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(UIColor *)trackTintColor;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(double)progress;
@end
