/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCaptureManagerListener.h>

@protocol FBCameraGestureRecognizerEvent;
@class FBCaptureManager, NSString;

@interface FBCameraPinchEventHandler : NSObject <FBCaptureManagerListener> {

	FBCaptureManager* _captureManager;
	id<FBCameraGestureRecognizerEvent> _pinchEvent;
	double _zoomAnchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureManagerCapturedImage:(id)arg1 metadata:(id)arg2 cameraPosition:(long long)arg3 orientation:(long long)arg4 ;
-(void)captureManagerCapturedVideo:(id)arg1 thumbnail:(id)arg2 cameraPosition:(long long)arg3 ;
-(void)captureManagerDidFailToCaptureImage;
-(void)captureManagerDidFailToCaptureVideo;
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingAudioSession;
-(void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingCaptureSession;
-(void)captureManagerHasEndedCaptureSession;
-(void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2 ;
-(void)_didPinch:(id)arg1 ;
-(id)initWithCaptureManager:(id)arg1 pinchEvent:(id)arg2 ;
@end

