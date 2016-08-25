/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView;

@interface TemplateSendModeSwitchView : UIControl {

	BOOL _i_switchOn;
	UIImageView* _trackView;
	UIImageView* _leftIconView;
	UIImageView* _rightIconView;
	/*^block*/id _onSendSwitchChange;

}

@property (retain) UIImageView * trackView;                  //@synthesize trackView=_trackView - In the implementation block
@property (retain) UIImageView * leftIconView;               //@synthesize leftIconView=_leftIconView - In the implementation block
@property (retain) UIImageView * rightIconView;              //@synthesize rightIconView=_rightIconView - In the implementation block
@property (copy) id onSendSwitchChange;                      //@synthesize onSendSwitchChange=_onSendSwitchChange - In the implementation block
@property (assign) BOOL i_switchOn;                          //@synthesize i_switchOn=_i_switchOn - In the implementation block
+(id)imageForTrackViewActiveColor:(id)arg1 switchOn:(BOOL)arg2 ;
-(void)setTrackView:(UIImageView *)arg1 ;
-(UIImageView *)trackView;
-(void)setOnSendSwitchChange:(id)arg1 ;
-(void)setDefaultSendSwitchPreference:(int)arg1 ;
-(UIImageView *)rightIconView;
-(UIImageView *)leftIconView;
-(void)didToggle;
-(void)didSwipeRight:(id)arg1 ;
-(void)didSwipeLeft:(id)arg1 ;
-(void)setLeftIconView:(UIImageView *)arg1 ;
-(void)setRightIconView:(UIImageView *)arg1 ;
-(void)setSwitchOn:(BOOL)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(BOOL)i_switchOn;
-(void)setI_switchOn:(BOOL)arg1 ;
-(id)onSendSwitchChange;
-(id)initWithFrame:(CGRect)arg1 ;
@end
