/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface CrashLogger : NSObject
+(BOOL)crashOccurred;
+(void)uploadDataUsingActiveLog:(BOOL)arg1 footnote:(id)arg2 discretionary:(BOOL)arg3 ;
+(void)setCrashOccurred:(BOOL)arg1 ;
+(void)internalUploadDataUsingActiveLog:(BOOL)arg1 footnote:(id)arg2 discretionary:(BOOL)arg3 ;
+(BOOL)canUploadLogs;
+(void)uploadLogData:(id)arg1 filename:(id)arg2 discretionary:(BOOL)arg3 ;
+(void)initialize;
@end

