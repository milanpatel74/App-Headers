/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIProgressView, UIColor;

@interface WAVideoPreviewStatusView : UIView {

	UILabel* _progressLabel;
	UIProgressView* _progressView;

}

@property (assign,nonatomic) float progress; 
@property (nonatomic,retain) UIColor * textColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(UIColor *)textColor;
-(float)progress;
@end

