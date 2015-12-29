//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

@class TGAuthSession;

@interface TGAuthSessionItem : TGCollectionItem
{
    TGAuthSession *_authSession;
    CDUnknownBlockType _removeRequested;
}

@property(copy, nonatomic) CDUnknownBlockType removeRequested; // @synthesize removeRequested=_removeRequested;
@property(readonly, nonatomic) TGAuthSession *authSession; // @synthesize authSession=_authSession;
- (void).cxx_destruct;
- (void)bindView:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (id)initWithAuthSession:(id)arg1 removeRequested:(CDUnknownBlockType)arg2;

@end

