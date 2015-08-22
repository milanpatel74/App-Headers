/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSURLSessionDownloadDelegate.h>
#import <Twitter/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue, TFNBackgroundFetchManagerDelegate;
@class NSOperationQueue, NSObject, NSURLSession, NSMutableDictionary, NSMutableSet, TFNTimer, TFNMutableBidirectionalMap, NSString;

@interface TFNBackgroundFetchManager : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {

	long long _state;
	BOOL _isCompletingBackgroundFetch;
	BOOL _supportsBackgroundFetch;
	BOOL _backgroundSessionWasUsed;
	NSOperationQueue* _sessionQueue;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSURLSession* _backgroundSession;
	NSURLSession* _defaultSession;
	int _backgroundSessionGetTasksLock;
	NSMutableDictionary* _registeredFetchTasks;
	NSMutableDictionary* _activeFetchTasks;
	NSMutableSet* _generalFetchTaskIdentifiers;
	/*^block*/id _backgroundSessionCompletionHandler;
	/*^block*/id _backgroundFetchCompletionHandler;
	TFNTimer* _backgroundFetchTimeoutTimer;
	double _backgroundFetchStartTime;
	unsigned long long _backgroundFetchResult;
	NSMutableDictionary* _urlSessionTaskResults;
	TFNMutableBidirectionalMap* _allURLSessionTaskIdentifiersToBackgroundFetchTaskIdentifiers;
	TFNMutableBidirectionalMap* _currentURLSessionTaskIdentifiersToBackgroundFetchTaskIdentifiers;
	id<TFNBackgroundFetchManagerDelegate> _delegate;

}

@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic,__weak) id<TFNBackgroundFetchManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBackgroundFetchSupported;
-(void)postBackgroundFetchStateChanged:(long long)arg1 ;
-(void)backgroundFetchWillBegin;
-(void)backgroundFetchDidBegin;
-(void)postBackgroundFetchStateChangedOnBackgroundThread:(long long)arg1 ;
-(void)backgroundFetchWillCompleteWithResult:(unsigned long long)arg1 reason:(long long)arg2 ;
-(void)backgroundFetchDidCompleteWithResult:(unsigned long long)arg1 reason:(long long)arg2 ;
-(void)persistKnownIdentifiers;
-(void)startBackgroundFetchTask:(id)arg1 ;
-(void)completeBackgroundFetchIfNeeded;
-(void)startHeartbeatIfNeeded;
-(void)cancelSessionTaskWithIdentifier:(id)arg1 ;
-(void)completeBackgroundFetchTask:(id)arg1 result:(unsigned long long)arg2 ;
-(void)updateBackgroundTaskResult:(unsigned long long)arg1 ;
-(BOOL)isRunningBackgroundTasks;
-(void)scheduleTimeout;
-(void)timeoutBackgroundFetchSessions;
-(void)forceCompleteBackgroundSession:(long long)arg1 ;
-(void)completeBackgroundFetch:(long long)arg1 ;
-(void)finalCompleteBackgroundFetch:(long long)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)heartbeat;
-(void)unregisterBackgroundFetchTaskByIdentifier:(id)arg1 ;
-(void)registerBackgroundFetchTask:(id)arg1 ;
-(BOOL)startBackgroundFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)handleEventsForBackgroundFetchURLSessionId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)backgroundURLSession;
-(id)normalURLSession;
-(id)_backgroundURLSession;
-(void)_unregisterBackgroundFetchTaskByIdentifier:(id)arg1 ;
-(void)_URLSessionDidFinish:(id)arg1 error:(id)arg2 ;
-(BOOL)isBackgroundFetchSessionId:(id)arg1 ;
-(void)unregisterBackgroundFetchTask:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TFNBackgroundFetchManagerDelegate>)arg1 ;
-(id)init;
-(id<TFNBackgroundFetchManagerDelegate>)delegate;
-(long long)state;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
@end
