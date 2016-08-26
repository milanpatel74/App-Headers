/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, CKComponentPreparationQueueListenerAnnouncer;

@interface CKComponentPreparationQueue : NSObject {

	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _inputQueue;
	unsigned long long _queueWidth;
	BOOL _synchronouslyPrepareChangesets;
	Mutex _lock;
	CKComponentPreparationQueueListenerAnnouncer* _announcer;

}
+(id)prepare:(id)arg1 ;
-(void)setSynchronouslyPrepareChangesets_DO_NOT_USE:(BOOL)arg1 ;
-(id)initWithQueueWidth:(long long)arg1 ;
-(void)enqueueBatch:(const CKComponentPreparationInputBatch*)arg1 block:(/*^block*/id)arg2 ;
-(void)_processSyncJob:(id)arg1 ;
-(id)init;
-(void)_processJob:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
