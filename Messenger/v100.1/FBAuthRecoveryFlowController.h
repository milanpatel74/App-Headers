/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthControllingDelegate.h>
#import <Messenger/FBAuthRecoveryControllingDelegate.h>
#import <Messenger/FBAuthenticationMethodHandlerDelegate.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBAuthControlling, FBAuthRecoveryControllingFBAuthRecoveryWithURLControlling, FBAuthSpinnerUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class NSString;

@interface FBAuthRecoveryFlowController : NSObject <FBAuthControllingDelegate, FBAuthRecoveryControllingDelegate, FBAuthenticationMethodHandlerDelegate, FBAuthControlling> {

	id<FBAuthControlling> _rootFlowController;
	id<FBAuthRecoveryControlling><FBAuthRecoveryWithURLControlling> _recoveryControlling;
	id<FBAuthSpinnerUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)recoveryCompleted:(id)arg1 withUserID:(id)arg2 password:(id)arg3 ;
-(id)initWithRootFlowController:(id)arg1 recoveryControlling:(id)arg2 uiProvider:(id)arg3 uiPresenter:(id)arg4 requesterConfiguration:(id)arg5 ;
-(void)authenticate;
@end

