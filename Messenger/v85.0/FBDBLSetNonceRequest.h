/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBDBLSetNonceRequest : FBNetworkerRequest {

	NSString* _accountID;
	NSString* _nonceValue;
	NSString* _providedPin;
	NSString* _machineID;
	NSString* _accessToken;

}

@property (nonatomic,copy) NSString * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * nonceValue;               //@synthesize nonceValue=_nonceValue - In the implementation block
@property (nonatomic,copy) NSString * providedPin;              //@synthesize providedPin=_providedPin - In the implementation block
@property (nonatomic,copy) NSString * machineID;                //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
-(id)networkRequest;
-(BOOL)allowRetry;
-(void)setNonceValue:(NSString *)arg1 ;
-(NSString *)nonceValue;
-(void)setProvidedPin:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 nonceValue:(id)arg2 providedPin:(id)arg3 machineID:(id)arg4 accessToken:(id)arg5 callbackPerformer:(id)arg6 ;
-(NSString *)providedPin;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accountID;
-(NSString *)accessToken;
@end
