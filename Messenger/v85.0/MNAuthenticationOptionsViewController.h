/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNAuthenticationOptionsViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationOptionsViewControllerDelegate;
@class MNAuthenticationOptionsView, FBAnalytics, MNAuthenticationOptionsExperimentContext, NSString;

@interface MNAuthenticationOptionsViewController : UIViewController <MNAuthenticationOptionsViewDelegate, FBClassProvidable> {

	MNAuthenticationOptionsView* _authenticationOptionsView;
	FBAnalytics* _analytics;
	MNAuthenticationOptionsExperimentContext* _authenticationOptionsExperimentContext;
	BOOL _loginWithFacebookShouldAvoidSSO;
	id<MNAuthenticationOptionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAuthenticationOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL loginWithFacebookShouldAvoidSSO;                                           //@synthesize loginWithFacebookShouldAvoidSSO=_loginWithFacebookShouldAvoidSSO - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)authenticationOptionsViewDidSelectLoginWithFacebook:(id)arg1 ;
-(void)authenticationOptionsViewDidSelectLoginWithPhoneNumber:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 ;
-(void)_presentLoginWithoutFacebookConfirmationDialog;
-(void)_didConfirmLoginWithoutFacebook;
-(BOOL)loginWithFacebookShouldAvoidSSO;
-(void)setLoginWithFacebookShouldAvoidSSO:(BOOL)arg1 ;
-(void)setDelegate:(id<MNAuthenticationOptionsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAuthenticationOptionsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
