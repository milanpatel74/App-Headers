/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKError : NSObject
+(BOOL)errorIsNetworkError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 underlyingError:(id)arg5 ;
+(id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 ;
+(id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 ;
+(id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 ;
+(id)unknownErrorWithMessage:(id)arg1 ;
+(id)errorDomain;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
-(id)init;
@end
