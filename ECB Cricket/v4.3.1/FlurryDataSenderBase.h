/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class NSMutableArray;

@interface FlurryDataSenderBase : NSObject {

	NSMutableArray* _runningTasks;
	unsigned long long _backgroundTask;
	dispatch_queue_sRef _queue;

}

@property (nonatomic,retain) NSMutableArray * runningTasks;                  //@synthesize runningTasks=_runningTasks - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTask;              //@synthesize backgroundTask=_backgroundTask - In the implementation block
-(unsigned long long)backgroundTask;
-(void)retransmitNotSentBlocks;
-(void)registerNewTask:(id)arg1 ;
-(BOOL)hasOngoingTasksWindow;
-(void)unregisterTask:(id)arg1 completedSuccessfuly:(BOOL)arg2 ;
-(NSMutableArray *)runningTasks;
-(void)didCompleteAllTasks;
-(void)networkStatusChanged:(id)arg1 ;
-(void)cancelTasks;
-(void)startBackgroundTaskTrackingIfNeeded;
-(void)performRetransmitNotSentBlocks;
-(void)stopBackgroundTasksTracking;
-(void)setRunningTasks:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)initialize;
-(dispatch_queue_sRef)queue;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(void)setBackgroundTask:(unsigned long long)arg1 ;
@end
