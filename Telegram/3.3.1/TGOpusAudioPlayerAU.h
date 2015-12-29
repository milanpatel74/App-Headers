//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGAudioPlayer.h"

@class NSString;

@interface TGOpusAudioPlayerAU : TGAudioPlayer
{
    long long _playerId;
    NSString *_filePath;
    long long _fileSize;
    _Bool _isSeekable;
    long long _totalPcmDuration;
    _Bool _isPaused;
    struct OggOpusFile *_opusFile;
    struct OpaqueAudioComponentInstance *_audioUnit;
    struct TGAudioBuffer *_filledAudioBuffers[3];
    int _filledAudioBufferCount;
    int _filledAudioBufferPosition;
    long long _currentPcmOffset;
    _Bool _finished;
}

+ (_Bool)canPlayFile:(id)arg1;
- (void).cxx_destruct;
- (double)duration;
- (double)currentPositionSync:(_Bool)arg1;
- (void)stop;
- (void)pause;
- (unsigned long long)bufferByteSize;
- (void)fillBuffer:(struct TGAudioBuffer *)arg1;
- (void)playFromPosition:(double)arg1;
- (void)cleanup;
- (void)cleanupAndReportError;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

