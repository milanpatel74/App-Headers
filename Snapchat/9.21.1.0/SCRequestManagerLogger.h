//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPClient;

@interface SCRequestManagerLogger : NSObject
{
    AFHTTPClient *_httpClient;
}

+ (id)priorityStringFromPriority:(long long)arg1;
@property(retain, nonatomic) AFHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
- (void).cxx_destruct;
- (void)logDownloadConsumption:(id)arg1;
- (void)logBandwidthReport:(id)arg1;
- (void)didCancelAllRequests;
- (id)stringFromRequest:(id)arg1 queueSizesDict:(id)arg2;
- (void)didRunRequest:(id)arg1 queueSizesDict:(id)arg2;
- (void)didCancelRequest:(id)arg1;
- (void)didSubmitRequest:(id)arg1 queueSizesDict:(id)arg2;
- (id)initWithHttpClient:(id)arg1;

@end

