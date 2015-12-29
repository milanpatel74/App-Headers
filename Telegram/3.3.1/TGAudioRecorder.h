//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioRecorderDelegate.h"

@class NSString, TGOpusAudioRecorder, TGTimer;

@interface TGAudioRecorder : NSObject <AVAudioRecorderDelegate>
{
    TGTimer *_timer;
    TGOpusAudioRecorder *_modernRecorder;
    id <TGAudioRecorderDelegate> _delegate;
    id _activityHolder;
}

+ (id)audioRecorderQueue;
@property(retain, nonatomic) id activityHolder; // @synthesize activityHolder=_activityHolder;
@property(nonatomic) __weak id <TGAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finish:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)cleanup;
- (void)_commitRecord;
- (double)currentDuration;
- (void)start;
- (void)dealloc;
- (id)initWithFileEncryption:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

