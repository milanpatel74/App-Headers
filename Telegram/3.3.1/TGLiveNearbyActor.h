//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "ASWatcher.h"
#import "TGLocateContactsProtocol.h"

@class ASHandle, NSDictionary, NSString, TGTimer;

@interface TGLiveNearbyActor : TGActor <TGLocateContactsProtocol, ASWatcher>
{
    _Bool _discloseLocation;
    _Bool _previousRequestHasFailed;
    ASHandle *_actionHandle;
    TGTimer *_timer;
    NSDictionary *_currentResults;
}

+ (id)genericPath;
@property(nonatomic) _Bool previousRequestHasFailed; // @synthesize previousRequestHasFailed=_previousRequestHasFailed;
@property(retain, nonatomic) NSDictionary *currentResults; // @synthesize currentResults=_currentResults;
@property(retain, nonatomic) TGTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool discloseLocation; // @synthesize discloseLocation=_discloseLocation;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)cancel;
- (void)locateFailed;
- (void)mixResults:(id)arg1 replaceCurrent:(_Bool)arg2;
- (void)locateSuccess:(id)arg1;
- (void)addResults:(id)arg1;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)checkNearby;
- (void)forceCheckNearby;
- (void)checkNearbyIfFailed;
- (void)execute:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

