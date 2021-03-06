/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBSnacksRingView : UIView {

	BOOL _animating;
	UIColor* _strokeColor;
	double _lineWidth;
	double _progress;

}

@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                   //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL animating;                     //@synthesize animating=_animating - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)progress;
-(void)updateAnimations;
@end

