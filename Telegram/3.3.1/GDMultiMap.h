//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GDMultiMap : NSObject
{
    NSMutableDictionary *_dictionary;
}

@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (id)objectsForKey:(id)arg1;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

