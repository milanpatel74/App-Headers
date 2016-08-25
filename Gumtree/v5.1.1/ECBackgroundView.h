/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) NSArray * gradientColors;                     //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,retain) NSArray * gradientMaskColors;                 //@synthesize gradientMaskColors=_gradientMaskColors - In the implementation block
@property (nonatomic,retain) NSArray * gradientLocations;                  //@synthesize gradientLocations=_gradientLocations - In the implementation block
-(void)setGradientMaskColors:(NSArray *)arg1 ;
-(void)setupGradientLayer;
-(NSArray *)gradientMaskColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(void)setGradientLocations:(NSArray *)arg1 ;
-(NSArray *)gradientLocations;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end
