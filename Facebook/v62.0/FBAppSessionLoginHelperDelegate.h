/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAppSessionLoginHelperDelegate <NSObject>
@optional
-(void)logLoginInterruptionForAppSessionLoginHelper:(id)arg1 interruptionReason:(id)arg2 applicationState:(long long)arg3 background:(BOOL)arg4;
-(void)appSessionLoginHelperWillPresentLoginUI:(id)arg1;

@required
-(void)appSessionLoginHelper:(id)arg1 didValidateAccessTokenInBackground:(BOOL)arg2;
-(id)authenticationViewControllerForAppSessionLoginHelper:(id)arg1 authenticationManager:(id)arg2 defaultLoginCredential:(id)arg3;
-(id)thirdPartyAuthViewControllerForAppSessionLoginHelper:(id)arg1 accessToken:(id)arg2;
-(id)thirdPartyAuthController;

@end
