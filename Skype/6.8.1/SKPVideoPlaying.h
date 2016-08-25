//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, NSURL, SKPVideoPlaybackView;

@interface SKPVideoPlaying : NSObject
{
    _Bool _shouldAutostart;
    _Bool _shouldLoop;
    _Bool _seekToZeroBeforePlay;
    NSURL *_videoURL;
    CDUnknownBlockType _videoReadyToBePlayedBlock;
    CDUnknownBlockType _videoReadyToBeRemovedBlock;
    CDUnknownBlockType _playerItemDidReachEndBlock;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SKPVideoPlaybackView *_playbackView;
}

@property(retain, nonatomic) SKPVideoPlaybackView *playbackView; // @synthesize playbackView=_playbackView;
@property(nonatomic) _Bool seekToZeroBeforePlay; // @synthesize seekToZeroBeforePlay=_seekToZeroBeforePlay;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType playerItemDidReachEndBlock; // @synthesize playerItemDidReachEndBlock=_playerItemDidReachEndBlock;
@property(copy, nonatomic) CDUnknownBlockType videoReadyToBeRemovedBlock; // @synthesize videoReadyToBeRemovedBlock=_videoReadyToBeRemovedBlock;
@property(copy, nonatomic) CDUnknownBlockType videoReadyToBePlayedBlock; // @synthesize videoReadyToBePlayedBlock=_videoReadyToBePlayedBlock;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) _Bool shouldAutostart; // @synthesize shouldAutostart=_shouldAutostart;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (_Bool)url:(id)arg1 isEquivalentTo:(id)arg2;
- (void)pause;
- (void)stop;
- (void)play;
- (void)tearDownPlayer;
- (void)dealloc;
- (id)init;

@end
