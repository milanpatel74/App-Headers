/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GTMFetcherAuthorizationProtocol.h>

@protocol GTMSessionFetcherServiceProtocol;
@class NSString, NSMutableDictionary, NSURL, NSDate, NSDictionary, GSDK_GTMSessionFetcher, NSMutableArray, NSNumber;

@interface GSDK_GTMOAuth2Authentication : NSObject <GTMFetcherAuthorizationProtocol> {

	NSString* clientID_;
	NSString* clientSecret_;
	NSString* redirectURI_;
	NSMutableDictionary* parameters_;
	NSURL* tokenURL_;
	NSDate* expirationDate_;
	NSString* authorizationTokenKey_;
	NSDictionary* additionalTokenRequestParameters_;
	NSDictionary* additionalGrantTypeRequestParameters_;
	GSDK_GTMSessionFetcher* refreshFetcher_;
	NSMutableArray* authorizationQueue_;
	id<GTMSessionFetcherServiceProtocol> fetcherService_;
	BOOL shouldAuthorizeAllRequests_;
	id userData_;
	NSMutableDictionary* properties_;

}

@property (copy) NSString * clientID; 
@property (copy) NSString * clientSecret; 
@property (copy) NSString * redirectURI; 
@property (retain) NSString * scope; 
@property (retain) NSString * tokenType; 
@property (retain) NSString * assertion; 
@property (retain) NSString * refreshScope; 
@property (retain) NSDictionary * additionalTokenRequestParameters; 
@property (retain) NSDictionary * additionalGrantTypeRequestParameters; 
@property (readonly) NSDictionary * parameters; 
@property (retain) NSString * accessToken; 
@property (retain) NSString * refreshToken; 
@property (retain) NSNumber * expiresIn; 
@property (retain) NSString * code; 
@property (retain) NSString * errorString; 
@property (copy) NSURL * tokenURL; 
@property (copy) NSDate * expirationDate; 
@property (copy) NSString * serviceProvider; 
@property (retain) NSString * userID; 
@property (retain) NSString * userEmail; 
@property (retain) NSString * userEmailIsVerified; 
@property (readonly) BOOL canAuthorize; 
@property (assign) BOOL shouldAuthorizeAllRequests; 
@property (retain) id userData; 
@property (retain) NSDictionary * properties; 
@property (assign) id<GTMSessionFetcherServiceProtocol> fetcherService; 
@property (copy) NSString * authorizationTokenKey; 
@property (retain) GSDK_GTMSessionFetcher * refreshFetcher; 
@property (retain) NSMutableArray * authorizationQueue; 
@property (readonly) NSString * authorizationToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionaryWithJSONData:(id)arg1 ;
+(id)dictionaryWithResponseString:(id)arg1 ;
+(id)encodedQueryParametersForDictionary:(id)arg1 ;
+(void)invokeDelegate:(id)arg1 selector:(SEL)arg2 object:(id)arg3 object:(id)arg4 object:(id)arg5 ;
+(id)encodedOAuthValueForString:(id)arg1 ;
+(id)unencodedOAuthParameterForString:(id)arg1 ;
+(id)authenticationWithServiceProvider:(id)arg1 tokenURL:(id)arg2 redirectURI:(id)arg3 clientID:(id)arg4 clientSecret:(id)arg5 ;
+(id)dictionaryWithResponseData:(id)arg1 ;
+(id)scopeWithStrings:(id)arg1 ;
-(BOOL)canAuthorize;
-(NSString *)redirectURI;
-(NSDictionary *)additionalTokenRequestParameters;
-(void)setAdditionalTokenRequestParameters:(NSDictionary *)arg1 ;
-(void)setRedirectURI:(NSString *)arg1 ;
-(id<GTMSessionFetcherServiceProtocol>)fetcherService;
-(void)setFetcherService:(id<GTMSessionFetcherServiceProtocol>)arg1 ;
-(void)setUserEmailIsVerified:(NSString *)arg1 ;
-(id)beginTokenFetchWithDelegate:(id)arg1 didFinishSelector:(SEL)arg2 ;
-(void)setExpiresIn:(NSNumber *)arg1 ;
-(void)updateExpirationDate;
-(void)setKeysForResponseDictionary:(id)arg1 ;
-(BOOL)authorizeRequestArgs:(id)arg1 ;
-(BOOL)shouldRefreshAccessToken;
-(GSDK_GTMSessionFetcher *)refreshFetcher;
-(void)auth:(id)arg1 finishedRefreshWithFetcher:(id)arg2 error:(id)arg3 ;
-(void)setRefreshFetcher:(GSDK_GTMSessionFetcher *)arg1 ;
-(BOOL)authorizeRequestImmediateArgs:(id)arg1 ;
-(void)stopAuthorization;
-(BOOL)shouldAuthorizeAllRequests;
-(void)invokeCallbackArgs:(id)arg1 ;
-(void)waitForCompletionWithTimeout:(double)arg1 ;
-(NSString *)refreshScope;
-(NSDictionary *)additionalGrantTypeRequestParameters;
-(void)tokenFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)notifyFetchIsRunning:(BOOL)arg1 fetcher:(id)arg2 type:(id)arg3 ;
-(void)setKeysForResponseJSONData:(id)arg1 ;
-(void)setKeysForResponseString:(id)arg1 ;
-(NSString *)userEmailIsVerified;
-(void)setAssertion:(NSString *)arg1 ;
-(void)setAuthorizationTokenKey:(NSString *)arg1 ;
-(NSString *)authorizationTokenKey;
-(NSNumber *)expiresIn;
-(void)authorizeRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 ;
-(void)stopAuthorizationForRequest:(id)arg1 ;
-(BOOL)isAuthorizingRequest:(id)arg1 ;
-(BOOL)isAuthorizedRequest:(id)arg1 ;
-(void)authorizeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)primeForRefresh;
-(void)setShouldAuthorizeAllRequests:(BOOL)arg1 ;
-(BOOL)authorizeRequest:(id)arg1 ;
-(void)setKeysForPersistenceResponseString:(id)arg1 ;
-(id)persistenceResponseString;
-(void)setRefreshScope:(NSString *)arg1 ;
-(void)setAdditionalGrantTypeRequestParameters:(NSDictionary *)arg1 ;
-(NSMutableArray *)authorizationQueue;
-(void)setAuthorizationQueue:(NSMutableArray *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)authorizationToken;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)reset;
-(NSString *)code;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(NSDictionary *)parameters;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)userAgent;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSURL *)tokenURL;
-(void)setTokenURL:(NSURL *)arg1 ;
-(void)addParametersFromDictionary:(id)arg1 ;
-(NSString *)assertion;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setCode:(NSString *)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)clientSecret;
-(NSString *)errorString;
-(void)setTokenType:(NSString *)arg1 ;
-(NSString *)tokenType;
-(void)setServiceProvider:(NSString *)arg1 ;
-(void)setClientSecret:(NSString *)arg1 ;
-(void)setParameter:(id)arg1 forKey:(id)arg2 ;
-(id)parameterForKey:(id)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)accessToken;
-(NSString *)serviceProvider;
-(void)setErrorString:(NSString *)arg1 ;
@end
