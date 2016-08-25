//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSMutableArray, NSString, NSURLSession, SKPOverlayController, SKPUploadProgressViewController;

@interface SKPFeedbackUploadTask : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    int _countCompletedTask;
    NSString *_clientFeedbackID;
    NSMutableArray *_filesToUpload;
    NSMutableArray *_uploadTasks;
    NSURLSession *_backgroundURLSession;
    double _aggregatedProgress;
    long long _aggregatedTotalBytesExpectedToSend;
    SKPUploadProgressViewController *_progressViewController;
    SKPOverlayController *_overlayController;
}

@property(retain, nonatomic) SKPOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(retain, nonatomic) SKPUploadProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property(nonatomic) int countCompletedTask; // @synthesize countCompletedTask=_countCompletedTask;
@property long long aggregatedTotalBytesExpectedToSend; // @synthesize aggregatedTotalBytesExpectedToSend=_aggregatedTotalBytesExpectedToSend;
@property(nonatomic) double aggregatedProgress; // @synthesize aggregatedProgress=_aggregatedProgress;
@property(retain, nonatomic) NSURLSession *backgroundURLSession; // @synthesize backgroundURLSession=_backgroundURLSession;
@property(retain, nonatomic) NSMutableArray *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) NSMutableArray *filesToUpload; // @synthesize filesToUpload=_filesToUpload;
@property(retain, nonatomic) NSString *clientFeedbackID; // @synthesize clientFeedbackID=_clientFeedbackID;
- (void).cxx_destruct;
- (void)postLocalNotification:(id)arg1;
- (void)invalidateSession;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)uploadURLRequestWithFile:(id)arg1;
- (long long)getFileSize:(id)arg1;
- (void)start;
- (void)addTask:(id)arg1;
- (void)dealloc;
- (id)initWithFeedbackId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
