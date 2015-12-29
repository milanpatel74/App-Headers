//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface SCScanCardProvider : NSObject
{
    double _scanStartTime;
    id <SCScanCardProviderDelegate> _delegate;
    NSTimer *_timeoutTimer;
}

@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) __weak id <SCScanCardProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_scanCardForAddFriendAction:(id)arg1;
- (void)_handleScannableLookupErrorEvent:(id)arg1 imageNamed:(id)arg2 response:(id)arg3;
- (void)timeoutTimerFired;
- (_Bool)checkAndStopTimeoutTimer;
- (void)startTimeoutTimer;
- (void)_handleScannableLookupSuccessEvent:(id)arg1 response:(id)arg2;
- (void)_lookupScannableUsingData:(id)arg1 version:(int)arg2 codeType:(int)arg3;
- (void)_lookupBarcodeUsingScannedData:(id)arg1;
- (void)_lookupSnapcodeUsingScannedData:(id)arg1;
- (void)provideScanCardsForScanResults:(id)arg1;

@end

