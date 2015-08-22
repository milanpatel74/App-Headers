/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBAdStarRatingView : UIView {

	FBAdStarRating _rating;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	double _xCenter;
	double _yCenter;
	double _xIncrement;
	double _width;

}

@property (assign,nonatomic) FBAdStarRating rating;                 //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) double xCenter;                        //@synthesize xCenter=_xCenter - In the implementation block
@property (assign,nonatomic) double yCenter;                        //@synthesize yCenter=_yCenter - In the implementation block
@property (assign,nonatomic) double xIncrement;                     //@synthesize xIncrement=_xIncrement - In the implementation block
@property (assign,nonatomic) double width;                          //@synthesize width=_width - In the implementation block
-(void)setXCenter:(double)arg1 ;
-(void)setYCenter:(double)arg1 ;
-(void)setXIncrement:(double)arg1 ;
-(double)xCenter;
-(double)yCenter;
-(double)xIncrement;
-(id)initWithFrame:(CGRect)arg1 withStarRating:(FBAdStarRating)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(FBAdStarRating)rating;
-(void)setRating:(FBAdStarRating)arg1 ;
@end
