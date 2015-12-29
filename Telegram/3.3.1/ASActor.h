//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString;

@interface ASActor : NSObject
{
    _Bool _requiresAuthorization;
    _Bool _cancelled;
    NSString *_path;
    NSString *_requestQueueName;
    NSDictionary *_storedOptions;
    double _cancelTimeout;
    id _cancelToken;
    NSMutableArray *_multipleCancelTokens;
}

+ (id)genericPath;
+ (id)requestBuilderForGenericPath:(id)arg1 path:(id)arg2;
+ (void)registerActorClass:(Class)arg1;
@property(retain, nonatomic) NSMutableArray *multipleCancelTokens; // @synthesize multipleCancelTokens=_multipleCancelTokens;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) id cancelToken; // @synthesize cancelToken=_cancelToken;
@property(nonatomic) double cancelTimeout; // @synthesize cancelTimeout=_cancelTimeout;
@property(nonatomic) _Bool requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(retain, nonatomic) NSDictionary *storedOptions; // @synthesize storedOptions=_storedOptions;
@property(retain, nonatomic) NSString *requestQueueName; // @synthesize requestQueueName=_requestQueueName;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)watcherJoined:(id)arg1 options:(id)arg2 waitingInActorQueue:(_Bool)arg3;
- (void)handleRequestProblem;
- (void)addCancelToken:(id)arg1;
- (void)cancel;
- (void)execute:(id)arg1;
- (void)prepare:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

