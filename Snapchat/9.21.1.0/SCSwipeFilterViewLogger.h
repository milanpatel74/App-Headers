//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SCSwipeFilterViewLogger : NSObject
{
    NSMutableSet *_loggedFilters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_didEnterBackground;
- (void)logGeofilterSwipeEventForFilter:(id)arg1 isSponsored:(_Bool)arg2 pos:(long long)arg3 count:(long long)arg4 viewTime:(double)arg5 viewCount:(long long)arg6 mediaType:(long long)arg7;
- (void)dealloc;
- (id)init;

@end

