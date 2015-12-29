//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource.h"

@class Media, NSData, NSString;

@interface SCChunkOverlayItem : SCChunkItem <MediaDataSource>
{
    NSData *_overlayDataToSave;
    NSString *_chunkHash;
    _Bool _sponsored;
    Media *_media;
    unsigned long long _docking;
    unsigned long long _zIndex;
}

@property(nonatomic) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(nonatomic) unsigned long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) unsigned long long docking; // @synthesize docking=_docking;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)saveMediaToCache;
- (_Bool)imageMediaExistsInCache;
- (id)cacheMediaIds;
- (id)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (void)ensureNonNilMediaObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

