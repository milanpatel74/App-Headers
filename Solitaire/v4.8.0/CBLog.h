/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CBLog : NSObject
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 function:(const char*)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9 ;
+(id)formatLogMessage:(id)arg1 flag:(int)arg2 ;
+(void)queueLogMessage:(id)arg1 asynchronously:(BOOL)arg2 ;
+(void)printLogMessage:(id)arg1 ;
+(void)setLogLevel:(int)arg1 ;
+(void)applicationWillTerminate:(id)arg1 ;
+(void)flush;
+(void)initialize;
+(void)flushLog;
+(void)log:(id)arg1 ;
@end
