//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDMetadataCache.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface GDAbstractMetadataCache : NSObject <GDMetadataCache>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
- (void).cxx_destruct;
- (void)removeTreeNodeForURL:(id)arg1;
- (void)setTreeNode:(id)arg1 forURL:(id)arg2;
- (id)treeNodeForURL:(id)arg1;
- (void)reset;
- (id)directoryContentsMetadataArrayForURL:(id)arg1;
- (void)removeMetadataForURL:(id)arg1 removeFromParent:(id)arg2;
- (void)setMetadata:(id)arg1 directoryContents:(id)arg2 forURL:(id)arg3 addToParent:(id)arg4;
- (id)metadataForURL:(id)arg1 directoryContents:(id *)arg2;
- (void)setDirectoryContents:(id)arg1 forURL:(id)arg2;
- (id)directoryContentsForURL:(id)arg1;
- (void)setMetadata:(id)arg1 forURL:(id)arg2 addToParent:(id)arg3;
- (void)setMetadata:(id)arg1 forURL:(id)arg2;
- (id)metadataForURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

