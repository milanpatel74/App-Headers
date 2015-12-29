//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPPerformanceMonitor.h"

@interface SKPStartupPerformanceMonitor : SKPPerformanceMonitor
{
    unsigned long long _startupTimeInMilliseconds;
}

@property(nonatomic) unsigned long long startupTimeInMilliseconds; // @synthesize startupTimeInMilliseconds=_startupTimeInMilliseconds;
- (void)stopStartupToShowRecentsCachePerformanceEvent;
- (void)startStartupToShowRecentsCachePerformanceEvent;
- (void)stopLaunchTimePerformanceEvent;
- (void)startLaunchTimePerformanceEvent;

@end

