//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SKPDTMFViewDelegate <NSObject>
- (void)digitReleased:(long long)arg1;
- (void)digitPressedForOneSecond:(long long)arg1 digit:(NSString *)arg2;
- (void)digitPressed:(long long)arg1 digit:(NSString *)arg2;
@end

