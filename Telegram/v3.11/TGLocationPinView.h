/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView;

@interface TGLocationPinView : UIView {

	UIImageView* _pinView;
	UIImageView* _pinPointView;
	UIImageView* _shadowView;
	BOOL _pinRaised;

}

@property (assign,getter=isPinRaised,nonatomic) BOOL pinRaised;              //@synthesize pinRaised=_pinRaised - In the implementation block
-(void)setPinRaised:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPinRaised:(BOOL)arg1 ;
-(BOOL)isPinRaised;
-(id)init;
@end
