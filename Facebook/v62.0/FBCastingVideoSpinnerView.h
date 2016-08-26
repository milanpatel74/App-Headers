/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UIView, UIImageView;

@interface FBCastingVideoSpinnerView : UIView {

	CAShapeLayer* _mask;
	UIView* _circleView;
	UIImageView* _phoneView;
	UIView* _wifiBarView;
	UIView* _checkmarkView;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end
