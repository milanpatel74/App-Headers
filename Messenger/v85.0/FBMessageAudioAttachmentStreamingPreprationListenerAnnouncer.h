/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBMessageAudioAttachmentStreamingPreprationListener.h>

@class NSString;

@interface FBMessageAudioAttachmentStreamingPreprationListenerAnnouncer : FBAnnouncerBase <FBMessageAudioAttachmentStreamingPreprationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPrepareAudioContent:(id)arg1 forMessageOfflineId:(id)arg2 ;
-(void)willComputeHash;
-(void)didComputeHash:(id)arg1 ;
-(void)willQueryFbId;
-(void)didQueryFbId:(id)arg1 ;
-(void)willResumeWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)willUploadWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2 ;
-(void)didProgressUploadTo:(float)arg1 ;
-(void)didFailToUploadWithError:(id)arg1 metrics:(id)arg2 ;
-(void)didCompleteUploadWithFbId:(id)arg1 metrics:(id)arg2 ;
-(void)didCancelUploadWithMetrics:(id)arg1 ;
-(void)didPrepare;
-(void)didFailToPrepareWithError:(id)arg1 ;
-(void)didCancelPreparation;
-(void)willCompress;
-(void)didCompressWithData:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
