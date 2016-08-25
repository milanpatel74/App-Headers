/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface WASQLiteDatabaseRepairer : NSObject {

	BOOL _databaseRepairInProgress;
	/*^block*/id _progressHandler;
	NSString* _sourceFilePath;
	NSString* _outputFilePath;
	NSString* _dumpFilePath;
	NSTimer* _progressTrackingTimer;
	unsigned long long _backgroundTaskID;
	double _repairStartTime;
	BOOL _disconnectBeforeRepairing;

}

@property (assign,nonatomic) BOOL disconnectBeforeRepairing;              //@synthesize disconnectBeforeRepairing=_disconnectBeforeRepairing - In the implementation block
+(void)mergePendingJournalIfPossibleForDatabaseAtPath:(id)arg1 ;
+(unsigned long long)estimatedDiskSpaceRequiredToRepairDatabaseAtPath:(id)arg1 ;
-(void)setDisconnectBeforeRepairing:(BOOL)arg1 ;
-(void)repairDatabaseAtPath:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fakeProgressTimerHandler:(id)arg1 ;
-(void)fileSizeProgressTimerHandler:(id)arg1 ;
-(BOOL)disconnectBeforeRepairing;
-(void)performAfterDisconnectingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startTrackingSizeOfFileAtPath:(id)arg1 estimatedSize:(unsigned long long)arg2 offset:(float)arg3 range:(float)arg4 ;
-(void)dumpDatabase;
-(void)stopTrackingFileSize;
-(BOOL)isDumpFileValid;
-(void)finishWithStatus:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)restoreFromDump;
-(void)startFakeProgressTrackingWithDuration:(double)arg1 offset:(float)arg2 range:(float)arg3 ;
-(void)stopFakeProgressTracking;
-(void)reportProgress:(float)arg1 ;
@end
