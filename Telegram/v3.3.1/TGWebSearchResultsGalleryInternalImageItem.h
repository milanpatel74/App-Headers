//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernGalleryImageItem.h"

#import "TGModernGalleryEditableItem.h"
#import "TGWebSearchResultsGalleryItem.h"

@class NSString, TGWebSearchInternalImageResult;

@interface TGWebSearchResultsGalleryInternalImageItem : TGModernGalleryImageItem <TGWebSearchResultsGalleryItem, TGModernGalleryEditableItem>
{
    CDUnknownBlockType _itemSelected;
    TGWebSearchInternalImageResult *_webSearchResult;
}

@property(readonly, nonatomic) TGWebSearchInternalImageResult *webSearchResult; // @synthesize webSearchResult=_webSearchResult;
@property(copy, nonatomic) CDUnknownBlockType itemSelected; // @synthesize itemSelected=_itemSelected;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)uniqueId;
- (id)editableMediaItem;
- (Class)viewClass;
- (id)initWithSearchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
