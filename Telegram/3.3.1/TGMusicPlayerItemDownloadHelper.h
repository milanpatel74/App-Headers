//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASWatcher.h"

@class ASHandle, NSString, TGMediaId, TGMusicPlayerItem;

@interface TGMusicPlayerItemDownloadHelper : NSObject <ASWatcher>
{
    TGMusicPlayerItem *_item;
    CDUnknownBlockType _updated;
    TGMediaId *_mediaId;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)requestDownloadItem:(_Bool)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1 priority:(_Bool)arg2 updated:(CDUnknownBlockType)arg3;
- (id)mediaIdForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

