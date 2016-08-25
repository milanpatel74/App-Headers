//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, TLInputFileLocation;

@protocol TGFileDownloadActor <NSObject>
- (void)fileDownloadProgress:(long long)arg1 fileId:(int)arg2 secret:(long long)arg3 progress:(float)arg4;
- (void)fileDownloadFailed:(long long)arg1 fileId:(int)arg2 secret:(long long)arg3;
- (void)fileDownloadSuccess:(long long)arg1 fileId:(int)arg2 secret:(long long)arg3 data:(NSData *)arg4;

@optional
- (void)filePartDownloadFailed:(TLInputFileLocation *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)filePartDownloadSuccess:(TLInputFileLocation *)arg1 offset:(int)arg2 length:(int)arg3 data:(NSData *)arg4;
- (void)filePartDownloadProgress:(TLInputFileLocation *)arg1 offset:(int)arg2 length:(int)arg3 packetLength:(int)arg4 progress:(float)arg5;
@end
