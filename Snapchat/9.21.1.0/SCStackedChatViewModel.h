//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

@class NSMutableArray;

@interface SCStackedChatViewModel : SCSavableItemChatViewModel
{
    NSMutableArray *_mutableMessages;
    id <SCMessage><SCMessageState> _mostRecentlySavedOrUnsavedMessage;
}

- (void).cxx_destruct;
- (_Bool)containsAnyUserSavedMessage;
- (double)widthForSenderLine;
- (id)textForTimeLabelWithMessage:(id)arg1;
- (_Bool)containsAllSavedMessages;
- (id)savedColorForBackground;
- (id)savableMessage;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (unsigned long long)maxItemCapacityForCollectionView;
- (struct UIEdgeInsets)insetsForCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionViewCellReuseIdentifier;
- (Class)collectionViewCellClass;
- (void)updateSaveStateForMessage:(id)arg1;
- (_Bool)isMessage:(id)arg1 sentBeforeSequenceNumber:(unsigned long long)arg2;
- (_Bool)isMessageSavedAtIndex:(unsigned long long)arg1;
- (_Bool)containsMessage:(id)arg1;
- (_Bool)canStackMessage:(id)arg1 lastDeletedSequenceNumber:(unsigned long long)arg2;
- (void)addMessage:(id)arg1;
- (id)messages;
- (id)initWithMessage:(id)arg1 forSender:(id)arg2 withDateHeader:(_Bool)arg3 withSenderHeader:(_Bool)arg4 withTimestamp:(_Bool)arg5 withURLMediaCards:(_Bool)arg6;

@end

