//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDeviceInput;

@interface SKPCameras : NSObject
{
    unsigned long long _numberOfCameras;
    AVCaptureDeviceInput *_frontCam;
    AVCaptureDeviceInput *_rearCam;
}

@property(retain, nonatomic) AVCaptureDeviceInput *rearCam; // @synthesize rearCam=_rearCam;
@property(retain, nonatomic) AVCaptureDeviceInput *frontCam; // @synthesize frontCam=_frontCam;
@property(readonly, nonatomic) unsigned long long numberOfCameras; // @synthesize numberOfCameras=_numberOfCameras;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool rearCameraSupports720p;
@property(readonly, nonatomic) _Bool frontCameraSupports720p;
- (_Bool)cameraSupports720p:(id)arg1;
- (void)setFramerate:(double)arg1 forDevice:(id)arg2;
- (void)addCameraInput:(id)arg1 toCaptureSession:(id)arg2;
- (void)captureRearCameraToSession:(id)arg1;
- (void)captureFrontCameraToSession:(id)arg1;
- (id)videoInputFromDevice:(id)arg1;
- (id)init;

@end

