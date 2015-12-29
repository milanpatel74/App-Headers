//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"
#import "TGImagePickerControllerDelegate.h"
#import "TGLegacyCameraControllerDelegate.h"
#import "TGWallpaperControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class ASHandle, NSArray, NSMutableSet, NSString, TGDisclosureActionCollectionItem, TGOverlayFormsheetWindow, TGWallpaperListLayout, UICollectionView;

@interface TGWallpaperListController : TGViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TGWallpaperControllerDelegate, TGLegacyCameraControllerDelegate, TGImagePickerControllerDelegate, ASWatcher>
{
    UICollectionView *_collectionView;
    TGWallpaperListLayout *_collectionLayout;
    NSMutableSet *_collectionRegisteredItemIdentifiers;
    double _currentLayoutWidth;
    NSArray *_wallpaperItems;
    TGDisclosureActionCollectionItem *_photoLibraryItem;
    TGOverlayFormsheetWindow *_photoLibraryWindow;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingWithAssets:(id)arg2;
- (void)legacyCameraControllerCompletedWithNoResult;
- (void)_dismissPhotoLibrary;
- (void)photoLibraryPressed;
- (void)wallpaperController:(id)arg1 didSelectWallpaperWithInfo:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

