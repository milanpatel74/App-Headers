//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDParentOperation.h"

@class GDFileManager, NSString, NSURL;

@interface GDFileManagerDownloadOperation : GDParentOperation
{
    NSURL *_localDestinationFileURL;
    GDFileManager *_fileManager;
    NSURL *_sourceURL;
    NSString *_fileVersion;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

@property(readonly, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(retain, nonatomic) NSString *fileVersion; // @synthesize fileVersion=_fileVersion;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) GDFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *localDestinationFileURL; // @synthesize localDestinationFileURL=_localDestinationFileURL;
- (void).cxx_destruct;
- (void)downloadFile;
- (void)main;
- (id)initWithFileManager:(id)arg1 sourceURL:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

