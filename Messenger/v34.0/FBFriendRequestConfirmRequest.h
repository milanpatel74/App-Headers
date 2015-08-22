/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBFriendRequestConfirmRequest : FBNetworkerRequest {

	NSString* _reference;
	int _state;
	NSString* _authCode;
	NSString* _requestorFBID;

}

@property (nonatomic,copy) NSString * authCode;                   //@synthesize authCode=_authCode - In the implementation block
@property (assign,nonatomic) int state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * requestorFBID;              //@synthesize requestorFBID=_requestorFBID - In the implementation block
-(id)networkRequest;
-(id)initWithReference:(id)arg1 callbackPerformer:(id)arg2 ;
-(NSString *)authCode;
-(void)setAuthCode:(NSString *)arg1 ;
-(NSString *)requestorFBID;
-(void)setRequestorFBID:(NSString *)arg1 ;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
@end
