//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, SCStorePurchasedLensDataFetcher;

@protocol SCStorePurchasedLensDataFetcherDelegate <NSObject>
- (void)storePurchasedLensDataFetcher:(SCStorePurchasedLensDataFetcher *)arg1 didFailWithError:(NSError *)arg2;
- (void)storePurchasedLensDataFetcher:(SCStorePurchasedLensDataFetcher *)arg1 didFetchData:(NSDictionary *)arg2;
@end

