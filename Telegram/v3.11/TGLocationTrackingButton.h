/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, UIActivityIndicatorView;

@interface TGLocationTrackingButton : UIButton {

	UIImageView* _noneModeIconView;
	UIImageView* _followModeIconView;
	UIImageView* _followWithHeadingModeIconView;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _locationAvailable;
	int _trackingMode;

}

@property (assign,nonatomic) int trackingMode;                                               //@synthesize trackingMode=_trackingMode - In the implementation block
@property (assign,getter=isLocationAvailable,nonatomic) BOOL locationAvailable;              //@synthesize locationAvailable=_locationAvailable - In the implementation block
+(int)locationTrackingModeWithUserTrackingMode:(long long)arg1 ;
+(long long)userTrackingModeWithLocationTrackingMode:(int)arg1 ;
-(void)setTrackingMode:(int)arg1 animated:(BOOL)arg2 ;
-(void)setLocationAvailable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTrackingMode:(int)arg1 ;
-(void)setIsLocationAvailable:(BOOL)arg1 ;
-(BOOL)isLocationAvailable;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)trackingMode;
-(void)setLocationAvailable:(BOOL)arg1 ;
@end
