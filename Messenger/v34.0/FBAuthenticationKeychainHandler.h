/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandler.h>
#import <Messenger/FBAuthenticationTokenMethodHandling.h>

@protocol FBHttpRequestToken;
@class NSString, UIApplication, FBRequesterConfiguration, FBKeychainItem;

@interface FBAuthenticationKeychainHandler : FBAuthenticationMethodHandler <FBAuthenticationTokenMethodHandling> {

	UIApplication* _application;
	FBRequesterConfiguration* _requesterConfiguration;
	FBKeychainItem* _mainAppSessionKeychain;
	id<FBHttpRequestToken> _token;
	NSString* _authToken;

}

@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * userID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authToken;              //@synthesize authToken=_authToken - In the implementation block
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(id)initWithApplication:(id)arg1 requesterConfiguration:(id)arg2 ;
-(void)submitKeychainApproval;
-(void)performAuthentication;
-(NSString *)userName;
-(void)cancel;
-(id)init;
-(void)invalidate;
-(NSString *)authToken;
-(NSString *)userID;
-(NSString *)fullName;
@end
