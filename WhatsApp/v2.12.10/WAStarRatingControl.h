/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, UIColor;

@interface WAStarRatingControl : UIControl {

	NSArray* _stars;
	double _margin;

}

@property (assign,nonatomic) double margin;                //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) long long value; 
@property (nonatomic,retain) UIColor * color; 
+(CGSize)preferredSizeForStarCount:(long long)arg1 margin:(double)arg2 ;
-(id)initWithStarCount:(long long)arg1 ;
-(void)updateValueWithTouch:(id)arg1 ;
-(void)layoutSubviews;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setMargin:(double)arg1 ;
-(double)margin;
@end

