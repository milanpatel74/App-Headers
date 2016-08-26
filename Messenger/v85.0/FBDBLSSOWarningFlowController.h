/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthControllingDelegate.h>
#import <Messenger/FBDBLSSOWarningAuthenticating.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBDBLSSOWarningFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLStoredUser, FBDBLSSOFlowController, NSString;

@interface FBDBLSSOWarningFlowController : NSObject <FBAuthControllingDelegate, FBDBLSSOWarningAuthenticating, FBAuthControlling> {

	FBDBLStoredUser* _storedUser;
	id<FBDBLSSOWarningFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;
	FBDBLSSOFlowController* _ssoFlowController;

}

@property (nonatomic,retain) FBDBLSSOFlowController * ssoFlowController;                     //@synthesize ssoFlowController=_ssoFlowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(void)_authenticateWithSSO;
-(void)setSsoFlowController:(FBDBLSSOFlowController *)arg1 ;
-(void)continueFromViewController:(id)arg1 ;
-(FBDBLSSOFlowController *)ssoFlowController;
-(void)authenticate;
@end
