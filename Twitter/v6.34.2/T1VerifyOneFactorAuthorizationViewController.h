/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNFormViewController.h>
#import <Twitter/T1VerifyPINFormDelegate.h>
#import <Twitter/T1AccountAdder.h>

@protocol T1VerifyOneFactorAuthorizationDelegate;
@class TFNTwitterCallToAction, T1VerifyPINForm, T1OnboardingFormFooterItem, UIView, T1OneFactorAuthorizationRequest, NSString;

@interface T1VerifyOneFactorAuthorizationViewController : TFNFormViewController <T1VerifyPINFormDelegate, T1AccountAdder> {

	/*^block*/id _didAddAccountBlock;
	id<T1VerifyOneFactorAuthorizationDelegate> _delegate;
	TFNTwitterCallToAction* _callToAction;
	T1VerifyPINForm* _form;
	T1OnboardingFormFooterItem* _footerItem;
	UIView* _viewForPTRArea;
	unsigned long long _currentFactorType;
	T1OneFactorAuthorizationRequest* _request;

}

@property (assign,nonatomic,__weak) id<T1VerifyOneFactorAuthorizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNTwitterCallToAction * callToAction;                                 //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) T1VerifyPINForm * form;                                                //@synthesize form=_form - In the implementation block
@property (nonatomic,retain) T1OnboardingFormFooterItem * footerItem;                                 //@synthesize footerItem=_footerItem - In the implementation block
@property (nonatomic,retain) UIView * viewForPTRArea;                                                 //@synthesize viewForPTRArea=_viewForPTRArea - In the implementation block
@property (assign,nonatomic) unsigned long long currentFactorType;                                    //@synthesize currentFactorType=_currentFactorType - In the implementation block
@property (nonatomic,readonly) T1OneFactorAuthorizationRequest * request;                             //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didAddAccountBlock;                                                     //@synthesize didAddAccountBlock=_didAddAccountBlock - In the implementation block
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(TFNTwitterCallToAction *)callToAction;
-(UIView *)viewForPTRArea;
-(void)setViewForPTRArea:(UIView *)arg1 ;
-(void)verifyPINFormShouldSubmit:(id)arg1 ;
-(void)submitForm:(id)arg1 ;
-(unsigned long long)inputRequiredBehavior;
-(id)didAddAccountBlock;
-(void)setDidAddAccountBlock:(id)arg1 ;
-(id)submitButton;
-(void)setCurrentFactorType:(unsigned long long)arg1 ;
-(void)_scribeAction:(id)arg1 component:(id)arg2 element:(id)arg3 ;
-(void)_didNotReceiveCode;
-(T1OnboardingFormFooterItem *)footerItem;
-(unsigned long long)currentFactorType;
-(void)_resendCode;
-(void)_logInWithOtherFactor;
-(id)initWithFactorType:(unsigned long long)arg1 emailFactor:(id)arg2 smsFactor:(id)arg3 userIdentifier:(id)arg4 verificationRequestID:(id)arg5 ;
-(BOOL)includesSubmitButtonAsItem;
-(void)setFooterItem:(T1OnboardingFormFooterItem *)arg1 ;
-(void)setDelegate:(id<T1VerifyOneFactorAuthorizationDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<T1VerifyOneFactorAuthorizationDelegate>)delegate;
-(T1OneFactorAuthorizationRequest *)request;
-(void)viewDidLoad;
-(T1VerifyPINForm *)form;
-(id)initWithRequest:(id)arg1 ;
-(void)setSections:(id)arg1 ;
-(id)footerItems;
@end
