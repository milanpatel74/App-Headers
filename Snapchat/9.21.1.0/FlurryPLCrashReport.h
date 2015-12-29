//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlurryPLCrashReportApplicationInfo, FlurryPLCrashReportExceptionInfo, FlurryPLCrashReportMachExceptionInfo, FlurryPLCrashReportMachineInfo, FlurryPLCrashReportProcessInfo, FlurryPLCrashReportSignalInfo, FlurryPLCrashReportSystemInfo, NSArray;

@interface FlurryPLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    FlurryPLCrashReportSystemInfo *_systemInfo;
    FlurryPLCrashReportMachineInfo *_machineInfo;
    FlurryPLCrashReportApplicationInfo *_applicationInfo;
    FlurryPLCrashReportProcessInfo *_processInfo;
    FlurryPLCrashReportSignalInfo *_signalInfo;
    FlurryPLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    FlurryPLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

@property(readonly, nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;
@property(readonly, nonatomic) FlurryPLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly, nonatomic) FlurryPLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(readonly, nonatomic) FlurryPLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(readonly, nonatomic) FlurryPLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) FlurryPLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, nonatomic) FlurryPLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(readonly, nonatomic) FlurryPLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) _Bool hasExceptionInfo;
@property(readonly, nonatomic) _Bool hasProcessInfo;
@property(readonly, nonatomic) _Bool hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

