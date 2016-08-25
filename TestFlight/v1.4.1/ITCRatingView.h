/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface ITCRatingView : UIView {

	BOOL _shouldLayoutRTL;
	double _value;
	double _minimumValue;
	double _maximumValue;
	NSString* _backgroundImageName;
	NSString* _foregroundImageName;
	UIImageView* _backgroundView;
	UIImageView* _foregroundView;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) double value;                              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                       //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                       //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * backgroundImageName;              //@synthesize backgroundImageName=_backgroundImageName - In the implementation block
@property (nonatomic,copy) NSString * foregroundImageName;              //@synthesize foregroundImageName=_foregroundImageName - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * foregroundView;              //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutRTL;                      //@synthesize shouldLayoutRTL=_shouldLayoutRTL - In the implementation block
-(id)tiledImageForImageNamed:(id)arg1 ;
-(void)observeCurrentLocaleDidChangeNotification:(id)arg1 ;
-(void)updateShouldLayoutRTL;
-(void)setNeedsUpdateImages;
-(void)setForegroundImageName:(NSString *)arg1 ;
-(void)setBackgroundImageName:(NSString *)arg1 ;
-(NSString *)foregroundImageName;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)value;
-(void)setValue:(double)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(double)minimumValue;
-(double)maximumValue;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)commonInit;
-(NSString *)backgroundImageName;
-(void)setForegroundView:(UIImageView *)arg1 ;
-(UIImageView *)foregroundView;
-(void)updateImages;
-(BOOL)shouldLayoutRTL;
-(void)setShouldLayoutRTL:(BOOL)arg1 ;
@end
