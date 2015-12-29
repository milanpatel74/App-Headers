//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPALEMappedObject.h"

@class NSArray, NSDictionary, NSString;

@interface SKPFileSharingDocument : SKPALEMappedObject
{
    _Bool _downloadWasCanceled;
    _Bool _metaDataPropertiesChanged;
    NSString *_filePath;
    unsigned long long _fileMediaStatus;
    unsigned long long _documentStatus;
    NSDictionary *_metaDataProperties;
    NSString *_originalName;
    unsigned long long _fileDownloadProgress;
    unsigned long long _fileSizeDownloaded;
}

+ (_Bool)mediaStatusIsFinal:(int)arg1;
+ (id)lazyLoadedPropertiesKeypaths;
+ (id)keyPathsForValuesAffectingMetaDataProperties;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(_Bool *)arg3;
+ (id)propertyMapping;
+ (Class)associatedALEClass;
@property(nonatomic) _Bool metaDataPropertiesChanged; // @synthesize metaDataPropertiesChanged=_metaDataPropertiesChanged;
@property(nonatomic) unsigned long long fileSizeDownloaded; // @synthesize fileSizeDownloaded=_fileSizeDownloaded;
@property(nonatomic) unsigned long long fileDownloadProgress; // @synthesize fileDownloadProgress=_fileDownloadProgress;
@property(nonatomic) _Bool downloadWasCanceled; // @synthesize downloadWasCanceled=_downloadWasCanceled;
@property(copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSDictionary *metaDataProperties; // @synthesize metaDataProperties=_metaDataProperties;
@property(readonly, nonatomic) unsigned long long documentStatus; // @synthesize documentStatus=_documentStatus;
@property(nonatomic) unsigned long long fileMediaStatus; // @synthesize fileMediaStatus=_fileMediaStatus;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)retryWithForceSync:(_Bool)arg1;
- (void)cancelDownload;
- (void)sync;
- (void)setSkyLibMediaStatus:(int)arg1 forProfile:(id)arg2;
- (void)OnMediaLinkStatusChange:(id)arg1 andStatus:(int)arg2 andProfile:(id)arg3 andPath:(id)arg4;
- (void)OnMediaLinkProgress:(id)arg1 andProfile:(id)arg2 andPreparationpercents:(unsigned int)arg3 andSizedownloaded:(unsigned int)arg4 andTotalsize:(unsigned int)arg5;
- (void)OnDownloadError:(id)arg1 andProfile:(id)arg2 andError:(int)arg3 andIscritical:(_Bool)arg4;
- (void)OnMetadataUpdated:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *intMetaPropertyNames; // @dynamic intMetaPropertyNames;
@property(readonly, copy, nonatomic) NSArray *stringMetaPropertyNames; // @dynamic stringMetaPropertyNames;
- (id)fetchMetaDataProperties;
- (id)fetchFileOperation;
- (id)fetchFileOperationWithProfile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (_Bool)flushLazyProperty:(id)arg1;
- (void)initializeObject;
- (void)initializeALEObjectWithObjectId:(unsigned long long)arg1;
- (id)otherPropertyKeysToIncludeInDebugDescription;

@end

