//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernGalleryModel.h"

#import "ASWatcher.h"

@class ASHandle, NSString;

@interface TGUserAvatarGalleryModel : TGModernGalleryModel <ASWatcher>
{
    long long _peerId;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)_saveImageDataToCameraRoll:(id)arg1;
- (void)_commitSaveItemToCameraRoll:(id)arg1;
- (_Bool)_isDataAvailableForSavingItemToCameraRoll:(id)arg1;
- (id)createDefaultLeftAccessoryView;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)_replaceItemsFromImageMediaList:(id)arg1 focusOnFirst:(_Bool)arg2;
- (id)createDefaultHeaderView;
- (id)itemForImageId:(long long)arg1 accessHash:(long long)arg2 legacyThumbnailUrl:(id)arg3 legacyUrl:(id)arg4 imageSize:(struct CGSize)arg5 isCurrent:(_Bool)arg6;
- (void)_transitionCompleted;
- (void)dealloc;
- (id)initWithPeerId:(long long)arg1 currentAvatarLegacyThumbnailImageUri:(id)arg2 currentAvatarLegacyImageUri:(id)arg3 currentAvatarImageSize:(struct CGSize)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
