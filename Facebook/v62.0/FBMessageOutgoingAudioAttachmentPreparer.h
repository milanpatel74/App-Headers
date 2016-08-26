/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMessageOutgoingMediaAttachmentPreparing.h>

@protocol MNAuthenticationManager;
@class FBMessageAudioOutgoingAttachmentContent, FBMessageOutgoingAttribution, NSString, FBMediaUploadHandler, FBMessageAudioAttachmentPreparationListenerAnnouncer, FBMessageAudioAttachmentPreparationLogger, FBMessageAudioAttachmentStreamingPreprationListenerAnnouncer, NSDictionary;

@interface FBMessageOutgoingAudioAttachmentPreparer : NSObject <FBMessageOutgoingMediaAttachmentPreparing> {

	FBMessageAudioOutgoingAttachmentContent* _audioAttachmentContent;
	FBMessageOutgoingAttribution* _outgoingAttribution;
	NSString* _parentMessageOfflineId;
	id<MNAuthenticationManager> _authManager;
	FBMediaUploadHandler* _uploadHandler;
	FBMessageAudioAttachmentPreparationListenerAnnouncer* _preparationAnnouncer;
	FBMessageAudioAttachmentPreparationLogger* _preparationLogger;
	FBMessageAudioAttachmentStreamingPreprationListenerAnnouncer* _mediaPreparationAnnouncer;
	NSDictionary* _extraLoggingData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAudioAttachmentContent:(id)arg1 outgoingAttribution:(id)arg2 extraLoggingData:(id)arg3 parentMessageOfflineId:(id)arg4 authManager:(id)arg5 analytics:(id)arg6 uploadHandler:(id)arg7 audioPreparationListener:(id)arg8 ;
-(NSString *)description;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end
