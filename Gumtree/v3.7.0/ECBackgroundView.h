/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CAGradientLayer;

@interface ECBackgroundView : UIView {

	NSArray* _gradientColors;
	NSArray* _gradientMaskColors;
	NSArray* _gradientLocations;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) NSArray * gradientColors;                     //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,retain) NSArray * gradientMaskColors;                 //@synthesize gradientMaskColors=_gradientMaskColors - In the implementation block
@property (nonatomic,retain) NSArray * gradientLocations;                  //@synthesize gradientLocations=_gradientLocations - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setupGradientLayer;
-(void)setGradientMaskColors:(NSArray *)arg1 ;
-(NSArray *)gradientMaskColors;
-(NSArray *)gradientLocations;
-(void)setGradientLocations:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(NSArray *)gradientColors;
@end
