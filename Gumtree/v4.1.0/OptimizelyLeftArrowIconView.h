/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIBezierPath;

@interface OptimizelyLeftArrowIconView : UIView {

	UIColor* _fillColor;
	UIBezierPath* _bezierPath;

}

@property (nonatomic,retain) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIBezierPath * bezierPath;              //@synthesize bezierPath=_bezierPath - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBezierPath *)bezierPath;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)createPath;
-(void)setBezierPath:(UIBezierPath *)arg1 ;
@end
