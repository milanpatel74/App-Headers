/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, UIImage, UIColor;

@interface WAOverlayImageView : UIImageView {

	UIView* _overlayView;

}

@property (nonatomic,retain) UIImage * originalImage; 
@property (nonatomic,retain) UIColor * overlayColor; 
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(UIColor *)overlayColor;
-(UIImage *)originalImage;
@end

