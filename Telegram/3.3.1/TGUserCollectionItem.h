//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

#import "TGUserCollectionItemViewDelegate.h"

@class ASHandle, NSString, TGUser;

@interface TGUserCollectionItem : TGCollectionItem <TGUserCollectionItemViewDelegate>
{
    _Bool _showAvatar;
    ASHandle *_interfaceHandle;
    NSString *_deleteActionTitle;
    TGUser *_user;
}

@property(retain, nonatomic) TGUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool showAvatar; // @synthesize showAvatar=_showAvatar;
@property(retain, nonatomic) NSString *deleteActionTitle; // @synthesize deleteActionTitle=_deleteActionTitle;
@property(retain, nonatomic) ASHandle *interfaceHandle; // @synthesize interfaceHandle=_interfaceHandle;
- (void).cxx_destruct;
- (void)userCollectionItemViewRequestedDeleteAction:(id)arg1;
- (void)itemSelected:(id)arg1;
- (void)unbindView;
- (void)bindView:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

