//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRConnectionHandler.h"

@class CRCrashArchive, NSString;

@interface CRCrashConnectionHandler : CRConnectionHandler
{
    NSString *_path;
    CRCrashArchive *_crashArchive;
}

- (void)setCrashArchive:(id)arg1;
- (id)crashArchive;
- (void)setPath:(id)arg1;
- (id)path;
- (void)handleError:(id)arg1;
- (void)handleResponse:(long long)arg1 andData:(id)arg2;
- (void)dealloc;
- (id)initWithCritterDelegate:(id)arg1 andCrashArchive:(id)arg2 andReportPath:(id)arg3;

@end

