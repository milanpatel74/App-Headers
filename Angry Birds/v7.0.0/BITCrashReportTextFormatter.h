/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITCrashReportTextFormatter : NSObject
+(id)arrayOfAppUUIDsForCrashReport:(id)arg1 ;
+(id)bit_archNameFromCPUType:(unsigned long long)arg1 subType:(unsigned long long)arg2 ;
+(id)stringValueForCrashReport:(id)arg1 crashReporterKey:(id)arg2 ;
+(id)selectorForRegisterWithName:(id)arg1 ofThread:(id)arg2 report:(id)arg3 ;
+(id)bit_formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(int)arg4 ;
+(id)bit_archNameFromImageInfo:(id)arg1 ;
+(long long)bit_imageTypeForImagePath:(id)arg1 processPath:(id)arg2 ;
+(id)anonymizedProcessPathFromProcessPath:(id)arg1 ;
@end

