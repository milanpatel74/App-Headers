//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SQueue, STimer;

@interface TGAcceleratedVideoFrameQueue : NSObject
{
    SQueue *_queue;
    unsigned long long _maxFrames;
    unsigned long long _fillFrames;
    double _previousFrameTimestamp;
    CDUnknownBlockType _requestFrame;
    CDUnknownBlockType _drawFrame;
    NSMutableArray *_frames;
    STimer *_timer;
    int _sessionId;
}

- (void).cxx_destruct;
- (void)checkQueue;
- (void)pauseRequests;
- (void)beginRequests:(int)arg1;
- (void)dispatch:(CDUnknownBlockType)arg1;
- (id)initWithRequestFrame:(CDUnknownBlockType)arg1 drawFrame:(CDUnknownBlockType)arg2;

@end

