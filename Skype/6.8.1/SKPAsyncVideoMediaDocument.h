//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPALEMappedObject.h"

@class NSString, UIImage;

@interface SKPAsyncVideoMediaDocument : SKPALEMappedObject
{
    _Bool _downloadWasCanceled;
    UIImage *_videoThumbnailImage;
    NSString *_videoPath;
    unsigned long long _videoMediaStatus;
    unsigned long long _videoThumbnailImageMediaStatus;
    unsigned long long _videoDownloadProgress;
    unsigned long long _documentStatus;
    unsigned long long _videoUploadProgress;
    unsigned long long _videoUploadStatus;
}

+ (_Bool)mediaStatusIsFinal:(int)arg1;
+ (id)lazyLoadedPropertiesKeypaths;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(_Bool *)arg3;
+ (id)propertyMapping;
+ (Class)associatedALEClass;
@property(nonatomic) _Bool downloadWasCanceled; // @synthesize downloadWasCanceled=_downloadWasCanceled;
@property(nonatomic) unsigned long long videoUploadStatus; // @synthesize videoUploadStatus=_videoUploadStatus;
@property(nonatomic) unsigned long long videoUploadProgress; // @synthesize videoUploadProgress=_videoUploadProgress;
@property(readonly, nonatomic) unsigned long long documentStatus; // @synthesize documentStatus=_documentStatus;
@property(nonatomic) unsigned long long videoDownloadProgress; // @synthesize videoDownloadProgress=_videoDownloadProgress;
@property(nonatomic) unsigned long long videoThumbnailImageMediaStatus; // @synthesize videoThumbnailImageMediaStatus=_videoThumbnailImageMediaStatus;
@property(nonatomic) unsigned long long videoMediaStatus; // @synthesize videoMediaStatus=_videoMediaStatus;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *videoThumbnailImage; // @synthesize videoThumbnailImage=_videoThumbnailImage;
- (void).cxx_destruct;
- (void)retryVideoDownload;
- (void)cancelDownload;
- (void)retryWithForceSync:(_Bool)arg1;
- (void)sync;
- (_Bool)upload;
- (void)setSkyLibMediaStatus:(int)arg1 forProfile:(id)arg2;
- (void)setSkyLibUploadStatus:(int)arg1 forProfile:(id)arg2;
- (void)OnUploadStatusChanged:(id)arg1 andContentid:(id)arg2 andStatus:(int)arg3;
- (void)OnUploadProgress:(id)arg1 andContentid:(id)arg2 andSizeuploaded:(unsigned int)arg3 andTotalsize:(unsigned int)arg4;
- (void)OnUploadError:(id)arg1 andContentid:(id)arg2 andError:(int)arg3 andIscritical:(_Bool)arg4;
- (void)OnMediaLinkStatusChange:(id)arg1 andStatus:(int)arg2 andProfile:(id)arg3 andPath:(id)arg4;
- (void)OnMediaLinkProgress:(id)arg1 andProfile:(id)arg2 andPreparationpercents:(unsigned int)arg3 andSizedownloaded:(unsigned int)arg4 andTotalsize:(unsigned int)arg5;
- (void)OnDownloadError:(id)arg1 andProfile:(id)arg2 andError:(int)arg3 andIscritical:(_Bool)arg4;
- (_Bool)flushLazyProperty:(id)arg1;
- (id)fetchVideoOperation;
- (id)fetchVideoOperationWithProfile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)videoForProfile:(id)arg1 mediaDocument:(id)arg2;
- (id)fetchImageOperationWithProfile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)fetchVideoThumbnailOperation;
- (id)videoThumbnailForProfile:(id)arg1 mediaDocument:(id)arg2;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (int)policyForProfile:(id)arg1;
- (void)initializeObject;
- (void)initializeALEObjectWithObjectId:(unsigned long long)arg1;
- (id)otherPropertyKeysToIncludeInDebugDescription;

@end
