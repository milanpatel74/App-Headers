//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsGroup, NSArray, NSString, PHAssetCollection, PHFetchResult;

@interface TGMediaPickerAssetsGroup : NSObject
{
    NSArray *_latestAssets;
    NSString *_persistentId;
    NSString *_title;
    _Bool _isCameraRoll;
    PHAssetCollection *_backingAssetCollection;
    PHFetchResult *_backingFetchResult;
    ALAssetsGroup *_backingAssetsGroup;
}

+ (int)_assetGroupSubtypeForCollectionSubtype:(long long)arg1;
@property(readonly, nonatomic) ALAssetsGroup *backingAssetsGroup; // @synthesize backingAssetsGroup=_backingAssetsGroup;
@property(readonly, nonatomic) PHFetchResult *backingFetchResult; // @synthesize backingFetchResult=_backingFetchResult;
@property(readonly, nonatomic) PHAssetCollection *backingAssetCollection; // @synthesize backingAssetCollection=_backingAssetCollection;
@property(readonly, nonatomic) _Bool isCameraRoll; // @synthesize isCameraRoll=_isCameraRoll;
- (void).cxx_destruct;
@property(readonly, nonatomic) int subtype;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *persistentId;
@property(readonly, nonatomic) NSArray *latestAssets;
- (id)initWithALAssetsGroup:(id)arg1 latestAssets:(id)arg2;
- (id)initWithPHFetchResult:(id)arg1 latestAssets:(id)arg2;
- (id)initWithPHAssetCollection:(id)arg1 fetchResult:(id)arg2 latestAssets:(id)arg3;

@end

