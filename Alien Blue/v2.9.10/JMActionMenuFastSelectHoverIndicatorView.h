/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, JMActionMenuThemeConfiguration, NSString, NSTimer;

@interface JMActionMenuFastSelectHoverIndicatorView : UIView {

	UIColor* _nodeHighlightColor;
	JMActionMenuThemeConfiguration* _themeConfiguration;
	NSString* _nodeTitle;
	double _trackAngle;
	NSTimer* _redrawTimer;

}

@property (retain) UIColor * nodeHighlightColor;                                     //@synthesize nodeHighlightColor=_nodeHighlightColor - In the implementation block
@property (retain) JMActionMenuThemeConfiguration * themeConfiguration;              //@synthesize themeConfiguration=_themeConfiguration - In the implementation block
@property (copy) NSString * nodeTitle;                                               //@synthesize nodeTitle=_nodeTitle - In the implementation block
@property (assign) double trackAngle;                                                //@synthesize trackAngle=_trackAngle - In the implementation block
@property (retain) NSTimer * redrawTimer;                                            //@synthesize redrawTimer=_redrawTimer - In the implementation block
-(void)setThemeConfiguration:(JMActionMenuThemeConfiguration *)arg1 ;
-(JMActionMenuThemeConfiguration *)themeConfiguration;
-(id)initWithThemeConfiguration:(id)arg1 ;
-(void)decorateForNode:(id)arg1 trackAngle:(double)arg2 animated:(BOOL)arg3 ;
-(void)redrawAnimated:(BOOL)arg1 ;
-(NSTimer *)redrawTimer;
-(void)redrawWithAnimation;
-(void)setRedrawTimer:(NSTimer *)arg1 ;
-(void)setTrackAngle:(double)arg1 ;
-(void)setNodeTitle:(NSString *)arg1 ;
-(void)setNodeHighlightColor:(UIColor *)arg1 ;
-(void)queueDelayedAnimatedRedraw;
-(UIColor *)nodeHighlightColor;
-(void)cleanUpTimers;
-(NSString *)nodeTitle;
-(double)trackAngle;
-(void)drawRect:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
@end
