//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCAdResolutionError, SCAdTransformResponse;

@protocol SCAdStreamEventListener <NSObject>
- (void)onAdResolutionError:(SCAdResolutionError *)arg1;
- (void)onAdReady:(SCAdTransformResponse *)arg1;
@end

