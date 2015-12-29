//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSOperationQueue;

@interface PGCameraDeviceAngleSampler : NSObject
{
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionQueue;
    CDUnknownBlockType _deviceOrientationChanged;
    long long _deviceOrientation;
    double _currentDeviceAngle;
}

@property(readonly, nonatomic) double currentDeviceAngle; // @synthesize currentDeviceAngle=_currentDeviceAngle;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(copy, nonatomic) CDUnknownBlockType deviceOrientationChanged; // @synthesize deviceOrientationChanged=_deviceOrientationChanged;
- (void).cxx_destruct;
- (void)startMeasuring;
- (void)stopMeasuring;
@property(readonly, nonatomic) _Bool isMeasuring;
- (void)dealloc;
- (id)init;

@end

