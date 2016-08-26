/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphUIBaseView.h>

@class UIColor;

@interface FBGraphUILineGraphView : FBGraphUIBaseView {

	double _smoothingFactor;
	UIColor* _highlightColor;
	FBGraphUILineGraphViewRange _highlightRange;

}

@property (assign,nonatomic) double smoothingFactor;                                  //@synthesize smoothingFactor=_smoothingFactor - In the implementation block
@property (assign,nonatomic) FBGraphUILineGraphViewRange highlightRange;              //@synthesize highlightRange=_highlightRange - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                //@synthesize highlightColor=_highlightColor - In the implementation block
-(FBGraphUILineGraphViewRange)highlightRange;
-(void)setHighlightRange:(FBGraphUILineGraphViewRange)arg1 ;
-(void)drawPoints:(id)arg1 ;
-(double)_rollAngleOfControlPointsForDataPointAtIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(double)smoothingFactor;
-(void)setSmoothingFactor:(double)arg1 ;
@end
