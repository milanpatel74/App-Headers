//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, SQueue;

@interface STimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _timeout;
    double _timeoutDate;
    _Bool _repeat;
    CDUnknownBlockType _completion;
    SQueue *_queue;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)fireAndInvalidate;
- (void)start;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 repeat:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;

@end
