/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <WhatsApp/WhatsApp-Structs.h>
@class NSObject, NSConditionLock, WAMessage, UIImage;

@interface WAMessageHelper : NSObject {

	NSObject*<OS_dispatch_queue> _generateImageRepresentationQueue;
	NSObject*<OS_dispatch_group> _thumbnailLoadingGroup;
	NSObject*<OS_dispatch_queue> _localThumbnailLoadingQueue;
	NSConditionLock* _xmppLoadingLock;
	int _activeOperationCount;
	BOOL _thumbnailLoadingInProgress;
	BOOL _mapThumbnailRequestInProgress;
	WAMessage* _message;
	UIImage* _imageRepresentation;
	UIImage* _xmppImage;
	UIImage* _blurredImage;
	double _cachedMediaDuration;

}

@property (assign,nonatomic,__weak) WAMessage * message;              //@synthesize message=_message - In the implementation block
@property (retain) UIImage * imageRepresentation;                     //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (retain) UIImage * xmppImage;                               //@synthesize xmppImage=_xmppImage - In the implementation block
@property (retain) UIImage * blurredImage;                            //@synthesize blurredImage=_blurredImage - In the implementation block
@property (assign,nonatomic) double cachedMediaDuration;              //@synthesize cachedMediaDuration=_cachedMediaDuration - In the implementation block
@property (assign) BOOL thumbnailLoadingInProgress;                   //@synthesize thumbnailLoadingInProgress=_thumbnailLoadingInProgress - In the implementation block
@property (assign) BOOL mapThumbnailRequestInProgress;                //@synthesize mapThumbnailRequestInProgress=_mapThumbnailRequestInProgress - In the implementation block
+(id)errorWithDescription:(id)arg1 failureReason:(id)arg2 ;
+(id)cachedThumbnailPathForLocation:(id)arg1 ;
+(id)stringRepresentationForChatForMessage:(id)arg1 ;
+(id)senderNameForStringRepresentationForMessage:(id)arg1 ;
+(id)stringRepresentationForMessage:(id)arg1 ;
+(id)stringRepresentationForNotificationForMessage:(id)arg1 ;
+(unsigned long long)blurredImagePreference;
+(double)blurredImageMaximumWidth;
+(id)messageTimestampForVoiceOverFromDate:(id)arg1 ;
+(CGSize)mediaBrowserThumbnailSize;
+(id)staticMediaBrowserThumbnail;
+(id)cachedThumbnailPathFromMediaPath:(id)arg1 ;
+(id)stringRepresentationForVoiceOverForMessage:(id)arg1 ;
+(BOOL)checkMediaSize:(id)arg1 error:(out id*)arg2 ;
+(id)jpegDataFromImage:(id)arg1 error:(out id*)arg2 ;
+(void)initialize;
+(id)messageHelperForMessage:(id)arg1 ;
+(id)alertStringToSendMultipleMessagesWithParts:(id)arg1 overflowed:(BOOL)arg2 ;
+(id)imageForMediaAtPath:(id)arg1 ;
+(double)durationOfMediaAtPath:(id)arg1 ;
+(Class)helperClassForMessage:(id)arg1 ;
-(void)fetchMapPreviewIfNecessary;
-(void)repeatedlyFetchBetterThumbnailsWithBlock:(/*^block*/id)arg1 ;
-(id)activityPlaceholderItem;
-(id)activityItemForActivityType:(id)arg1 ;
-(id)activitySubjectForActivityType:(id)arg1 ;
-(id)activityDataTypeIdentifierForActivityType:(id)arg1 ;
-(id)chatThumbnailReturningPermanentState:(out BOOL*)arg1 ;
-(CGSize)chatThumbnailSize;
-(void)internalGenerateChatThumbnailFromImageRepresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)internalGenerateXMPPThumbnailFromImageRepresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)internalFetchImageRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)generateImageRepresentationFromSourceMediaAtPath:(id)arg1 ;
-(void)fetchImageRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)internalGenerateMediaBrowserThumbnailFromImageRepresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)internalGenerateImageRepresentationFromSourceMediaAtPath:(id)arg1 ;
-(void)internalRepeatedlyFetchBetterThumbnailsWithBlock:(/*^block*/id)arg1 ;
-(void)generateXMPPThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateChatThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateMediaBrowserThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)storeOutgoingMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sanitizeIncomingMediaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeIncomingMediaWithFilename:(id)arg1 data:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messageDidStoreIncomingMedia;
-(void)prepareForDisplay;
-(void)setImageRepresentation:(UIImage *)arg1 ;
-(UIImage *)xmppImage;
-(void)freeCachedData;
-(BOOL)thumbnailLoadingInProgress;
-(BOOL)mapThumbnailRequestInProgress;
-(void)setThumbnailLoadingInProgress:(BOOL)arg1 ;
-(void)setXmppImage:(UIImage *)arg1 ;
-(void)setMapThumbnailRequestInProgress:(BOOL)arg1 ;
-(void)setBlurredImage:(UIImage *)arg1 ;
-(double)cachedMediaDuration;
-(void)setCachedMediaDuration:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(WAMessage *)message;
-(void)setMessage:(WAMessage *)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(UIImage *)blurredImage;
-(BOOL)isProcessing;
-(UIImage *)imageRepresentation;
@end

