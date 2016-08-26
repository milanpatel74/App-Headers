/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/AFHTTPClient.h>

@class NSString;

@interface AFOAuth2Client : AFHTTPClient {

	NSString* _serviceProviderIdentifier;
	NSString* _clientID;
	NSString* _secret;

}

@property (nonatomic,retain) NSString * serviceProviderIdentifier;              //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientID;                               //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSString * secret;                                 //@synthesize secret=_secret - In the implementation block
+(id)clientWithBaseURL:(id)arg1 clientID:(id)arg2 secret:(id)arg3 ;
-(id)initWithBaseURL:(id)arg1 clientID:(id)arg2 secret:(id)arg3 ;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setAuthorizationHeaderWithToken:(id)arg1 ofType:(id)arg2 ;
-(void)authenticateUsingOAuthWithPath:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)setAuthorizationHeaderWithCredential:(id)arg1 ;
-(void)setAuthorizationHeaderWithToken:(id)arg1 ;
-(void)authenticateUsingOAuthWithPath:(id)arg1 code:(id)arg2 redirectURI:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)authenticateUsingOAuthWithPath:(id)arg1 username:(id)arg2 password:(id)arg3 scope:(id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(void)authenticateUsingOAuthWithPath:(id)arg1 scope:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)authenticateUsingOAuthWithPath:(id)arg1 refreshToken:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(NSString *)serviceProviderIdentifier;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(NSString *)secret;
-(void)setSecret:(NSString *)arg1 ;
@end
