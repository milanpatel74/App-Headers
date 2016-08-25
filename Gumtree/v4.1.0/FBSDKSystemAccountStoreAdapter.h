/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	BOOL _forceBlockingRenew;

}

@property (assign,nonatomic) BOOL forceBlockingRenew;                             //@synthesize forceBlockingRenew=_forceBlockingRenew - In the implementation block
@property (nonatomic,readonly) ACAccountType * accountType; 
@property (nonatomic,retain,readonly) ACAccountStore * accountStore; 
+(id)sharedInstance;
+(void)initialize;
+(void)setSharedInstance:(id)arg1 ;
-(id)accessTokenString;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(void)setForceBlockingRenew:(BOOL)arg1 ;
-(BOOL)forceBlockingRenew;
-(void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(BOOL)arg3 appID:(id)arg4 handler:(/*^block*/id)arg5 ;
-(ACAccountStore *)accountStore;
-(id)init;
-(ACAccountType *)accountType;
@end
