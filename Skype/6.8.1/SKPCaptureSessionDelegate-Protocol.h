//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, SKPCaptureSession;

@protocol SKPCaptureSessionDelegate <NSObject>
- (void)captureSession:(SKPCaptureSession *)arg1 didStartRecordingToFileAtURL:(NSURL *)arg2 error:(NSError *)arg3;
@end

