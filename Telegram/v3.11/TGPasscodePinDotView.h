/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@protocol TGPasscodeBackground;
@interface TGPasscodePinDotView : UIView {

	id<TGPasscodeBackground> _background;
	CGPoint _absoluteOffset;
	BOOL _filled;
	double _fillAmount;

}

@property (assign,nonatomic) BOOL filled; 
-(void)setAbsoluteOffset:(CGPoint)arg1 ;
-(void)setFilled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)filled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackground:(id)arg1 ;
-(void)setFilled:(BOOL)arg1 ;
@end
