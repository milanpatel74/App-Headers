/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString, UIView, MKLogoView, SKPAttributedLabel, UITextField, MKButton, MKActivityIndicatorView;

@interface SKPSkypeLoginView : UIView <UITextFieldDelegate> {

	BOOL _canCancelLogin;
	BOOL _canInteractWithInputControls;
	BOOL _keyboardVisible;
	BOOL _shouldPerformLogin;
	/*^block*/id _loginActionBlock;
	/*^block*/id _cancelActionBlock;
	/*^block*/id _problemSigninBlock;
	NSString* _errorMessage;
	UIView* _loginControlsContainerView;
	MKLogoView* _logoView;
	SKPAttributedLabel* _errorLabel;
	UIView* _inputFieldsContainerView;
	UITextField* _usernameTextField;
	UITextField* _passwordTextField;
	UIView* _userameUnderLine;
	UIView* _passwordUnderLine;
	MKButton* _loginButton;
	MKButton* _problemSigninButton;
	MKActivityIndicatorView* _activityIndicatorView;
	UITextField* _currentResponder;

}

@property (nonatomic,retain) UIView * loginControlsContainerView;                          //@synthesize loginControlsContainerView=_loginControlsContainerView - In the implementation block
@property (nonatomic,retain) MKLogoView * logoView;                                        //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) SKPAttributedLabel * errorLabel;                              //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) UIView * inputFieldsContainerView;                            //@synthesize inputFieldsContainerView=_inputFieldsContainerView - In the implementation block
@property (nonatomic,retain) UITextField * usernameTextField;                              //@synthesize usernameTextField=_usernameTextField - In the implementation block
@property (nonatomic,retain) UITextField * passwordTextField;                              //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (nonatomic,retain) UIView * userameUnderLine;                                    //@synthesize userameUnderLine=_userameUnderLine - In the implementation block
@property (nonatomic,retain) UIView * passwordUnderLine;                                   //@synthesize passwordUnderLine=_passwordUnderLine - In the implementation block
@property (nonatomic,retain) MKButton * loginButton;                                       //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,retain) MKButton * problemSigninButton;                               //@synthesize problemSigninButton=_problemSigninButton - In the implementation block
@property (nonatomic,retain) MKActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL keyboardVisible;                                         //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (assign,nonatomic,__weak) UITextField * currentResponder;                        //@synthesize currentResponder=_currentResponder - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformLogin;                                      //@synthesize shouldPerformLogin=_shouldPerformLogin - In the implementation block
@property (nonatomic,copy) id loginActionBlock;                                            //@synthesize loginActionBlock=_loginActionBlock - In the implementation block
@property (nonatomic,copy) id cancelActionBlock;                                           //@synthesize cancelActionBlock=_cancelActionBlock - In the implementation block
@property (nonatomic,copy) id problemSigninBlock;                                          //@synthesize problemSigninBlock=_problemSigninBlock - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                        //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) BOOL canCancelLogin;                                          //@synthesize canCancelLogin=_canCancelLogin - In the implementation block
@property (assign,nonatomic) BOOL canInteractWithInputControls;                            //@synthesize canInteractWithInputControls=_canInteractWithInputControls - In the implementation block
@property (nonatomic,copy) NSString * lastSkypeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetView;
-(void)textFieldTextDidChangeNotification:(id)arg1 ;
-(void)setupLoginControlsContainerView;
-(void)setupInputFields;
-(void)setupBackgroundTapEvents;
-(void)setShouldPerformLogin:(BOOL)arg1 ;
-(void)setLoginControlsContainerView:(UIView *)arg1 ;
-(UIView *)loginControlsContainerView;
-(void)setUsernameTextField:(UITextField *)arg1 ;
-(void)setUserameUnderLine:(UIView *)arg1 ;
-(UIView *)userameUnderLine;
-(void)setPasswordUnderLine:(UIView *)arg1 ;
-(UIView *)passwordUnderLine;
-(void)setInputFieldsContainerView:(UIView *)arg1 ;
-(UIView *)inputFieldsContainerView;
-(void)setLoginButton:(MKButton *)arg1 ;
-(void)setProblemSigninButton:(MKButton *)arg1 ;
-(MKButton *)problemSigninButton;
-(id)problemSigninBlock;
-(BOOL)shouldPerformLogin;
-(id)loginActionBlock;
-(void)resetControlsClearingErrorMessage:(BOOL)arg1 ;
-(id)cancelActionBlock;
-(void)setCurrentResponder:(UITextField *)arg1 ;
-(void)resignTextFields;
-(void)backgroundTapAction;
-(UITextField *)currentResponder;
-(id)errorLabelForAttributedString:(id)arg1 ;
-(void)moveDeltaWithKeyboardAppeared:(BOOL)arg1 withKeyboardNotification:(id)arg2 ;
-(void)updateInputControls:(BOOL)arg1 ;
-(BOOL)canInteractWithInputControls;
-(NSString *)lastSkypeName;
-(void)setupLogo;
-(void)focusEmptyTextField;
-(void)setLoginActionBlock:(id)arg1 ;
-(void)setCancelActionBlock:(id)arg1 ;
-(void)setProblemSigninBlock:(id)arg1 ;
-(void)setLastSkypeName:(NSString *)arg1 ;
-(void)setCanInteractWithInputControls:(BOOL)arg1 ;
-(void)setCanCancelLogin:(BOOL)arg1 ;
-(BOOL)canCancelLogin;
-(void)setupLocalization;
-(void)setupAutomation;
-(void)didTouchUpInside:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UITextField *)passwordTextField;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)updateLayout;
-(void)commonInit;
-(BOOL)keyboardVisible;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(MKActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(MKActivityIndicatorView *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setErrorLabel:(SKPAttributedLabel *)arg1 ;
-(SKPAttributedLabel *)errorLabel;
-(UITextField *)usernameTextField;
-(MKLogoView *)logoView;
-(void)setLogoView:(MKLogoView *)arg1 ;
-(void)setupAccessibility;
-(void)setPasswordTextField:(UITextField *)arg1 ;
-(void)setupActions;
-(MKButton *)loginButton;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
@end

