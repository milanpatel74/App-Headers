//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSMutableArray, NSString, PHFetchResult;

@interface SCMediaDrawerDataSource : NSObject <PHPhotoLibraryChangeObserver>
{
    NSMutableArray *_mediaList;
    PHFetchResult *_phAssets;
    id <SCMediaDrawerDataSourceDelegate> _delegate;
}

+ (id)shared;
@property(nonatomic) __weak id <SCMediaDrawerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleALAssetsChangedNotifiation;
- (void)photoLibraryDidChange:(id)arg1;
- (void)updateMediaListWithChangeDetails:(id)arg1;
- (void)resetMediaListFromALAssetLibrary;
- (void)resetMediaListFromPHAssets;
- (id)mediaList;
- (void)loadingMediaFromCameraRoll;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
