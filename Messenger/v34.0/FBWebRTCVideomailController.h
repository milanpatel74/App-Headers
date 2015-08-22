/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCaptureManagerDelegate.h>
#import <Messenger/FBWebRTCVideomailViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBWebRTCVideomailControllerDelegate;
@class FBWebRTCVideomailView, FBCaptureManager, _FBWebRTCVideomailRecordHolder, MNPhotoImageRequester, MNPhotoImageUploadResultCacher, FBUserSession, NSTimer, NSString;

@interface FBWebRTCVideomailController : NSObject <FBCaptureManagerDelegate, FBWebRTCVideomailViewDelegate, FBClassProvidable> {

	FBWebRTCVideomailView* _videomailView;
	FBCaptureManager* _captureManager;
	_FBWebRTCVideomailRecordHolder* _recordHolder;
	MNPhotoImageRequester* _imageRequester;
	MNPhotoImageUploadResultCacher* _uploadResultCacher;
	FBUserSession* _userSession;
	NSTimer* _videoTimer;
	NSTimer* _startRecordingTimer;
	BOOL _isInfoViewHidden;
	BOOL _reachedMaxDuration;
	id<FBWebRTCVideomailControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCVideomailControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerSessionDidStart:(id)arg1 ;
-(void)captureManager:(id)arg1 didChangeCapturePositionTo:(long long)arg2 ;
-(CGSize)captureManagerVideoInputSize:(id)arg1 ;
-(id)addFilterToPhoto:(id)arg1 ;
-(void)captureManager:(id)arg1 didCaptureImage:(id)arg2 metadata:(id)arg3 cameraPosition:(long long)arg4 ;
-(void)captureManagerDidStartCaptureVideo:(id)arg1 ;
-(void)captureManager:(id)arg1 didCaptureVideo:(id)arg2 thumbnail:(id)arg3 cameraPosition:(long long)arg4 ;
-(void)captureManagerDidFailToCaptureVideo:(id)arg1 ;
-(id)initWithCaptureManager:(id)arg1 uploadResultCacher:(id)arg2 imageRequester:(id)arg3 userSession:(id)arg4 ;
-(void)_reachedMaxDuration;
-(void)_invalidateAndNilVideoTimer;
-(void)_invalidateAndNilStartTimer;
-(void)_stopSession;
-(id)_buildVideoAttachmentForAsset:(id)arg1 thumbnail:(id)arg2 ;
-(id)_getPreviewLayer;
-(void)_cancelVideomail;
-(void)videomailViewDidPressBack;
-(void)videomailViewDidPressSwitchCamera;
-(void)videomailViewDidStartRecording;
-(void)videomailViewDidStopRecording;
-(void)videomailViewDidCancelRecording;
-(void)ensureSessionStopped;
-(void)setVideomailView:(id)arg1 ;
-(void)_stopRecording;
-(void)_startRecording;
-(void)dealloc;
-(void)setDelegate:(id<FBWebRTCVideomailControllerDelegate>)arg1 ;
-(id)init;
-(id<FBWebRTCVideomailControllerDelegate>)delegate;
-(void)startSession;
@end
