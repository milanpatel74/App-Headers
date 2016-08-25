/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/GradientBackgroundView.h>

@class UIColor;

@interface SectionHeaderGradientBackgroundView : GradientBackgroundView {

	BOOL drawShadeAtTop;
	BOOL drawShadeAtBottom;
	UIColor* _topLineColor;
	UIColor* _bottomLineColor;
	double _lineHeight;

}

@property (assign,nonatomic) double lineHeight;                      //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) BOOL drawShadeAtTop; 
@property (assign,nonatomic) BOOL drawShadeAtBottom; 
@property (nonatomic,retain) UIColor * topLineColor;                 //@synthesize topLineColor=_topLineColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomLineColor;              //@synthesize bottomLineColor=_bottomLineColor - In the implementation block
-(void)setDrawShadeAtTop:(BOOL)arg1 ;
-(void)setDrawShadeAtBottom:(BOOL)arg1 ;
-(UIColor *)topLineColor;
-(BOOL)drawShadeAtTop;
-(BOOL)drawShadeAtBottom;
-(void)setTopLineColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)lineHeight;
-(void)setLineHeight:(double)arg1 ;
-(UIColor *)bottomLineColor;
-(void)setBottomLineColor:(UIColor *)arg1 ;
@end
