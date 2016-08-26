/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBCameraComponentCaptureDelegate.h>
#import <Messenger/FBCameraComponentModelChangedListener.h>
#import <Messenger/FBCameraSwipeableFramesNUXViewDelegate.h>
#import <Messenger/FBCameraViewFinderListener.h>
#import <Messenger/FBSwipeableFramesPreviewViewDelegate.h>

@protocol FBCameraComponentCaptureDelegateFBCameraCloseEventHandlerDelegate, FBSwipeableFramesLogger, FBCameraComponentModelManager;
@class FBCameraComponentViewController, FBGraphQLQuery, FBSwipeableFramesDownloader, FBSwipeableFramesNUX, FBSwipeableFramesPageViewController, NSArray, FBSwipeableFramesPreviewView, FBUserSession, FBSwipeableFramesStickerDownloader, NSMutableArray, FBCameraViewFinderListenerAnnouncer, UIActivityIndicatorView, AVURLAsset, NSString;

@interface FBCameraSwipeableFramesViewController : UIViewController <FBCameraComponentCaptureDelegate, FBCameraComponentModelChangedListener, FBCameraSwipeableFramesNUXViewDelegate, FBCameraViewFinderListener, FBSwipeableFramesPreviewViewDelegate> {

	long long _cameraPosition;
	FBCameraComponentViewController* _cameraViewController;
	id<FBCameraComponentCaptureDelegate><FBCameraCloseEventHandlerDelegate> _componentCameraDelegate;
	CGRect _frameOfViewFinder;
	FBGraphQLQuery* _frameQuery;
	unsigned long long _framesNeededToBeConstructedIndex;
	FBSwipeableFramesDownloader* _framesDownloader;
	FBSwipeableFramesNUX* _framesNUX;
	int _framesType;
	BOOL _hasShownFrames;
	BOOL _hasSwipedInFrame;
	unsigned long long _initialFrameIndex;
	BOOL _keepFramesOrder;
	id<FBSwipeableFramesLogger> _logger;
	id<FBCameraComponentModelManager> _modelManager;
	unsigned long long _numberOfFramesDownloaded;
	unsigned long long _numberOfFramesToDownload;
	FBSwipeableFramesPageViewController* _pageViewController;
	NSArray* _preloadedFramesData;
	FBSwipeableFramesPreviewView* _previewView;
	FBUserSession* _session;
	FBSwipeableFramesStickerDownloader* _stickerDownloader;
	NSMutableArray* _swipeableFrames;
	FBCameraViewFinderListenerAnnouncer* _viewFinderAnnouncer;
	UIActivityIndicatorView* _videoGeneratingTransitionSpinnerView;
	AVURLAsset* _videoURLAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCaptureImage:(id)arg1 ;
-(void)didCaptureVideo:(id)arg1 thumbnail:(id)arg2 cameraPosition:(long long)arg3 ;
-(void)cameraComponentModelChangedFromPreviousCameraComponentModel:(id)arg1 toCurrentCameraComponentModel:(id)arg2 ;
-(void)_downloadAssetsWithFramesMetaData:(id)arg1 ;
-(void)_fetchSwipeableFramesData;
-(void)_hideVideoGeneratingTransitionViews;
-(void)_showFrameNUXBasedOnCaptureState;
-(void)_handleAllFramesDownloadWithFrames:(id)arg1 ;
-(void)_handleSingleFrameDownloadWithFrame:(id)arg1 ;
-(BOOL)_readyToLayoutStickers;
-(void)_layoutStickersForEachFrame;
-(CGRect)_calculateFrameOfPageView;
-(void)_swipeInFrame;
-(void)_setupVideoGeneratingTransitionViewsIfNeeded;
-(void)_showVideoPreview;
-(void)hideNUX;
-(void)_logStartCaptureEvent;
-(void)_removeVideoPreview;
-(void)_showVideoGeneratingTransitionViewsWithFrame;
-(void)_createVideoWithFrameWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleVideoAppliedWithVideoWithFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatedCameraViewFinder:(id)arg1 ;
-(void)didTapSwipeableFramesPreviewViewRetakeButton;
-(void)didTapSwipeableFramesPreviewViewNextButton;
-(void)previewDidBeginPlayingVideo;
-(void)previewDidPausePlayingVideo;
-(void)previewDidRestartPlayingVideo;
-(id)initWithAppearanceProvider:(id)arg1 componentProvider:(Class)arg2 requiredPermissions:(unsigned long long)arg3 modelManager:(id)arg4 frameQuery:(id)arg5 framesType:(int)arg6 preloadedFrames:(id)arg7 initialFrameIndex:(unsigned long long)arg8 keepFramesOrder:(BOOL)arg9 componentCameraDelegate:(id)arg10 extraAnalyticsData:(id)arg11 session:(id)arg12 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
