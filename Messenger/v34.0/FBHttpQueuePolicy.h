/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBHttpQueuePolicy.h>

@protocol FBHttpQueuePolicy
@property (nonatomic,readonly) unsigned long long requestBatchingLeewayNanos; 
@property (nonatomic,readonly) BOOL alwaysSendImmediateRequests; 
@required
-(SCD_Struct_FB112*)currentSlots;
-(unsigned long long)requestBatchingLeewayNanos;
-(BOOL)alwaysSendImmediateRequests;

@end


@class FBReachabilityAnnouncer;

@interface FBHttpQueuePolicy : NSObject <FBHttpQueuePolicy> {

	SCD_Struct_FB113 _wifiSlots;
	SCD_Struct_FB113 _cellSlots;
	FBReachabilityAnnouncer* _announcer;
	BOOL _alwaysSendImmediateRequests;
	unsigned long long _requestBatchingLeewayNanos;

}

@property (nonatomic,readonly) unsigned long long requestBatchingLeewayNanos;              //@synthesize requestBatchingLeewayNanos=_requestBatchingLeewayNanos - In the implementation block
@property (nonatomic,readonly) BOOL alwaysSendImmediateRequests;                           //@synthesize alwaysSendImmediateRequests=_alwaysSendImmediateRequests - In the implementation block
+(id)defaultPolicy;
-(SCD_Struct_FB113)currentSlots;
-(unsigned long long)requestBatchingLeewayNanos;
-(BOOL)alwaysSendImmediateRequests;
-(id)initWithWifiSlots:(SCD_Struct_FB113)arg1 cellSlots:(SCD_Struct_FB113)arg2 alwaysSendImmediateRequests:(BOOL)arg3 reachabilityAnnouncer:(id)arg4 ;
@end
