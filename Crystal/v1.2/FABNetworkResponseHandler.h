/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FABNetworkResponseHandler : NSObject
+(id)headerForResponse:(id)arg1 withKey:(id)arg2 ;
+(id)requestIdForResponse:(id)arg1 ;
+(id)errorForResponse:(id)arg1 ofType:(long long)arg2 status:(long long)arg3 ;
+(BOOL)contentTypeForResponse:(id)arg1 matchesRequest:(id)arg2 ;
+(id)errorForCode:(long long)arg1 userInfo:(id)arg2 ;
+(double)retryValueForResponse:(id)arg1 ;
+(void)handleCompletedResponse:(id)arg1 forOriginalRequest:(id)arg2 error:(id)arg3 block:(/*^block*/id)arg4 ;
+(void)clientResponseType:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

