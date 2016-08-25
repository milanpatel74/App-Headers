//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSOperation, NSOperationQueue, NSString, NSTimer, SKPPredicateObservationTrigger;

@protocol SKPDispatching <NSObject>
- (void)waitUntilOperationFinished:(NSOperation *)arg1;
- (void)cancelAllOperationsAndWaitWithTimeout:(double)arg1;
- (void)drainAndThenDispatchBlockOnMainThreadQueue:(void (^)(void))arg1;
- (SKPPredicateObservationTrigger *)predicateObserverTriggerWithObject:(id)arg1 trackedKeyPathsAndPredicates:(NSDictionary *)arg2 timeout:(double)arg3 completionBlock:(void (^)(NSDictionary *))arg4;
- (NSTimer *)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 mode:(NSString *)arg6;
- (NSTimer *)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
- (_Bool)cancelPreviousPerformRequestsOnReceiver:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (_Bool)cancelPreviousPerformRequestsOnReceiver:(id)arg1;
- (_Bool)onReceiver:(id)arg1 performSelector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4 cancelPrevious:(_Bool)arg5;
- (_Bool)onReceiver:(id)arg1 performSelector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4 inModes:(NSArray *)arg5;
- (_Bool)onReceiver:(id)arg1 performSelector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4;
- (_Bool)dispatchOnce:(long long *)arg1 block:(void (^)(void))arg2;
- (_Bool)dispatchBlock:(void (^)(void))arg1 onGCDQueueWithIdentifier:(NSObject<OS_dispatch_queue> *)arg2;
- (void)removeGCDQueueWithIdentifier:(NSObject<OS_dispatch_queue> *)arg1;
- (NSObject<OS_dispatch_queue> *)serialGCDQueueWithIdentifier:(NSString *)arg1;
- (void)removeQueueWithIdentifier:(NSString *)arg1;
- (NSOperationQueue *)operationQueueWithIdentifierIfExisting:(NSString *)arg1;
- (NSOperationQueue *)newOperationQueueWithIdentifier:(NSString *)arg1;
- (_Bool)dispatchOperation:(NSOperation *)arg1 onQueueWithIdentifier:(NSString *)arg2;
- (_Bool)dispatchBlock:(void (^)(void))arg1 onQueueWithIdentifier:(NSString *)arg2;
- (_Bool)dispatchBlockOnMainThreadQueueInNextRunLoop:(void (^)(void))arg1;
- (_Bool)dispatchBlockOnMainThreadQueue:(void (^)(void))arg1 modes:(NSArray *)arg2;
- (_Bool)dispatchBlockOnMainThreadQueue:(void (^)(void))arg1 afterDelay:(double)arg2;
- (_Bool)dispatchBlockSynchronouslyOnMainThread:(void (^)(void))arg1;
- (_Bool)dispatchBlockOnMainThreadQueue:(void (^)(void))arg1;
- (_Bool)dispatchOperationOnCancellableUserActionsBackgroundQueue:(NSOperation *)arg1;
- (_Bool)dispatchBlockOnCancellableUserActionsBackgroundQueue:(void (^)(void))arg1;
- (_Bool)dispatchBlockOnBackgroundQueue:(void (^)(void))arg1 afterDelay:(double)arg2;
- (_Bool)dispatchOperationOnBackgroundQueue:(NSOperation *)arg1;
- (_Bool)dispatchBlockOnBackgroundQueue:(void (^)(void))arg1;
- (void)sleepForTimeInterval:(double)arg1;
@end
