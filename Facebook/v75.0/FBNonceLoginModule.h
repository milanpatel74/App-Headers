/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLoginFacilitatingAppModule.h>

@protocol FBAppSessionLoginHelperProviding;
@class NSString, FBExceptionHandler;

@interface FBNonceLoginModule : NSObject <FBLoginFacilitatingAppModule> {

	id<FBAppSessionLoginHelperProviding> _loginHelperProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler; 
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2 ;
-(BOOL)canOpenLoggedOutURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(void)setLoginHelperProvider:(id)arg1 ;
-(void)setRequesterConfiguration:(id)arg1 ;
-(id)URLSegues;
-(id)supportedURLSchemes;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5 ;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(id)supportedKeys;
-(id)ID;
@end

