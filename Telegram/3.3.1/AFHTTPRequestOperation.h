//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFURLConnectionOperation.h"

@class NSError, NSHTTPURLResponse, NSIndexSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSSet;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    NSIndexSet *_acceptableStatusCodes;
    NSSet *_acceptableContentTypes;
    NSError *_HTTPError;
    NSObject<OS_dispatch_queue> *_successCallbackQueue;
    NSObject<OS_dispatch_queue> *_failureCallbackQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    long long _onceToken;
    NSObject<OS_dispatch_semaphore> *_dispatchSemaphore;
}

+ (_Bool)canProcessRequest:(id)arg1;
@property NSObject<OS_dispatch_semaphore> *dispatchSemaphore; // @synthesize dispatchSemaphore=_dispatchSemaphore;
@property(nonatomic) long long onceToken; // @synthesize onceToken=_onceToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(retain, nonatomic) NSError *HTTPError; // @synthesize HTTPError=_HTTPError;
@property(retain, nonatomic) NSSet *acceptableContentTypes; // @synthesize acceptableContentTypes=_acceptableContentTypes;
@property(retain, nonatomic) NSIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(readonly) _Bool hasAcceptableContentType;
@property(readonly) _Bool hasAcceptableStatusCode;
- (id)error;
@property(readonly, retain, nonatomic) NSHTTPURLResponse *response;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end
