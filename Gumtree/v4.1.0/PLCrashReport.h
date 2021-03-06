/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class PLCrashReportSystemInfo, PLCrashReportMachineInfo, PLCrashReportApplicationInfo, PLCrashReportProcessInfo, PLCrashReportSignalInfo, PLCrashReportMachExceptionInfo, NSArray, PLCrashReportExceptionInfo;

@interface PLCrashReport : NSObject {

	PLCrashReportDecoder* _decoder;
	PLCrashReportSystemInfo* _systemInfo;
	PLCrashReportMachineInfo* _machineInfo;
	PLCrashReportApplicationInfo* _applicationInfo;
	PLCrashReportProcessInfo* _processInfo;
	PLCrashReportSignalInfo* _signalInfo;
	PLCrashReportMachExceptionInfo* _machExceptionInfo;
	NSArray* _threads;
	NSArray* _images;
	PLCrashReportExceptionInfo* _exceptionInfo;
	CFUUIDRef _uuid;

}

@property (nonatomic,readonly) PLCrashReportSystemInfo * systemInfo;                            //@synthesize systemInfo=_systemInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMachineInfo; 
@property (nonatomic,readonly) PLCrashReportMachineInfo * machineInfo;                          //@synthesize machineInfo=_machineInfo - In the implementation block
@property (nonatomic,readonly) PLCrashReportApplicationInfo * applicationInfo;                  //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessInfo; 
@property (nonatomic,readonly) PLCrashReportProcessInfo * processInfo;                          //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,readonly) PLCrashReportSignalInfo * signalInfo;                            //@synthesize signalInfo=_signalInfo - In the implementation block
@property (nonatomic,readonly) PLCrashReportMachExceptionInfo * machExceptionInfo;              //@synthesize machExceptionInfo=_machExceptionInfo - In the implementation block
@property (nonatomic,readonly) NSArray * threads;                                               //@synthesize threads=_threads - In the implementation block
@property (nonatomic,readonly) NSArray * images;                                                //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) BOOL hasExceptionInfo; 
@property (nonatomic,readonly) PLCrashReportExceptionInfo * exceptionInfo;                      //@synthesize exceptionInfo=_exceptionInfo - In the implementation block
@property (nonatomic,readonly) CFUUIDRef uuidRef;                                               //@synthesize uuid=_uuid - In the implementation block
-(Plcrash__CrashReport*)decodeCrashData:(id)arg1 error:(id*)arg2 ;
-(id)extractMachineInfo:(Plcrash__CrashReport__MachineInfo*)arg1 error:(id*)arg2 ;
-(id)extractSystemInfo:(Plcrash__CrashReport__SystemInfo*)arg1 processorInfo:(id)arg2 error:(id*)arg3 ;
-(id)extractApplicationInfo:(Plcrash__CrashReport__ApplicationInfo*)arg1 error:(id*)arg2 ;
-(id)extractProcessInfo:(Plcrash__CrashReport__ProcessInfo*)arg1 error:(id*)arg2 ;
-(id)extractSignalInfo:(Plcrash__CrashReport__Signal*)arg1 error:(id*)arg2 ;
-(id)extractMachExceptionInfo:(Plcrash__CrashReport__Signal__MachException*)arg1 error:(id*)arg2 ;
-(id)extractThreadInfo:(Plcrash__CrashReport*)arg1 error:(id*)arg2 ;
-(id)extractImageInfo:(Plcrash__CrashReport*)arg1 error:(id*)arg2 ;
-(id)extractExceptionInfo:(Plcrash__CrashReport__Exception*)arg1 error:(id*)arg2 ;
-(id)synthesizeProcessorInfoFromArchitecture:(int)arg1 error:(id*)arg2 ;
-(id)extractProcessorInfo:(Plcrash__CrashReport__Processor*)arg1 error:(id*)arg2 ;
-(id)extractSymbolInfo:(Plcrash__CrashReport__Symbol*)arg1 error:(id*)arg2 ;
-(id)extractStackFrameInfo:(Plcrash__CrashReport__Thread__StackFrame*)arg1 error:(id*)arg2 ;
-(BOOL)hasExceptionInfo;
-(PLCrashReportExceptionInfo *)exceptionInfo;
-(PLCrashReportSignalInfo *)signalInfo;
-(id)imageForAddress:(unsigned long long)arg1 ;
-(BOOL)hasMachineInfo;
-(BOOL)hasProcessInfo;
-(PLCrashReportMachineInfo *)machineInfo;
-(PLCrashReportMachExceptionInfo *)machExceptionInfo;
-(CFUUIDRef)uuidRef;
-(void)dealloc;
-(PLCrashReportProcessInfo *)processInfo;
-(NSArray *)images;
-(NSArray *)threads;
-(PLCrashReportApplicationInfo *)applicationInfo;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(PLCrashReportSystemInfo *)systemInfo;
@end

