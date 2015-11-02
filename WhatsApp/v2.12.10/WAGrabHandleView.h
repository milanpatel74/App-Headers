/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface WAGrabHandleView : UIView {

	double _radius;
	UIColor* _fillColor;

}

@property (assign,nonatomic) double radius;                    //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double state; 
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
+(double)preferredHeight;
-(id)bezierPathForCurrentState;
-(double)angleForState:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(double)state;
-(void)setState:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

