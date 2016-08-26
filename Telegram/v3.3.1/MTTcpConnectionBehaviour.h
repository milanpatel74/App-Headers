//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTQueue, MTTimer;

@interface MTTcpConnectionBehaviour : NSObject
{
    MTTimer *_backoffTimer;
    long long _backoffCount;
    _Bool _needsReconnection;
    id <MTTcpConnectionBehaviourDelegate> _delegate;
    MTQueue *_queue;
}

@property(nonatomic) _Bool needsReconnection; // @synthesize needsReconnection=_needsReconnection;
@property(readonly, nonatomic) MTQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MTTcpConnectionBehaviourDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerEvent;
- (void)startTimer:(double)arg1;
- (void)invalidateTimer;
- (void)clearBackoff;
- (void)connectionClosed;
- (void)connectionValidDataReceived;
- (void)connectionOpened;
- (void)requestConnection;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
