//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol SOJULoadScheduledLensesResponseV2 <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *cacheTtlMillis;
@property(readonly, copy, nonatomic) NSArray *precachedLenses;
@property(readonly, copy, nonatomic) NSArray *activeLenses;
@end

