/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCaptureManagerListener.h>
#import <Facebook/FBCameraComponentModelChangedListener.h>
#import <Facebook/FBInspirationControllerListener.h>
#import <Facebook/FBCameraCloseEventHandlerDelegate.h>

@protocol FBNavigationCoordinator, FBInspirationComposerOpenHandler, FBInspirationExperimentConfiguration, FBInspirationFlowDisplayerDelegate;
@class FBCameraFilterManager, FBUserSession, FBInspirationModel, FBCameraComponentViewController, FBInspirationCameraComponentModelManager, FBInspirationNUXModel, NSString;

@interface FBInspirationFlowDisplayer : NSObject <FBCaptureManagerListener, FBCameraComponentModelChangedListener, FBInspirationControllerListener, FBCameraCloseEventHandlerDelegate> {

	FBCameraFilterManager* _filterManager;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBInspirationComposerOpenHandler> _composerOpenHandler;
	FBInspirationModel* _pendingModelBeforeComponentLoaded;
	BOOL _captureSessionStarted;
	id<FBInspirationExperimentConfiguration> _experimentConfiguration;
	id<FBInspirationFlowDisplayerDelegate> _delegate;
	FBCameraComponentViewController* _cameraViewController;
	FBInspirationCameraComponentModelManager* _cameraModelManager;
	FBInspirationNUXModel* _nuxModel;

}

@property (assign,nonatomic,__weak) id<FBInspirationFlowDisplayerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBCameraComponentViewController * cameraViewController;                     //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (nonatomic,readonly) FBInspirationCameraComponentModelManager * cameraModelManager;              //@synthesize cameraModelManager=_cameraModelManager - In the implementation block
@property (nonatomic,readonly) FBInspirationNUXModel * nuxModel;                                           //@synthesize nuxModel=_nuxModel - In the implementation block
@property (nonatomic,readonly) BOOL cameraLoaded; 
@property (nonatomic,readonly) BOOL isCameraRunning; 
@property (nonatomic,readonly) long long cameraState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldShowNUX;
-(void)closeEventHandlerDidTapCloseButton;
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
-(void)presentInspirationCamera;
-(void)didDoubleTapFeedCameraWithGesture:(id)arg1 ;
-(void)inspirationControllerDidUpdatePreviousModel:(id)arg1 toCurrentModel:(id)arg2 ;
-(void)inspirationControllerDidUpdateAssetSelection:(id)arg1 ;
-(void)_dismissCameraViewController;
-(id)_getNUXKey;
-(BOOL)cameraLoaded;
-(void)prepareCameraSession;
-(void)_handleFilterFinishedDownloadingForAsset:(id)arg1 ;
-(void)cameraComponentModelChangedFromPreviousCameraComponentModel:(id)arg1 toCurrentCameraComponentModel:(id)arg2 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsModule:(id)arg3 composerOpenHandler:(id)arg4 ;
-(void)startCameraSession;
-(void)stopCameraSession;
-(void)setCameraExpanded:(BOOL)arg1 ;
-(BOOL)isCameraRunning;
-(void)resetCameraModelForBackToFeed;
-(void)updateCameraRatio:(double)arg1 ;
-(void)updateCameraPauseOverlayAlpha:(double)arg1 ;
-(void)nuxDidOpenCamera;
-(FBInspirationCameraComponentModelManager *)cameraModelManager;
-(FBInspirationNUXModel *)nuxModel;
-(void)setDelegate:(id<FBInspirationFlowDisplayerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBInspirationFlowDisplayerDelegate>)delegate;
-(long long)cameraState;
-(FBCameraComponentViewController *)cameraViewController;
@end
