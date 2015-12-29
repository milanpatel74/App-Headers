//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGOverlayController.h"

@class AVPlayer, AVPlayerLayer, AVURLAsset, NSString, NSURL, SMetaDisposable, TGAssetImageView, TGMediaPickerAsset, TGMessageImageViewOverlayView, TGModernButton, TGObserverProxy, TGVideoConverter, TGVideoPreviewView, UIImage, UIView;

@interface TGVideoPreviewController : TGOverlayController
{
    NSURL *_assetUrl;
    AVURLAsset *_urlAsset;
    UIImage *_thumbnailImage;
    _Bool _enableServerAssetCache;
    struct CGAffineTransform _videoTransform;
    TGAssetImageView *_thumbnailView;
    UIView *_panelView;
    TGModernButton *_cancelButton;
    TGModernButton *_sendButton;
    TGModernButton *_playPauseButton;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    TGVideoPreviewView *_playerView;
    UIView *_progressContainer;
    TGModernButton *_progressButton;
    TGMessageImageViewOverlayView *_progressView;
    TGVideoConverter *_converter;
    float _progress;
    _Bool _isPlaying;
    TGObserverProxy *_pauseProxy;
    UIView *_snapshotView;
    UIView *_snapshotDimmingView;
    NSString *_cachedVideoAssetIdForHD;
    NSString *_cachedVideoAssetIdForSD;
    SMetaDisposable *_currentAudioSession;
    _Bool _fromCamera;
    _Bool _liveUpload;
    TGMediaPickerAsset *_asset;
    CDUnknownBlockType _videoPicked;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool liveUpload; // @synthesize liveUpload=_liveUpload;
@property(copy, nonatomic) CDUnknownBlockType videoPicked; // @synthesize videoPicked=_videoPicked;
@property(nonatomic) _Bool fromCamera; // @synthesize fromCamera=_fromCamera;
@property(readonly, nonatomic) TGMediaPickerAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)dismissAnimated:(_Bool)arg1;
- (void)progressCancelPressed;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)playPausePressed;
- (void)videoConversionCompleted:(id)arg1 dimensions:(struct CGSize)arg2 duration:(double)arg3 liveUploadData:(id)arg4 highDefinition:(_Bool)arg5;
- (void)updateProgress:(float)arg1;
- (void)commitSend:(_Bool)arg1 expectedFileSize:(unsigned long long)arg2;
- (void)convertAndSend;
- (void)sendPressed;
- (id)hashForVideoWithSize:(unsigned long long)arg1 highDefinition:(_Bool)arg2 timingData:(id)arg3 dataReadBlock:(CDUnknownBlockType)arg4;
- (void)computeVideoAssetId:(CDUnknownBlockType)arg1 highDefinition:(_Bool)arg2;
- (id)formatFileSize:(unsigned long long)arg1;
- (void)cancelPressed;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)pauseImage;
- (id)playImage;
- (void)transitionOutAnimated:(_Bool)arg1;
- (void)transitionInAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithItemAtURL:(id)arg1 thumbnailImage:(id)arg2 videoTransform:(struct CGAffineTransform)arg3 enableServerAssetCached:(_Bool)arg4;
- (id)initWithAsset:(id)arg1 enableServerAssetCache:(_Bool)arg2;

@end

