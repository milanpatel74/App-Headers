//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TGCollectionViewUpdateContext : NSObject
{
    NSMutableArray *_updates;
}

- (void).cxx_destruct;
- (void)commit:(id)arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (void)deleteItemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (void)insertItemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (void)deleteSectionAtIndex:(unsigned long long)arg1;
- (void)insertSectionAtIndex:(unsigned long long)arg1;
- (id)init;

@end

