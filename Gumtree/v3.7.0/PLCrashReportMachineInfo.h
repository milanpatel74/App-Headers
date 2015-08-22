/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, PLCrashReportProcessorInfo;

@interface PLCrashReportMachineInfo : NSObject {

	NSString* _modelName;
	PLCrashReportProcessorInfo* _processorInfo;
	unsigned long long _processorCount;
	unsigned long long _logicalProcessorCount;

}

@property (nonatomic,readonly) NSString * modelName;                                    //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) PLCrashReportProcessorInfo * processorInfo;              //@synthesize processorInfo=_processorInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long processorCount;                       //@synthesize processorCount=_processorCount - In the implementation block
@property (nonatomic,readonly) unsigned long long logicalProcessorCount;                //@synthesize logicalProcessorCount=_logicalProcessorCount - In the implementation block
-(PLCrashReportProcessorInfo *)processorInfo;
-(id)initWithModelName:(id)arg1 processorInfo:(id)arg2 processorCount:(unsigned long long)arg3 logicalProcessorCount:(unsigned long long)arg4 ;
-(unsigned long long)logicalProcessorCount;
-(NSString *)modelName;
-(void)dealloc;
-(unsigned long long)processorCount;
@end
