/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Twitter/Twitter-Structs.h>
@class NSObject, NSMutableSet;

@interface TFNLoggingManager : NSObject {

	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	double _baseTimestamp;
	NSMutableSet* _streamsM;
	long long _cachedLevels;
	NSMutableSet* _cachedOffChannelsM;

}
+(id)sharedInstance;
-(id)outputStreams;
-(id)startupTimestamp;
-(void)removeOutputStream:(id)arg1 ;
-(void)updateOutputStream:(id)arg1 ;
-(void)dispatchSynchronousTransaction:(/*^block*/id)arg1 ;
-(void)dispatchAsynchronousTransaction:(/*^block*/id)arg1 ;
-(id)outputStreamsThatSupportLoggedDataRetrieval;
-(id)retrieveLoggedDataFromOutputStream:(id)arg1 maxBytes:(unsigned long long)arg2 ;
-(void)flush;
-(id)_streamOfClassKind:(Class)arg1 ;
-(BOOL)hasOutputStream:(Class)arg1 ;
-(id)crashlyticsOutputStream;
-(id)rollingFileOutputStream;
-(id)alertScribeOutputStream;
-(void)t1_addConsoleOutputStream;
-(void)t1_addFileOutputStream;
-(void)t1_addConsoleFileOutputStream;
-(void)prepareOutputStreams;
-(void)addOutputStream:(id)arg1 ;
-(void)_logDispatchToLevel:(long long)arg1 channel:(id)arg2 fileFunctionLine:(TFNFileFunctionLine)arg3 contexObject:(id)arg4 format:(id)arg5 arguments:(char*)arg6 ;
-(void)_logExecuteWithTimestamp:(double)arg1 level:(long long)arg2 channel:(id)arg3 fileFunctionLine:(TFNFileFunctionLine)arg4 contextObject:(id)arg5 threadId:(unsigned)arg6 message:(id)arg7 ;
-(long long)_canLogStream:(id)arg1 level:(long long)arg2 channel:(id)arg3 contextObject:(id)arg4 ;
-(void)logWithLevel:(long long)arg1 channel:(id)arg2 fileFunctionLine:(TFNFileFunctionLine)arg3 contextObject:(id)arg4 message:(id)arg5 ;
-(BOOL)_canLogWithLevel:(long long)arg1 channel:(id)arg2 contextObject:(id)arg3 ;
-(id)init;
-(id)_init;
@end
