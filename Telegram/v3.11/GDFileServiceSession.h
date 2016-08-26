/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, GDFileService;

@interface GDFileServiceSession : NSObject {

	BOOL _readOnly;
	BOOL _userVisible;
	BOOL _available;
	NSURL* _baseURL;
	GDFileService* _fileService;

}

@property (nonatomic,readonly) NSURL * baseURL;                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,__weak,readonly) GDFileService * fileService;               //@synthesize fileService=_fileService - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                    //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) BOOL shouldCacheResults; 
@property (assign,getter=isUserVisible,nonatomic) BOOL userVisible;              //@synthesize userVisible=_userVisible - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available;                //@synthesize available=_available - In the implementation block
-(id)initWithBaseURL:(id)arg1 fileService:(id)arg2 ;
-(GDFileService *)fileService;
-(void)unlink;
-(id)downloadURL:(id)arg1 intoFileURL:(id)arg2 progress:(/*^block*/id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(id)canonicalURLForURL:(id)arg1 ;
-(id)downloadURL:(id)arg1 intoFileURL:(id)arg2 fileVersion:(id)arg3 progress:(/*^block*/id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(id)clientMetadataArrayWithCachedMetadataArray:(id)arg1 parentURL:(id)arg2 cache:(id)arg3 ;
-(void)getContentsOfDirectoryAtURL:(id)arg1 metadataCache:(id)arg2 cachedMetadata:(id)arg3 cachedContents:(id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(void)getMetadataForURL:(id)arg1 metadataCache:(id)arg2 cachedMetadata:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)getLatestVersionIdentifierForURL:(id)arg1 metadataCache:(id)arg2 cachedMetadata:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)deleteURL:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)filenameAvoidingConflictsWithExistingContents:(id)arg1 preferredFilename:(id)arg2 ;
-(void)copyFileAtURL:(id)arg1 toParentURL:(id)arg2 name:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)moveFileAtURL:(id)arg1 toParentURL:(id)arg2 name:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(BOOL)shouldCacheResults;
-(id)normalisedPathForPath:(id)arg1 ;
-(id)clientMetadataWithCachedMetadata:(id)arg1 parentURL:(id)arg2 ;
-(void)addMetadata:(id)arg1 parentURL:(id)arg2 toCache:(id)arg3 continuation:(/*^block*/id)arg4 ;
-(id)cacheURLForURL:(id)arg1 versionIdentifier:(id)arg2 cachedMetadata:(id*)arg3 ;
-(BOOL)automaticallyAvoidsUploadOverwrites;
-(id)userDescription;
-(id)detailDescription;
-(void)validateAccessWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)uploadFileURL:(id)arg1 mimeType:(id)arg2 toDestinationURL:(id)arg3 parentVersionID:(id)arg4 internalUploadState:(id)arg5 uploadStateHandler:(/*^block*/id)arg6 progress:(/*^block*/id)arg7 success:(/*^block*/id)arg8 failure:(/*^block*/id)arg9 ;
-(id)uploadFileURL:(id)arg1 filename:(id)arg2 mimeType:(id)arg3 toParentFolderURL:(id)arg4 uploadStateHandler:(/*^block*/id)arg5 progress:(/*^block*/id)arg6 success:(/*^block*/id)arg7 failure:(/*^block*/id)arg8 ;
-(id)_canonicalURLForURL:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isUserVisible;
-(NSURL *)baseURL;
-(BOOL)isReadOnly;
-(void)setUserVisible:(BOOL)arg1 ;
-(BOOL)isAvailable;
@end
