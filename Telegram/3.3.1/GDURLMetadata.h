//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDURLMetadata.h"
#import "GDURLMetadataProperties.h"
#import "NSCoding.h"

@class GDGoogleDriveURLMetadata, NSString, NSURL;

@interface GDURLMetadata : NSObject <GDURLMetadata, GDURLMetadataProperties, NSCoding>
{
    NSURL *_url;
    NSURL *_canonicalURL;
    id <GDURLMetadata> _metadata;
}

@property(readonly, nonatomic) id <GDURLMetadata> metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSURL *canonicalURL; // @synthesize canonicalURL=_canonicalURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;
@property(readonly, nonatomic) GDGoogleDriveURLMetadata *driveMetadata;
- (id)cacheableMetadata;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithURLMetadata:(id)arg1 clientURL:(id)arg2 canonicalURL:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, copy, nonatomic) NSString *fileVersionIdentifier;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly) Class superclass;

@end

