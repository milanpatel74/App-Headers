/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface WAAnimatedGearsView : UIView {

	UIImageView* _gearsBase;
	UIImageView* _border;
	UIImageView* _spinner;
	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
+(CGSize)baseSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)initialize;
-(void)awakeFromNib;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)configure;
@end
