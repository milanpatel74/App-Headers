//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedDeviceCapacityAnalyzerListener.h"

@class AVCaptureStillImageOutput, NSString;

@interface SCManagedStillImageCapturer : NSObject <SCManagedDeviceCapacityAnalyzerListener>
{
    AVCaptureStillImageOutput *_stillImageOutput;
    _Bool _adjustingExposure;
    _Bool _shouldCapture;
    unsigned long long _retries;
    unsigned long long _devicePosition;
    double _aspectRatio;
    float _zoomFactor;
    _Bool _lensesActive;
    CDUnknownBlockType _completionHandler;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (id)_resizeImageFromData:(id)arg1;
- (id)imageWithAppliedLensesFromImage:(id)arg1 devicePosition:(unsigned long long)arg2;
- (id)_stillImageConnectionFromOutput:(id)arg1;
- (void)_captureStillImage;
- (void)_deadlineCaptureStillImage;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)captureStillImageWithAspectRatio:(double)arg1 atZoomFactor:(float)arg2 lensesActive:(_Bool)arg3 devicePosition:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeAsOutput:(id)arg1;
- (void)setHighResolutionStillImageOutputEnabled:(_Bool)arg1;
- (void)setAsOutput:(id)arg1;
- (id)initWithSession:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

