//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCScanCard, SCScanResultViewController;

@protocol SCScanResultViewControllerDelegate <NSObject>

@optional
- (void)scanResultViewControllerDidDismiss:(SCScanResultViewController *)arg1 dismissType:(unsigned long long)arg2;
- (SCScanCard *)scanResultViewController:(SCScanResultViewController *)arg1 cardToReplaceScanCard:(SCScanCard *)arg2;
- (_Bool)scanResultViewController:(SCScanResultViewController *)arg1 shouldShowCard:(SCScanCard *)arg2;
@end
