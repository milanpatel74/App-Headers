//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGRemoteControlsClient : NSObject
{
    int _clientId;
    CDUnknownBlockType _previous;
    CDUnknownBlockType _next;
    CDUnknownBlockType _play;
    CDUnknownBlockType _pause;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType pause; // @synthesize pause=_pause;
@property(readonly, copy, nonatomic) CDUnknownBlockType play; // @synthesize play=_play;
@property(readonly, copy, nonatomic) CDUnknownBlockType next; // @synthesize next=_next;
@property(readonly, copy, nonatomic) CDUnknownBlockType previous; // @synthesize previous=_previous;
@property(readonly, nonatomic) int clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)initWithId:(int)arg1 previous:(CDUnknownBlockType)arg2 next:(CDUnknownBlockType)arg3 play:(CDUnknownBlockType)arg4 pause:(CDUnknownBlockType)arg5;

@end

