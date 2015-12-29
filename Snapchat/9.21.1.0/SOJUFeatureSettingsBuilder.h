//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUFeatureSettingsBuilder : NSObject
{
    NSNumber *_smartFilters;
    NSNumber *_visualFilters;
    NSNumber *_frontFacingFlash;
    NSNumber *_replaySnaps;
    NSNumber *_travelMode;
    NSNumber *_payReplaySnaps;
    NSNumber *_lensStoreAvailable;
    NSNumber *_barcodeEnabled;
    NSNumber *_qrcodeEnabled;
}

+ (id)withJUFeatureSettings:(id)arg1;
- (void).cxx_destruct;
- (id)setQrcodeEnabled:(id)arg1;
- (id)setBarcodeEnabled:(id)arg1;
- (id)setLensStoreAvailable:(id)arg1;
- (id)setPayReplaySnaps:(id)arg1;
- (id)setTravelMode:(id)arg1;
- (id)setReplaySnaps:(id)arg1;
- (id)setFrontFacingFlash:(id)arg1;
- (id)setVisualFilters:(id)arg1;
- (id)setSmartFilters:(id)arg1;
- (id)build;

@end

