/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface DDLog : NSObject
+(id)loggingQueue;
+(void)lt_addLogger:(id)arg1 ;
+(void)lt_removeLogger:(id)arg1 ;
+(void)lt_removeAllLoggers;
+(void)lt_log:(id)arg1 ;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 format:(id)arg10 args:(char*)arg11 ;
+(void)queueLogMessage:(id)arg1 asynchronously:(BOOL)arg2 ;
+(void)lt_flush;
+(BOOL)isRegisteredClass:(Class)arg1 ;
+(id)registeredClasses;
+(int)logLevelForClass:(Class)arg1 ;
+(void)setLogLevel:(int)arg1 forClass:(Class)arg2 ;
+(int)logLevelForTag:(id)arg1 ;
+(void)addLogger:(id)arg1 ;
+(void)removeLogger:(id)arg1 ;
+(void)removeAllLoggers;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 format:(id)arg9 ;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 tag:(id)arg5 file:(const char*)arg6 className:(const char*)arg7 function:(const char*)arg8 line:(int)arg9 format:(id)arg10 ;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 className:(const char*)arg6 function:(const char*)arg7 line:(int)arg8 format:(id)arg9 args:(char*)arg10 ;
+(id)registeredClassNames;
+(int)logLevelForClassWithName:(id)arg1 ;
+(void)setLogLevel:(int)arg1 forClassWithName:(id)arg2 ;
+(void)setLogLevel:(int)arg1 forTag:(id)arg2 ;
+(BOOL)logLevel:(int)arg1 enabledForTag:(id)arg2 ;
+(void)applicationWillTerminate:(id)arg1 ;
+(void)initialize;
+(void)flushLog;
@end
