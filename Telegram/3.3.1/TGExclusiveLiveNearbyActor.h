//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "ASWatcher.h"

@class ASHandle, NSString;

@interface TGExclusiveLiveNearbyActor : TGActor <ASWatcher>
{
    ASHandle *_actionHandle;
}

+ (id)genericPath;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

