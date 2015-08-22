/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/NSURLSessionTaskDelegate.h>
#import <TestFlight/ITCStateMachineDelegate.h>

@protocol OASAuthenticationManagerDelegate;
@class NSURLSession, NSURLSessionTask, NSDate, NSURL, ITCStateMachine, NSString, SSAccount;

@interface OASAuthenticationManager : NSObject <NSURLSessionTaskDelegate, ITCStateMachineDelegate> {

	NSURLSession* _session;
	NSURLSessionTask* _authSessionTask;
	NSDate* _lastInvalidSessionNotice;
	BOOL _invalidSession;
	BOOL _forceITunesLoginOnAuth;
	unsigned long long _credentialRetryCount;
	NSURL* _baseURL;
	ITCStateMachine* _stateMachine;
	BOOL _authenticating;
	BOOL _needsToAgreeToTermsAndConditions;
	BOOL _forceRefreshOnAuthorization;
	id<OASAuthenticationManagerDelegate> _delegate;
	NSString* _sessionID;
	NSString* _termsAndConditionsToAgreeTo;
	id _termsAndConditionsVersionToAgreeTo;
	NSString* _logoutTitle;
	NSString* _logoutMessage;
	NSString* _FAQURL;
	SSAccount* _currentAccount;

}

@property (assign,nonatomic) BOOL authenticating;                                          //@synthesize authenticating=_authenticating - In the implementation block
@property (nonatomic,readonly) NSString * currentState; 
@property (nonatomic,readonly) BOOL authorized; 
@property (nonatomic,readonly) id<OASAuthenticationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL needsToAgreeToTermsAndConditions;                        //@synthesize needsToAgreeToTermsAndConditions=_needsToAgreeToTermsAndConditions - In the implementation block
@property (nonatomic,retain) NSString * termsAndConditionsToAgreeTo;                       //@synthesize termsAndConditionsToAgreeTo=_termsAndConditionsToAgreeTo - In the implementation block
@property (nonatomic,retain) id termsAndConditionsVersionToAgreeTo;                        //@synthesize termsAndConditionsVersionToAgreeTo=_termsAndConditionsVersionToAgreeTo - In the implementation block
@property (assign,nonatomic) BOOL forceRefreshOnAuthorization;                             //@synthesize forceRefreshOnAuthorization=_forceRefreshOnAuthorization - In the implementation block
@property (nonatomic,retain) NSString * logoutTitle;                                       //@synthesize logoutTitle=_logoutTitle - In the implementation block
@property (nonatomic,retain) NSString * logoutMessage;                                     //@synthesize logoutMessage=_logoutMessage - In the implementation block
@property (nonatomic,copy) NSString * FAQURL;                                              //@synthesize FAQURL=_FAQURL - In the implementation block
@property (nonatomic,readonly) ITCStateMachine * stateMachine;                             //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) SSAccount * currentAccount;                                   //@synthesize currentAccount=_currentAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)authorized;
-(BOOL)needsToAgreeToTermsAndConditions;
-(void)fetchTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)FAQURL;
-(id)generateURLRequestAuthHeaders;
-(BOOL)authenticating;
-(void)deauthenticateWithTitle:(id)arg1 message:(id)arg2 ;
-(void)validateInvalidSession;
-(void)observeAcountStoreChangeNotification:(id)arg1 ;
-(void)observeApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)observeApplicationWillResignActiveNotification:(id)arg1 ;
-(id)currentStoreAccount;
-(id)loadSessionIDFromKeychain;
-(SSAccount *)currentAccount;
-(void)handlePossibleAccountChange;
-(void)setCurrentAccount:(SSAccount *)arg1 ;
-(void)deauthenticate;
-(id)createKeychainSearchDictionary;
-(void)setLogoutTitle:(NSString *)arg1 ;
-(void)setLogoutMessage:(NSString *)arg1 ;
-(void)stopAuthentication;
-(BOOL)deleteSessionIDFromKeychain;
-(BOOL)currentAccountMatchesStoreAccount;
-(void)authenticateWithServer;
-(void)authenticationCompletedWithSessionID:(id)arg1 data:(id)arg2 errorMessage:(id)arg3 hideError:(BOOL)arg4 ;
-(void)showSignInDialogWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticationCleanup;
-(void)setNeedsToAgreeToTermsAndConditions:(BOOL)arg1 ;
-(void)setTermsAndConditionsToAgreeTo:(NSString *)arg1 ;
-(void)setTermsAndConditionsVersionToAgreeTo:(id)arg1 ;
-(id)termsAndConditionsVersionToAgreeTo;
-(void)setForceRefreshOnAuthorization:(BOOL)arg1 ;
-(BOOL)parseAuthenticationResponseForTermsAndConditions:(id)arg1 ;
-(void)setFAQURL:(NSString *)arg1 ;
-(BOOL)saveSessionIDToKeychain;
-(void)handleServerAuthResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(NSString *)termsAndConditionsToAgreeTo;
-(BOOL)forceRefreshOnAuthorization;
-(void)setUserHasAgreedToTermsAndConditions;
-(NSString *)logoutTitle;
-(NSString *)logoutMessage;
-(id)getClientIDWithCookieName:(id)arg1 ;
-(void)didEnterAuthorized;
-(void)didEnterNotAuthorized;
-(void)didEnterAuthenticated;
-(void)didEnterCredentialsNeeded;
-(id)storeFrontIdentifier;
-(void)dealloc;
-(id)init;
-(id<OASAuthenticationManagerDelegate>)delegate;
-(NSString *)currentState;
-(id)baseURL;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)authenticated;
-(ITCStateMachine *)stateMachine;
-(void)setAuthenticating:(BOOL)arg1 ;
-(void)stateWillChange;
-(void)stateDidChange;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)authenticate;
-(id)initWithDelegate:(id)arg1 ;
-(id)DSID;
-(id)appleID;
-(void)cancelAuthentication;
@end
