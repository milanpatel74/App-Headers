//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TGRemoteControlsManager : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    int _clientId;
    NSMutableArray *_currentClients;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)endControlsForClientId:(int)arg1;
- (id)requestControlsWithPrevious:(CDUnknownBlockType)arg1 next:(CDUnknownBlockType)arg2 play:(CDUnknownBlockType)arg3 pause:(CDUnknownBlockType)arg4;
- (void)togglePlayPauseCommandEvent:(id)arg1;
- (void)pauseCommandEvent:(id)arg1;
- (void)playCommandEvent:(id)arg1;
- (void)nextTrackCommandEvent:(id)arg1;
- (void)previousTrackCommandEvent:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isEnabled;

@end

