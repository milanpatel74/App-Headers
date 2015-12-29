//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKPReachability : NSObject
{
    _Bool _localWiFiRef;
    struct __SCNetworkReachability *_reachabilityRef;
    long long _networkStatus;
}

@property long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)currentReachabilityStatusWithDispatcher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)onCallback;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)start;
- (id)init;

@end

