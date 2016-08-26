/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/AVAsynchronousKeyValueLoading.h>
#import <Messenger/FNFAVAsset.h>
#import <Messenger/FNFAVPlayerItem.h>
#import <Messenger/FNFAssetForPlayer.h>
#import <Messenger/FNFInfoForLoopableAsset.h>

@protocol OS_dispatch_queue;
@class NSArray, AVAudioMix, NSURL, NSError, NSObject, AVAsset, AVAssetReader, AVAssetReaderTrackOutput, NSString;

@interface FNFLocalMp4Asset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset> {

	/*^block*/id _assetLoadedHandler;
	NSURL* _localURL;
	SCD_Struct_FB21 _duration;
	SCD_Struct_FB21 _playbackTime;
	SCD_Struct_FB21 _startingPlaybackTime;
	opaqueCMFormatDescriptionRef _formatDesc;
	AudioStreamBasicDescription _asbd;
	NSArray* _loadedTimeRanges;
	unsigned _timescale;
	unsigned _audioTimescale;
	BOOL _hasFailed;
	BOOL _parsedHeader;
	NSError* _loadingError;
	BOOL _async;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AVAsset* _videoAsset;
	AVAssetReader* _videoAssetReader;
	AVAssetReaderTrackOutput* _videoAssetReaderTrackOutput;
	opaqueCMSampleBufferRef _videoSampleBuffer;
	CGSize _mediaSize;
	CGAffineTransform _preferredTransform;
	AVAssetReader* _audioAssetReader;
	AVAssetReaderTrackOutput* _audioAssetReaderTrackOutput;
	opaqueCMSampleBufferRef _audioSampleBuffer;
	OpaqueCMBlockBufferRef _audioBlockBuffer;
	int _numberOfPackets;
	const AudioStreamPacketDescription* _inPacketDescriptions;
	AudioBuffer* _audioBuffer;
	int _currentAudioBufferIndex;
	float _fps;
	BOOL _videoBufferEnded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,readonly) SCD_Struct_FB21 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB21 minBufferTime; 
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription)asbd;
-(BOOL)containsTrack:(long long)arg1 ;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2 ;
-(BOOL)trackHasMoreFrames:(long long)arg1 ;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_FB21)arg1 ;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1 ;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)shouldSeek;
-(BOOL)seekToPosition:(SCD_Struct_FB21)arg1 ;
-(void)resetAssetToBeginningIfNeeded;
-(void)playbackPauseRequested;
-(SCD_Struct_FB21)timeAfterSeek;
-(id)debugDetails;
-(SCD_Struct_FB21)maxBufferTime;
-(SCD_Struct_FB21)minBufferTime;
-(void)requestTimeLoadedUpdate;
-(id)initWithLocalURL:(id)arg1 async:(BOOL)arg2 ;
-(void)_releaseAudioBufferIfNeeded;
-(BOOL)createVideoReader:(SCD_Struct_FB21)arg1 ;
-(BOOL)createAudioReader:(SCD_Struct_FB21)arg1 ;
-(void)_startWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)is30MSFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)_getAudioPacketDescriptions;
-(id)URLIfExists;
-(unsigned)timescale;
-(unsigned)audioTimescale;
-(int)_currentAudioBufferIndex;
-(void)printASBD:(AudioStreamBasicDescription)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_FB21)duration;
-(id)asset;
-(long long)status;
-(void)cancelLoading;
-(AVAudioMix *)audioMix;
-(void)addOutput:(id)arg1 ;
-(NSArray *)loadedTimeRanges;
-(CGAffineTransform)preferredTransform;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(id)accessLog;
-(SCD_Struct_FB21)currentTime;
-(SCD_Struct_FB21)videoDuration;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)playbackStarted;
-(id)initWithLocalURL:(id)arg1 ;
@end
