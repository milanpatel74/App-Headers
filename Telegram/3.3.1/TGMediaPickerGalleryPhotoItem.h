//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGMediaPickerGalleryItem.h"

#import "TGModernGalleryEditableItem.h"
#import "TGModernGallerySelectableItem.h"

@class NSString;

@interface TGMediaPickerGalleryPhotoItem : TGMediaPickerGalleryItem <TGModernGallerySelectableItem, TGModernGalleryEditableItem>
{
    CDUnknownBlockType _itemSelected;
}

@property(copy, nonatomic) CDUnknownBlockType itemSelected; // @synthesize itemSelected=_itemSelected;
- (void).cxx_destruct;
- (Class)viewClass;
- (id)editableMediaItem;
- (id)uniqueId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

