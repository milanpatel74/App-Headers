/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Reddit/Reddit-Structs.h>
@interface AFNetworkReachabilityManager : NSObject {

	long long _networkReachabilityStatus;
	id _networkReachability;
	/*^block*/id _networkReachabilityStatusBlock;

}

@property (nonatomic,retain) id networkReachability;                                         //@synthesize networkReachability=_networkReachability - In the implementation block
@property (assign,nonatomic) long long networkReachabilityStatus;                            //@synthesize networkReachabilityStatus=_networkReachabilityStatus - In the implementation block
@property (nonatomic,copy) id networkReachabilityStatusBlock;                                //@synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
@property (getter=isReachableViaWWAN,nonatomic,readonly) BOOL reachableViaWWAN; 
@property (getter=isReachableViaWiFi,nonatomic,readonly) BOOL reachableViaWiFi; 
+(id)managerForAddress:(const void*)arg1 ;
+(id)manager;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedManager;
+(id)managerForDomain:(id)arg1 ;
-(void)setNetworkReachability:(id)arg1 ;
-(void)setNetworkReachabilityStatus:(long long)arg1 ;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;
-(long long)networkReachabilityStatus;
-(id)networkReachability;
-(id)networkReachabilityStatusBlock;
-(void)setNetworkReachabilityStatusBlock:(id)arg1 ;
-(id)localizedNetworkReachabilityStatusString;
-(void)setReachabilityStatusChangeBlock:(/*^block*/id)arg1 ;
-(void)startMonitoring;
-(void)dealloc;
-(id)init;
-(void)stopMonitoring;
-(BOOL)isReachable;
-(id)initWithReachability:(SCNetworkReachabilityRef)arg1 ;
@end
