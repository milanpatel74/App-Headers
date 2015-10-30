/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/Slack.SLKSignInInputViewController.h>

@class NSString;

@interface Slack.SLKSignInTwoFactorAuthViewController : Slack.SLKSignInInputViewController {

	 password;
	 isSmsBased;
	 kGoogleAuthButtonTitle;
	 kAuthyButtonTitle;
	 kDuoMobileButtonTitle;
	 kDownloadAuthenticatorButtonTitle;
	 kResendCodeButtonTitle;
	 kSendCodeToBackupPhoneButtonTitle;

}

@property (readonly,nonatomic) NSString * twoFactorAuthDescription; 
@property (readonly,nonatomic) NSString * footerText; 
@property (readonly,nonatomic) double fontSize; 
-(id)initWithApiHelper:(id)arg1 addingTeam:(BOOL)arg2 ;
-(void)layoutAllSubviewsForSize:(CGSize)arg1 ;
-(void)refreshNextButtonsUI;
-(void)inputTextFieldTextDidChange:(id)arg1 ;
-(void)nextButtonPressed;
-(NSString *)twoFactorAuthDescription;
-(id)initWithApiHelper:(id)arg1 addingTeam:(BOOL)arg2 password:(id)arg3 isSmsBased:(BOOL)arg4 ;
-(id)removeNonDecimalDigitCharactersFromText:(id)arg1 ;
-(void)setupTwoFactorAuthTextField;
-(void)didTapFooterView;
-(void)didBecomeActive:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)fontSize;
-(NSString *)footerText;
@end

