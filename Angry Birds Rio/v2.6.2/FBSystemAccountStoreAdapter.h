/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, ACAccountType;

@interface FBSystemAccountStoreAdapter : NSObject {

	BOOL _forceBlockingRenew;
	ACAccountStore* _accountStore;
	ACAccountType* _accountTypeFB;

}

@property (assign) BOOL forceBlockingRenew; 
@property (readonly) BOOL canRequestAccessWithoutUI; 
@property (nonatomic,retain,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain,readonly) ACAccountType * accountTypeFB; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(BOOL)canRequestAccessWithoutUI;
-(id)renewSystemAuthorizationAsTask;
-(id)requestAccessToFacebookAccountStoreAsTask:(id)arg1 ;
-(void)setForceBlockingRenew:(BOOL)arg1 ;
-(ACAccountType *)accountTypeFB;
-(BOOL)forceBlockingRenew;
-(void)requestAccessToFacebookAccountStore:(id)arg1 session:(id)arg2 retrying:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(unsigned long long)arg2 isReauthorize:(BOOL)arg3 appID:(id)arg4 session:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)dealloc;
-(id)init;
-(ACAccountStore *)accountStore;
@end
