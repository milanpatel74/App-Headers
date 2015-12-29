//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPChatViewModel.h"

@interface SKPVoiceMailMessageChatViewModel : SKPChatViewModel
{
    _Bool _isPlaying;
    _Bool _isPreparing;
    _Bool _canPlay;
    double _duration;
    double _playbackProgress;
}

+ (id)observedKeyPaths;
+ (Class)defaultCellClass;
+ (long long)encodingVersion;
@property(nonatomic) _Bool canPlay; // @synthesize canPlay=_canPlay;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (long long)refreshDueToChangeInModelProperty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

