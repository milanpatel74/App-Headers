/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface ECView : UIView {

	CALayer* _bottomBorderLayer;
	CALayer* _topBorderLayer;
	UIColor* _bottomBorderColor;
	UIColor* _topBorderColor;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;              //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * topBorderColor;                 //@synthesize topBorderColor=_topBorderColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
@end
