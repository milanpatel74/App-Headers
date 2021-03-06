/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSDictionary, CRDirectoryTree, CRSequenceNumber, NSMutableDictionary, NSString;

@interface CRTransactionReporter : NSObject {

	dispatch_queue_sRef queue;
	dispatch_group_sRef group;
	BOOL canResume;
	int finishedCount;
	BOOL batching;
	BOOL _isForegrounded;
	BOOL _isLoaded;
	BOOL _shuttingdown;
	int _transactionCounter;
	double _endTime;
	NSDictionary* _appState;
	double _defaultTimeout;
	NSDictionary* _thresholds;
	CRDirectoryTree* _directoryTree;
	CRSequenceNumber* _normalCounter;
	NSMutableDictionary* _transactionsDictionary;
	NSString* _cr_endTimeString;
	double _interval;

}

@property (nonatomic,readonly) BOOL isForegrounded;                                     //@synthesize isForegrounded=_isForegrounded - In the implementation block
@property (nonatomic,retain) NSDictionary * appState;                                   //@synthesize appState=_appState - In the implementation block
@property (nonatomic,readonly) double defaultTimeout;                                   //@synthesize defaultTimeout=_defaultTimeout - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * thresholds;                        //@synthesize thresholds=_thresholds - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                             //@synthesize isLoaded=_isLoaded - In the implementation block
@property (assign,nonatomic) CRDirectoryTree * directoryTree;                           //@synthesize directoryTree=_directoryTree - In the implementation block
@property (assign,nonatomic) int transactionCounter;                                    //@synthesize transactionCounter=_transactionCounter - In the implementation block
@property (nonatomic,retain) CRSequenceNumber * normalCounter;                          //@synthesize normalCounter=_normalCounter - In the implementation block
@property (assign,nonatomic) BOOL shuttingdown;                                         //@synthesize shuttingdown=_shuttingdown - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactionsDictionary;              //@synthesize transactionsDictionary=_transactionsDictionary - In the implementation block
@property (assign,nonatomic) double endTime;                                            //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSString * cr_endTimeString;                                 //@synthesize cr_endTimeString=_cr_endTimeString - In the implementation block
@property (assign,nonatomic) double interval;                                           //@synthesize interval=_interval - In the implementation block
+(id)sharedInstance;
-(void)initConfiguration;
-(void)initQueue;
-(void)initNotifications;
-(void)normalDelivery;
-(BOOL)normalWorkToDo;
-(void)resumeFirstTime;
-(CRDirectoryTree *)directoryTree;
-(void)setDirectoryTree:(CRDirectoryTree *)arg1 ;
-(void)initCounters;
-(void)backgrounded;
-(void)foregrounded;
-(BOOL)normalWorkInNormalDirectoryToDo;
-(id)normalJSONFrom:(id)arg1 ;
-(id)normalReportTransactions;
-(double)normalReportBeginTimeFor:(id)arg1 ;
-(double)normalReportEndTimeFor:(id)arg1 ;
-(void)normalReport;
-(void)normalBatchBarrier;
-(void)normalBatch;
-(void)normalWork;
-(id)allTransactions;
-(id)path:(id)arg1 forDirectory:(id)arg2 ;
-(id)path:(id)arg1 ;
-(void)addTransaction:(id)arg1 ;
-(void)remove:(id)arg1 fromDirectory:(id)arg2 ;
-(void)move:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3 ;
-(void)foregroundBackgroundCheck:(id)arg1 ;
-(void)cr_setEndTime:(double)arg1 ;
-(id)crashedJSONFrom:(id)arg1 ;
-(int)newTransactionId;
-(id)crashTransactionsOnPluginException;
-(id)transactionForId:(int)arg1 ;
-(id)transactionForName:(id)arg1 ;
-(BOOL)isForegrounded;
-(id)crashedTransactions:(id)arg1 ;
-(void)enableSamplingWithFrequency:(id)arg1 withDefaultTimeout:(double)arg2 withThresholds:(id)arg3 ;
-(void)disableSampling;
-(void)autoTransaction:(id)arg1 withBeginTime:(double)arg2 withEndTime:(double)arg3 ;
-(NSDictionary *)appState;
-(void)setAppState:(NSDictionary *)arg1 ;
-(double)defaultTimeout;
-(NSDictionary *)thresholds;
-(int)transactionCounter;
-(void)setTransactionCounter:(int)arg1 ;
-(CRSequenceNumber *)normalCounter;
-(void)setNormalCounter:(CRSequenceNumber *)arg1 ;
-(BOOL)shuttingdown;
-(void)setShuttingdown:(BOOL)arg1 ;
-(NSMutableDictionary *)transactionsDictionary;
-(void)setTransactionsDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)cr_endTimeString;
-(void)setCr_endTimeString:(NSString *)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)resume;
-(void)background;
-(BOOL)isLoaded;
-(void)load;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)save:(id)arg1 ;
-(void)removeTransaction:(id)arg1 ;
-(unsigned long long)transactionCount;
-(void)foreground;
-(double)endTime;
@end

