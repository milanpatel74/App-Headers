//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "TGFileDownloadActor.h"
#import "TGRawHttpActor.h"

@class NSData, NSString, TGNetworkWorkerGuard;

@interface TGFileDownloadActor : TGActor <TGRawHttpActor, TGFileDownloadActor>
{
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    int _finalFileSize;
    id _workerToken;
    _Bool _alreadyCompleted;
    TGNetworkWorkerGuard *_worker;
}

+ (id)genericPath;
@property(nonatomic) _Bool alreadyCompleted; // @synthesize alreadyCompleted=_alreadyCompleted;
@property(retain, nonatomic) TGNetworkWorkerGuard *worker; // @synthesize worker=_worker;
- (void).cxx_destruct;
- (void)cancel;
- (void)filePartDownloadFailed:(id)arg1 offset:(int)arg2 length:(int)arg3;
- (void)filePartDownloadSuccess:(id)arg1 offset:(int)arg2 length:(int)arg3 data:(id)arg4;
- (void)filePartDownloadProgress:(id)arg1 offset:(int)arg2 length:(int)arg3 packetLength:(int)arg4 progress:(float)arg5;
- (void)httpRequestFailed:(id)arg1;
- (void)httpRequestProgress:(id)arg1 progress:(float)arg2;
- (void)httpRequestSuccess:(id)arg1 response:(id)arg2;
- (void)fileDownloadProgress:(long long)arg1 fileId:(int)arg2 secret:(long long)arg3 progress:(float)arg4;
- (void)fileDownloadFailed:(long long)arg1 fileId:(int)arg2 secret:(long long)arg3;
- (void)fileDownloadSuccess:(long long)arg1 fileId:(int)arg2 secret:(long long)arg3 data:(id)arg4;
- (void)completeWithData:(id)arg1;
- (void)execute:(id)arg1;
- (void)prepare:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

