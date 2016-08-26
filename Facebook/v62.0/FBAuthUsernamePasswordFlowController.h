/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthenticationMethodHandlerDelegate.h>
#import <Facebook/FBAuthUsernamePasswordAuthenticating.h>
#import <Facebook/FBAuthControlling.h>

@protocol FBAuthUsernamePasswordFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBLoginErrorStateManager, NSString, FBAuthenticationUsernamePasswordHandler;

@interface FBAuthUsernamePasswordFlowController : NSObject <FBAuthenticationMethodHandlerDelegate, FBAuthUsernamePasswordAuthenticating, FBAuthControlling> {

	id<FBAuthUsernamePasswordFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBLoginErrorStateManager* _errorStateManager;
	NSString* _mostRecentIdentifier;
	id<FBAuthControllingDelegate> _authDelegate;
	FBAuthenticationUsernamePasswordHandler* _authHandler;

}

@property (nonatomic,retain) FBAuthenticationUsernamePasswordHandler * authHandler;              //@synthesize authHandler=_authHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;                  //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(id)initWithUIProvider:(id)arg1 uiPresenter:(id)arg2 requesterConfiguration:(id)arg3 ;
-(void)forgotPasswordFromViewController:(id)arg1 recoveryURL:(id)arg2 ;
-(void)cancelLoginRequestFromViewController:(id)arg1 ;
-(void)setAuthHandler:(FBAuthenticationUsernamePasswordHandler *)arg1 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(FBAuthenticationUsernamePasswordHandler *)authHandler;
-(void)userRegistrationFromViewController:(id)arg1 withIdentifier:(id)arg2 ;
-(void)submitUsernamePasswordViewController:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)authenticate;
@end
