//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface SKPDTMFPlayer : NSObject
{
    _Bool _running;
    _Bool _requestUpdateAudioSessionSettings;
    struct OpaqueAudioComponentInstance *_audioUnit;
    double _sampleRate;
    double _ioBufferDuration;
    double _theta1;
    double _freq1;
    double _theta2;
    double _freq2;
    double _amplitude;
    unsigned long long _lastToneID;
    NSDate *_currentDialtoneStartTimestamp;
}

@property(nonatomic) _Bool requestUpdateAudioSessionSettings; // @synthesize requestUpdateAudioSessionSettings=_requestUpdateAudioSessionSettings;
@property(retain, nonatomic) NSDate *currentDialtoneStartTimestamp; // @synthesize currentDialtoneStartTimestamp=_currentDialtoneStartTimestamp;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) unsigned long long lastToneID; // @synthesize lastToneID=_lastToneID;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) double freq2; // @synthesize freq2=_freq2;
@property(nonatomic) double theta2; // @synthesize theta2=_theta2;
@property(nonatomic) double freq1; // @synthesize freq1=_freq1;
@property(nonatomic) double theta1; // @synthesize theta1=_theta1;
@property(nonatomic) double ioBufferDuration; // @synthesize ioBufferDuration=_ioBufferDuration;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (void)stopNow;
- (void)stop;
- (void)stopTone:(unsigned long long)arg1;
- (unsigned long long)playDTMFTone:(long long)arg1;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *audioUnit; // @synthesize audioUnit=_audioUnit;
- (_Bool)updateAudioSessionSettings;
- (void)dealloc;
- (id)init;

@end
