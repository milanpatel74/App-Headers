//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGUserInfoCollectionItem.h"

@interface TGAccountInfoCollectionItem : TGUserInfoCollectionItem
{
    int _synchronizationStatus;
}

- (void)localizationUpdated;
- (void)setSynchronizationStatus:(int)arg1;
- (id)stringForSynchronizationStatus:(int)arg1 active:(_Bool *)arg2;
- (void)bindView:(id)arg1;
- (id)init;

@end

