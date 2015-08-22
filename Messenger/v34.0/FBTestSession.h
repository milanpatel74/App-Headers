/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSession.h>

@class NSString;

@interface FBTestSession : FBSession {

	BOOL _forceAccessTokenRefresh;
	BOOL _disableReauthorize;
	NSString* _appAccessToken;
	NSString* _testUserID;
	NSString* _testUserName;
	NSString* _testAppID;
	NSString* _testAppSecret;
	NSString* _machineUniqueUserTag;
	NSString* _sessionUniqueUserTag;
	unsigned long long _mode;
	NSString* _testAppClientToken;

}

@property (copy) NSString * appAccessToken;                                 //@synthesize appAccessToken=_appAccessToken - In the implementation block
@property (copy) NSString * testUserID;                                     //@synthesize testUserID=_testUserID - In the implementation block
@property (copy) NSString * testUserName;                                   //@synthesize testUserName=_testUserName - In the implementation block
@property (copy) NSString * testAppID;                                      //@synthesize testAppID=_testAppID - In the implementation block
@property (copy) NSString * testAppSecret;                                  //@synthesize testAppSecret=_testAppSecret - In the implementation block
@property (assign) BOOL disableReauthorize;                                 //@synthesize disableReauthorize=_disableReauthorize - In the implementation block
@property (copy) NSString * machineUniqueUserTag;                           //@synthesize machineUniqueUserTag=_machineUniqueUserTag - In the implementation block
@property (copy) NSString * sessionUniqueUserTag;                           //@synthesize sessionUniqueUserTag=_sessionUniqueUserTag - In the implementation block
@property (copy,readonly) NSString * permissionsString; 
@property (copy,readonly) NSString * sharedTestUserIdentifier; 
@property (assign) unsigned long long mode;                                 //@synthesize mode=_mode - In the implementation block
@property (assign) BOOL forceAccessTokenRefresh; 
@property (copy) NSString * testAppClientToken;                             //@synthesize testAppClientToken=_testAppClientToken - In the implementation block
+(void)deleteUnitTestUser:(id)arg1 accessToken:(id)arg2 ;
+(id)sessionForUnitTestingWithPermissions:(id)arg1 mode:(unsigned long long)arg2 sessionUniqueUserTag:(id)arg3 ;
+(id)sessionWithSharedUserWithPermissions:(id)arg1 uniqueUserTag:(id)arg2 ;
+(id)sessionWithSharedUserWithPermissions:(id)arg1 ;
+(id)sessionWithPrivateUserWithPermissions:(id)arg1 ;
-(BOOL)transitionToState:(unsigned long long)arg1 withAccessTokenData:(id)arg2 shouldCache:(BOOL)arg3 ;
-(void)authorizeWithPermissions:(id)arg1 behavior:(unsigned long long)arg2 defaultAudience:(unsigned long long)arg3 isReauthorize:(BOOL)arg4 ;
-(BOOL)shouldExtendAccessToken;
-(void)setTestAppID:(NSString *)arg1 ;
-(void)setTestAppSecret:(NSString *)arg1 ;
-(void)setTestAppClientToken:(NSString *)arg1 ;
-(void)setMachineUniqueUserTag:(NSString *)arg1 ;
-(void)setSessionUniqueUserTag:(NSString *)arg1 ;
-(void)setAppAccessToken:(NSString *)arg1 ;
-(NSString *)permissionsString;
-(NSString *)appAccessToken;
-(NSString *)sharedTestUserIdentifier;
-(void)setTestUserID:(NSString *)arg1 ;
-(void)setTestUserName:(NSString *)arg1 ;
-(void)transitionToOpenWithToken:(id)arg1 ;
-(void)populateTestUsers:(id)arg1 testAccounts:(id)arg2 ;
-(void)findOrCreateSharedUser;
-(NSString *)machineUniqueUserTag;
-(NSString *)sessionUniqueUserTag;
-(id)validNameStringFromInteger:(unsigned long long)arg1 ;
-(void)createNewTestUser;
-(NSString *)testUserID;
-(BOOL)disableReauthorize;
-(void)retrieveTestUsersForApp;
-(BOOL)forceAccessTokenRefresh;
-(void)setForceAccessTokenRefresh:(BOOL)arg1 ;
-(id)initWithAppID:(id)arg1 appSecret:(id)arg2 clientToken:(id)arg3 machineUniqueUserTag:(id)arg4 sessionUniqueUserTag:(id)arg5 mode:(unsigned long long)arg6 permissions:(id)arg7 tokenCachingStrategy:(id)arg8 ;
-(NSString *)testUserName;
-(NSString *)testAppID;
-(NSString *)testAppSecret;
-(void)setDisableReauthorize:(BOOL)arg1 ;
-(NSString *)testAppClientToken;
-(void)raiseException:(id)arg1 ;
-(void)dealloc;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
@end
