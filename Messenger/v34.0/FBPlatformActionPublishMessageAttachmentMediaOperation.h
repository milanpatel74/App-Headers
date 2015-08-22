/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperation.h>
#import <Messenger/FBMediaUploadItemManagerDelegate.h>
#import <Messenger/FBPlatformActionPublisherOperating.h>

@protocol FBNetworkDispatch;
@class FBMediaUploadItemManager, FBComposerPublisherData, FBComposerLogger, FBPersistentKeyValueStore, FBExperimentManager, FBFileSystemObjectCacheFactory, FBPreferences, FBUserPreferences, NSString;

@interface FBPlatformActionPublishMessageAttachmentMediaOperation : FBPlatformActionOperation <FBMediaUploadItemManagerDelegate, FBPlatformActionPublisherOperating> {

	FBMediaUploadItemManager* _actionMediaUploadManager;
	FBComposerPublisherData* _publisherDataForUploadManager;
	FBComposerLogger* _logger;
	FBPersistentKeyValueStore* _persistentKeyValueStore;
	FBExperimentManager* _experimentManager;
	id<FBNetworkDispatch> _networkDispatcher;
	FBFileSystemObjectCacheFactory* _fileSystemCacheFactory;
	FBPreferences* _sessionPreferences;
	FBUserPreferences* _userPreferences;

}

@property (nonatomic,retain) FBMediaUploadItemManager * actionMediaUploadManager;                    //@synthesize actionMediaUploadManager=_actionMediaUploadManager - In the implementation block
@property (nonatomic,retain) FBComposerPublisherData * publisherDataForUploadManager;                //@synthesize publisherDataForUploadManager=_publisherDataForUploadManager - In the implementation block
@property (nonatomic,readonly) FBComposerLogger * logger;                                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) FBPersistentKeyValueStore * persistentKeyValueStore;                  //@synthesize persistentKeyValueStore=_persistentKeyValueStore - In the implementation block
@property (nonatomic,readonly) FBExperimentManager * experimentManager;                              //@synthesize experimentManager=_experimentManager - In the implementation block
@property (nonatomic,readonly) id<FBNetworkDispatch> networkDispatcher;                              //@synthesize networkDispatcher=_networkDispatcher - In the implementation block
@property (nonatomic,readonly) FBFileSystemObjectCacheFactory * fileSystemCacheFactory;              //@synthesize fileSystemCacheFactory=_fileSystemCacheFactory - In the implementation block
@property (nonatomic,readonly) FBPreferences * sessionPreferences;                                   //@synthesize sessionPreferences=_sessionPreferences - In the implementation block
@property (nonatomic,readonly) FBUserPreferences * userPreferences;                                  //@synthesize userPreferences=_userPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBUserPreferences *)userPreferences;
-(FBPreferences *)sessionPreferences;
-(id<FBNetworkDispatch>)networkDispatcher;
-(FBExperimentManager *)experimentManager;
-(FBPersistentKeyValueStore *)persistentKeyValueStore;
-(void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2 ;
-(void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2 ;
-(void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3 ;
-(void)uploadManager:(id)arg1 didUpdateTotalProgress:(double)arg2 ;
-(void)completedUploadAllMedia:(id)arg1 ;
-(id)defaultErrorMessage;
-(void)setPublisherDataForUploadManager:(FBComposerPublisherData *)arg1 ;
-(void)_cancelActionMediaUploadManager;
-(void)setActionMediaUploadManager:(FBMediaUploadItemManager *)arg1 ;
-(FBFileSystemObjectCacheFactory *)fileSystemCacheFactory;
-(id)initWithAction:(id)arg1 logger:(id)arg2 persistentKeyValueStore:(id)arg3 experimentManager:(id)arg4 networkDispatcher:(id)arg5 fileSystemCacheFactory:(id)arg6 sessionPreferences:(id)arg7 userPreferences:(id)arg8 ;
-(FBComposerPublisherData *)publisherDataForUploadManager;
-(FBMediaUploadItemManager *)actionMediaUploadManager;
-(void)cancel;
-(void)cleanup;
-(void)process;
-(id)initWithAction:(id)arg1 ;
-(FBComposerLogger *)logger;
@end
