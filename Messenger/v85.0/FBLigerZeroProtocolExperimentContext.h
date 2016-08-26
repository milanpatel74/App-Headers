/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLigerBaseExperimentContext.h>

@class NSString;

@interface FBLigerZeroProtocolExperimentContext : FBLigerBaseExperimentContext {

	BOOL _enabled;
	BOOL _enforceExpiration;
	BOOL _persistentCache;
	BOOL _retryEnabled;
	int _tlsFallback;
	NSString* _aeads;
	NSString* _hostnamePolicy;

}

@property (nonatomic,readonly) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL enforceExpiration;                      //@synthesize enforceExpiration=_enforceExpiration - In the implementation block
@property (nonatomic,readonly) BOOL persistentCache;                        //@synthesize persistentCache=_persistentCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * aeads;                       //@synthesize aeads=_aeads - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostnamePolicy;              //@synthesize hostnamePolicy=_hostnamePolicy - In the implementation block
@property (nonatomic,readonly) BOOL retryEnabled;                           //@synthesize retryEnabled=_retryEnabled - In the implementation block
@property (nonatomic,readonly) int tlsFallback;                             //@synthesize tlsFallback=_tlsFallback - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enforceExpiration;
-(BOOL)persistentCache;
-(NSString *)aeads;
-(NSString *)hostnamePolicy;
-(BOOL)retryEnabled;
-(int)tlsFallback;
-(BOOL)enabled;
@end
