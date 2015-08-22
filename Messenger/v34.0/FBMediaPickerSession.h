/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBMediaPickerTaggingSearchProvider, FBMediaGalleryBannerProviderProtocol;
@class FBImageFilterLogger, FBStickersInPhotosLogger, FBTextOnPhotosLogger, FBCropLogger, FBUnifiedMediaGalleryLogger, FBCreativeEditingToolsLoggerAggregator, NSString, FBMediaPickerLogger, FBMediaPickerDataSourceManager, FBMediaPickerNuxController, FBMediaPickerAppearance, FBUserSession, FBMediaPickerBaseTraits;

@interface FBMediaPickerSession : NSObject {

	id<FBMediaPickerTaggingSearchProvider> _taggingSearchProvider;
	BOOL _sessionStarted;
	BOOL _sessionStartedWithCameraRollAccess;
	unsigned long long _authorizedSessionStartTime;
	BOOL _ttiLoggingStopped;
	FBImageFilterLogger* _filterLoggerInternal;
	FBStickersInPhotosLogger* _stickersLoggerInternal;
	FBTextOnPhotosLogger* _textOnPhotosLoggerInternal;
	FBCropLogger* _cropLoggerInternal;
	FBUnifiedMediaGalleryLogger* _unifiedMediaGalleryLoggerInternal;
	FBCreativeEditingToolsLoggerAggregator* _creativeEditingToolsLoggerAggregatorInternal;
	BOOL _stickerEnabled;
	BOOL _textOnPhotoEnabled;
	BOOL _unifiedGalleryEnabled;
	NSString* _uniqueIdentifier;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	NSString* _sessionID;
	FBMediaPickerLogger* _logger;
	FBMediaPickerDataSourceManager* _dataSourceManager;
	FBMediaPickerNuxController* _nuxController;
	unsigned long long _pickerStyle;
	FBMediaPickerAppearance* _pickerAppearance;
	FBUserSession* _currentFBSession;

}

@property (nonatomic,readonly) FBMediaPickerBaseTraits * traits; 
@property (nonatomic,readonly) id<FBAvatarTaggingSectionDataSource> tagSearchDataSource; 
@property (nonatomic,copy,readonly) NSString * sessionID;                                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) FBMediaPickerLogger * logger;                                                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) FBMediaPickerDataSourceManager * dataSourceManager;                                         //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) FBMediaPickerNuxController * nuxController;                                                 //@synthesize nuxController=_nuxController - In the implementation block
@property (nonatomic,readonly) id<FBMediaGalleryBannerProviderProtocol> bannerProvider; 
@property (nonatomic,readonly) unsigned long long pickerStyle;                                                             //@synthesize pickerStyle=_pickerStyle - In the implementation block
@property (nonatomic,readonly) FBMediaPickerAppearance * pickerAppearance;                                                 //@synthesize pickerAppearance=_pickerAppearance - In the implementation block
@property (nonatomic,readonly) FBUserSession * currentFBSession;                                                           //@synthesize currentFBSession=_currentFBSession - In the implementation block
@property (nonatomic,readonly) BOOL sessionStarted;                                                                        //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (nonatomic,readonly) FBImageFilterLogger * filterLogger; 
@property (nonatomic,readonly) FBCropLogger * cropLogger; 
@property (nonatomic,readonly) FBCreativeEditingToolsLoggerAggregator * creativeEditingToolsLoggerAggregator; 
@property (nonatomic,readonly) FBStickersInPhotosLogger * stickersLogger; 
@property (nonatomic,readonly) FBTextOnPhotosLogger * textOnPhotosLogger; 
@property (nonatomic,readonly) FBUnifiedMediaGalleryLogger * unifiedGalleryLogger; 
-(FBUserSession *)currentFBSession;
-(FBMediaPickerDataSourceManager *)dataSourceManager;
-(FBCropLogger *)cropLogger;
-(FBImageFilterLogger *)filterLogger;
-(FBTextOnPhotosLogger *)textOnPhotosLogger;
-(FBStickersInPhotosLogger *)stickersLogger;
-(FBUnifiedMediaGalleryLogger *)unifiedGalleryLogger;
-(FBCreativeEditingToolsLoggerAggregator *)creativeEditingToolsLoggerAggregator;
-(void)logSessionTTIIfNeeded;
-(FBMediaPickerNuxController *)nuxController;
-(void)cancelSessionTTI;
-(id)initWithTraits:(id)arg1 style:(unsigned long long)arg2 taggingSearchProvider:(id)arg3 bannerProvider:(id)arg4 sessionID:(id)arg5 currentFBSession:(id)arg6 mediaDataSourceManager:(id)arg7 ;
-(id<FBAvatarTaggingSectionDataSource>)tagSearchDataSource;
-(id<FBMediaGalleryBannerProviderProtocol>)bannerProvider;
-(void)markSessionStartIfNeeded;
-(FBMediaPickerAppearance *)pickerAppearance;
-(unsigned long long)pickerStyle;
-(id)init;
-(id)_uniqueIdentifier;
-(FBMediaPickerBaseTraits *)traits;
-(BOOL)sessionStarted;
-(NSString *)sessionID;
-(FBMediaPickerLogger *)logger;
@end
