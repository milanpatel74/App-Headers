/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBPerformanceMetrics : NSObject
+(unsigned)coreCount;
+(id)loadAvgWithPrecision:(double)arg1 ;
+(FBDeviceBatteryInfo)batteryInfo;
+(id)batteryStateWithDeviceBatteryState:(long long)arg1 ;
+(unsigned long long)freeMemoryCount;
+(unsigned long long)totalMemoryCount;
+(unsigned long long)residentMemoryCount;
+(unsigned long long)virtualMemoryCount;
+(unsigned long long)freeDiskCount;
+(BOOL)getCPUTimeSeconds:(/*^block*/id)arg1 terminatedThreads:(SCD_Struct_FB11*)arg2 ;
+(BOOL)absoluteStartTime:(double*)arg1 ;
+(BOOL)lastWakeTime:(double*)arg1 ;
+(BOOL)getNetworkUsage:(SCD_Struct_FB12*)arg1 ;
@end
