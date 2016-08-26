/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBAccountConfirmationMegaphonePrimaryButtonComponentModel : NSObject {

	BOOL _enabled;
	NSString* _buttonTitle;
	SEL _buttonTapAction;

}

@property (nonatomic,copy,readonly) NSString * buttonTitle;              //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) SEL buttonTapAction;                      //@synthesize buttonTapAction=_buttonTapAction - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
+(id)newWithButtonTitle:(id)arg1 withButtonTapAction:(SEL)arg2 withEnabled:(BOOL)arg3 ;
-(SEL)buttonTapAction;
-(BOOL)enabled;
-(NSString *)buttonTitle;
@end
