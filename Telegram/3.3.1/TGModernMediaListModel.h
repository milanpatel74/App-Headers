//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TGModernMediaListModel : NSObject
{
    CDUnknownBlockType _itemsUpdated;
    CDUnknownBlockType _itemUpdated;
    unsigned long long _totalCount;
    NSArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) CDUnknownBlockType itemUpdated; // @synthesize itemUpdated=_itemUpdated;
@property(copy, nonatomic) CDUnknownBlockType itemsUpdated; // @synthesize itemsUpdated=_itemsUpdated;
- (void).cxx_destruct;
- (id)createGalleryControllerForItem:(id)arg1 hideItem:(CDUnknownBlockType)arg2 referenceViewForItem:(CDUnknownBlockType)arg3;
- (void)_transitionCompleted;
- (void)_replaceItems:(id)arg1 totalCount:(unsigned long long)arg2;

@end

