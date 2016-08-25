/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GPPSignInDelegate.h>
#import <Gumtree/ECSocialLoginProtocol.h>

@protocol ECSocialLoginDelegateProtocol;
@class NSString;

@interface ECGoogleLoginAdapter : NSObject <GPPSignInDelegate, ECSocialLoginProtocol> {

	id<ECSocialLoginDelegateProtocol> _socialDelegate;

}

@property (assign,nonatomic,__weak) id<ECSocialLoginDelegateProtocol> socialDelegate;              //@synthesize socialDelegate=_socialDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleLogOut;
+(BOOL)canhandleURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(void)finishedWithAuth:(id)arg1 error:(id)arg2 ;
-(void)setSocialDelegate:(id<ECSocialLoginDelegateProtocol>)arg1 ;
-(id<ECSocialLoginDelegateProtocol>)socialDelegate;
-(void)setUpForLogin;
-(void)startSignIn;
-(id)initWithDelegate:(id)arg1 ;
-(void)handleError:(id)arg1 ;
@end
