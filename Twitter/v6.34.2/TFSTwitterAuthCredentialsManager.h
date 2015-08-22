/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSAuthCredentialsManager.h>

@interface TFSTwitterAuthCredentialsManager : TFSAuthCredentialsManager
+(id)sharedManager;
-(void)handleRequestResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAuthenticationChallenge:(id)arg1 url:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_twitterDidRemoveAccount:(id)arg1 ;
-(void)_handleAccountAuthRequestResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)authErrorCodeForAPIResponse:(id)arg1 ;
-(void)dealloc;
-(id)_init;
@end
