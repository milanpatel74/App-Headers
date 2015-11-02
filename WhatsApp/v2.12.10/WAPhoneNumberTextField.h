/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@protocol WAPhoneNumberTextFieldDelegate;
@class WAPhoneNumberTextFieldHelper, NSString, UIFont;

@interface WAPhoneNumberTextField : UITextField {

	WAPhoneNumberTextFieldHelper* _textFieldHelper;
	NSString* _countryCode;
	UIFont* _phoneNumberFont;
	id<WAPhoneNumberTextFieldDelegate> _textFieldDelegate;

}

@property (nonatomic,copy) NSString * countryCode;                                                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) UIFont * phoneNumberFont;                                                 //@synthesize phoneNumberFont=_phoneNumberFont - In the implementation block
@property (assign,nonatomic,__weak) id<WAPhoneNumberTextFieldDelegate> textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
-(void)setPhoneNumberFont:(UIFont *)arg1 ;
-(void)reformatTextField;
-(UIFont *)phoneNumberFont;
-(void)setText:(id)arg1 ;
-(void)awakeFromNib;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTextFieldDelegate:(id<WAPhoneNumberTextFieldDelegate>)arg1 ;
-(id<WAPhoneNumberTextFieldDelegate>)textFieldDelegate;
@end

