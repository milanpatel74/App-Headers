//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGMediaPickerAsset.h"

#import "TGEditablePhotoItem.h"

@class NSString;

@interface TGMediaPickerAsset (TGEditablePhotoItem) <TGEditablePhotoItem>
@property(copy, nonatomic) CDUnknownBlockType fetchOriginalThumbnailImage;
@property(copy, nonatomic) CDUnknownBlockType fetchOriginalImage;
@property(copy, nonatomic) CDUnknownBlockType fetchScreenImage;
@property(copy, nonatomic) CDUnknownBlockType fetchThumbnailImage;
@property(copy, nonatomic) CDUnknownBlockType fetchCaption;
@property(copy, nonatomic) CDUnknownBlockType fetchEditorValues;
- (void)fetchMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchOriginalFullSizeImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchOriginalScreenSizeImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchThumbnailImageWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct CGSize originalSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

