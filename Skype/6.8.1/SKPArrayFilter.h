//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSPredicate, NSString;

@interface SKPArrayFilter : NSObject
{
    id _observedObject;
    NSString *_collectionKeyPath;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_trackedKeyPaths;
    NSMutableArray *_sortedAndFilteredObjects;
    NSMutableArray *_internalSourceObjects;
}

@property(retain, nonatomic) NSMutableArray *internalSourceObjects; // @synthesize internalSourceObjects=_internalSourceObjects;
@property(retain, nonatomic) NSMutableArray *sortedAndFilteredObjects; // @synthesize sortedAndFilteredObjects=_sortedAndFilteredObjects;
@property(retain, nonatomic) NSArray *trackedKeyPaths; // @synthesize trackedKeyPaths=_trackedKeyPaths;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *collectionKeyPath; // @synthesize collectionKeyPath=_collectionKeyPath;
@property(readonly, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectFromObjectsAtIndex:(unsigned long long)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inObjectsAtIndex:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *objects;
- (void)removeInternalSourceObjects:(id)arg1;
- (void)addInternalSourceObjects:(id)arg1;
- (void)updateTargetArray;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)KVOSKPArrayFilterKeyPathsDependedOnByPredicateValueChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)KVOSKPArrayFilterCollectionKeyPathValueChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)stopObserving;
- (void)setSourceObjects:(id)arg1;
- (void)startObserving;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 sortDescriptors:(id)arg2 trackedKeyPaths:(id)arg3;
- (id)initWithPredicate:(id)arg1 trackedKeyPaths:(id)arg2;
- (id)initWithObject:(id)arg1 collectionKeyPath:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 trackedKeyPaths:(id)arg5;
- (id)initWithObject:(id)arg1 collectionKeyPath:(id)arg2 predicate:(id)arg3 trackedKeyPaths:(id)arg4;

@end
