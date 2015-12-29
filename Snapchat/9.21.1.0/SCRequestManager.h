//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPClient, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, SCDownloadConsumptionRecorder, SCDownloadStatisticsGenerator, SCRequestManagerLogger, SCRequestManagerRunningTaskState, SCRequestTaskPool;

@interface SCRequestManager : NSObject
{
    NSArray *_contexts;
    NSString *_URLSessionHighPriorityContext;
    _Bool _isInHighPriorityContext;
    _Bool _isBackgroundDownloadPaused;
    _Bool _isAllDownloadPaused;
    id <SCRequestManagerTaskExecutionDelegate> _delegate;
    SCRequestTaskPool *_allTasks;
    NSSet *_allTaskPools;
    SCRequestManagerRunningTaskState *_runningTaskState;
    NSMutableDictionary *_runningTasks;
    SCRequestTaskPool *_wwanTasks;
    AFHTTPClient *_httpClient;
    SCDownloadStatisticsGenerator *_downloadStatisticsGenerator;
    SCRequestManagerLogger *_downloadManagerLogger;
    SCDownloadConsumptionRecorder *_downloadConsumptionRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    id <SCPerforming> _queuePerformer;
}

+ (long long)numberOfTasksInArray:(id)arg1 thatMatch:(CDUnknownBlockType)arg2;
+ (id)shared;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isAllDownloadPaused; // @synthesize isAllDownloadPaused=_isAllDownloadPaused;
@property(nonatomic) _Bool isBackgroundDownloadPaused; // @synthesize isBackgroundDownloadPaused=_isBackgroundDownloadPaused;
@property(retain, nonatomic) SCDownloadConsumptionRecorder *downloadConsumptionRecorder; // @synthesize downloadConsumptionRecorder=_downloadConsumptionRecorder;
@property(retain, nonatomic) SCRequestManagerLogger *downloadManagerLogger; // @synthesize downloadManagerLogger=_downloadManagerLogger;
@property(retain, nonatomic) SCDownloadStatisticsGenerator *downloadStatisticsGenerator; // @synthesize downloadStatisticsGenerator=_downloadStatisticsGenerator;
@property(retain, nonatomic) AFHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) SCRequestTaskPool *wwanTasks; // @synthesize wwanTasks=_wwanTasks;
@property(retain, nonatomic) NSMutableDictionary *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) SCRequestManagerRunningTaskState *runningTaskState; // @synthesize runningTaskState=_runningTaskState;
@property(retain, nonatomic) NSSet *allTaskPools; // @synthesize allTaskPools=_allTaskPools;
@property(retain, nonatomic) SCRequestTaskPool *allTasks; // @synthesize allTasks=_allTasks;
@property(nonatomic) __weak id <SCRequestManagerTaskExecutionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)numberOfRunningTasksThatMatch:(CDUnknownBlockType)arg1;
- (long long)numberOfRunningDownloadTasks;
- (long long)numberOfQueuedTasksThatMatch:(CDUnknownBlockType)arg1;
- (void)_consumeContentWithKey:(id)arg1;
- (void)consumeContentWithKey:(id)arg1;
- (void)reset;
- (id)queueSizesDict;
- (id)removeTaskForKey:(id)arg1;
- (void)resumeDownloads;
- (void)pauseBackgroundDownloads;
- (void)pauseAllDownloads;
- (void)removeContext:(id)arg1;
- (void)addContext:(id)arg1;
- (void)setContexts:(id)arg1;
- (void)checkSchedule;
- (void)_didRunTaskWithKey:(id)arg1 data:(id)arg2;
- (void)_willRunTask:(id)arg1;
- (void)calculateSessionPriorityForTask:(id)arg1;
- (_Bool)_shouldRunLargeDownloadTask:(id)arg1;
- (_Bool)_shouldRunLargeDownloadtaskInURLSessionHighPriorityContext:(id)arg1;
- (_Bool)_shouldRunDownloadOrMetadataTask:(id)arg1;
- (_Bool)_shouldRunUploadOrAnalyticTask:(id)arg1;
- (_Bool)shouldRunTask:(id)arg1;
- (void)run;
- (void)_removeContext:(id)arg1 fromRequestWithKey:(id)arg2;
- (void)removeContext:(id)arg1 fromRequestWithKey:(id)arg2;
- (void)_addContext:(id)arg1 toRequestWithKey:(id)arg2;
- (void)addContext:(id)arg1 toRequestWithKey:(id)arg2;
- (void)_boostRequestWithKey:(id)arg1 toHigherConnectivity:(long long)arg2;
- (void)boostRequestWithKey:(id)arg1 toHigherConnectivity:(long long)arg2;
- (void)_boostRequestWithKey:(id)arg1 toHigherPriority:(long long)arg2;
- (void)boostRequestWithKey:(id)arg1 toHigherPriority:(long long)arg2;
- (void)_enqueueTask:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1;
- (void)submitRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_addTask:(id)arg1;
- (id)_migrationInfo;
- (void)resetRunningTasks;
- (unsigned long long)maxHighPriorityInContextMsgRequests;
- (_Bool)shouldEnableHighPriorityInContextMsgRequests;
- (long long)maxSmallRequests;
- (long long)maxLargeRequestsFromSingleContext;
- (long long)maxLargeRequests;
- (id)init;

@end

