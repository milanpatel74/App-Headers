//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseAPIClient.h"

@class  q, NSURL;

@interface SCAPIClient : SCBaseAPIClient
{
    NSURL *_defaultBaseURL;
     q *_requestSigner;
}

+ (void)requestFinished:(id)arg1 withResponse:(id)arg2 path:(id)arg3 startTime:(double)arg4 success:(_Bool)arg5 requestSize:(double)arg6 responseSize:(double)arg7 hitCache:(_Bool)arg8 statusCode:(long long)arg9 startReachability:(int)arg10 endReachability:(int)arg11 responseDictionary:(id)arg12 userInfo:(id)arg13 trackingInfo:(id)arg14 countOfBytesSent:(long long)arg15 countOfBytesReceived:(long long)arg16 error:(id)arg17;
+ (void)requestFinished:(id)arg1 withResponse:(id)arg2 path:(id)arg3 startTime:(double)arg4 success:(_Bool)arg5 requestSize:(double)arg6 responseSize:(double)arg7 hitCache:(_Bool)arg8 statusCode:(long long)arg9 startReachability:(int)arg10 endReachability:(int)arg11 responseDictionary:(id)arg12 userInfo:(id)arg13 error:(id)arg14;
+ (void)logURLRequestStart:(id)arg1 name:(id)arg2 requestInfo:(id)arg3;
+ (void)logURLRequestStart:(id)arg1 name:(id)arg2;
+ (void)logURLRequestCompletion:(id)arg1 requestSize:(unsigned long long)arg2 reachabilityStart:(id)arg3 timeInMillis:(long long)arg4 timeToFirstByteInMillis:(long long)arg5 timeToFirstBytesSent:(long long)arg6 response:(id)arg7 countOfBytesSent:(long long)arg8 countOfBytesReceived:(long long)arg9 requestKey:(id)arg10 reachabilityDurations:(id)arg11 error:(id)arg12;
+ (_Bool)isDevSnapchat;
+ (id)defaultUrl;
+ (id)updateSharedClientWithUrl:(id)arg1;
+ (id)sharedClient;
@property(retain, nonatomic)  q *requestSigner; // @synthesize requestSigner=_requestSigner;
@property(retain, nonatomic) NSURL *defaultBaseURL; // @synthesize defaultBaseURL=_defaultBaseURL;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (void)authenticateRequest:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)requestWithMethod:(id)arg1 url:(id)arg2 parameters:(id)arg3;
- (id)initWithBaseURL:(id)arg1;

@end

