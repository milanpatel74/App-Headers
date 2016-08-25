/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class ACTPingRetryQueue, NSLock;

@interface ACTPingRetryScheduler : NSObject {

	BOOL _scheduling;
	double _timeBetweenBatches;
	ACTPingRetryQueue* _retryQueue;
	unsigned long long _schedulingSessionID;
	NSLock* _lock;

}

@property (assign,nonatomic) double timeBetweenBatches;                           //@synthesize timeBetweenBatches=_timeBetweenBatches - In the implementation block
@property (nonatomic,retain) ACTPingRetryQueue * retryQueue;                      //@synthesize retryQueue=_retryQueue - In the implementation block
@property (assign,getter=isScheduling,nonatomic) BOOL scheduling;                 //@synthesize scheduling=_scheduling - In the implementation block
@property (assign,nonatomic) unsigned long long schedulingSessionID;              //@synthesize schedulingSessionID=_schedulingSessionID - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
-(void)startScheduling;
-(ACTPingRetryQueue *)retryQueue;
-(void)stopScheduling;
-(BOOL)isScheduling;
-(void)setScheduling:(BOOL)arg1 ;
-(void)startBatch;
-(unsigned long long)schedulingSessionID;
-(void)setSchedulingSessionID:(unsigned long long)arg1 ;
-(double)timeBetweenBatches;
-(void)refreshTimerForNextBatch;
-(void)setTimeBetweenBatches:(double)arg1 ;
-(void)setRetryQueue:(ACTPingRetryQueue *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSLock *)lock;
-(void)setLock:(NSLock *)arg1 ;
@end
