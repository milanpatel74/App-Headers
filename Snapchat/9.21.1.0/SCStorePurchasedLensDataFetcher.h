//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensMetadataFetcher.h"

@interface SCStorePurchasedLensDataFetcher : SCLensMetadataFetcher
{
    id <SCStorePurchasedLensDataFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <SCStorePurchasedLensDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchData;
- (void)fetchDataIfNecessary;

@end
