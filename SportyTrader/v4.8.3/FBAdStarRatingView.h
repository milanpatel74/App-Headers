/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBAdStarRatingView : UIView {

	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	double _xCenter;
	double _yCenter;
	double _xIncrement;
	double _width;
	FBAdStarRating _rating;
	CGPoint _farthestPoint;

}

@property (assign,nonatomic) FBAdStarRating rating;                 //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) CGPoint farthestPoint;                 //@synthesize farthestPoint=_farthestPoint - In the implementation block
@property (assign,nonatomic) double xCenter;                        //@synthesize xCenter=_xCenter - In the implementation block
@property (assign,nonatomic) double yCenter;                        //@synthesize yCenter=_yCenter - In the implementation block
@property (assign,nonatomic) double xIncrement;                     //@synthesize xIncrement=_xIncrement - In the implementation block
@property (assign,nonatomic) double width;                          //@synthesize width=_width - In the implementation block
-(id)initWithFrame:(CGRect)arg1 withStarRating:(FBAdStarRating)arg2 ;
-(void)updateDrawingAttributesFromSize:(CGSize)arg1 ;
-(void)setXCenter:(double)arg1 ;
-(void)setYCenter:(double)arg1 ;
-(void)setXIncrement:(double)arg1 ;
-(double)xCenter;
-(double)yCenter;
-(double)xIncrement;
-(CGPoint)farthestPoint;
-(void)setFarthestPoint:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(FBAdStarRating)rating;
-(void)setRating:(FBAdStarRating)arg1 ;
@end
