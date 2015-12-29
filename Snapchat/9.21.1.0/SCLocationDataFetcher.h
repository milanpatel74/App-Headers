//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SCLocationDataFetcher : NSObject
{
    _Bool _fetching;
    NSDate *_retryTimestamp;
    NSString *_checksumKey;
    NSDictionary *_fetchResponseCache;
    NSObject<OS_dispatch_queue> *_locationnDataFetcherQueue;
    id <SCLocationDataFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLocationDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryFetchDataForLocation:(id)arg1 delay:(double)arg2;
- (void)fetchDataForLocation:(id)arg1;
- (id)init;

@end

