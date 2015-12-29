//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SAtomic, SPipe;

@interface TGManagedChannelState : NSObject
{
    long long _peerId;
    SPipe *_updatesPipe;
    SPipe *_pollsPipe;
    id <SDisposable> _disposable;
    SAtomic *_timer;
    SAtomic *_keepPollingBag;
    id <SDisposable> _inviterId;
}

+ (id)_channelDifference:(long long)arg1 accessHash:(long long)arg2 pts:(int)arg3;
- (void).cxx_destruct;
- (id)keepPolling;
- (void)addUpdates:(id)arg1;
- (id)applyUpdates:(id)arg1;
- (void)dealloc;
- (id)initWithPeerId:(long long)arg1;

@end

