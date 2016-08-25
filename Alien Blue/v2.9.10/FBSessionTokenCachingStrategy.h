/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBKeychainStore;

@interface FBSessionTokenCachingStrategy : NSObject {

	NSString* _accessTokenInformationKeyName;
	FBKeychainStore* _keychainStore;

}
+(id)nullCacheInstance;
+(BOOL)isValidTokenInformation:(id)arg1 ;
+(id)defaultInstance;
-(id)fetchFBAccessTokenData;
-(void)clearToken;
-(void)cacheFBAccessTokenData:(id)arg1 ;
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(id)initWithUserDefaultTokenInformationKeyName:(id)arg1 ;
-(id)userDefaultsKeyForKeychainValidation;
-(id)keychainStore;
-(void)overrideKeyChainStoreForTests:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
