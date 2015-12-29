//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

#import "ASWatcher.h"

@class ASHandle, NSArray, NSString, TGWallpaperInfo;

@interface TGWallpapersCollectionItem : TGCollectionItem <ASWatcher>
{
    NSArray *_wallpaperItems;
    TGWallpaperInfo *_selectedWallpaperInfo;
    _Bool _requestedList;
    _Bool _firstBind;
    SEL _action;
    ASHandle *_actionHandle;
    ASHandle *_interfaceHandle;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ASHandle *interfaceHandle; // @synthesize interfaceHandle=_interfaceHandle;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)itemSelected:(id)arg1;
- (void)setCurrentWallpaperInfo:(id)arg1;
- (void)unbindView;
- (void)bindView:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (void)dealloc;
- (id)initWithAction:(SEL)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

