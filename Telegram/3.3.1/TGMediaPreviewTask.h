//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASWatcher.h"

@class ASHandle, NSString, SThreadPoolTask, TGWorkerPool, TGWorkerTask;

@interface TGMediaPreviewTask : NSObject <ASWatcher>
{
    _Bool _idCancelled;
    TGWorkerPool *_workerPool;
    TGWorkerTask *_workerTask;
    SThreadPoolTask *_task;
    NSString *_uri;
    NSString *_targetFilePath;
    ASHandle *_actionHandle;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _completionWithData;
    CDUnknownBlockType _completionWithImage;
    CDUnknownBlockType _progress;
}

@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType completionWithImage; // @synthesize completionWithImage=_completionWithImage;
@property(copy, nonatomic) CDUnknownBlockType completionWithData; // @synthesize completionWithData=_completionWithData;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (void)executeWithMapSnapshotOptions:(id)arg1 completionWithImage:(CDUnknownBlockType)arg2 workerTask:(id)arg3;
- (void)executeMultipartWithImageUri:(id)arg1 targetFilePath:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)executeTempDownloadWithTargetFilePath:(id)arg1 uri:(id)arg2 progress:(CDUnknownBlockType)arg3 completionWithData:(CDUnknownBlockType)arg4 workerTask:(id)arg5;
- (void)executeWithTargetFilePath:(id)arg1 document:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 workerTask:(id)arg5;
- (void)executeWithTargetFilePath:(id)arg1 uri:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 workerTask:(id)arg5;
- (void)executeWithTargetFilePath:(id)arg1 uri:(id)arg2 completion:(CDUnknownBlockType)arg3 workerTask:(id)arg4;
- (void)executeWithWorkerTask:(id)arg1 threadPool:(id)arg2;
- (void)executeWithWorkerTask:(id)arg1 workerPool:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

