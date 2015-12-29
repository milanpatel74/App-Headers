//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGImageDataSource.h"

#import "ASWatcher.h"

@class ASHandle, NSString;

@interface TGGalleryPhotoDataSource : TGImageDataSource <ASWatcher>
{
    ASHandle *_actionHandle;
}

+ (id)_performLoad:(id)arg1 isCancelled:(CDUnknownBlockType)arg2;
+ (_Bool)_isDataLocallyAvailableForUri:(id)arg1 outIsThumbnail:(_Bool *)arg2;
+ (id)resultForUnavailableImage;
+ (void)load;
+ (id)uriPrefix;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (id)loadDataSyncWithUri:(id)arg1 canWait:(_Bool)arg2 acceptPartialData:(_Bool)arg3 asyncTaskId:(id *)arg4 progress:(CDUnknownBlockType)arg5 partialCompletion:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)loadAttributeSyncForUri:(id)arg1 attribute:(id)arg2;
- (void)cancelTaskById:(id)arg1;
- (id)loadDataAsyncWithUri:(id)arg1 progress:(CDUnknownBlockType)arg2 partialCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canHandleAttributeUri:(id)arg1;
- (_Bool)canHandleUri:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

