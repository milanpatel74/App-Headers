/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, WASyncManagerDelegate;
@class NSObject, NSMutableArray, NSDate, NSArray, NSCondition;

@interface WASyncManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _fullSyncTimer;
	NSObject*<OS_dispatch_source> _syncPollingTimer;
	NSMutableArray* _syncHistory;
	NSDate* _nextSyncDate;
	unsigned long long _nextSyncMode;
	unsigned long long _nextSyncContext;
	NSMutableArray* _pendingDeletes;
	NSMutableArray* _pendingPhoneNumbers;
	NSArray* _processedDeletes;
	NSArray* _processedPhoneNumbers;
	BOOL _syncEnabled;
	BOOL _syncInProgress;
	BOOL _locked;
	id<WASyncManagerDelegate> _delegate;
	NSCondition* _condition;

}

@property (assign) BOOL syncEnabled;                                                 //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign) BOOL syncInProgress;                                              //@synthesize syncInProgress=_syncInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<WASyncManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL locked;                                                      //@synthesize locked=_locked - In the implementation block
@property (readonly) NSCondition * condition;                                        //@synthesize condition=_condition - In the implementation block
-(BOOL)syncEnabled;
-(void)setNextFullSyncDate:(id)arg1 ;
-(void)addDeletedJIDs:(id)arg1 ;
-(void)requestInteractiveSyncWithMode:(unsigned long long)arg1 ;
-(void)enableSync;
-(void)addPhones:(id)arg1 ;
-(void)requestNotificationDeltaSync;
-(void)runFullSyncIfNecessary;
-(int)runSyncIfNecessary;
-(void)loadSyncHistory;
-(void)requestSyncWithMode:(unsigned long long)arg1 context:(unsigned long long)arg2 ;
-(void)saveSyncHistory;
-(void)cleanSyncHistory;
-(void)reallyPerformUnifiedSync;
-(void)reallyPerformLegacySync;
-(void)processLegacySyncResponse:(id)arg1 mode:(unsigned long long)arg2 context:(unsigned long long)arg3 ;
-(void)processUnifiedSyncResponse:(id)arg1 params:(id)arg2 mode:(unsigned long long)arg3 context:(unsigned long long)arg4 error:(id)arg5 ;
-(void)processSyncResponseHelperWithContacts:(id)arg1 mode:(unsigned long long)arg2 context:(unsigned long long)arg3 version:(id)arg4 wait:(double)arg5 error:(id)arg6 backoff:(double)arg7 unifiedSync:(BOOL)arg8 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<WASyncManagerDelegate>)arg1 ;
-(id)init;
-(id<WASyncManagerDelegate>)delegate;
-(void)reset;
-(void)setLocked:(BOOL)arg1 ;
-(NSCondition *)condition;
-(BOOL)syncInProgress;
-(void)setSyncInProgress:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)locked;
@end
