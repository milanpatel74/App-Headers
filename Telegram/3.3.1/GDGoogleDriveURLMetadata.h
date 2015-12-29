//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDURLMetadata.h"

@class GDGoogleDriveMetadata, NSString;

@interface GDGoogleDriveURLMetadata : NSObject <GDURLMetadata>
{
    GDGoogleDriveURLMetadata *driveMetadata;
    GDGoogleDriveMetadata *_metadata;
}

@property(readonly, nonatomic) GDGoogleDriveMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) GDGoogleDriveURLMetadata *driveMetadata; // @synthesize driveMetadata;
- (void).cxx_destruct;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *fileID;
@property(readonly, copy, nonatomic) NSString *etag;
@property(readonly, copy, nonatomic) NSString *fileVersionIdentifier;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (id)cacheableMetadata;
- (id)jsonDictionary;
- (id)initWithGoogleDriveMetadata:(id)arg1;
- (id)initWithMetadataDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

