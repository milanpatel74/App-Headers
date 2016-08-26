/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAppSessionLoginHelping <NSObject>
@property (assign,nonatomic,__weak) id<FBAppSessionLoginHelperDelegate> delegate; 
@required
-(void)loginNewlyRegisteredUser:(id)arg1 nonce:(id)arg2;
-(void)loginUserWithTransientToken:(id)arg1 token:(id)arg2 tokenType:(unsigned long long)arg3;
-(void)performLoginWithSpinner:(BOOL)arg1 forceClear:(BOOL)arg2 fromLaunch:(BOOL)arg3;
-(void)didLogout;
-(void)setDelegate:(id)arg1;
-(id<FBAppSessionLoginHelperDelegate>)delegate;
-(BOOL)openURL:(id)arg1;

@end
